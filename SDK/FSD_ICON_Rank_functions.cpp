// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ICON_Rank_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ICON_Rank.ICON_Rank_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UICON_Rank_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ICON_Rank.ICON_Rank_C.Construct");

	UICON_Rank_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ICON_Rank.ICON_Rank_C.Update
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFSDPlayerState**        PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UICON_Rank_C::Update(class AFSDPlayerState** PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ICON_Rank.ICON_Rank_C.Update");

	UICON_Rank_C_Update_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ICON_Rank.ICON_Rank_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UICON_Rank_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ICON_Rank.ICON_Rank_C.PreConstruct");

	UICON_Rank_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ICON_Rank.ICON_Rank_C.SetRankAndStars
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Rank                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Stars                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UICON_Rank_C::SetRankAndStars(int* Rank, int* Stars)
{
	static auto fn = UObject::FindObject<UFunction>("Function ICON_Rank.ICON_Rank_C.SetRankAndStars");

	UICON_Rank_C_SetRankAndStars_Params params;
	params.Rank = Rank;
	params.Stars = Stars;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ICON_Rank.ICON_Rank_C.ExecuteUbergraph_ICON_Rank
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UICON_Rank_C::ExecuteUbergraph_ICON_Rank(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ICON_Rank.ICON_Rank_C.ExecuteUbergraph_ICON_Rank");

	UICON_Rank_C_ExecuteUbergraph_ICON_Rank_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
