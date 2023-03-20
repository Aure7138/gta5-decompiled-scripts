#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	bool bLocal_23 = 0;
	bool bLocal_24 = 0;
	float fLocal_25 = 0f;
	bool bLocal_26 = 0;
	bool bLocal_27 = 0;
	float fLocal_28 = 0f;
	bool bLocal_29 = 0;
	bool bLocal_30 = 0;
	float fLocal_31 = 0f;
	bool bLocal_32 = 0;
	bool bLocal_33 = 0;
	float fLocal_34 = 0f;
	bool bLocal_35 = 0;
	bool bLocal_36 = 0;
	float fLocal_37 = 0f;
	bool bLocal_38 = 0;
	bool bLocal_39 = 0;
	float fLocal_40 = 0f;
	bool bLocal_41 = 0;
	bool bLocal_42 = 0;
	float fLocal_43 = 0f;
	bool bLocal_44 = 0;
	bool bLocal_45 = 0;
	float fLocal_46 = 0f;
#endregion

void __EntryFunction__()
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	uLocal_20 = unk_0x3779A616B93955A6(100f, 100f, 30f);
	iLocal_22 = 1;
	fLocal_25 = 0f;
	fLocal_28 = 0f;
	fLocal_31 = 0f;
	fLocal_34 = 0f;
	fLocal_37 = 0f;
	fLocal_40 = 0f;
	fLocal_43 = 0f;
	fLocal_46 = 0f;
	if (unk_0xAEF17BDE274A1247())
	{
		unk_0x2D3BB3EF936C4B76(500);
	}
	if (unk_0x89522B8E487D4EF9(3))
	{
		func_2();
	}
	uLocal_18 = unk_0xE3C796DC28BC3254("p_bubblegum");
	while (!unk_0x4A4851D44CDF03C0(uLocal_18))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (true)
	{
		if (iLocal_21 == 1)
		{
		}
		if (iLocal_22 == 1)
		{
			iLocal_22 = 0;
			uLocal_19 = unk_0x01A00DEC76A48F14("DEFAULT_SCRIPTED_CAMERA", 1);
			if (unk_0xCF686B56FD5328B5(uLocal_19))
			{
				unk_0x011A61B80E2BFA7F(uLocal_19, -160.6632f, -1072.144f, -1615.471f, -89.4999f, -0.2863f, 58.1189f, 45f, 0, 1, 1, 2);
				unk_0xF391BE3B04A9D7D0(uLocal_19, 0.01f);
				unk_0xA3992450765E5135(uLocal_19, 0.02f);
				unk_0x538689EF05955EF7(1, 0, 3000, 1, 0, 0);
			}
			unk_0xD65A9304AF8AC06F(uLocal_20, 66);
		}
		iLocal_21 = 1;
		unk_0xAF5B7C9C0A5116E9(uLocal_18, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
		func_1(uLocal_18);
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1(var uParam0)
{
	if (Global_14392 == 0)
	{
		if (unk_0x6BBF308E0A0F9AD4(2, 189) || unk_0x6BBF308E0A0F9AD4(2, 190))
		{
			Global_14392 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
	}
	else if (unk_0x83666F9FB8FEBD4B() > 50)
	{
		Global_14392 = 0;
	}
	if (Global_14392 == 0)
	{
		if (unk_0x958B4351DD28B142(2, 189))
		{
			bLocal_23 = true;
			fLocal_25 = 1f;
		}
		if (unk_0x6BBF308E0A0F9AD4(2, 189))
		{
			bLocal_23 = true;
			fLocal_25 = 1f;
		}
		if (!unk_0x6BBF308E0A0F9AD4(2, 189))
		{
			bLocal_23 = false;
			fLocal_25 = 0f;
		}
		if (!bLocal_23 == bLocal_24)
		{
			bLocal_24 = bLocal_23;
			unk_0xA4F3B84032D46C13(uParam0, "SET_INPUT_EVENT");
			unk_0x43C93E686A1E92C5(10);
			unk_0x73B039A1CD485226(fLocal_25);
			unk_0xFF141057ED7B4C73();
		}
		if (unk_0x958B4351DD28B142(2, 190))
		{
			bLocal_26 = true;
			fLocal_28 = 1f;
		}
		if (unk_0x6BBF308E0A0F9AD4(2, 190))
		{
			bLocal_26 = true;
			fLocal_28 = 1f;
		}
		if (!unk_0x6BBF308E0A0F9AD4(2, 190))
		{
			bLocal_26 = false;
			fLocal_28 = 0f;
		}
		if (!bLocal_26 == bLocal_27)
		{
			bLocal_27 = bLocal_26;
			unk_0xA4F3B84032D46C13(uParam0, "SET_INPUT_EVENT");
			unk_0x43C93E686A1E92C5(11);
			unk_0x73B039A1CD485226(fLocal_28);
			unk_0xFF141057ED7B4C73();
		}
		if (unk_0x958B4351DD28B142(2, 188))
		{
			bLocal_29 = true;
			fLocal_31 = 1f;
		}
		if (unk_0x6BBF308E0A0F9AD4(2, 188))
		{
			bLocal_29 = true;
			fLocal_31 = 1f;
		}
		if (!unk_0x6BBF308E0A0F9AD4(2, 188))
		{
			bLocal_29 = false;
			fLocal_31 = 0f;
		}
		if (!bLocal_29 == bLocal_30)
		{
			bLocal_30 = bLocal_29;
			unk_0xA4F3B84032D46C13(uParam0, "SET_INPUT_EVENT");
			unk_0x43C93E686A1E92C5(8);
			unk_0x73B039A1CD485226(fLocal_31);
			unk_0xFF141057ED7B4C73();
		}
		if (unk_0x958B4351DD28B142(2, 187))
		{
			bLocal_32 = true;
			fLocal_34 = 1f;
		}
		if (unk_0x6BBF308E0A0F9AD4(2, 187))
		{
			bLocal_32 = true;
			fLocal_34 = 1f;
		}
		if (!unk_0x6BBF308E0A0F9AD4(2, 187))
		{
			bLocal_32 = false;
			fLocal_34 = 0f;
		}
		if (!bLocal_32 == bLocal_33)
		{
			bLocal_33 = bLocal_32;
			unk_0xA4F3B84032D46C13(uParam0, "SET_INPUT_EVENT");
			unk_0x43C93E686A1E92C5(9);
			unk_0x73B039A1CD485226(fLocal_34);
			unk_0xFF141057ED7B4C73();
		}
		if (unk_0x958B4351DD28B142(2, 202))
		{
			bLocal_35 = true;
			fLocal_37 = 1f;
		}
		if (unk_0x6BBF308E0A0F9AD4(2, 202))
		{
			bLocal_35 = true;
			fLocal_37 = 1f;
		}
		if (!unk_0x6BBF308E0A0F9AD4(2, 202))
		{
			bLocal_35 = false;
			fLocal_37 = 0f;
		}
		if (!bLocal_35 == bLocal_36)
		{
			bLocal_36 = bLocal_35;
			unk_0xA4F3B84032D46C13(uParam0, "SET_INPUT_EVENT");
			unk_0x43C93E686A1E92C5(17);
			unk_0x73B039A1CD485226(fLocal_37);
			unk_0xFF141057ED7B4C73();
		}
		if (unk_0x958B4351DD28B142(2, 204))
		{
			bLocal_38 = true;
			fLocal_40 = 1f;
		}
		if (unk_0x6BBF308E0A0F9AD4(2, 204))
		{
			bLocal_38 = true;
			fLocal_40 = 1f;
		}
		if (!unk_0x6BBF308E0A0F9AD4(2, 204))
		{
			bLocal_38 = false;
			fLocal_40 = 0f;
		}
		if (!bLocal_38 == bLocal_39)
		{
			bLocal_39 = bLocal_38;
			unk_0xA4F3B84032D46C13(uParam0, "SET_INPUT_EVENT");
			unk_0x43C93E686A1E92C5(15);
			unk_0x73B039A1CD485226(fLocal_40);
			unk_0xFF141057ED7B4C73();
		}
		if (unk_0x958B4351DD28B142(2, 201))
		{
			bLocal_41 = true;
			fLocal_43 = 1f;
		}
		if (unk_0x6BBF308E0A0F9AD4(2, 201))
		{
			bLocal_41 = true;
			fLocal_43 = 1f;
		}
		if (!unk_0x6BBF308E0A0F9AD4(2, 201))
		{
			bLocal_41 = false;
			fLocal_43 = 0f;
		}
		if (!bLocal_41 == bLocal_42)
		{
			bLocal_42 = bLocal_41;
			unk_0xA4F3B84032D46C13(uParam0, "SET_INPUT_EVENT");
			unk_0x43C93E686A1E92C5(16);
			unk_0x73B039A1CD485226(fLocal_43);
			unk_0xFF141057ED7B4C73();
		}
		if (unk_0x958B4351DD28B142(2, 203))
		{
			bLocal_44 = true;
			fLocal_46 = 1f;
		}
		if (unk_0x6BBF308E0A0F9AD4(2, 203))
		{
			bLocal_44 = true;
			fLocal_46 = 1f;
		}
		if (!unk_0x6BBF308E0A0F9AD4(2, 203))
		{
			bLocal_44 = false;
			fLocal_46 = 0f;
		}
		if (!bLocal_44 == bLocal_45)
		{
			bLocal_45 = bLocal_44;
			unk_0xA4F3B84032D46C13(uParam0, "SET_INPUT_EVENT");
			unk_0x43C93E686A1E92C5(14);
			unk_0x73B039A1CD485226(fLocal_46);
			unk_0xFF141057ED7B4C73();
		}
	}
}

void func_2()
{
	if (unk_0xCF686B56FD5328B5(uLocal_19))
	{
		unk_0x74FF6D08DE291367(uLocal_19, 0);
	}
	unk_0x538689EF05955EF7(0, 0, 3000, 1, 0, 0);
	func_3(0);
	unk_0x307133C47B1565B0(0);
	unk_0x1D208E4A4E1D4FFE(1);
	unk_0x8A86A209B0F0AF7D(&uLocal_18);
	unk_0x52F20802944F8DCE();
}

void func_3(bool bParam0)
{
	if (bParam0)
	{
		func_8();
		if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
		{
			unk_0x9956FB0E4B50ECB8(&Global_2284, 16);
		}
		Global_14413.f_1 = 1;
		if (func_7(0))
		{
			func_4(0);
		}
	}
	else if (Global_14413.f_1 == 1)
	{
		if (!Global_14413.f_1 == 0)
		{
			Global_14413.f_1 = 3;
		}
	}
}

void func_4(int iParam0)
{
	if (Global_14571)
	{
		func_6(0, 0);
	}
	if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
	{
		unk_0x9956FB0E4B50ECB8(&Global_2284, 16);
	}
	if (unk_0xD6F17BA188A65E8F())
	{
		unk_0xDA09A6E60FE9645E(0);
	}
	Global_15712 = 5;
	if (iParam0 == 1)
	{
		unk_0x9956FB0E4B50ECB8(&Global_2283, 30);
	}
	else
	{
		unk_0x73817D396768E4C6(&Global_2283, 30);
	}
	if (!func_5())
	{
		Global_14413.f_1 = 3;
	}
}

int func_5()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_6(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_7(0))
		{
			Global_14571 = 1;
			if (bParam1)
			{
				unk_0x2EA67F1118848733(&Global_14350);
			}
			Global_14341 = { Global_14359[Global_14358 /*3*/] };
			unk_0xD61764696C2259C9(Global_14341);
		}
	}
	else if (Global_14571 == 1)
	{
		Global_14571 = 0;
		Global_14341 = { Global_14366[Global_14358 /*3*/] };
		if (bParam1)
		{
			unk_0xD61764696C2259C9(Global_14350);
		}
		else
		{
			unk_0xD61764696C2259C9(Global_14341);
		}
	}
}

int func_7(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (unk_0xB519E5386FBF69E5(Global_2283, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xFF6891E21E7FC193(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14413.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_8()
{
	if (Global_14413.f_1 == 9 || Global_14413.f_1 == 10)
	{
		Global_15765 = 0;
		Global_15761 = 1;
	}
}

