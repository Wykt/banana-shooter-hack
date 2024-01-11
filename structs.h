//
// Created by squid on 1/6/2024.
//

#ifndef IL2CPP_H
#define IL2CPP_H

typedef void(*Il2CppMethodPointer)();

struct MethodInfo;

struct VirtualInvokeData
{
    Il2CppMethodPointer methodPtr;
    const MethodInfo* method;
};

struct Il2CppType
{
    void* data;
    unsigned int bits;
};

struct Il2CppClass;

struct Il2CppObject
{
    Il2CppClass *klass;
    void *monitor;
};

union Il2CppRGCTXData
{
    void* rgctxDataDummy;
    const MethodInfo* method;
    const Il2CppType* type;
    Il2CppClass* klass;
};

struct Il2CppRuntimeInterfaceOffsetPair
{
    Il2CppClass* interfaceType;
    int32_t offset;
};
struct Il2CppClass_1
{
    void* image;
    void* gc_desc;
    const char* name;
    const char* namespaze;
    Il2CppType byval_arg;
    Il2CppType this_arg;
    Il2CppClass* element_class;
    Il2CppClass* castClass;
    Il2CppClass* declaringType;
    Il2CppClass* parent;
    void *generic_class;
    void* typeMetadataHandle;
    void* interopData;
    Il2CppClass* klass;
    void* fields;
    void* events;
    void* properties;
    void* methods;
    Il2CppClass** nestedTypes;
    Il2CppClass** implementedInterfaces;
    Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
};

struct Il2CppClass_2
{
    Il2CppClass** typeHierarchy;
    void *unity_user_data;
    uint32_t initializationExceptionGCHandle;
    uint32_t cctor_started;
    uint32_t cctor_finished;
    size_t cctor_thread;
    void* genericContainerHandle;
    uint32_t instance_size;
    uint32_t actualSize;
    uint32_t element_size;
    int32_t native_size;
    uint32_t static_fields_size;
    uint32_t thread_static_fields_size;
    int32_t thread_static_fields_offset;
    uint32_t flags;
    uint32_t token;
    uint16_t method_count;
    uint16_t property_count;
    uint16_t field_count;
    uint16_t event_count;
    uint16_t nested_type_count;
    uint16_t vtable_count;
    uint16_t interfaces_count;
    uint16_t interface_offsets_count;
    uint8_t typeHierarchyDepth;
    uint8_t genericRecursionDepth;
    uint8_t rank;
    uint8_t minimumAlignment;
    uint8_t naturalAligment;
    uint8_t packingSize;
    uint8_t bitflags1;
    uint8_t bitflags2;
};

struct Il2CppClass
{
    Il2CppClass_1 _1;
    void* static_fields;
    Il2CppRGCTXData* rgctx_data;
    Il2CppClass_2 _2;
    VirtualInvokeData vtable[255];
};

typedef uintptr_t il2cpp_array_size_t;
typedef int32_t il2cpp_array_lower_bound_t;
struct Il2CppArrayBounds
{
    il2cpp_array_size_t length;
    il2cpp_array_lower_bound_t lower_bound;
};

typedef void (*InvokerMethod)(Il2CppMethodPointer, const MethodInfo*, void*, void**, void*);
struct MethodInfo
{
    Il2CppMethodPointer methodPointer;
    Il2CppMethodPointer virtualMethodPointer;
    InvokerMethod invoker_method;
    const char* name;
    Il2CppClass *klass;
    const Il2CppType *return_type;
    const Il2CppType** parameters;
    union
    {
        const Il2CppRGCTXData* rgctx_data;
        const void* methodMetadataHandle;
    };
    union
    {
        const void* genericMethod;
        const void* genericContainerHandle;
    };
    uint32_t token;
    uint16_t flags;
    uint16_t iflags;
    uint16_t slot;
    uint8_t parameters_count;
    uint8_t bitflags;
};

struct __declspec(align(8)) UnityEngine_Object_Fields {
	intptr_t m_CachedPtr;
};
struct UnityEngine_Object_VTable {
	VirtualInvokeData _0_Equals;
	VirtualInvokeData _1_Finalize;
	VirtualInvokeData _2_GetHashCode;
	VirtualInvokeData _3_ToString;
};
struct UnityEngine_Object_c {
	Il2CppClass_1 _1;
	struct UnityEngine_Object_StaticFields* static_fields;
	Il2CppRGCTXData* rgctx_data;
	Il2CppClass_2 _2;
	UnityEngine_Object_VTable vtable;
};
struct UnityEngine_Object_o {
	UnityEngine_Object_c *klass;
	void *monitor;
	UnityEngine_Object_Fields fields;
};
struct UnityEngine_Object_StaticFields {
	int32_t OffsetOfInstanceIDInCPlusPlusObject;
};

