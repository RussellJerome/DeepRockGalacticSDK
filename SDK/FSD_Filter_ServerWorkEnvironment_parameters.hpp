#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Filter_ServerWorkEnvironment_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.OpenMenu
struct UFilter_ServerWorkEnvironment_C_OpenMenu_Params
{
	bool*                                              Open;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.GetSelectedDifficulties
struct UFilter_ServerWorkEnvironment_C_GetSelectedDifficulties_Params
{
	TArray<class UDifficultySetting*>                  Difficulties;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.IsDifficultySelected
struct UFilter_ServerWorkEnvironment_C_IsDifficultySelected_Params
{
	class UDifficultySetting**                         InDifficulty;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Selected;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.UpdateSubheader
struct UFilter_ServerWorkEnvironment_C_UpdateSubheader_Params
{
};

// Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.Add Work Environment
struct UFilter_ServerWorkEnvironment_C_Add_Work_Environment_Params
{
	class UDifficultySetting**                         Difficulty;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCheck_ServerWorkEnvironment_C*              OutWidget;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               OutIsChecked;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.PreConstruct
struct UFilter_ServerWorkEnvironment_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.OnCheckedChanged
struct UFilter_ServerWorkEnvironment_C_OnCheckedChanged_Params
{
	class UCheck_ServerWorkEnvironment_C**             CheckBox;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDifficultySetting**                         Difficulty;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsChecked;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.Reset
struct UFilter_ServerWorkEnvironment_C_Reset_Params
{
};

// Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.ExecuteUbergraph_Filter_ServerWorkEnvironment
struct UFilter_ServerWorkEnvironment_C_ExecuteUbergraph_Filter_ServerWorkEnvironment_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Filter_ServerWorkEnvironment.Filter_ServerWorkEnvironment_C.OnSelectionChanged__DelegateSignature
struct UFilter_ServerWorkEnvironment_C_OnSelectionChanged__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
