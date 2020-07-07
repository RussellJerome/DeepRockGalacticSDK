#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Options_Language_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Options_Language.Options_Language_C.UpdateWorkInProgressLabel
struct UOptions_Language_C_UpdateWorkInProgressLabel_Params
{
	class FString*                                     languageCode;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function Options_Language.Options_Language_C.GetFilteredLanguages
struct UOptions_Language_C_GetFilteredLanguages_Params
{
	TArray<struct FLocalizedLanguageInfo>              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Options_Language.Options_Language_C.GetLanguageName
struct UOptions_Language_C_GetLanguageName_Params
{
	class FString*                                     InName;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString*                                     InCode;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Options_Language.Options_Language_C.Construct
struct UOptions_Language_C_Construct_Params
{
};

// Function Options_Language.Options_Language_C.UINeedsUpdate
struct UOptions_Language_C_UINeedsUpdate_Params
{
};

// Function Options_Language.Options_Language_C.BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature
struct UOptions_Language_C_BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature_Params
{
	struct FText*                                      Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options_Language.Options_Language_C.PreConstruct
struct UOptions_Language_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options_Language.Options_Language_C.ExecuteUbergraph_Options_Language
struct UOptions_Language_C_ExecuteUbergraph_Options_Language_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options_Language.Options_Language_C.OnLanguageChanged__DelegateSignature
struct UOptions_Language_C_OnLanguageChanged__DelegateSignature_Params
{
	struct FLocalizedLanguageInfo*                     Selected_Language;                                        // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