struct UnityEngine_Quaternion_Fields {
	float x;
	float y;
	float z;
	float w;
};
struct UnityEngine_Quaternion_VTable {
	VirtualInvokeData _0_Equals;
	VirtualInvokeData _1_Finalize;
	VirtualInvokeData _2_GetHashCode;
	VirtualInvokeData _3_ToString;
	VirtualInvokeData _4_Equals;
	VirtualInvokeData _5_ToString;
};
struct UnityEngine_Quaternion_c {
	Il2CppClass_1 _1;
	struct UnityEngine_Quaternion_StaticFields* static_fields;
	Il2CppRGCTXData* rgctx_data;
	Il2CppClass_2 _2;
	UnityEngine_Quaternion_VTable vtable;
};
struct UnityEngine_Quaternion_o {
	UnityEngine_Quaternion_Fields fields;
};
struct UnityEngine_Quaternion_StaticFields {
	struct UnityEngine_Quaternion_o identityQuaternion;
};

struct UnityEngine_Component_Fields : UnityEngine_Object_Fields {
};
struct UnityEngine_Component_VTable {
	VirtualInvokeData _0_Equals;
	VirtualInvokeData _1_Finalize;
	VirtualInvokeData _2_GetHashCode;
	VirtualInvokeData _3_ToString;
};
struct UnityEngine_Component_c {
	Il2CppClass_1 _1;
	void* static_fields;
	Il2CppRGCTXData* rgctx_data;
	Il2CppClass_2 _2;
	UnityEngine_Component_VTable vtable;
};
struct UnityEngine_Component_o {
	UnityEngine_Component_c *klass;
	void *monitor;
	UnityEngine_Component_Fields fields;
};
struct UnityEngine_Behaviour_Fields : UnityEngine_Component_Fields {
};
struct UnityEngine_Behaviour_VTable {
	VirtualInvokeData _0_Equals;
	VirtualInvokeData _1_Finalize;
	VirtualInvokeData _2_GetHashCode;
	VirtualInvokeData _3_ToString;
};
struct UnityEngine_Behaviour_c {
	Il2CppClass_1 _1;
	void* static_fields;
	Il2CppRGCTXData* rgctx_data;
	Il2CppClass_2 _2;
	UnityEngine_Behaviour_VTable vtable;
};
struct UnityEngine_Behaviour_o {
	UnityEngine_Behaviour_c *klass;
	void *monitor;
	UnityEngine_Behaviour_Fields fields;
};
struct UnityEngine_MonoBehaviour_Fields : UnityEngine_Behaviour_Fields {
};

struct UnityEngine_Vector3_Fields {
	float x;
	float y;
	float z;
};
struct UnityEngine_Vector3_VTable {
	VirtualInvokeData _0_Equals;
	VirtualInvokeData _1_Finalize;
	VirtualInvokeData _2_GetHashCode;
	VirtualInvokeData _3_ToString;
	VirtualInvokeData _4_Equals;
	VirtualInvokeData _5_ToString;
};
struct UnityEngine_Vector3_c {
	Il2CppClass_1 _1;
	struct UnityEngine_Vector3_StaticFields* static_fields;
	Il2CppRGCTXData* rgctx_data;
	Il2CppClass_2 _2;
	UnityEngine_Vector3_VTable vtable;
};
struct UnityEngine_Vector3_o {
	UnityEngine_Vector3_Fields fields;
};
struct UnityEngine_Vector3_StaticFields {
	struct UnityEngine_Vector3_o zeroVector;
	struct UnityEngine_Vector3_o oneVector;
	struct UnityEngine_Vector3_o upVector;
	struct UnityEngine_Vector3_o downVector;
	struct UnityEngine_Vector3_o leftVector;
	struct UnityEngine_Vector3_o rightVector;
	struct UnityEngine_Vector3_o forwardVector;
	struct UnityEngine_Vector3_o backVector;
	struct UnityEngine_Vector3_o positiveInfinityVector;
	struct UnityEngine_Vector3_o negativeInfinityVector;
};

struct UnityEngine_Vector2_Fields {
	float x;
	float y;
};
struct UnityEngine_Vector2_VTable {
	VirtualInvokeData _0_Equals;
	VirtualInvokeData _1_Finalize;
	VirtualInvokeData _2_GetHashCode;
	VirtualInvokeData _3_ToString;
	VirtualInvokeData _4_Equals;
	VirtualInvokeData _5_ToString;
};
struct UnityEngine_Vector2_c {
	Il2CppClass_1 _1;
	struct UnityEngine_Vector2_StaticFields* static_fields;
	Il2CppRGCTXData* rgctx_data;
	Il2CppClass_2 _2;
	UnityEngine_Vector2_VTable vtable;
};
struct UnityEngine_Vector2_o {
	UnityEngine_Vector2_Fields fields;
};
struct UnityEngine_Vector2_StaticFields {
	struct UnityEngine_Vector2_o zeroVector;
	struct UnityEngine_Vector2_o oneVector;
	struct UnityEngine_Vector2_o upVector;
	struct UnityEngine_Vector2_o downVector;
	struct UnityEngine_Vector2_o leftVector;
	struct UnityEngine_Vector2_o rightVector;
	struct UnityEngine_Vector2_o positiveInfinityVector;
	struct UnityEngine_Vector2_o negativeInfinityVector;
};

