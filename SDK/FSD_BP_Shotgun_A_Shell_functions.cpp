// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_Shotgun_A_Shell_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Shotgun_A_Shell.BP_Shotgun_A_Shell_C.Attached
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Parent                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Shotgun_A_Shell_C::Attached(class AActor** Parent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Shotgun_A_Shell.BP_Shotgun_A_Shell_C.Attached");

	ABP_Shotgun_A_Shell_C_Attached_Params params;
	params.Parent = Parent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Shotgun_A_Shell.BP_Shotgun_A_Shell_C.OnItemSkinned
// (Event, Protected, BlueprintEvent)
// Parameters:
// class USkinEffect**            Skin                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Shotgun_A_Shell_C::OnItemSkinned(class USkinEffect** Skin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Shotgun_A_Shell.BP_Shotgun_A_Shell_C.OnItemSkinned");

	ABP_Shotgun_A_Shell_C_OnItemSkinned_Params params;
	params.Skin = Skin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Shotgun_A_Shell.BP_Shotgun_A_Shell_C.ExecuteUbergraph_BP_Shotgun_A_Shell
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Shotgun_A_Shell_C::ExecuteUbergraph_BP_Shotgun_A_Shell(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Shotgun_A_Shell.BP_Shotgun_A_Shell_C.ExecuteUbergraph_BP_Shotgun_A_Shell");

	ABP_Shotgun_A_Shell_C_ExecuteUbergraph_BP_Shotgun_A_Shell_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
