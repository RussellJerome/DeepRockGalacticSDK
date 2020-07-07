#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_TutorialManager_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TutorialManager_Base.BP_TutorialManager_Base_C
// 0x0088 (0x03F8 - 0x0370)
class ABP_TutorialManager_Base_C : public ATutorialManager
{
public:
	class UTutorial_Hint_LowOnAmmo_C*                  Tutorial_Hint_LowOnAmmo;                                  // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTutorial_Hint_Resupply_C*                   Tutorial_Hint_Resupply;                                   // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTutorial_Hint_Nitra_C*                      Tutorial_Hint_Nitra;                                      // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTutorial_Hint_EquipTraversalTool_C*         Tutorial_Hint_EquipTraversalTool;                         // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTutorial_Hint_EquipSecondaryWeapon_C*       Tutorial_Hint_EquipSecondaryWeapon;                       // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTutorial_Hint_EquipGrenade_C*               Tutorial_Hint_EquipGrenade;                               // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTutorial_Hint_EquipClassTool_C*             Tutorial_Hint_EquipClassTool;                             // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTutorial_Hint_BoscoFirstSoloMission_C*      Tutorial_Hint_BoscoFirstSoloMission;                      // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTutorial_Hint_MinersManual_C*               Tutorial_Hint_MinersManual;                               // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTutorial_ThrowCarriable_C*                  Tutorial_ThrowCarriable;                                  // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTutorial_Hint_FocusShot_C*                  Tutorial_FocusShot;                                       // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTutorial_Hint_BoscoAbility_C*               Tutorial_Hint_BoscoAbility;                               // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTutorial_Hint_EggMissionTerrainScanner_C*   Tutorial_Hint_EggMissionTerrainScanner;                   // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTutorial_Hint_Deposite_C*                   Tutorial_Hint_Deposite;                                   // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTutorial_Hint_LaserPointer_C*               Tutorial_Hint_LaserPointer;                               // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTutorial_Hint_Flares_C*                     Tutorial_Hint_Flares;                                     // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TutorialManager_Base.BP_TutorialManager_Base_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
