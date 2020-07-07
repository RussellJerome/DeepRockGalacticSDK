#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_CharacterShowroomController_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CharacterShowroomController.BP_CharacterShowroomController_C
// 0x0008 (0x0110 - 0x0108)
class UBP_CharacterShowroomController_C : public UCharacterShowroomController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0108(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CharacterShowroomController.BP_CharacterShowroomController_C");
		return ptr;
	}


	void Receive_CharacterShown();
	void EquipWeapon(EItemCategory* Category);
	void ExecuteUbergraph_BP_CharacterShowroomController(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
