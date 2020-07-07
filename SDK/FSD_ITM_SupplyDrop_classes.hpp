#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_SupplyDrop_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ITM_SupplyDrop.ITM_SupplyDrop_C
// 0x0008 (0x04D0 - 0x04C8)
class AITM_SupplyDrop_C : public ARessuplyPodItem
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ITM_SupplyDrop.ITM_SupplyDrop_C");
		return ptr;
	}


	void RecieveCycledItem();
	void RecieveEquipped();
	void ExecuteUbergraph_ITM_SupplyDrop(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
