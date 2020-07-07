// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_EnemyShowroomController_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_EnemyShowroomController.BP_EnemyShowroomController_C.Receive_PlayAttack
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAnimSequenceBase**      attackAnimation                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_EnemyShowroomController_C::Receive_PlayAttack(class UAnimSequenceBase** attackAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EnemyShowroomController.BP_EnemyShowroomController_C.Receive_PlayAttack");

	UBP_EnemyShowroomController_C_Receive_PlayAttack_Params params;
	params.attackAnimation = attackAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EnemyShowroomController.BP_EnemyShowroomController_C.ExecuteUbergraph_BP_EnemyShowroomController
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_EnemyShowroomController_C::ExecuteUbergraph_BP_EnemyShowroomController(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EnemyShowroomController.BP_EnemyShowroomController_C.ExecuteUbergraph_BP_EnemyShowroomController");

	UBP_EnemyShowroomController_C_ExecuteUbergraph_BP_EnemyShowroomController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
