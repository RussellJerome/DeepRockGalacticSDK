// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_MAG_BaseClass_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MAG_BaseClass.MAG_BaseClass_C.Attached
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Parent                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMAG_BaseClass_C::Attached(class AActor** Parent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MAG_BaseClass.MAG_BaseClass_C.Attached");

	AMAG_BaseClass_C_Attached_Params params;
	params.Parent = Parent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MAG_BaseClass.MAG_BaseClass_C.Released
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMAG_BaseClass_C::Released()
{
	static auto fn = UObject::FindObject<UFunction>("Function MAG_BaseClass.MAG_BaseClass_C.Released");

	AMAG_BaseClass_C_Released_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MAG_BaseClass.MAG_BaseClass_C.DoRelease
// (BlueprintCallable, BlueprintEvent)

void AMAG_BaseClass_C::DoRelease()
{
	static auto fn = UObject::FindObject<UFunction>("Function MAG_BaseClass.MAG_BaseClass_C.DoRelease");

	AMAG_BaseClass_C_DoRelease_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MAG_BaseClass.MAG_BaseClass_C.OnItemSkinned
// (Event, Protected, BlueprintEvent)
// Parameters:
// class USkinEffect**            Skin                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMAG_BaseClass_C::OnItemSkinned(class USkinEffect** Skin)
{
	static auto fn = UObject::FindObject<UFunction>("Function MAG_BaseClass.MAG_BaseClass_C.OnItemSkinned");

	AMAG_BaseClass_C_OnItemSkinned_Params params;
	params.Skin = Skin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MAG_BaseClass.MAG_BaseClass_C.ExecuteUbergraph_MAG_BaseClass
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMAG_BaseClass_C::ExecuteUbergraph_MAG_BaseClass(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MAG_BaseClass.MAG_BaseClass_C.ExecuteUbergraph_MAG_BaseClass");

	AMAG_BaseClass_C_ExecuteUbergraph_MAG_BaseClass_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
