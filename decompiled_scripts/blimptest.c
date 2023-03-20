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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	int iLocal_44 = 0;
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
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
	sLocal_18 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_41 = joaat("blimp");
	iLocal_44 = joaat("s_m_m_pilot_02");
	iLocal_46 = joaat("buzzard");
	if (unk_0x4FF34B5B023875E1())
	{
		unk_0x8EA2EEF67922F899(500);
	}
	if (unk_0x9CEB376419A71A96(18))
	{
		func_18();
	}
	unk_0x23C09ED6B6466E40(0);
	func_17();
	func_16();
	func_14();
	func_11();
	while (true)
	{
		unk_0x0D1D7FED407C809B(255, 255, 255, 255);
		unk_0xE885E03E7032CE54(0.75f, 0.9f);
		unk_0x12CC1234B1B7BFC5(0f, 1f);
		func_10(0.05f, 0.63f, "PLCHLD_MISS", 0);
		unk_0x0D1D7FED407C809B(255, 255, 255, 255);
		unk_0xE885E03E7032CE54(0.4f, 0.45f);
		unk_0x12CC1234B1B7BFC5(0f, 1f);
		func_10(0.05f, 0.7f, "PLCHLD_PASS", 0);
		func_1();
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	struct<3> Var0;
	
	if (unk_0xC1EDB61CE0A4B94E(uLocal_40))
	{
		if ((unk_0xBDA1F5E8A36BFA07(uLocal_40, 0) || unk_0x6267527E254067CA(uLocal_40) <= 0) || unk_0xA1B16F2399008FCA(uLocal_40) <= 0f)
		{
			func_9(&uLocal_42);
			if (unk_0xF871F24303F1E6EE(uLocal_40))
			{
				unk_0xE15D10AA2BA3C64D(uLocal_40);
			}
			if (iLocal_47 == 1)
			{
				Var0 = { unk_0xF4745590D18D14B8(uLocal_40, 0) };
				func_8(Var0);
			}
			if (iLocal_47 == 1)
			{
				func_7(&uLocal_43);
				func_4(&uLocal_40);
			}
			else
			{
				func_3(&uLocal_43, 1, 0, 1);
				func_2(&uLocal_40);
			}
		}
		else if (unk_0xF871F24303F1E6EE(uLocal_40))
		{
			unk_0x44C139993A43DE40(uLocal_40, 0.25f);
		}
	}
}

void func_2(var uParam0)
{
	if (unk_0xC1EDB61CE0A4B94E(*uParam0))
	{
		unk_0xBDA1F5E8A36BFA07(*uParam0, 0);
		if (unk_0xC9A01F9792B3D486(*uParam0) && unk_0x7292AF41BC6C644F(*uParam0, 1))
		{
			unk_0x768B37F1452D4834(uParam0);
		}
	}
}

void func_3(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0xC1EDB61CE0A4B94E(*uParam0))
	{
		if (!unk_0xCFC04A38F256EE06(*uParam0))
		{
			unk_0x215FFA3EE011BA3C(*uParam0, 0);
			if (iParam3 == 0)
			{
				unk_0xFB31564A849CEAF4(*uParam0);
			}
			unk_0x97C5D2BB8E47131D(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0xBA63517ADBC1E5E3(*uParam0, 0);
			}
		}
		unk_0x5318F6C4C2B82FA7(uParam0);
	}
}

void func_4(var uParam0)
{
	if (unk_0xC1EDB61CE0A4B94E(*uParam0))
	{
		if (!unk_0xC9A01F9792B3D486(*uParam0))
		{
			unk_0xB7E6C6AE18F1EDA6(*uParam0, 1, 0);
		}
		if (func_6(*uParam0))
		{
			if (unk_0xC9A01F9792B3D486(*uParam0) && unk_0x7292AF41BC6C644F(*uParam0, 1))
			{
				if (func_5(unk_0x06736567F820A39E()))
				{
					if (unk_0x93E49C491856D7AD(unk_0x06736567F820A39E(), *uParam0, 0))
					{
						unk_0x768B37F1452D4834(uParam0);
						return;
					}
				}
				unk_0x5D91DDE62ED9EC5E(uParam0);
			}
		}
		else
		{
			if (func_5(unk_0x06736567F820A39E()))
			{
				if (unk_0x93E49C491856D7AD(unk_0x06736567F820A39E(), *uParam0, 0))
				{
					unk_0x768B37F1452D4834(uParam0);
					return;
				}
			}
			unk_0x5D91DDE62ED9EC5E(uParam0);
		}
	}
}

