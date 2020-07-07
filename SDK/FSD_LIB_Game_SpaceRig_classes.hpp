#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_LIB_Game_SpaceRig_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LIB_Game_SpaceRig.LIB_Game_SpaceRig_C
// 0x0000 (0x0028 - 0x0028)
class ULIB_Game_SpaceRig_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LIB_Game_SpaceRig.LIB_Game_SpaceRig_C");
		return ptr;
	}


	void STATIC_RefreshSpacerigUpgradePreview(class APlayerController** PlayerController, class UObject** __WorldContext);
	void STATIC_GetSpaceRigUpgradePreview(class APlayerController** PlayerController, class UObject** __WorldContext, class UItemUpgrade** PreviewUpgrade);
	void STATIC_SetSpaceRigUpgradePreview(class APlayerController** PlayerController, class UItemUpgrade** ItemUpgrade, class UObject** __WorldContext);
	void STATIC_GetSRGameMode(class UObject** __WorldContext, class ABP_SpaceRig_Gamemode_C** AsBP_Space_Rig_Gamemode);
	void STATIC_GetSRGameState(class UObject** __WorldContext, class ABP_GameState_SpaceRig_C** GameState);
	void STATIC_GetSRController(class UObject** __WorldContext, class ABP_PlayerController_SpaceRig_C** SRController);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