struct UnityEngine_LayerMask_Fields {
	int32_t m_Mask;
};
struct UnityEngine_LayerMask_VTable {
	VirtualInvokeData _0_Equals;
	VirtualInvokeData _1_Finalize;
	VirtualInvokeData _2_GetHashCode;
	VirtualInvokeData _3_ToString;
};
struct UnityEngine_LayerMask_c {
	Il2CppClass_1 _1;
	void* static_fields;
	Il2CppRGCTXData* rgctx_data;
	Il2CppClass_2 _2;
	UnityEngine_LayerMask_VTable vtable;
};
struct UnityEngine_LayerMask_o {
	UnityEngine_LayerMask_Fields fields;
};

struct UnityEngine_RaycastHit_Fields {
	struct UnityEngine_Vector3_o m_Point;
	struct UnityEngine_Vector3_o m_Normal;
	uint32_t m_FaceID;
	float m_Distance;
	struct UnityEngine_Vector2_o m_UV;
	int32_t m_Collider;
};
struct UnityEngine_RaycastHit_VTable {
	VirtualInvokeData _0_Equals;
	VirtualInvokeData _1_Finalize;
	VirtualInvokeData _2_GetHashCode;
	VirtualInvokeData _3_ToString;
};
struct UnityEngine_RaycastHit_c {
	Il2CppClass_1 _1;
	void* static_fields;
	Il2CppRGCTXData* rgctx_data;
	Il2CppClass_2 _2;
	UnityEngine_RaycastHit_VTable vtable;
};
struct UnityEngine_RaycastHit_o {
	UnityEngine_RaycastHit_Fields fields;
};

struct __declspec(align(8)) Movement_Movement_Fields {
	struct Movement_PlayerMovement_o* _PlayerMovement_k__BackingField;
	struct UnityEngine_Transform_o* _PlayerTransform_k__BackingField;
	struct UnityEngine_Transform_o* _PlayerCam_k__BackingField;
	struct UnityEngine_Transform_o* _Orientation_k__BackingField;
	struct UnityEngine_GameObject_o* _PlayerSmokeFx_k__BackingField;
	struct UnityEngine_Rigidbody_o* _Rb_k__BackingField;
	struct UnityEngine_CapsuleCollider_o* _Collider_k__BackingField;
	float moveSpeed;
	float maxSpeed;
	bool grounded;
	struct UnityEngine_LayerMask_o whatIsGround;
	float counterMovement;
	float _threshold;
	float maxSlopeAngle;
	struct UnityEngine_Vector3_o _crouchScale;
	struct UnityEngine_Vector3_o _playerScale;
	float slideForce;
	float slideCounterMovement;
	bool _readyToJump;
	float _jumpCooldown;
	float jumpForce;
	bool jumping;
	bool crouching;
	bool _canCrouch;
	struct UnityEngine_Vector3_o _normalVector;
	struct UnityEngine_Vector3_o _wallNormalVector;
	struct UnityEngine_Vector3_o _groundPoint;
	bool canDash;
	float dashForce;
	float dashDuration;
	float minDisHead;
	float _distance;
	struct UnityEngine_RaycastHit_o _slopeHit;
	struct UnityEngine_Vector3_o _lastMoveSpeed;
	float _wallRunGravity;
	float maxAirSpeed;
	bool _cancellingGrounded;
	bool _cancellingWall;
	bool _surfing;
	bool _cancellingSurf;
	bool _wallRunning;
	bool onWall;
	struct UnityEngine_Coroutine_o* _groundCoroutine;
	struct UnityEngine_Coroutine_o* _wallCoroutine;
	struct UnityEngine_Coroutine_o* _surfCoroutine;
	bool _needToStand;
	float maxDisHead;
};
struct Movement_Movement_VTable {
	VirtualInvokeData _0_Equals;
	VirtualInvokeData _1_Finalize;
	VirtualInvokeData _2_GetHashCode;
	VirtualInvokeData _3_ToString;
	VirtualInvokeData _4__________;
	VirtualInvokeData _5__________;
	VirtualInvokeData _6__________;
	VirtualInvokeData _7__________;
	VirtualInvokeData _8__________;
	VirtualInvokeData _9__________;
	VirtualInvokeData _10__________;
	VirtualInvokeData _11__________;
	VirtualInvokeData _12__________;
	VirtualInvokeData _13_get_PlayerMovement;
	VirtualInvokeData _14_set_PlayerMovement;
	VirtualInvokeData _15_get_PlayerTransform;
	VirtualInvokeData _16_set_PlayerTransform;
	VirtualInvokeData _17_get_PlayerCam;
	VirtualInvokeData _18_set_PlayerCam;
	VirtualInvokeData _19_get_Orientation;
	VirtualInvokeData _20_set_Orientation;
	VirtualInvokeData _21_get_PlayerSmokeFx;
	VirtualInvokeData _22_set_PlayerSmokeFx;
	VirtualInvokeData _23_get_Rb;
	VirtualInvokeData _24_set_Rb;
	VirtualInvokeData _25_set_Collider;
};
struct Movement_Movement_c {
	Il2CppClass_1 _1;
	void* static_fields;
	Il2CppRGCTXData* rgctx_data;
	Il2CppClass_2 _2;
	Movement_Movement_VTable vtable;
};
struct Movement_Movement_o {
	Movement_Movement_c *klass;
	void *monitor;
	Movement_Movement_Fields fields;
};

