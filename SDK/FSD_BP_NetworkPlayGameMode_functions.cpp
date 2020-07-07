// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_NetworkPlayGameMode_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_NetworkPlayGameMode.BP_NetworkPlayGameMode_C.GetDefaultPawnClassForController
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController**            InController                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* ABP_NetworkPlayGameMode_C::GetDefaultPawnClassForController(class AController** InController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NetworkPlayGameMode.BP_NetworkPlayGameMode_C.GetDefaultPawnClassForController");

	ABP_NetworkPlayGameMode_C_GetDefaultPawnClassForController_Params params;
	params.InController = InController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_NetworkPlayGameMode.BP_NetworkPlayGameMode_C.RecieveAllDwarvesDown
// (Event, Public, BlueprintEvent)

void ABP_NetworkPlayGameMode_C::RecieveAllDwarvesDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NetworkPlayGameMode.BP_NetworkPlayGameMode_C.RecieveAllDwarvesDown");

	ABP_NetworkPlayGameMode_C_RecieveAllDwarvesDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NetworkPlayGameMode.BP_NetworkPlayGameMode_C.ExecuteUbergraph_BP_NetworkPlayGameMode
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NetworkPlayGameMode_C::ExecuteUbergraph_BP_NetworkPlayGameMode(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NetworkPlayGameMode.BP_NetworkPlayGameMode_C.ExecuteUbergraph_BP_NetworkPlayGameMode");

	ABP_NetworkPlayGameMode_C_ExecuteUbergraph_BP_NetworkPlayGameMode_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
