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
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	int iLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	struct<68> ScriptParam_0 = { 0, 0, 1132396544, 1132396544, 1132396544, 0, -1082130432, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1092616192 } ;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	if (unk_0x89522B8E487D4EF9(3))
	{
		func_17();
	}
	while (true)
	{
		switch (iLocal_45)
		{
			case 0:
				uLocal_46 = unk_0xE3C796DC28BC3254("mission_complete");
				iLocal_45 = 1;
				break;
			
			case 1:
				if (unk_0x4A4851D44CDF03C0(uLocal_46))
				{
					iLocal_45 = 2;
				}
				break;
			
			case 2:
				unk_0x903C61FFA7804294(uLocal_46, "SET_MISSION_TITLE", ScriptParam_0.f_0, ScriptParam_0.f_1, 0, 0, 0);
				unk_0x1B81A9D00D4A5D4C(uLocal_46, "SET_MISSION_TITLE_COLOUR", ScriptParam_0.f_2, ScriptParam_0.f_2, ScriptParam_0.f_2, -1082130432, -1082130432);
				if (ScriptParam_0.f_5.f_1 != -1f && !unk_0x356491C12DAD1A37(ScriptParam_0.f_5.f_2))
				{
					unk_0x60E4B50FF81B130D(uLocal_46, "SET_TOTAL", unk_0xBBDA792448DB5A89(ScriptParam_0.f_5), ScriptParam_0.f_5.f_1, -1f, -1f, -1f, ScriptParam_0.f_5.f_2, 0, 0, 0, 0);
				}
				unk_0x1B81A9D00D4A5D4C(uLocal_46, "SET_MEDAL", unk_0xBBDA792448DB5A89(ScriptParam_0.f_5), -1082130432, -1082130432, -1082130432, -1082130432);
				unk_0x1B81A9D00D4A5D4C(uLocal_46, "SET_SOCIAL_CLUB_INFO", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				iVar0 = 0;
				while (iVar0 < ScriptParam_0.f_66 + 1)
				{
					unk_0xA4F3B84032D46C13(uLocal_46, "SET_DATA_SLOT");
					unk_0x43C93E686A1E92C5(ScriptParam_0.f_9[iVar0 /*7*/]);
					unk_0x43C93E686A1E92C5(ScriptParam_0.f_9[iVar0 /*7*/].f_1);
					if (ScriptParam_0.f_9[iVar0 /*7*/].f_2 == 4)
					{
						unk_0x43C93E686A1E92C5(2);
						unk_0x43C93E686A1E92C5(0);
						unk_0x43C93E686A1E92C5(0);
						unk_0x33D37B75FC2BCC8C("STRING");
						unk_0x96629435C64EFDA2(unk_0xF34EE736CF047844((ScriptParam_0.f_9[iVar0 /*7*/].f_3 * 1000f)), 6);
						unk_0x057886C01DDC535D();
						if (!unk_0x356491C12DAD1A37(ScriptParam_0.f_9[iVar0 /*7*/].f_5))
						{
							func_16(ScriptParam_0.f_9[iVar0 /*7*/].f_5);
						}
					}
					else if (ScriptParam_0.f_9[iVar0 /*7*/].f_2 == 8)
					{
						if (!unk_0x356491C12DAD1A37(ScriptParam_0.f_9[iVar0 /*7*/].f_5) && !unk_0x356491C12DAD1A37(ScriptParam_0.f_9[iVar0 /*7*/].f_6))
						{
							unk_0x33D37B75FC2BCC8C(ScriptParam_0.f_9[iVar0 /*7*/].f_6);
							unk_0x63E8D6007C32E426(ScriptParam_0.f_9[iVar0 /*7*/].f_5);
							unk_0x057886C01DDC535D();
						}
					}
					else
					{
						unk_0x43C93E686A1E92C5(ScriptParam_0.f_9[iVar0 /*7*/].f_2);
						if ((ScriptParam_0.f_9[iVar0 /*7*/].f_3 % 1f) == 0f)
						{
							unk_0x73B039A1CD485226(ScriptParam_0.f_9[iVar0 /*7*/].f_3);
						}
						else
						{
							unk_0x33D37B75FC2BCC8C("NUMBER");
							unk_0x9EA8AC61C9873436(ScriptParam_0.f_9[iVar0 /*7*/].f_3, 2);
							unk_0x057886C01DDC535D();
						}
						if ((ScriptParam_0.f_9[iVar0 /*7*/].f_4 % 1f) == 0f)
						{
							unk_0x73B039A1CD485226(ScriptParam_0.f_9[iVar0 /*7*/].f_4);
						}
						else
						{
							unk_0x33D37B75FC2BCC8C("NUMBER");
							unk_0x9EA8AC61C9873436(ScriptParam_0.f_9[iVar0 /*7*/].f_4, 2);
							unk_0x057886C01DDC535D();
						}
						if (!unk_0x356491C12DAD1A37(ScriptParam_0.f_9[iVar0 /*7*/].f_5))
						{
							func_16(ScriptParam_0.f_9[iVar0 /*7*/].f_5);
						}
						if (!unk_0x356491C12DAD1A37(ScriptParam_0.f_9[iVar0 /*7*/].f_6))
						{
							func_16(ScriptParam_0.f_9[iVar0 /*7*/].f_6);
						}
					}
					unk_0xFF141057ED7B4C73();
					iVar0++;
				}
				if (ScriptParam_0.f_5 != 0 && !unk_0x356491C12DAD1A37(ScriptParam_0.f_5.f_2))
				{
					unk_0xA4F3B84032D46C13(uLocal_46, "SET_TOTAL");
					unk_0x43C93E686A1E92C5(ScriptParam_0.f_5);
					if (!unk_0x356491C12DAD1A37(ScriptParam_0.f_5.f_3))
					{
						func_16(ScriptParam_0.f_5.f_3);
					}
					else
					{
						unk_0x73B039A1CD485226(ScriptParam_0.f_5.f_1);
					}
					func_16(ScriptParam_0.f_5.f_2);
					unk_0xFF141057ED7B4C73();
				}
				unk_0xA4F3B84032D46C13(uLocal_46, "DRAW_MENU_LIST");
				unk_0xFF141057ED7B4C73();
				func_12(1);
				func_9(&uLocal_47);
				if (!func_8(Global_99155.f_17711, 4096))
				{
					func_6(&(Global_99155.f_17711), 4096);
				}
				iLocal_45 = 3;
				break;
			
			case 3:
				if (((func_2(&uLocal_47) > ScriptParam_0.f_67 && ScriptParam_0.f_67 != -1f) || unk_0xAEF17BDE274A1247()) || Global_25178)
				{
					func_17();
				}
				else
				{
					func_1(1);
					unk_0xAF5B7C9C0A5116E9(uLocal_46, 0.1495f, 0.3159f, 0.2021f, 0.5111f, 255, 255, 255, 0, 0);
					if (unk_0xE4CEE54AE3823186(10))
					{
						unk_0x1B7A773B18DF3DB0(10);
					}
				}
				break;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	func_17();
}

void func_1(int iParam0)
{
	Global_69496 = iParam0;
	Global_69497 = iParam0;
}

float func_2(var uParam0)
{
	if (func_5(uParam0))
	{
		if (func_4(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_3(unk_0xB519E5386FBF69E5(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_3(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		return (unk_0xBBDA792448DB5A89(unk_0x9D40BBF80D8F5E8A()) / 1000f);
	}
	if (unk_0x00AAD79B42B3E036())
	{
		iVar0 = unk_0xC7F926248AF8587B();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0x9D40BBF80D8F5E8A()) / 1000f);
}

bool func_4(var uParam0)
{
	return unk_0xB519E5386FBF69E5(*uParam0, 2);
}

bool func_5(var uParam0)
{
	return unk_0xB519E5386FBF69E5(*uParam0, 1);
}

void func_6(var uParam0, int iParam1)
{
	func_7(uParam0, iParam1);
}

void func_7(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_8(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_9(var uParam0)
{
	if (!func_5(uParam0))
	{
		func_10(uParam0);
	}
}

void func_10(var uParam0)
{
	func_11(uParam0, 0f);
}

void func_11(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_3(unk_0xB519E5386FBF69E5(*uParam0, 4)) - fParam1);
	unk_0x9956FB0E4B50ECB8(uParam0, 1);
	unk_0x73817D396768E4C6(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_12(int iParam0)
{
	if (Global_14571)
	{
		func_14(0, 0);
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
	if (!func_13())
	{
		Global_14413.f_1 = 3;
	}
}

int func_13()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_14(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_15(0))
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

int func_15(int iParam0)
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

void func_16(char* sParam0)
{
	unk_0x33D37B75FC2BCC8C(sParam0);
	unk_0x057886C01DDC535D();
}

void func_17()
{
	unk_0x8A86A209B0F0AF7D(&uLocal_46);
	Global_25178 = 0;
	func_1(0);
	unk_0x52F20802944F8DCE();
}

