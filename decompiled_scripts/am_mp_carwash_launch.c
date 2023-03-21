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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	char* sLocal_23 = NULL;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	float fLocal_35 = 0f;
	float fLocal_36 = 0f;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	struct<2> ScriptParam_0 = { 0, 5 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	char* sVar2;
	struct<3> Var3;
	int iVar6;
	
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
	sLocal_23 = "NULL";
	fLocal_26 = 80f;
	fLocal_27 = 140f;
	fLocal_28 = 180f;
	fLocal_31 = 0f;
	fLocal_35 = -0.0375f;
	fLocal_36 = 0.17f;
	iLocal_39 = 3;
	iLocal_43 = 1;
	iLocal_44 = 65;
	iLocal_45 = 49;
	iLocal_46 = 64;
	iVar1 = joaat("carwash1");
	sVar2 = "carwash1";
	Var3 = { ScriptParam_0.f_1[0 /*3*/] };
	if (unk_0x222F76006659B0EB(joaat("am_mp_carwash_launch")) > 1)
	{
		unk_0x9C9E32388A7886A2();
	}
	if (unk_0x393E9918BC37548A())
	{
		unk_0x0A2FDF6E490B25B3();
		unk_0x50E03C7D74E352C4(0);
	}
	else
	{
		unk_0x9C9E32388A7886A2();
	}
	if (Global_2621550)
	{
		if (unk_0x222F76006659B0EB(131838674) == 0)
		{
			unk_0x6396E7A476BDCE7C(131838674);
			while (!unk_0xA8B25C8AF7D75EB3(131838674))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			unk_0xC4BB298BD441BE78(131838674, &ScriptParam_0, 23, 1424);
		}
		unk_0x9C9E32388A7886A2();
	}
	if (func_11(unk_0x0FA8183DAD2B3203()))
	{
	}
	iVar6 = 0;
	while (iVar6 == 0)
	{
		if (((((func_8(unk_0x7C7787D2D7139A85(), 1, 0) || func_7()) || !func_6(unk_0x7C7787D2D7139A85())) || func_5()) || func_4(unk_0x7C7787D2D7139A85())) || func_2(unk_0x7C7787D2D7139A85()))
		{
			iVar6 = 0;
		}
		else
		{
			iVar6 = 1;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	if (unk_0xB7A628320EFF8E47(Var3, func_1(157)) < unk_0xB7A628320EFF8E47(Var3, func_1(156)))
	{
		sVar2 = "carwash2";
	}
	iVar0 = unk_0x9B35D07DCD0F0B43();
	iVar1 = unk_0xA8C462EF7D9DC564(sVar2);
	if (unk_0x222F76006659B0EB(iVar1) == 0)
	{
		unk_0x42B7026D73D48D50(sVar2);
		while (!unk_0x5F74A266852104C3(sVar2))
		{
			unk_0x42B7026D73D48D50(sVar2);
			unk_0x4EDE34FBADD967A6(0);
			if (unk_0x9B35D07DCD0F0B43() > iVar0 + 20000)
			{
				unk_0x9C9E32388A7886A2();
			}
		}
		if (unk_0x5F74A266852104C3(sVar2))
		{
			unk_0xE81651AD79516E48(sVar2, 1424);
			unk_0x0915CE69760E0654(sVar2);
		}
	}
	unk_0x9C9E32388A7886A2();
}

Vector3 func_1(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	return Global_31111[iVar0 /*23*/][0 /*3*/];
}

int func_2(int iParam0)
{
	if (iParam0 != func_3())
	{
		return unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_273.f_389.f_2, 16);
	}
	return 0;
}

int func_3()
{
	return -1;
}

int func_4(int iParam0)
{
	if (iParam0 != func_3())
	{
		return unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_273.f_330, 29);
	}
	return 0;
}

var func_5()
{
	return unk_0xA2BC31158C8CEFD2(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_39.f_18, 0);
}

bool func_6(int iParam0)
{
	return unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_142, 6);
}

int func_7()
{
	int iVar0;
	
	iVar0 = Global_2437549;
	if (unk_0xA2BC31158C8CEFD2(Global_1627738[iVar0 /*38*/].f_14, 0) && Global_1627738[iVar0 /*38*/].f_23 == 2)
	{
		return 1;
	}
	return 0;
}

int func_8(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_9(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1590446[iParam0 /*871*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_9(int iParam0)
{
	return func_10(iParam0);
}

var func_10(int iParam0)
{
	return unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_13.f_1, 0);
}

bool func_11(var uParam0)
{
	if (!unk_0xD4B321D9096B01FC(uParam0))
	{
		return 0;
	}
	return !unk_0xF4B969E0807E76C7(uParam0, 0);
}

