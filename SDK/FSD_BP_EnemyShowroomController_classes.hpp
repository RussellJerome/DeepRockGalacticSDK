#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_EnemyShowroomController_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_EnemyShowroomController.BP_EnemyShowroomController_C
// 0x0008 (0x0118 - 0x0110)
class UBP_EnemyShowroomController_C : public UEnemyShowroomController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0110(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_EnemyShowroomController.BP_EnemyShowroomController_C");
		return ptr;
	}


	void Receive_PlayAttack(class UAnimSequenceBase** attackAnimation);
	void ExecuteUbergraph_BP_EnemyShowroomController(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