struct Movement_PlayerMovement_Fields : UnityEngine_MonoBehaviour_Fields {
	struct Multiplayer_Entity_Client_PlayerState_o* currentPlayer;
	struct UnityEngine_Transform_o* playerCam;
	struct UnityEngine_Transform_o* orientation;
	struct UnityEngine_GameObject_o* playerSmokeFx;
	struct UnityEngine_Rigidbody_o* _________;
	float _6__________;
	float sensitivity;
	float _8__________;
	struct __________70_o* _9__________;
	struct Movement_Movement_o* movement;
	struct Movement_NoClipMovement_o* noClipMovement;
	int32_t jumpLeft;
	float x;
	float y;
	bool inWater;
	float _16__________;
	struct UnityEngine_CapsuleCollider_o* _17__________;
	struct __________o* _18__________;
	bool _20__________;
	bool _21__________;
	bool _22__________;
	float _23__________;
	struct UnityEngine_Transform_o* _24__________;
	struct Demo_Entity_DemoPlayer_o* _25__________;
	float moveSpeedFactor;
	float jumpFactor;
	float perkMoveSpeedFactor;
	float _29__________;
	float _30__________;
	float ___________k__BackingField;
	bool aimAssist;
	struct UnityEngine_LayerMask_o whatIsAssist;
	float _34__________;
	bool _35__________;
	float _36__________;
	int32_t maxJumpCount;
	bool _38__________;
	struct Multiplayer_Entity_Client_ClientPlayer_o* player;
};
struct Movement_PlayerMovement_VTable {
	VirtualInvokeData _0_Equals;
	VirtualInvokeData _1_Finalize;
	VirtualInvokeData _2_GetHashCode;
	VirtualInvokeData _3_ToString;
};
struct Movement_PlayerMovement_c {
	Il2CppClass_1 _1;
	struct Movement_PlayerMovement_StaticFields* static_fields;
	Il2CppRGCTXData* rgctx_data;
	Il2CppClass_2 _2;
	Movement_PlayerMovement_VTable vtable;
};
struct Movement_PlayerMovement_o {
	Movement_PlayerMovement_c *klass;
	void *monitor;
	Movement_PlayerMovement_Fields fields;
};
struct Movement_PlayerMovement_StaticFields {
	struct Movement_PlayerMovement_o* Instance;
	int32_t _19__________;
};

