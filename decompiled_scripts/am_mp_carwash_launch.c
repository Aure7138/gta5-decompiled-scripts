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
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	char* sLocal_22 = NULL;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	float fLocal_34 = 0f;
	float fLocal_35 = 0f;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
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
	sLocal_22 = "NULL";
	fLocal_25 = 80f;
	fLocal_26 = 140f;
	fLocal_27 = 180f;
	fLocal_30 = 0f;
	fLocal_34 = -0.0375f;
	fLocal_35 = 0.17f;
	iLocal_38 = 3;
	iLocal_42 = 1;
	iLocal_43 = 65;
	iLocal_44 = 49;
	iLocal_45 = 64;
	iVar1 = joaat("carwash1");
	sVar2 = "carwash1";
	Var3 = { ScriptParam_0.f_1[0 /*3*/] };
	if (unk_0x2C83A9DA6BFFC4F9(joaat("am_mp_carwash_launch")) > 1)
	{
		unk_0x1090044AD1DA76FA();
	}
	if (unk_0x10FAB35428CCC9D7())
	{
		unk_0x9243BAC96D64C050();
		unk_0xAA391C728106F7AF(false);
	}
	else
	{
		unk_0x1090044AD1DA76FA();
	}
	if (Global_2621550)
	{
		if (unk_0x2C83A9DA6BFFC4F9(131838674) == 0)
		{
			unk_0xD62A67D26D9653E6(131838674);
			while (!unk_0x5F0F0C783EB16C04(131838674))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			unk_0xC4BB298BD441BE78(131838674, &ScriptParam_0, 23, 1424);
		}
		unk_0x1090044AD1DA76FA();
	}
	if (func_8(unk_0xD80958FC74E988A6()))
	{
	}
	iVar6 = 0;
	while (iVar6 == 0)
	{
		if (((func_5(unk_0x4F8644AF03D0E0D6(), 1) || func_4()) || !func_3(unk_0x4F8644AF03D0E0D6())) || func_2())
		{
			iVar6 = 0;
		}
		else
		{
			iVar6 = 1;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	if (unk_0xB7A628320EFF8E47(Var3, func_1(156)) < unk_0xB7A628320EFF8E47(Var3, func_1(155)))
	{
		sVar2 = "carwash2";
	}
	iVar0 = unk_0x9CD27B0045628463();
	iVar1 = unk_0xD24D37CC275948CC(sVar2);
	if (unk_0x2C83A9DA6BFFC4F9(iVar1) == 0)
	{
		unk_0x6EB5F71AA68F2E8E(sVar2);
		while (!unk_0xE6CC9F3BA0FB9EF1(sVar2))
		{
			unk_0x6EB5F71AA68F2E8E(sVar2);
			unk_0x4EDE34FBADD967A6(0);
			if (unk_0x9CD27B0045628463() > iVar0 + 20000)
			{
				unk_0x1090044AD1DA76FA();
			}
		}
		if (unk_0xE6CC9F3BA0FB9EF1(sVar2))
		{
			unk_0xE81651AD79516E48(sVar2, 1424);
			unk_0xC90D2DCACD56184C(sVar2);
		}
	}
	unk_0x1090044AD1DA76FA();
}

Vector3 func_1(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	return Global_24745[iVar0 /*23*/][0 /*3*/];
}

bool func_2()
{
	return unk_0xA921AA820C25702F(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_31.f_18, 0);
}

bool func_3(int iParam0)
{
	return unk_0xA921AA820C25702F(Global_1582048[iParam0 /*324*/].f_116, 6);
}

int func_4()
{
	int iVar0;
	
	iVar0 = Global_2421967;
	if (unk_0xA921AA820C25702F(Global_1599457[iVar0 /*32*/], 0) && Global_1599457[iVar0 /*32*/].f_9 == 2)
	{
		return 1;
	}
	return 0;
}

int func_5(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_6(iParam0))
		{
			return 1;
		}
	}
	if (Global_1582048[iParam0 /*324*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_6(int iParam0)
{
	return func_7(iParam0);
}

bool func_7(int iParam0)
{
	return unk_0xA921AA820C25702F(Global_1582048[iParam0 /*324*/].f_13.f_1, 0);
}

bool func_8(int iParam0)
{
	if (!unk_0x7239B21A38F536BA(iParam0))
	{
		return 0;
	}
	return !unk_0x5F9532F3B5CC2551(iParam0);
}

