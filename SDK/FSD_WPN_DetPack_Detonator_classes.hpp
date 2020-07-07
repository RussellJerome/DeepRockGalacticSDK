#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WPN_DetPack_Detonator_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WPN_DetPack_Detonator.WPN_DetPack_Detonator_C
// 0x0010 (0x0550 - 0x0540)
class AWPN_DetPack_Detonator_C : public ADetPackItem
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0540(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UMaterialInstanceDynamic*                    StatusMaterial;                                           // 0x0548(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WPN_DetPack_Detonator.WPN_DetPack_Detonator_C");
		return ptr;
	}


	void GetGearStatEntry(class AFSDPlayerState** PlayerState, TArray<struct FGearStatEntry>* Stats);
	void UserConstructionScript();
	void RecieveStartUsing();
	void RecieveEquipped();
	void ReceiveResupply(float* percentage);
	void Receive_OnRep_IsDetonatorOut();
	void ExecuteUbergraph_WPN_DetPack_Detonator(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