struct Multiplayer_Entity_Client_ClientPlayer_Fields : UnityEngine_MonoBehaviour_Fields {
	struct Movement_PlayerMovement_o* _________;
	bool isLocal;
	int32_t _4____________k__BackingField;
	struct Demo_Entity_DemoPlayer_o* demoPlayer;
	struct Multiplayer_Entity_Client_PlayerState_o* playerState;
	uint16_t _7____________k__BackingField;
	bool _8____________k__BackingField;
	bool _9____________k__BackingField;
	uint16_t _10____________k__BackingField;
	uint16_t _11____________k__BackingField;
	int32_t _12____________k__BackingField;
	bool _13____________k__BackingField;
	bool _14____________k__BackingField;
	struct UnityEngine_Transform_o* orientation;
	struct UnityEngine_Animator_o* animator;
	int32_t _17____________k__BackingField;
	struct UnityEngine_Rigidbody_o* player;
	struct TMPro_TextMeshProUGUI_o* nameText;
	struct UnityEngine_Vector3_o _20__________;
	struct UnityEngine_Quaternion_o _21__________;
	struct LookedToObject_o* leftHandTarget;
	struct LookedToObject_o* rightHandTarget;
	struct UnityEngine_SkinnedMeshRenderer_o* daveHair;
	struct UnityEngine_SkinnedMeshRenderer_o* clothes;
	struct UnityEngine_SkinnedMeshRenderer_o* pant;
	struct System_Collections_Generic_List_Transform__o* eyes;
	struct UnityEngine_SkinnedMeshRenderer_array* models;
	struct System_Collections_Generic_List____________o* perks;
	int32_t _30____________k__BackingField;
	struct __________17_o* Peer;
	struct __________53_o* DamageTracker;
	struct __________64_o* _33__________;
	struct UnityEngine_Transform_o* spine;
	uint64_t _35__________;
	int32_t _37____________k__BackingField;
	struct UnityEngine_Animator_o* clawKnifeAnim;
	struct UnityEngine_Coroutine_o* _39__________;
	struct UnityEngine_Transform_o* head;
	float _41__________;
	bool _42____________k__BackingField;
	struct UnityEngine_GameObject_o* fire;
	bool bloodThirsty;
	struct UnityEngine_AudioSource_o* audioSource;
	struct UnityEngine_AudioSource_o* voice;
	struct UnityEngine_Light_o* Light;
	bool hitted;
	struct UnityEngine_GameObject_o* bananaObj;
	bool specting;
	struct System_Collections_Generic_List_FastIKFabric__o* iks;
	int32_t lastCoin;
	bool moved;
	uint16_t currentLifeKill;
	int32_t coins;
	bool _58__________;
	struct Multiplayer_LagCompensation_Interpolator_o* interpolator;
	bool _60____________k__BackingField;
	bool _61____________k__BackingField;
	struct UnityEngine_CapsuleCollider_o* col;
	struct UnityEngine_Transform_o* nameTrans;
	float _65__________;
	struct System_Collections_Generic_List_Transform__o* bones;
	struct UnityEngine_GameObject_o* nameCanvas;
};
struct Multiplayer_Entity_Client_ClientPlayer_VTable {
	VirtualInvokeData _0_Equals;
	VirtualInvokeData _1_Finalize;
	VirtualInvokeData _2_GetHashCode;
	VirtualInvokeData _3_ToString;
};
struct Multiplayer_Entity_Client_ClientPlayer_c {
	Il2CppClass_1 _1;
	struct Multiplayer_Entity_Client_ClientPlayer_StaticFields* static_fields;
	Il2CppRGCTXData* rgctx_data;
	Il2CppClass_2 _2;
	Multiplayer_Entity_Client_ClientPlayer_VTable vtable;
};
struct Multiplayer_Entity_Client_ClientPlayer_o {
	Multiplayer_Entity_Client_ClientPlayer_c *klass;
	void *monitor;
	Multiplayer_Entity_Client_ClientPlayer_Fields fields;
};
struct Multiplayer_Entity_Client_ClientPlayer_StaticFields {
	struct System_Collections_Generic_Dictionary_ushort__ClientPlayer__o* list;
	struct Multiplayer_Entity_Client_ClientPlayer_o* ___________k__BackingField;
	struct System_Collections_Generic_List_ulong__o* existGroup;
	struct Menu_GameUIManager_o* _51__________;
	struct Weapon_WeaponManager_o* _52__________;
	int32_t Speaking;
	int32_t _68__________;
};

struct Weapon_WeaponManager_Fields : UnityEngine_MonoBehaviour_Fields {
	struct System_Boolean_array* ___________k__BackingField;
	int32_t _________;
	struct System_Collections_Generic_List_MultiplayerWeapon__o* weapons;
	struct Weapon_ThrowableManager_o* throwableManager;
	struct __________11_o* _7__________;
	struct Weapon_Firearms_o* _8__________;
	struct Weapon_Firearms_array* _9__________;
	struct System_Collections_Generic_List_Camera__o* cams;
	float desiredFOV;
	float defaultFOV;
	float speedUpFOV;
	struct UnityEngine_SkinnedMeshRenderer_o* arm;
	struct Multiplayer_Entity_Client_PlayerState_o* _15__________;
	struct UnityEngine_GameObject_o* nightVission;
	struct UnityEngine_GameObject_o* flashLight;
	struct System_Collections_Generic_Queue_Tuple_ushort__int___o* _18____________k__BackingField;
	struct UnityEngine_Animator_o* armAnimator;
	struct LookedToObject_o* leftHandTarget;
	struct LookedToObject_o* rightHandTarget;
	struct UnityEngine_LayerMask_o weaponCamDefaultLayer;
	struct UnityEngine_LayerMask_o weaponCamAimingLayer;
	bool _24____________k__BackingField;
	bool isAiming;
};
struct Weapon_WeaponManager_VTable {
	VirtualInvokeData _0_Equals;
	VirtualInvokeData _1_Finalize;
	VirtualInvokeData _2_GetHashCode;
	VirtualInvokeData _3_ToString;
};
struct Weapon_WeaponManager_c {
	Il2CppClass_1 _1;
	struct Weapon_WeaponManager_StaticFields* static_fields;
	Il2CppRGCTXData* rgctx_data;
	Il2CppClass_2 _2;
	Weapon_WeaponManager_VTable vtable;
};
struct Weapon_WeaponManager_o {
	Weapon_WeaponManager_c *klass;
	void *monitor;
	Weapon_WeaponManager_Fields fields;
};
struct Weapon_WeaponManager_StaticFields {
	struct Weapon_WeaponManager_o* Instance;
	int32_t WeaponIndex;
};

