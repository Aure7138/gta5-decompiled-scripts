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
	char* sLocal_17 = NULL;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
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
	sLocal_17 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_34 = 3;
	iLocal_40 = joaat("blimp");
	iLocal_43 = joaat("s_m_m_pilot_02");
	iLocal_45 = joaat("buzzard");
	if (unk_0x29AFA2493D7C23D0())
	{
		unk_0xAE2B1C30F8A0B67C(500);
	}
	if (unk_0x8D841F1DD3FA555F(18))
	{
		func_18();
	}
	unk_0x9BAE0FF806E5C2E5(0);
	func_17();
	func_16();
	func_14();
	func_11();
	while (true)
	{
		unk_0x00793A77639A3BAC(255, 255, 255, 255);
		unk_0x73984E9D23C977BA(0.75f, 0.9f);
		unk_0xD90CB3CB1328F03F(0f, 1f);
		func_10(0.05f, 0.63f, "PLCHLD_MISS", 0);
		unk_0x00793A77639A3BAC(255, 255, 255, 255);
		unk_0x73984E9D23C977BA(0.4f, 0.45f);
		unk_0xD90CB3CB1328F03F(0f, 1f);
		func_10(0.05f, 0.7f, "PLCHLD_PASS", 0);
		func_1();
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	struct<3> Var0;
	
	if (unk_0x86CCCD2FAE9D5E65(uLocal_39))
	{
		if ((unk_0x930F8FBB8E9537CC(uLocal_39) || unk_0x4DC6EF945236C0F7(uLocal_39) <= 0) || unk_0xFF463728B23A0037(uLocal_39) <= 0f)
		{
			func_9(&uLocal_41);
			if (unk_0xE20321A2D7F8960C(uLocal_39))
			{
				unk_0x05ACEF4F060B9B4E(uLocal_39);
			}
			if (iLocal_46 == 1)
			{
				Var0 = { unk_0xB6AE0DAE06D56288(uLocal_39, 0) };
				func_8(Var0);
			}
			if (iLocal_46 == 1)
			{
				func_7(&uLocal_42);
				func_4(&uLocal_39);
			}
			else
			{
				func_3(&uLocal_42, 1, 0, 1);
				func_2(&uLocal_39);
			}
		}
		else if (unk_0xE20321A2D7F8960C(uLocal_39))
		{
			unk_0x1248DFEEEEE716FC(uLocal_39, 0.25f);
		}
	}
}

void func_2(var uParam0)
{
	if (unk_0x86CCCD2FAE9D5E65(*uParam0))
	{
		unk_0x930F8FBB8E9537CC(*uParam0);
		if (unk_0xE86442941AE40E75(*uParam0) && unk_0x46AE53A47E5D03D5(*uParam0, 1))
		{
			unk_0xE0913C01F5C0CC3D(uParam0);
		}
	}
}

void func_3(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x86CCCD2FAE9D5E65(*uParam0))
	{
		if (!unk_0x5FEB513A4402FD59(*uParam0))
		{
			unk_0x3B7AFF7DCE22C1CF(*uParam0, 0);
			if (iParam3 == 0)
			{
				unk_0x4191220706130B86(*uParam0);
			}
			unk_0x6CB332CB31E9FA96(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0x1D15D99A10A15334(*uParam0, 0);
			}
		}
		unk_0x71A8BCA218722FA1(uParam0);
	}
}

void func_4(var uParam0)
{
	if (unk_0x86CCCD2FAE9D5E65(*uParam0))
	{
		if (!unk_0xE86442941AE40E75(*uParam0))
		{
			unk_0xD768713E73165208(*uParam0, 1, 0);
		}
		if (func_6(*uParam0))
		{
			if (unk_0xE86442941AE40E75(*uParam0) && unk_0x46AE53A47E5D03D5(*uParam0, 1))
			{
				if (func_5(unk_0x81873881071CD9FE()))
				{
					if (unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), *uParam0, 0))
					{
						unk_0xE0913C01F5C0CC3D(uParam0);
						return;
					}
				}
				unk_0x5D00E836B6BE8693(uParam0);
			}
		}
		else
		{
			if (func_5(unk_0x81873881071CD9FE()))
			{
				if (unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), *uParam0, 0))
				{
					unk_0xE0913C01F5C0CC3D(uParam0);
					return;
				}
			}
			unk_0x5D00E836B6BE8693(uParam0);
		}
	}
}

