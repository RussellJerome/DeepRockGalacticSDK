// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ConsoleScreen_Notification_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ConsoleScreen_Notification.ConsoleScreen_Notification_C.SetNotificationIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D**             Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsoleScreen_Notification_C::SetNotificationIcon(class UTexture2D** Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_Notification.ConsoleScreen_Notification_C.SetNotificationIcon");

	UConsoleScreen_Notification_C_SetNotificationIcon_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsoleScreen_Notification.ConsoleScreen_Notification_C.SetNotificationText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// int*                           NewSize                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsoleScreen_Notification_C::SetNotificationText(struct FText* Text, int* NewSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_Notification.ConsoleScreen_Notification_C.SetNotificationText");

	UConsoleScreen_Notification_C_SetNotificationText_Params params;
	params.Text = Text;
	params.NewSize = NewSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsoleScreen_Notification.ConsoleScreen_Notification_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsoleScreen_Notification_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_Notification.ConsoleScreen_Notification_C.PreConstruct");

	UConsoleScreen_Notification_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsoleScreen_Notification.ConsoleScreen_Notification_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UConsoleScreen_Notification_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_Notification.ConsoleScreen_Notification_C.Construct");

	UConsoleScreen_Notification_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsoleScreen_Notification.ConsoleScreen_Notification_C.SetNotificationCategory
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCategoryID**            CategoryID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsoleScreen_Notification_C::SetNotificationCategory(class UCategoryID** CategoryID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_Notification.ConsoleScreen_Notification_C.SetNotificationCategory");

	UConsoleScreen_Notification_C_SetNotificationCategory_Params params;
	params.CategoryID = CategoryID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsoleScreen_Notification.ConsoleScreen_Notification_C.OnItemCategoryChanged
// (BlueprintCallable, BlueprintEvent)

void UConsoleScreen_Notification_C::OnItemCategoryChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_Notification.ConsoleScreen_Notification_C.OnItemCategoryChanged");

	UConsoleScreen_Notification_C_OnItemCategoryChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsoleScreen_Notification.ConsoleScreen_Notification_C.ExecuteUbergraph_ConsoleScreen_Notification
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsoleScreen_Notification_C::ExecuteUbergraph_ConsoleScreen_Notification(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_Notification.ConsoleScreen_Notification_C.ExecuteUbergraph_ConsoleScreen_Notification");

	UConsoleScreen_Notification_C_ExecuteUbergraph_ConsoleScreen_Notification_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
