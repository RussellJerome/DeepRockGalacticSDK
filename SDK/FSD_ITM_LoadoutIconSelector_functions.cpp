// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_LoadoutIconSelector_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_LoadoutIconSelector.ITM_LoadoutIconSelector_C.FillGrid
// (Public, BlueprintCallable, BlueprintEvent)

void UITM_LoadoutIconSelector_C::FillGrid()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_LoadoutIconSelector.ITM_LoadoutIconSelector_C.FillGrid");

	UITM_LoadoutIconSelector_C_FillGrid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_LoadoutIconSelector.ITM_LoadoutIconSelector_C.SetData
// (BlueprintCallable, BlueprintEvent)

void UITM_LoadoutIconSelector_C::SetData()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_LoadoutIconSelector.ITM_LoadoutIconSelector_C.SetData");

	UITM_LoadoutIconSelector_C_SetData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_LoadoutIconSelector.ITM_LoadoutIconSelector_C.OnIconClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D**             Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           ImageIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_LoadoutIconSelector_C::OnIconClicked(class UTexture2D** Texture, int* ImageIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_LoadoutIconSelector.ITM_LoadoutIconSelector_C.OnIconClicked");

	UITM_LoadoutIconSelector_C_OnIconClicked_Params params;
	params.Texture = Texture;
	params.ImageIndex = ImageIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_LoadoutIconSelector.ITM_LoadoutIconSelector_C.ExecuteUbergraph_ITM_LoadoutIconSelector
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_LoadoutIconSelector_C::ExecuteUbergraph_ITM_LoadoutIconSelector(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_LoadoutIconSelector.ITM_LoadoutIconSelector_C.ExecuteUbergraph_ITM_LoadoutIconSelector");

	UITM_LoadoutIconSelector_C_ExecuteUbergraph_ITM_LoadoutIconSelector_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_LoadoutIconSelector.ITM_LoadoutIconSelector_C.OnIconSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D**             Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           ImageIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_LoadoutIconSelector_C::OnIconSelected__DelegateSignature(class UTexture2D** Texture, int* ImageIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_LoadoutIconSelector.ITM_LoadoutIconSelector_C.OnIconSelected__DelegateSignature");

	UITM_LoadoutIconSelector_C_OnIconSelected__DelegateSignature_Params params;
	params.Texture = Texture;
	params.ImageIndex = ImageIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