int func_5(var uParam0)
{
	if (unk_0xC1EDB61CE0A4B94E(uParam0))
	{
		if (!unk_0xBDA1F5E8A36BFA07(uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_6(var uParam0)
{
	if (func_5(uParam0))
	{
		if (unk_0x1B6292EA51632C25(uParam0, 0))
		{
			if (!unk_0x64B7FCF50C031E4A(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_7(var uParam0)
{
	if (unk_0xC1EDB61CE0A4B94E(*uParam0))
	{
		if (!unk_0xBDA1F5E8A36BFA07(*uParam0, 0))
		{
			unk_0x215FFA3EE011BA3C(*uParam0, 0);
		}
		if (!unk_0xC9A01F9792B3D486(*uParam0))
		{
			unk_0xB7E6C6AE18F1EDA6(*uParam0, 1, 0);
		}
		unk_0xDAF1451794AD09A3(uParam0);
	}
}

void func_8(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2[12];
	
	iVar1 = 12;
	Var2[0 /*3*/] = { 5f, 0f, 0f };
	Var2[1 /*3*/] = { 0f, 5f, 0f };
	Var2[2 /*3*/] = { 0f, 0f, 5f };
	Var2[3 /*3*/] = { 5f, 5f, 0f };
	Var2[4 /*3*/] = { 5f, 0f, 5f };
	Var2[5 /*3*/] = { 0f, 5f, 5f };
	Var2[6 /*3*/] = { 20f, 0f, 0f };
	Var2[7 /*3*/] = { 0f, 20f, 0f };
	Var2[8 /*3*/] = { 0f, 0f, 20f };
	Var2[9 /*3*/] = { 20f, 20f, 0f };
	Var2[10 /*3*/] = { 20f, 0f, 20f };
	Var2[11 /*3*/] = { 0f, 20f, 20f };
	unk_0x94CED3A7C1249729(Param0, 8, 1f, 1, 0, 1065353216);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		unk_0x94CED3A7C1249729(Param0 + Var2[iVar0 /*3*/], 8, 1f, 1, 0, 1065353216);
		iVar0++;
	}
}

void func_9(var uParam0)
{
	if (unk_0xCDB4C4200A9B478A(*uParam0))
	{
		unk_0xEEF2AFCBBDD180D3(*uParam0, 0);
		unk_0x2239ED27B231AE2E(uParam0);
	}
}

void func_10(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	unk_0x049CCB8537E77D8B(sParam2);
	unk_0xBF7878373D9EA4E7(fParam0, fParam1, iParam3);
}

void func_11()
{
	func_2(&uLocal_45);
	unk_0xBECC89ACB4E5D4ED(iLocal_46);
	while (!unk_0x5C9FE32E2FF37989(iLocal_46))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (func_6(uLocal_40))
	{
		uLocal_45 = unk_0x75409DE1FC985A9D(iLocal_46, unk_0xF42E2289B33D5C38(uLocal_40, 50f, 0f, 15f), 0f, 1, 1);
		unk_0x93DACDDB16E6515D(uLocal_45);
		func_12(uLocal_45, uLocal_40);
		if (func_5(unk_0x06736567F820A39E()))
		{
			unk_0xE47DEDA2D353E92B(unk_0x06736567F820A39E(), uLocal_45, -1);
			unk_0xA71476EEBE45FF73(0f, 1065353216);
			unk_0x086A554C80BC6C5D(0f);
			unk_0x79D9EC458879E8B8(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1), 500f, 1, 0, 0, 0);
		}
	}
	unk_0x0B87AFC0B2EECA19(iLocal_46);
}

void func_12(var uParam0, var uParam1)
{
	var uVar0;
	
	uVar0 = func_13(unk_0xF4745590D18D14B8(uParam0, 1), unk_0xF4745590D18D14B8(uParam1, 1), 1);
	unk_0xEF32567B3A5047F5(uParam0, uVar0);
}

float func_13(struct<2> Param0, Vector3 vParam2, struct<2> Param3, Vector3 vParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = (Param3.f_0 - Param0.f_0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = unk_0xF862252F5BA87CD3(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam6 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

void func_14()
{
	func_9(&uLocal_42);
	if (func_6(uLocal_40))
	{
		uLocal_42 = func_15(uLocal_40, 1, 5);
	}
}

int func_15(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (func_5(uParam0))
	{
		iVar0 = unk_0xDB8B533098769F4F(uParam0);
		unk_0xF2B74C6AE979DE74(iVar0, iParam1);
		unk_0xA4E8F868373B09C0(iVar0, iParam2);
		unk_0xC5B281EF0EBC2AA6(iVar0, 1f);
	}
	return iVar0;
}

void func_16()
{
	unk_0xBECC89ACB4E5D4ED(iLocal_44);
	while (!unk_0x5C9FE32E2FF37989(iLocal_44))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (func_6(uLocal_40))
	{
		uLocal_43 = unk_0x064835636E49C34D(uLocal_40, 26, iLocal_44, -1, 1, 1);
		if (func_5(uLocal_43))
		{
			unk_0xBA63517ADBC1E5E3(uLocal_43, 1);
			unk_0x6553935614875699(uLocal_43, 118, 0);
			unk_0x6553935614875699(uLocal_43, 29, 0);
			unk_0x6553935614875699(uLocal_43, 116, 0);
		}
	}
	if (func_6(uLocal_40))
	{
		unk_0x43B92BA48253ACDE(uLocal_40, 1, "Blimp_City", 1);
	}
	unk_0x0B87AFC0B2EECA19(iLocal_44);
}

void func_17()
{
	struct<3> Var0;
	
	if (func_6(uLocal_40) && unk_0xF871F24303F1E6EE(uLocal_40))
	{
		unk_0xE15D10AA2BA3C64D(uLocal_40);
	}
	func_9(&uLocal_42);
	func_7(&uLocal_43);
	func_4(&uLocal_40);
	unk_0xBECC89ACB4E5D4ED(iLocal_41);
	unk_0x59D46EE810784603(1, "Blimp_City");
	while (!unk_0x5C9FE32E2FF37989(iLocal_41) || !unk_0xD71BD2B3964F6EDA(1, "Blimp_City"))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	Var0 = { unk_0x6297E7AD4F865966(unk_0x054A81330530892E(1, "Blimp_City"), 0f) };
	uLocal_40 = unk_0x75409DE1FC985A9D(iLocal_41, unk_0xD8E64318E6173659(unk_0x054A81330530892E(1, "Blimp_City"), 0f), Var0.f_2, 1, 1);
	unk_0x0B87AFC0B2EECA19(iLocal_41);
}

void func_18()
{
	if (func_6(uLocal_40) && unk_0xF871F24303F1E6EE(uLocal_40))
	{
		unk_0xE15D10AA2BA3C64D(uLocal_40);
	}
	unk_0x271ED3A59A006150(1, "Blimp_city");
	func_9(&uLocal_42);
	func_3(&uLocal_43, 1, 0, 1);
	func_2(&uLocal_40);
	func_2(&uLocal_45);
	unk_0x0B87AFC0B2EECA19(iLocal_44);
	unk_0x0B87AFC0B2EECA19(iLocal_41);
	unk_0x0B87AFC0B2EECA19(iLocal_46);
	unk_0x23C09ED6B6466E40(6);
	unk_0xF5DF8F3392CDD07B();
}