struct Weapon_MultiplayerWeapon_Fields : UnityEngine_MonoBehaviour_Fields {
	struct Weapon_WeaponStats_WeaponStat_o* stat;
	int32_t Type;
	struct UnityEngine_Animator_o* animator;
	struct System_String_o* name;
	struct UnityEngine_Transform_o* leftHand;
	struct UnityEngine_Transform_o* rightHand;
	struct UnityEngine_Transform_o* tip;
	float spreadAngle;
	struct UnityEngine_ParticleSystem_o* particleSystem;
	struct UnityEngine_AudioClip_o* shoot;
	struct UnityEngine_AudioClip_o* reload;
	struct UnityEngine_AudioClip_o* reset;
	bool isLocal;
	bool dual;
	struct UnityEngine_Transform_o* lTip;
	struct UnityEngine_Transform_o* rTip;
	struct UnityEngine_ParticleSystem_o* lPart;
	struct UnityEngine_ParticleSystem_o* rPart;
	bool leftSide;
	bool useGravity;
	float reloadTime;
	float shootVertical;
	float shootHorizontal;
	float shootRotX;
	float shootRotZMultiplier;
	float shootRotYMultiplier;
	struct UnityEngine_Vector3_o _________;
	struct UnityEngine_Vector3_o _27__________;
	float _28__________;
	float _29__________;
	float _30__________;
	float _31__________;
	struct UnityEngine_Vector3_o _32__________;
	struct UnityEngine_Vector3_o _33__________;
	struct UnityEngine_Vector3_o _34__________;
	struct UnityEngine_Vector3_o _35__________;
	float _36__________;
	float _37__________;
	float _38__________;
	float _39__________;
	float _40__________;
	float _41__________;
	float _42__________;
	struct UnityEngine_Vector3_o _43__________;
	float _44__________;
	float _45__________;
	struct UnityEngine_Vector3_o _46__________;
	int32_t _47__________;
	struct System_Collections_Generic_List_GameObject__o* skins;
};
struct Weapon_MultiplayerWeapon_VTable {
	VirtualInvokeData _0_Equals;
	VirtualInvokeData _1_Finalize;
	VirtualInvokeData _2_GetHashCode;
	VirtualInvokeData _3_ToString;
};
struct Weapon_MultiplayerWeapon_c {
	Il2CppClass_1 _1;
	void* static_fields;
	Il2CppRGCTXData* rgctx_data;
	Il2CppClass_2 _2;
	Weapon_MultiplayerWeapon_VTable vtable;
};
struct Weapon_MultiplayerWeapon_o {
	Weapon_MultiplayerWeapon_c *klass;
	void *monitor;
	Weapon_MultiplayerWeapon_Fields fields;
};

