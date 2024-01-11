//
// Created by squid on 1/6/2024.
//

#include "hack.h"
#include "dependencies/il2cppresolver/IL2CPP_Resolver.hpp"
#include "structs.h"
#include "gui.h"

std::vector<Unity::il2cppClass*> classes;

Unity::il2cppClass* fetch_klass(const std::vector<Unity::il2cppClass*>& klasses, const char* name) {
    for(Unity::il2cppClass* klass : klasses) {
        if(std::string(klass->m_pName) == name)
            return klass;
    }

    return nullptr;
}

void hack::gui() {
    if(classes.empty()) {
        return;
    }

    Unity::il2cppClass* p_cClientPlayer = fetch_klass(classes, "ClientPlayer");

    if(!p_cClientPlayer) return;

    Multiplayer_Entity_Client_ClientPlayer_c cClientPlayer =
        *reinterpret_cast<Multiplayer_Entity_Client_ClientPlayer_c*>(p_cClientPlayer);

    Multiplayer_Entity_Client_ClientPlayer_o* oClientPlayer = cClientPlayer.static_fields->___________k__BackingField;
    if(!oClientPlayer) return;

    Movement_PlayerMovement_o* oMovementPlayer = oClientPlayer->fields._________;
    if(!oMovementPlayer) return;

    Multiplayer_Entity_Client_PlayerState_o* oPlayerState = oClientPlayer->fields.playerState;
    if(!oPlayerState) return;

    Movement_Movement_o* p_movement = oMovementPlayer->fields.movement;
    if(!p_movement) return;

    Weapon_WeaponManager_o* oWeaponManager = oClientPlayer->klass->static_fields->_52__________;
    if(!oWeaponManager) return;
    Weapon_Firearms_o* p_weaponFirearms = oWeaponManager->fields._8__________;
    if(!p_weaponFirearms) return;

    ImGui::SliderFloat("movement.maxSpeed", &p_movement->fields.maxSpeed, 1, 10000);
    ImGui::SliderFloat("movement.maxAirSpeed", &p_movement->fields.maxAirSpeed, 1, 10000);
    ImGui::SliderFloat("movement.jumpForce", &p_movement->fields.jumpForce, 1, 10000);
    ImGui::SliderFloat("weapon.reloadTime", &p_weaponFirearms->fields.reloadTime, 0, 1000);
    ImGui::SliderInt("weapon.bulletCount", &p_weaponFirearms->fields.bulletCount, 0, 1000);
    ImGui::SliderInt("weapon.damage", &p_weaponFirearms->fields.damage, 0, 1000);
    ImGui::SliderFloat("weapon.fireRate", &p_weaponFirearms->fields.fireRate, 0, 1000);
    ImGui::SliderInt("weapon.maxAmmo", &p_weaponFirearms->fields.maxAmmo, 0, 1000);
    ImGui::SliderFloat("weapon.normalReloadTime", &p_weaponFirearms->fields.normalReloadTime, 0, 1000);
    ImGui::SliderFloat("weapon.normalSpread", &p_weaponFirearms->fields.normalSpread, 0, 1000);
    ImGui::SliderFloat("weapon.reloadMultiplier", &p_weaponFirearms->fields.reloadMultiplier, 0, 1000);
    ImGui::SliderFloat("weapon.recoilX", &p_weaponFirearms->fields.recoilX, 0, 1000);
    ImGui::SliderFloat("weapon.recoilY", &p_weaponFirearms->fields.recoilY, 0, 1000);
    ImGui::SliderFloat("weapon.recoilZ", &p_weaponFirearms->fields.recoilZ, 0, 1000);
    ImGui::SliderFloat("weapon.runSpread", &p_weaponFirearms->fields.runSpread, 0, 1000);
    ImGui::SliderFloat("weapon.spreadAngle", &p_weaponFirearms->fields.spreadAngle, 0, 1000);
    ImGui::Checkbox("weapon.semiAuto", &p_weaponFirearms->fields.semiAuto);
}

void hack::run(HMODULE hmodule) {
    AllocConsole();
    freopen("CONOUT$", "w", stdout);

    gui::MainThread(nullptr);
    IL2CPP::Initialize();

    void* m_pThisThread = IL2CPP::Thread::Attach(IL2CPP::Domain::Get());

    IL2CPP::Class::FetchClasses(&classes, "Assembly-CSharp", nullptr);

    while(!GetAsyncKeyState(VK_END)) {
        Sleep(1000);
    }

    IL2CPP::Thread::Detach(m_pThisThread);
    kiero::shutdown();
    FreeLibraryAndExitThread(hmodule, 0);
}
