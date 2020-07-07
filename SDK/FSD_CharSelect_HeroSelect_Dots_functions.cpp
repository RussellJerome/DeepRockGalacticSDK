// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_CharSelect_HeroSelect_Dots_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CharSelect_HeroSelect_Dots.CharSelect_HeroSelect_Dots_C.UpdateDots
// (Private, BlueprintCallable, BlueprintEvent)

void UCharSelect_HeroSelect_Dots_C::UpdateDots()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharSelect_HeroSelect_Dots.CharSelect_HeroSelect_Dots_C.UpdateDots");

	UCharSelect_HeroSelect_Dots_C_UpdateDots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharSelect_HeroSelect_Dots.CharSelect_HeroSelect_Dots_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCharSelect_HeroSelect_Dots_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharSelect_HeroSelect_Dots.CharSelect_HeroSelect_Dots_C.PreConstruct");

	UCharSelect_HeroSelect_Dots_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharSelect_HeroSelect_Dots.CharSelect_HeroSelect_Dots_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCharSelect_HeroSelect_Dots_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharSelect_HeroSelect_Dots.CharSelect_HeroSelect_Dots_C.Tick");

	UCharSelect_HeroSelect_Dots_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharSelect_HeroSelect_Dots.CharSelect_HeroSelect_Dots_C.Set Character Class
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 CharacterClass                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCharSelect_HeroSelect_Dots_C::Set_Character_Class(class UClass** CharacterClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharSelect_HeroSelect_Dots.CharSelect_HeroSelect_Dots_C.Set Character Class");

	UCharSelect_HeroSelect_Dots_C_Set_Character_Class_Params params;
	params.CharacterClass = CharacterClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharSelect_HeroSelect_Dots.CharSelect_HeroSelect_Dots_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCharSelect_HeroSelect_Dots_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharSelect_HeroSelect_Dots.CharSelect_HeroSelect_Dots_C.Construct");

	UCharSelect_HeroSelect_Dots_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharSelect_HeroSelect_Dots.CharSelect_HeroSelect_Dots_C.ExecuteUbergraph_CharSelect_HeroSelect_Dots
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCharSelect_HeroSelect_Dots_C::ExecuteUbergraph_CharSelect_HeroSelect_Dots(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharSelect_HeroSelect_Dots.CharSelect_HeroSelect_Dots_C.ExecuteUbergraph_CharSelect_HeroSelect_Dots");

	UCharSelect_HeroSelect_Dots_C_ExecuteUbergraph_CharSelect_HeroSelect_Dots_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