struct Multiplayer_Entity_Client_PlayerState_Fields : UnityEngine_MonoBehaviour_Fields {
	bool selfControlled;
	bool _4____________k__BackingField;
	uint64_t _5____________k__BackingField;
	struct System_String_o* _6____________k__BackingField;
	int32_t _7____________k__BackingField;
	bool _8____________k__BackingField;
	bool _9____________k__BackingField;
	bool _10____________k__BackingField;
	int32_t _11____________k__BackingField;
	int32_t _12____________k__BackingField;
	bool _13____________k__BackingField;
	bool _14____________k__BackingField;
	struct UnityEngine_Texture2D_o* _15____________k__BackingField;
	float _________;
	float _17__________;
	float _18__________;
	float _19__________;
	struct UnityEngine_Vector3_o _20__________;
	struct Manager_InventoryManager_CosmeticIndex_o* _21____________k__BackingField;
	struct Grappling_o* grappling;
	struct UnityEngine_CanvasGroup_o* group;
	float _24__________;
	struct UnityEngine_Transform_o* weaponHolder;
	struct UnityEngine_Transform_o* head;
	struct UnityEngine_Rigidbody_o* rb;
	struct UnityEngine_GameObject_o* model;
	struct System_Collections_Generic_List_MultiplayerWeapon__o* weapons;
	struct UnityEngine_Transform_o* playerTransform;
	struct System_Collections_Generic_List_Transform__o* bones;
	struct __________65_o* WeaponManager;
	struct System_Collections_Generic_List_GameObject__o* hatCosmetics;
	struct System_Collections_Generic_List_GameObject__o* faceCosmetics;
	struct System_Collections_Generic_List_GameObject__o* shoeLCosmetics;
	struct System_Collections_Generic_List_GameObject__o* shoeRCosmetics;
	struct System_Collections_Generic_List_GameObject__o* hairCosmetics;
	struct System_Collections_Generic_List_GameObject__o* clothesCosmetics;
	struct System_Collections_Generic_List_GameObject__o* pantCosmetics;
	struct UnityEngine_SkinnedMeshRenderer_o* daveHair;
	struct UnityEngine_SkinnedMeshRenderer_o* clothes;
	struct UnityEngine_SkinnedMeshRenderer_o* pant;
	struct UnityEngine_MeshRenderer_array* eye;
	struct UnityEngine_SkinnedMeshRenderer_array* models;
	struct UnityEngine_GameObject_o* clawKnife;
	struct UnityEngine_Transform_o* clawKnifeHandPos;
	struct Outline_o* outline;
	int32_t _48__________;
	struct LookedToObject_o* leftHandTarget;
	struct LookedToObject_o* rightHandTarget;
	struct System_Collections_Generic_List_FastIKFabric__o* iks;
	struct UnityEngine_Animator_o* clawKnifeAnim;
	struct TMPro_TextMeshProUGUI_o* nameText;
	struct UnityEngine_Transform_o* _54__________;
	struct UnityEngine_Transform_o* _55__________;
	struct UnityEngine_Transform_o* _56__________;
	struct UnityEngine_Transform_o* _57__________;
	struct UnityEngine_Transform_o* _58__________;
	struct UnityEngine_Transform_o* _59__________;
	struct UnityEngine_Transform_o* _60__________;
};
struct Multiplayer_Entity_Client_PlayerState_VTable {
	VirtualInvokeData _0_Equals;
	VirtualInvokeData _1_Finalize;
	VirtualInvokeData _2_GetHashCode;
	VirtualInvokeData _3_ToString;
};
struct Multiplayer_Entity_Client_PlayerState_c {
	Il2CppClass_1 _1;
	struct Multiplayer_Entity_Client_PlayerState_StaticFields* static_fields;
	Il2CppRGCTXData* rgctx_data;
	Il2CppClass_2 _2;
	Multiplayer_Entity_Client_PlayerState_VTable vtable;
};
struct Multiplayer_Entity_Client_PlayerState_o {
	Multiplayer_Entity_Client_PlayerState_c *klass;
	void *monitor;
	Multiplayer_Entity_Client_PlayerState_Fields fields;
};
struct Multiplayer_Entity_Client_PlayerState_StaticFields {
	struct Multiplayer_Entity_Client_PlayerState_o* LocalPlayer;
	struct System_Collections_Generic_List_PlayerState__o* ___________k__BackingField;
	bool _3____________k__BackingField;
};
struct __declspec(align(8)) __________65_Fields {
	bool ___________k__BackingField;
	struct UnityEngine_Transform_o* _2__________;
	struct UnityEngine_Transform_o* _3__________;
	struct UnityEngine_AudioSource_o* _4__________;
	struct Multiplayer_Entity_Client_PlayerState_o* _5__________;
	struct UnityEngine_Animator_o* _6__________;
	struct System_Collections_Generic_List_MultiplayerWeapon__o* _7__________;
	struct Weapon_MultiplayerWeapon_o* CurrentWeapon;
	struct Weapon_MultiplayerWeapon_array* Weapon;
	struct Weapon_MultiplayerWeapon_o* SpecialWeapon;
	struct LookedToObject_o* _11__________;
	struct LookedToObject_o* _12__________;
	struct System_Collections_Generic_List_FastIKFabric__o* _13__________;
	struct System_Int16_array* _14____________k__BackingField;
	int32_t _15____________k__BackingField;
	struct System_UInt16_array* _16____________k__BackingField;
};
struct __________65_VTable {
	VirtualInvokeData _0_Equals;
	VirtualInvokeData _1_Finalize;
	VirtualInvokeData _2_GetHashCode;
	VirtualInvokeData _3_ToString;
};
struct __________65_c {
	Il2CppClass_1 _1;
	struct __________65_StaticFields* static_fields;
	Il2CppRGCTXData* rgctx_data;
	Il2CppClass_2 _2;
	__________65_VTable vtable;
};
struct __________65_o {
	__________65_c *klass;
	void *monitor;
	__________65_Fields fields;
};
struct __________65_StaticFields {
	int32_t _________;
};

