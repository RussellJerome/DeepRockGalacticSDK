#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_ZipLineConnector_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_ZipLineConnector.BP_ZipLineConnector_C.SetConnectorVisible
struct ABP_ZipLineConnector_C_SetConnectorVisible_Params
{
	bool*                                              inVisible;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ZipLineConnector.BP_ZipLineConnector_C.ReceiveConnected
struct ABP_ZipLineConnector_C_ReceiveConnected_Params
{
	struct FVector*                                    WorldLocation;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector*                                    Direction;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function BP_ZipLineConnector.BP_ZipLineConnector_C.ReceiveDisconnected
struct ABP_ZipLineConnector_C_ReceiveDisconnected_Params
{
};

// Function BP_ZipLineConnector.BP_ZipLineConnector_C.ReceiveUpdateZipLinePoint
struct ABP_ZipLineConnector_C_ReceiveUpdateZipLinePoint_Params
{
	struct FVector*                                    WorldLocation;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector*                                    Directioy;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool*                                              Speeding;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ZipLineConnector.BP_ZipLineConnector_C.UpdateLocation
struct ABP_ZipLineConnector_C_UpdateLocation_Params
{
	struct FVector*                                    Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ZipLineConnector.BP_ZipLineConnector_C.ReceiveBeginPlay
struct ABP_ZipLineConnector_C_ReceiveBeginPlay_Params
{
};

// Function BP_ZipLineConnector.BP_ZipLineConnector_C.ExecuteUbergraph_BP_ZipLineConnector
struct ABP_ZipLineConnector_C_ExecuteUbergraph_BP_ZipLineConnector_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
