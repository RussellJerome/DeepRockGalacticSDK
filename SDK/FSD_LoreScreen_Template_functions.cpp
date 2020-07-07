// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_LoreScreen_Template_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LoreScreen_Template.LoreScreen_Template_C.SetHeadline
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  SetHeadline                    (BlueprintVisible, BlueprintReadOnly, Parm)
// class UTexture2D**             Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FObjectiveMissionIcon*  MissionIcon                    (BlueprintVisible, BlueprintReadOnly, Parm)

void ULoreScreen_Template_C::SetHeadline(struct FText* SetHeadline, class UTexture2D** Icon, struct FObjectiveMissionIcon* MissionIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoreScreen_Template.LoreScreen_Template_C.SetHeadline");

	ULoreScreen_Template_C_SetHeadline_Params params;
	params.SetHeadline = SetHeadline;
	params.Icon = Icon;
	params.MissionIcon = MissionIcon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoreScreen_Template.LoreScreen_Template_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULoreScreen_Template_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoreScreen_Template.LoreScreen_Template_C.PreConstruct");

	ULoreScreen_Template_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoreScreen_Template.LoreScreen_Template_C.SetHeaderMovie
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMediaSource**           MediaSource                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULoreScreen_Template_C::SetHeaderMovie(class UMediaSource** MediaSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoreScreen_Template.LoreScreen_Template_C.SetHeaderMovie");

	ULoreScreen_Template_C_SetHeaderMovie_Params params;
	params.MediaSource = MediaSource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoreScreen_Template.LoreScreen_Template_C.SetHeaderImage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D**             HeaderImage                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Strech                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         VerticalFillPercent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          UseGradient                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULoreScreen_Template_C::SetHeaderImage(class UTexture2D** HeaderImage, bool* Strech, float* VerticalFillPercent, bool* UseGradient)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoreScreen_Template.LoreScreen_Template_C.SetHeaderImage");

	ULoreScreen_Template_C_SetHeaderImage_Params params;
	params.HeaderImage = HeaderImage;
	params.Strech = Strech;
	params.VerticalFillPercent = VerticalFillPercent;
	params.UseGradient = UseGradient;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoreScreen_Template.LoreScreen_Template_C.SetHeaderMaterial
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface**     Material                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D*              Size                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULoreScreen_Template_C::SetHeaderMaterial(class UMaterialInterface** Material, struct FVector2D* Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoreScreen_Template.LoreScreen_Template_C.SetHeaderMaterial");

	ULoreScreen_Template_C_SetHeaderMaterial_Params params;
	params.Material = Material;
	params.Size = Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoreScreen_Template.LoreScreen_Template_C.OnOpened
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString*                 OpenedUrl                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ULoreScreen_Template_C::OnOpened(class FString* OpenedUrl)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoreScreen_Template.LoreScreen_Template_C.OnOpened");

	ULoreScreen_Template_C_OnOpened_Params params;
	params.OpenedUrl = OpenedUrl;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoreScreen_Template.LoreScreen_Template_C.ExecuteUbergraph_LoreScreen_Template
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULoreScreen_Template_C::ExecuteUbergraph_LoreScreen_Template(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoreScreen_Template.LoreScreen_Template_C.ExecuteUbergraph_LoreScreen_Template");

	ULoreScreen_Template_C_ExecuteUbergraph_LoreScreen_Template_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoreScreen_Template.LoreScreen_Template_C.OnShown__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ULoreScreen_Template_C::OnShown__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoreScreen_Template.LoreScreen_Template_C.OnShown__DelegateSignature");

	ULoreScreen_Template_C_OnShown__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
