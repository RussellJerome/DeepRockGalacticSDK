// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Announcement_Controller_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Announcement_Controller.Announcement_Controller_C.CreateVanityAnnouncement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVanityItem**            VanityItem                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPlayerCharacterID**     VanityOwner                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnnouncement_Controller_C::CreateVanityAnnouncement(class UVanityItem** VanityItem, class UPlayerCharacterID** VanityOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Controller.Announcement_Controller_C.CreateVanityAnnouncement");

	UAnnouncement_Controller_C_CreateVanityAnnouncement_Params params;
	params.VanityItem = VanityItem;
	params.VanityOwner = VanityOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announcement_Controller.Announcement_Controller_C.CreatePickaxeAnnouncement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPickaxePart**           PickaxePart                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnnouncement_Controller_C::CreatePickaxeAnnouncement(class UPickaxePart** PickaxePart)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Controller.Announcement_Controller_C.CreatePickaxeAnnouncement");

	UAnnouncement_Controller_C_CreatePickaxeAnnouncement_Params params;
	params.PickaxePart = PickaxePart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announcement_Controller.Announcement_Controller_C.CreateSchematicAnnouncement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USchematic**             InSchematic                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnnouncement_Controller_C::CreateSchematicAnnouncement(class USchematic** InSchematic)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Controller.Announcement_Controller_C.CreateSchematicAnnouncement");

	UAnnouncement_Controller_C_CreateSchematicAnnouncement_Params params;
	params.InSchematic = InSchematic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announcement_Controller.Announcement_Controller_C.CreateVPAnnouncement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVictoryPose**           VictoryPose                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPlayerCharacterID**     VPOwner                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnnouncement_Controller_C::CreateVPAnnouncement(class UVictoryPose** VictoryPose, class UPlayerCharacterID** VPOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Controller.Announcement_Controller_C.CreateVPAnnouncement");

	UAnnouncement_Controller_C_CreateVPAnnouncement_Params params;
	params.VictoryPose = VictoryPose;
	params.VPOwner = VPOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announcement_Controller.Announcement_Controller_C.QueueWidget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget**            InWidget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAnnouncement_Controller_C::QueueWidget(class UUserWidget** InWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Controller.Announcement_Controller_C.QueueWidget");

	UAnnouncement_Controller_C_QueueWidget_Params params;
	params.InWidget = InWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announcement_Controller.Announcement_Controller_C.GetStartDelay
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAnnouncement_Controller_C::GetStartDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Controller.Announcement_Controller_C.GetStartDelay");

	UAnnouncement_Controller_C_GetStartDelay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Announcement_Controller.Announcement_Controller_C.CreateSkinAnnouncement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItemSkin**              Skin                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UItemID**                SkinOwner                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnnouncement_Controller_C::CreateSkinAnnouncement(class UItemSkin** Skin, class UItemID** SkinOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Controller.Announcement_Controller_C.CreateSkinAnnouncement");

	UAnnouncement_Controller_C_CreateSkinAnnouncement_Params params;
	params.Skin = Skin;
	params.SkinOwner = SkinOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announcement_Controller.Announcement_Controller_C.CreateValueAnnouncement
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Name                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           FractionalDigits               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D**             Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           Icon_Tint                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnnouncement_Controller_C::CreateValueAnnouncement(float* Value, struct FText* Name, struct FLinearColor* Color, int* FractionalDigits, class UTexture2D** Icon, struct FLinearColor* Icon_Tint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Controller.Announcement_Controller_C.CreateValueAnnouncement");

	UAnnouncement_Controller_C_CreateValueAnnouncement_Params params;
	params.Value = Value;
	params.Name = Name;
	params.Color = Color;
	params.FractionalDigits = FractionalDigits;
	params.Icon = Icon;
	params.Icon_Tint = Icon_Tint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announcement_Controller.Announcement_Controller_C.CreateTextAnnouncement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D**             Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           Icon_Tint                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnnouncement_Controller_C::CreateTextAnnouncement(struct FText* Text, struct FLinearColor* Color, class UTexture2D** Icon, struct FLinearColor* Icon_Tint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Controller.Announcement_Controller_C.CreateTextAnnouncement");

	UAnnouncement_Controller_C_CreateTextAnnouncement_Params params;
	params.Text = Text;
	params.Color = Color;
	params.Icon = Icon;
	params.Icon_Tint = Icon_Tint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announcement_Controller.Announcement_Controller_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAnnouncement_Controller_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Controller.Announcement_Controller_C.Construct");

	UAnnouncement_Controller_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announcement_Controller.Announcement_Controller_C.OnHealed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnnouncement_Controller_C::OnHealed(float* amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Controller.Announcement_Controller_C.OnHealed");

	UAnnouncement_Controller_C_OnHealed_Params params;
	params.amount = amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announcement_Controller.Announcement_Controller_C.OnResourceFull
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCappedResource**        Resource                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnnouncement_Controller_C::OnResourceFull(class UCappedResource** Resource)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Controller.Announcement_Controller_C.OnResourceFull");

	UAnnouncement_Controller_C_OnResourceFull_Params params;
	params.Resource = Resource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announcement_Controller.Announcement_Controller_C.OnResourceIncreased
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCappedResource**        Resource                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnnouncement_Controller_C::OnResourceIncreased(class UCappedResource** Resource, float* amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Controller.Announcement_Controller_C.OnResourceIncreased");

	UAnnouncement_Controller_C_OnResourceIncreased_Params params;
	params.Resource = Resource;
	params.amount = amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announcement_Controller.Announcement_Controller_C.Do Resource Full
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Name                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UAnnouncement_Controller_C::Do_Resource_Full(struct FText* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Controller.Announcement_Controller_C.Do Resource Full");

	UAnnouncement_Controller_C_Do_Resource_Full_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announcement_Controller.Announcement_Controller_C.OnFullHealthCannotHeal
// (BlueprintCallable, BlueprintEvent)

void UAnnouncement_Controller_C::OnFullHealthCannotHeal()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Controller.Announcement_Controller_C.OnFullHealthCannotHeal");

	UAnnouncement_Controller_C_OnFullHealthCannotHeal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announcement_Controller.Announcement_Controller_C.OnResourceFullStarted
// (BlueprintCallable, BlueprintEvent)

void UAnnouncement_Controller_C::OnResourceFullStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Controller.Announcement_Controller_C.OnResourceFullStarted");

	UAnnouncement_Controller_C_OnResourceFullStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announcement_Controller.Announcement_Controller_C.OnResourceFullFinished
// (BlueprintCallable, BlueprintEvent)

void UAnnouncement_Controller_C::OnResourceFullFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Controller.Announcement_Controller_C.OnResourceFullFinished");

	UAnnouncement_Controller_C_OnResourceFullFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announcement_Controller.Announcement_Controller_C.OnCollectedSkin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItemSkin**              Skin                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UItemID**                ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnnouncement_Controller_C::OnCollectedSkin(class UItemSkin** Skin, class UItemID** ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Controller.Announcement_Controller_C.OnCollectedSkin");

	UAnnouncement_Controller_C_OnCollectedSkin_Params params;
	params.Skin = Skin;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announcement_Controller.Announcement_Controller_C.OnCollectedVictoryPose_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVictoryPose**           pose                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPlayerCharacterID**     characterID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnnouncement_Controller_C::OnCollectedVictoryPose_Event_1(class UVictoryPose** pose, class UPlayerCharacterID** characterID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Controller.Announcement_Controller_C.OnCollectedVictoryPose_Event_1");

	UAnnouncement_Controller_C_OnCollectedVictoryPose_Event_1_Params params;
	params.pose = pose;
	params.characterID = characterID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announcement_Controller.Announcement_Controller_C.OnCollectedSchematic_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USchematic**             Schematic                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnnouncement_Controller_C::OnCollectedSchematic_Event(class USchematic** Schematic)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Controller.Announcement_Controller_C.OnCollectedSchematic_Event");

	UAnnouncement_Controller_C_OnCollectedSchematic_Event_Params params;
	params.Schematic = Schematic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announcement_Controller.Announcement_Controller_C.OnCollectedPickaxePart_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPickaxePart**           PickaxePart                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnnouncement_Controller_C::OnCollectedPickaxePart_Event_1(class UPickaxePart** PickaxePart)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Controller.Announcement_Controller_C.OnCollectedPickaxePart_Event_1");

	UAnnouncement_Controller_C_OnCollectedPickaxePart_Event_1_Params params;
	params.PickaxePart = PickaxePart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announcement_Controller.Announcement_Controller_C.OnCollectedVanityItem_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVanityItem**            Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPlayerCharacterID**     characterID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnnouncement_Controller_C::OnCollectedVanityItem_Event_1(class UVanityItem** Item, class UPlayerCharacterID** characterID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Controller.Announcement_Controller_C.OnCollectedVanityItem_Event_1");

	UAnnouncement_Controller_C_OnCollectedVanityItem_Event_1_Params params;
	params.Item = Item;
	params.characterID = characterID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announcement_Controller.Announcement_Controller_C.ExecuteUbergraph_Announcement_Controller
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnnouncement_Controller_C::ExecuteUbergraph_Announcement_Controller(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Controller.Announcement_Controller_C.ExecuteUbergraph_Announcement_Controller");

	UAnnouncement_Controller_C_ExecuteUbergraph_Announcement_Controller_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