struct Weapon_Firearms_Fields : UnityEngine_MonoBehaviour_Fields {
	struct Weapon_WeaponStats_WeaponStat_o* stat;
	bool useArm;
	struct UnityEngine_Transform_o* arm;
	struct UnityEngine_Transform_o* _________;
	int32_t weaponIndex;
	struct UnityEngine_Transform_o* leftHandIK;
	struct UnityEngine_Transform_o* rightHandIK;
	int32_t weaponType;
	float waitTimeToAttack;
	struct UnityEngine_Transform_o* muzzlePoint;
	struct UnityEngine_ParticleSystem_o* muzzleParticle;
	struct UnityEngine_AudioClip_o* shoot;
	struct UnityEngine_AudioClip_o* reload;
	struct UnityEngine_AudioClip_o* reset;
	bool useGravity;
	int32_t maxAmmo;
	struct __________29_o* currentAmmo;
	float fireRate;
	struct UnityEngine_Animator_o* animator;
	bool cantReload;
	float _20__________;
	bool allowHolding;
	float reloadMultiplier;
	bool isAiming;
	float _24__________;
	int32_t bulletCount;
	bool createBullet;
	struct System_Collections_Generic_List_ClientPlayer__o* _27__________;
	struct UnityEngine_RaycastHit_array* _28__________;
	struct Weapon_MultiplayerWeapon_o* _29__________;
	float recoilX;
	float recoilY;
	float recoilZ;
	float _33__________;
	bool semiAuto;
	struct UnityEngine_RaycastHit_array* _35__________;
	bool enableSmokeTrail;
	struct System_Collections_Generic_List_Enemy__o* _37__________;
	struct System_Collections_Generic_List_ClientEnemy__o* _38__________;
	struct System_Collections_Generic_List_ClientPlayer__o* _39__________;
	struct System_Collections_Generic_List_ShootingTarget__o* _40__________;
	struct System_Collections_Generic_List_ShootingTarget2__o* _41__________;
	struct UnityEngine_Collider_array* _42__________;
	struct UnityEngine_Vector3_o aimPos;
	bool allowToAim;
	struct SmokeTrail_o* trail;
	int32_t spinAmount;
	bool isReload;
	bool animateUi;
	float spinReloadPercantage;
	bool playResetAfterReload;
	int32_t damage;
	float spreadAngle;
	float normalSpread;
	float runSpread;
	float normalReloadTime;
	float reloadTime;
	float shootBack;
	float shootVertical;
	float shootHorizontal;
	float shootRotX;
	float shootRotZMultiplier;
	float shootRotYMultiplier;
	float _63__________;
	struct UnityEngine_Vector3_o _64__________;
	struct UnityEngine_Vector3_o _65__________;
	float _66__________;
	float _67__________;
	float _68__________;
	float _69__________;
	struct UnityEngine_Vector3_o _70__________;
	struct UnityEngine_Vector3_o _71__________;
	struct UnityEngine_Vector3_o _72__________;
	struct UnityEngine_Vector3_o _73__________;
	float _74__________;
	float _75__________;
	float _76__________;
	float _77__________;
	float _78__________;
	float _79__________;
	float _80__________;
	float currentGunDragMultiplier;
	float _82__________;
	float _83__________;
	struct UnityEngine_Vector3_o _84__________;
	float _85__________;
	float _86__________;
	struct UnityEngine_Vector3_o _87__________;
	int32_t _88__________;
};
struct Weapon_Firearms_VTable {
	VirtualInvokeData _0_Equals;
	VirtualInvokeData _1_Finalize;
	VirtualInvokeData _2_GetHashCode;
	VirtualInvokeData _3_ToString;
	VirtualInvokeData _4_Start;
	VirtualInvokeData _5_Update;
	VirtualInvokeData _6__________;
	VirtualInvokeData _7__________;
	VirtualInvokeData _8__________;
	VirtualInvokeData _9__________;
	VirtualInvokeData _10__________;
	VirtualInvokeData _11__________;
};
struct Weapon_Firearms_c {
	Il2CppClass_1 _1;
	struct Weapon_Firearms_StaticFields* static_fields;
	Il2CppRGCTXData* rgctx_data;
	Il2CppClass_2 _2;
	Weapon_Firearms_VTable vtable;
};
struct Weapon_Firearms_o {
	Weapon_Firearms_c *klass;
	void *monitor;
	Weapon_Firearms_Fields fields;
};
struct Weapon_Firearms_StaticFields {
	int32_t _89__________;
};

struct ____________________53_Fields {
	uint32_t _________;
	uint64_t _1__________;
	uint16_t _2__________;
	double _3__________;
};
struct ____________________53_VTable {
	VirtualInvokeData _0_Equals;
	VirtualInvokeData _1_Finalize;
	VirtualInvokeData _2_GetHashCode;
	VirtualInvokeData _3_ToString;
};
struct ____________________53_c {
	Il2CppClass_1 _1;
	void* static_fields;
	Il2CppRGCTXData* rgctx_data;
	Il2CppClass_2 _2;
	____________________53_VTable vtable;
};
struct ____________________53_o {
	____________________53_Fields fields;
};

#endif //IL2CPP_H
