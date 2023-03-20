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
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
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
	if (unk_0x4B4BD87E3D30C50D(83))
	{
		func_6();
	}
	if ((!Global_1 && !unk_0x2C063B4379F0C076()) && unk_0x112D1FC69005050F())
	{
		unk_0xBE2F8BFF037AA9F4(1);
		if (!unk_0x2CC731F9E664299E())
		{
			if (!unk_0x8DD09BB8ACF9E623())
			{
				unk_0x16AA81661A0624FB(800);
			}
		}
		iLocal_20 = unk_0x2F14983962462691("MP_BIG_MESSAGE_FREEMODE");
		iLocal_21 = unk_0x2F14983962462691("INSTRUCTIONAL_BUTTONS");
		while (!unk_0xEDE19C6ED6E2F478(iLocal_20) || !unk_0xEDE19C6ED6E2F478(iLocal_21))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x758017413321C628(iLocal_20, "SHOW_CENTERED_MP_MESSAGE");
		func_5("INSTALL_COMP");
		unk_0x098CA28C04E62E55();
		unk_0x758017413321C628(iLocal_21, "SET_DATA_SLOT_EMPTY");
		unk_0x098CA28C04E62E55();
		unk_0x758017413321C628(iLocal_21, "SET_DATA_SLOT");
		unk_0x4D57F6B69CCB6D95(0);
		func_4(unk_0x7DD16933DB23299D(2, 201, 1));
		func_5("HUD_CONTINUE");
		unk_0x098CA28C04E62E55();
		unk_0x758017413321C628(iLocal_21, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0x360FCC9A8FE84159(0);
		unk_0x098CA28C04E62E55();
		while (!unk_0x2CC731F9E664299E())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xE208556DAFC98064();
		while (!iLocal_22)
		{
			unk_0x46A5D995D57103EA();
			unk_0x227C85DAD96E2942(7);
			unk_0xE636AA747867BC3D(iLocal_20, 255, 255, 255, 0, 0);
			unk_0xE636AA747867BC3D(iLocal_21, 255, 255, 255, 0, 0);
			if (unk_0xE721293454745300(2, 201))
			{
				iLocal_22 = 1;
			}
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xBE2F8BFF037AA9F4(0);
		func_3(1, 1);
		func_1();
	}
	Global_69586.f_1 = 0;
	unk_0x573691DB812DC8AA(&(Global_99250.f_8634.f_25), 0);
	func_6();
}

int func_1()
{
	if (func_2(0))
	{
		return 0;
	}
	if (Global_91145.f_8)
	{
		if (Global_91145.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91145.f_10 > 1)
	{
		return 0;
	}
	Global_91145.f_10++;
	return 1;
}

int func_2(bool bParam0)
{
	if (!bParam0 && unk_0xB1A77D5C890711F9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xB56FEBC510E7E9DE(Global_69565, 0);
}

void func_3(int iParam0, int iParam1)
{
	Global_91145.f_7 = iParam0;
	Global_91145.f_8 = iParam1;
}

void func_4(var uParam0)
{
	unk_0x2747B3A98BE1082E(uParam0);
}

void func_5(char* sParam0)
{
	unk_0xC976485333F81CE8(sParam0);
	unk_0xC8C5D5B9E15EB2E2();
}

void func_6()
{
	if (iLocal_20 != 0)
	{
		unk_0xD2E03CEA477E4E3D(&iLocal_20);
	}
	if (iLocal_21 != 0)
	{
		unk_0xD2E03CEA477E4E3D(&iLocal_21);
	}
	unk_0x227C85DAD96E2942(4);
	unk_0xBE2F8BFF037AA9F4(0);
	unk_0x2F798BA2098FDADE();
}