int func_5(var uParam0)
{
	if (unk_0x86CCCD2FAE9D5E65(uParam0))
	{
		if (!unk_0x930F8FBB8E9537CC(uParam0))
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
		if (unk_0x7404950238A154C2(uParam0, 0))
		{
			if (!unk_0x2D2289DC6C760F31(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_7(var uParam0)
{
	if (unk_0x86CCCD2FAE9D5E65(*uParam0))
	{
		if (!unk_0x930F8FBB8E9537CC(*uParam0))
		{
			unk_0x3B7AFF7DCE22C1CF(*uParam0, 0);
		}
		if (!unk_0xE86442941AE40E75(*uParam0))
		{
			unk_0xD768713E73165208(*uParam0, 1, 0);
		}
		unk_0xF210D34D7F7152ED(uParam0);
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
	unk_0x337FDC38F86A8A02(Param0, 8, 1f, 1, 0, 1065353216);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		unk_0x337FDC38F86A8A02(Param0 + Var2[iVar0 /*3*/], 8, 1f, 1, 0, 1065353216);
		iVar0++;
	}
}

void func_9(var uParam0)
{
	if (unk_0xFBACB273AA628CC5(*uParam0))
	{
		unk_0x116FDB7E27590C7F(*uParam0, 0);
		unk_0x0A8175F24237A3D4(uParam0);
	}
}

void func_10(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	unk_0xA004CFE21CA812EA(sParam2);
	unk_0x834054753F171911(fParam0, fParam1, iParam3);
}

void func_11()
{
	func_2(&uLocal_44);
	unk_0x32A12757CBF48A33(iLocal_45);
	while (!unk_0x33ACB874CECA2D4B(iLocal_45))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (func_6(uLocal_39))
	{
		uLocal_44 = unk_0xE00F8DEA9778FC87(iLocal_45, unk_0xB07F27EC3B05E4EA(uLocal_39, 50f, 0f, 15f), 0f, 1, 1);
		unk_0x50638C188ABB218B(uLocal_44);
		func_12(uLocal_44, uLocal_39);
		if (func_5(unk_0x81873881071CD9FE()))
		{
			unk_0xDC81A805934C85CD(unk_0x81873881071CD9FE(), uLocal_44, -1);
			unk_0xEAB527164AD92BF3(0f, 1065353216);
			unk_0x270066FDBAF3A458(0f);
			unk_0x7C6BF0CD5D7454C9(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), 500f, 1, 0, 0, 0);
		}
	}
	unk_0x887F4488DA99FD21(iLocal_45);
}

void func_12(var uParam0, var uParam1)
{
	var uVar0;
	
	uVar0 = func_13(unk_0xB6AE0DAE06D56288(uParam0, 1), unk_0xB6AE0DAE06D56288(uParam1, 1), 1);
	unk_0xC24172029826A66F(uParam0, uVar0);
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
		fVar0 = unk_0x43A2E703A9A654DB(fVar1, fVar2);
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
	func_9(&uLocal_41);
	if (func_6(uLocal_39))
	{
		uLocal_41 = func_15(uLocal_39, 1, 5);
	}
}

int func_15(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (func_5(uParam0))
	{
		iVar0 = unk_0xE122DDAE9E94767B(uParam0);
		unk_0xD5CD0E7173F858FF(iVar0, iParam1);
		unk_0xCB015C3E2E01CA1C(iVar0, iParam2);
		unk_0xD6DF56BB9537BCC5(iVar0, 1f);
	}
	return iVar0;
}

void func_16()
{
	unk_0x32A12757CBF48A33(iLocal_43);
	while (!unk_0x33ACB874CECA2D4B(iLocal_43))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (func_6(uLocal_39))
	{
		uLocal_42 = unk_0x4D135F3066A9BF9C(uLocal_39, 26, iLocal_43, -1, 1, 1);
		if (func_5(uLocal_42))
		{
			unk_0x1D15D99A10A15334(uLocal_42, 1);
			unk_0xCE566DBDCACD245E(uLocal_42, 118, 0);
			unk_0xCE566DBDCACD245E(uLocal_42, 29, 0);
			unk_0xCE566DBDCACD245E(uLocal_42, 116, 0);
		}
	}
	if (func_6(uLocal_39))
	{
		unk_0xC8F62804B10A6701(uLocal_39, 1, "Blimp_City", 1);
	}
	unk_0x887F4488DA99FD21(iLocal_43);
}

void func_17()
{
	struct<3> Var0;
	
	if (func_6(uLocal_39) && unk_0xE20321A2D7F8960C(uLocal_39))
	{
		unk_0x05ACEF4F060B9B4E(uLocal_39);
	}
	func_9(&uLocal_41);
	func_7(&uLocal_42);
	func_4(&uLocal_39);
	unk_0x32A12757CBF48A33(iLocal_40);
	unk_0x995DCDA796A47049(1, "Blimp_City");
	while (!unk_0x33ACB874CECA2D4B(iLocal_40) || !unk_0x498998F33897432E(1, "Blimp_City"))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	Var0 = { unk_0xDABA98966698B274(unk_0xFCFD8E6E4FB394AD(1, "Blimp_City"), 0f) };
	uLocal_39 = unk_0xE00F8DEA9778FC87(iLocal_40, unk_0x13F97659039A0D0E(unk_0xFCFD8E6E4FB394AD(1, "Blimp_City"), 0f), Var0.f_2, 1, 1);
	unk_0x887F4488DA99FD21(iLocal_40);
}

void func_18()
{
	if (func_6(uLocal_39) && unk_0xE20321A2D7F8960C(uLocal_39))
	{
		unk_0x05ACEF4F060B9B4E(uLocal_39);
	}
	unk_0x4855165A2773595C(1, "Blimp_city");
	func_9(&uLocal_41);
	func_3(&uLocal_42, 1, 0, 1);
	func_2(&uLocal_39);
	func_2(&uLocal_44);
	unk_0x887F4488DA99FD21(iLocal_43);
	unk_0x887F4488DA99FD21(iLocal_40);
	unk_0x887F4488DA99FD21(iLocal_45);
	unk_0x9BAE0FF806E5C2E5(6);
	unk_0xC23A229F78DAD92A();
}

