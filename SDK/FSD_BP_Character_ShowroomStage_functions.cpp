// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_Character_ShowroomStage_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Character_ShowroomStage.BP_Character_ShowroomStage_C.CreateRenderTarget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextureRenderTarget2D*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTextureRenderTarget2D* ABP_Character_ShowroomStage_C::CreateRenderTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character_ShowroomStage.BP_Character_ShowroomStage_C.CreateRenderTarget");

	ABP_Character_ShowroomStage_C_CreateRenderTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Character_ShowroomStage.BP_Character_ShowroomStage_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Character_ShowroomStage_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character_ShowroomStage.BP_Character_ShowroomStage_C.ReceiveBeginPlay");

	ABP_Character_ShowroomStage_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Character_ShowroomStage.BP_Character_ShowroomStage_C.ExecuteUbergraph_BP_Character_ShowroomStage
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Character_ShowroomStage_C::ExecuteUbergraph_BP_Character_ShowroomStage(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Character_ShowroomStage.BP_Character_ShowroomStage_C.ExecuteUbergraph_BP_Character_ShowroomStage");

	ABP_Character_ShowroomStage_C_ExecuteUbergraph_BP_Character_ShowroomStage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
