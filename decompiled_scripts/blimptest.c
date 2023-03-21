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
	if (unk_0x5114FCEE2A997B95())
	{
		unk_0x18D7C8000EDEAAB4(500);
	}
	if (unk_0xB9B05E900D325C36(18))
	{
		func_18();
	}
	unk_0x438B2E6B2BAD6A0D(0);
	func_17();
	func_16();
	func_14();
	func_11();
	while (true)
	{
		unk_0x52D4D0409C49DF8C(255, 255, 255, 255);
		unk_0xD1F2C9FF58856AEC(0.75f, 0.9f);
		unk_0x7A1F4BBECE23C9E3(0f, 1f);
		func_10(0.05f, 0.63f, "PLCHLD_MISS", 0);
		unk_0x52D4D0409C49DF8C(255, 255, 255, 255);
		unk_0xD1F2C9FF58856AEC(0.4f, 0.45f);
		unk_0x7A1F4BBECE23C9E3(0f, 1f);
		func_10(0.05f, 0.7f, "PLCHLD_PASS", 0);
		func_1();
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	struct<3> Var0;
	
	if (unk_0x76B3C79DE564AFC6(uLocal_40))
	{
		if ((unk_0x7A6C051038031EFA(uLocal_40, 0) || unk_0x8DB158934E64B062(uLocal_40) <= 0) || unk_0x9944C9C4DBEAB270(uLocal_40) <= 0f)
		{
			func_9(&uLocal_42);
			if (unk_0x6459D7B9F825DBCF(uLocal_40))
			{
				unk_0x6562DA95A43F027D(uLocal_40);
			}
			if (iLocal_47 == 1)
			{
				Var0 = { unk_0xF177E0DA126D71C8(uLocal_40, 0) };
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
		else if (unk_0x6459D7B9F825DBCF(uLocal_40))
		{
			unk_0xAAE73AE5C4748C44(uLocal_40, 0.25f);
		}
	}
}

void func_2(var uParam0)
{
	if (unk_0x76B3C79DE564AFC6(*uParam0))
	{
		unk_0x7A6C051038031EFA(*uParam0, 0);
		if (unk_0xCC234795142FC2D2(*uParam0) && unk_0xC9FBF92709010AC3(*uParam0, 1))
		{
			unk_0x28BB69BE14577487(uParam0);
		}
	}
}

void func_3(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x76B3C79DE564AFC6(*uParam0))
	{
		if (!unk_0x8682D8A6269E52C9(*uParam0))
		{
			unk_0xCFC7B014BB928D6D(*uParam0, 0, 1);
			if (iParam3 == 0)
			{
				unk_0x2758EB35EE475C21(*uParam0);
			}
			unk_0x390D16BCBFB23E1A(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0xEB9B39274C401888(*uParam0, 0);
			}
		}
		unk_0x056049D9941BD43D(uParam0);
	}
}

void func_4(var uParam0)
{
	if (unk_0x76B3C79DE564AFC6(*uParam0))
	{
		if (!unk_0xCC234795142FC2D2(*uParam0))
		{
			unk_0x1581691D748490F3(*uParam0, 1, 0);
		}
		if (func_6(*uParam0))
		{
			if (unk_0xCC234795142FC2D2(*uParam0) && unk_0xC9FBF92709010AC3(*uParam0, 1))
			{
				if (func_5(unk_0x0031992CA618A445()))
				{
					if (unk_0xA32DC7E16AD1DFB7(unk_0x0031992CA618A445(), *uParam0, 0))
					{
						unk_0x28BB69BE14577487(uParam0);
						return;
					}
				}
				unk_0xE9F8539D5AF6B052(uParam0);
			}
		}
		else
		{
			if (func_5(unk_0x0031992CA618A445()))
			{
				if (unk_0xA32DC7E16AD1DFB7(unk_0x0031992CA618A445(), *uParam0, 0))
				{
					unk_0x28BB69BE14577487(uParam0);
					return;
				}
			}
			unk_0xE9F8539D5AF6B052(uParam0);
		}
	}
}

int func_5(var uParam0)
{
	if (unk_0x76B3C79DE564AFC6(uParam0))
	{
		if (!unk_0x7A6C051038031EFA(uParam0, 0))
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
		if (unk_0x432757A9E7AAFA96(uParam0, 0))
		{
			if (!unk_0xB3D4A3F00B489CC7(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_7(var uParam0)
{
	if (unk_0x76B3C79DE564AFC6(*uParam0))
	{
		if (!unk_0x7A6C051038031EFA(*uParam0, 0))
		{
			unk_0xCFC7B014BB928D6D(*uParam0, 0, 1);
		}
		if (!unk_0xCC234795142FC2D2(*uParam0))
		{
			unk_0x1581691D748490F3(*uParam0, 1, 0);
		}
		unk_0xA50DE967C5813F23(uParam0);
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
	unk_0x0C59299A28D8C1E3(Param0, 8, 1f, 1, 0, 1065353216, 0);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		unk_0x0C59299A28D8C1E3(Param0 + Var2[iVar0 /*3*/], 8, 1f, 1, 0, 1065353216, 0);
		iVar0++;
	}
}

void func_9(var uParam0)
{
	if (unk_0xA761A0B6072010C8(*uParam0))
	{
		unk_0xE4E08EF8CF4469E9(*uParam0, 0);
		unk_0x0C4BDC77192798AE(uParam0);
	}
}

void func_10(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	unk_0x0B8B91F21AE25854(sParam2);
	unk_0x7E43DE6F9866B44B(fParam0, fParam1, iParam3);
}

void func_11()
{
	func_2(&uLocal_45);
	unk_0xBE91026C1FC72180(iLocal_46);
	while (!unk_0x772F801619C83779(iLocal_46))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (func_6(uLocal_40))
	{
		uLocal_45 = unk_0x5129A9193468FF77(iLocal_46, unk_0xCD59EF1D7098A4B4(uLocal_40, 50f, 0f, 15f), 0f, 1, 1, 0);
		unk_0x6CDFA9B556069FD7(uLocal_45);
		func_12(uLocal_45, uLocal_40);
		if (func_5(unk_0x0031992CA618A445()))
		{
			unk_0x7E3C622EB2D4D2E2(unk_0x0031992CA618A445(), uLocal_45, -1);
			unk_0xADE985F6BA90AED5(0f, 1065353216);
			unk_0x31F42B23A853582E(0f);
			unk_0x963AAB0E6FFD7E02(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1), 500f, 1, 0, 0, 0);
		}
	}
	unk_0x9793B48C4C8275F8(iLocal_46);
}

void func_12(var uParam0, var uParam1)
{
	var uVar0;
	
	uVar0 = func_13(unk_0xF177E0DA126D71C8(uParam0, 1), unk_0xF177E0DA126D71C8(uParam1, 1), 1);
	unk_0x5082D1A6D078DB20(uParam0, uVar0);
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
		fVar0 = unk_0x3056DED407548E89(fVar1, fVar2);
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
		iVar0 = unk_0xE80C2D6BF636C6C4(uParam0);
		unk_0x8D60956768933D7C(iVar0, iParam1);
		unk_0xC5B4383DA70A2C1A(iVar0, iParam2);
		unk_0x067D86058370B7EB(iVar0, 1f);
	}
	return iVar0;
}

void func_16()
{
	unk_0xBE91026C1FC72180(iLocal_44);
	while (!unk_0x772F801619C83779(iLocal_44))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (func_6(uLocal_40))
	{
		uLocal_43 = unk_0x4E2448BB7576232A(uLocal_40, 26, iLocal_44, -1, 1, 1);
		if (func_5(uLocal_43))
		{
			unk_0xEB9B39274C401888(uLocal_43, 1);
			unk_0xD6A092D1F1B9A9F1(uLocal_43, 118, 0);
			unk_0xD6A092D1F1B9A9F1(uLocal_43, 29, 0);
			unk_0xD6A092D1F1B9A9F1(uLocal_43, 116, 0);
		}
	}
	if (func_6(uLocal_40))
	{
		unk_0xFC8BF5BFAA9D0B8D(uLocal_40, 1, "Blimp_City", 1);
	}
	unk_0x9793B48C4C8275F8(iLocal_44);
}

void func_17()
{
	struct<3> Var0;
	
	if (func_6(uLocal_40) && unk_0x6459D7B9F825DBCF(uLocal_40))
	{
		unk_0x6562DA95A43F027D(uLocal_40);
	}
	func_9(&uLocal_42);
	func_7(&uLocal_43);
	func_4(&uLocal_40);
	unk_0xBE91026C1FC72180(iLocal_41);
	unk_0xB1F4C6EA4D59C5D0(1, "Blimp_City");
	while (!unk_0x772F801619C83779(iLocal_41) || !unk_0x4B59C07015859DF4(1, "Blimp_City"))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	Var0 = { unk_0x99F021F2F17ABFC2(unk_0x3BF8F973CCD31798(1, "Blimp_City"), 0f) };
	uLocal_40 = unk_0x5129A9193468FF77(iLocal_41, unk_0x71F8AC7E7FB69DDE(unk_0x3BF8F973CCD31798(1, "Blimp_City"), 0f), Var0.f_2, 1, 1, 0);
	unk_0x9793B48C4C8275F8(iLocal_41);
}

void func_18()
{
	if (func_6(uLocal_40) && unk_0x6459D7B9F825DBCF(uLocal_40))
	{
		unk_0x6562DA95A43F027D(uLocal_40);
	}
	unk_0x0EA5304CED5FD5D1(1, "Blimp_city");
	func_9(&uLocal_42);
	func_3(&uLocal_43, 1, 0, 1);
	func_2(&uLocal_40);
	func_2(&uLocal_45);
	unk_0x9793B48C4C8275F8(iLocal_44);
	unk_0x9793B48C4C8275F8(iLocal_41);
	unk_0x9793B48C4C8275F8(iLocal_46);
	unk_0x438B2E6B2BAD6A0D(6);
	unk_0xBEE2834559A8897A();
}

