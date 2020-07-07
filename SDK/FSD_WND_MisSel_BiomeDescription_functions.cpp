// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WND_MisSel_BiomeDescription_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WND_MisSel_BiomeDescription.WND_MisSel_BiomeDescription_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBiome**                 Biome                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_MisSel_BiomeDescription_C::SetData(class UBiome** Biome)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_MisSel_BiomeDescription.WND_MisSel_BiomeDescription_C.SetData");

	UWND_MisSel_BiomeDescription_C_SetData_Params params;
	params.Biome = Biome;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_MisSel_BiomeDescription.WND_MisSel_BiomeDescription_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_MisSel_BiomeDescription_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_MisSel_BiomeDescription.WND_MisSel_BiomeDescription_C.PreConstruct");

	UWND_MisSel_BiomeDescription_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_MisSel_BiomeDescription.WND_MisSel_BiomeDescription_C.ExecuteUbergraph_WND_MisSel_BiomeDescription
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_MisSel_BiomeDescription_C::ExecuteUbergraph_WND_MisSel_BiomeDescription(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_MisSel_BiomeDescription.WND_MisSel_BiomeDescription_C.ExecuteUbergraph_WND_MisSel_BiomeDescription");

	UWND_MisSel_BiomeDescription_C_ExecuteUbergraph_WND_MisSel_BiomeDescription_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
