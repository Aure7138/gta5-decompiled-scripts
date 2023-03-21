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
	if (unk_0x17FAADF9916EF741())
	{
		unk_0x829FA4611BD56B44(500);
	}
	if (unk_0xE8A79675302ED812(18))
	{
		func_18();
	}
	unk_0xAEC867D0DBB7AFEB(0);
	func_17();
	func_16();
	func_14();
	func_11();
	while (true)
	{
		unk_0xCC4FE6A016BA0765(255, 255, 255, 255);
		unk_0xB8F3C51875F7BEA3(0.75f, 0.9f);
		unk_0x666751E43D377EAA(0f, 1f);
		func_10(0.05f, 0.63f, "PLCHLD_MISS", 0);
		unk_0xCC4FE6A016BA0765(255, 255, 255, 255);
		unk_0xB8F3C51875F7BEA3(0.4f, 0.45f);
		unk_0x666751E43D377EAA(0f, 1f);
		func_10(0.05f, 0.7f, "PLCHLD_PASS", 0);
		func_1();
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	struct<3> Var0;
	
	if (unk_0x724D816EA203A79E(uLocal_40))
	{
		if ((unk_0x1D403DFADBC2DE3C(uLocal_40, 0) || unk_0x8D66276473ABD7CC(uLocal_40) <= 0) || unk_0x77F5C030D3238E26(uLocal_40) <= 0f)
		{
			func_9(&uLocal_42);
			if (unk_0xB34E411B0A4BF096(uLocal_40))
			{
				unk_0xD87F0F9CDF39238A(uLocal_40);
			}
			if (iLocal_47 == 1)
			{
				Var0 = { unk_0x541C2AEF053615BC(uLocal_40, 0) };
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
		else if (unk_0xB34E411B0A4BF096(uLocal_40))
		{
			unk_0x821B5D8CB4B20F84(uLocal_40, 0.25f);
		}
	}
}

void func_2(var uParam0)
{
	if (unk_0x724D816EA203A79E(*uParam0))
	{
		unk_0x1D403DFADBC2DE3C(*uParam0, 0);
		if (unk_0x5CAE759AE8219D20(*uParam0) && unk_0xB248FAA35ED47DB9(*uParam0, 1))
		{
			unk_0x1E7A09C1710FB071(uParam0);
		}
	}
}

void func_3(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x724D816EA203A79E(*uParam0))
	{
		if (!unk_0x36CEFBE9B745A58D(*uParam0))
		{
			unk_0xB71D41C0310C93DE(*uParam0, 0, 1);
			if (iParam3 == 0)
			{
				unk_0xD999D66C5AFA4BE3(*uParam0);
			}
			unk_0x22321800954A532E(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0x2E35C4FA5F0ED22F(*uParam0, 0);
			}
		}
		unk_0x02537C8C1BEEB477(uParam0);
	}
}

void func_4(var uParam0)
{
	if (unk_0x724D816EA203A79E(*uParam0))
	{
		if (!unk_0x5CAE759AE8219D20(*uParam0))
		{
			unk_0x77815D3407C6700D(*uParam0, 1, 0);
		}
		if (func_6(*uParam0))
		{
			if (unk_0x5CAE759AE8219D20(*uParam0) && unk_0xB248FAA35ED47DB9(*uParam0, 1))
			{
				if (func_5(unk_0xBC25C936A095B5BA()))
				{
					if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), *uParam0, 0))
					{
						unk_0x1E7A09C1710FB071(uParam0);
						return;
					}
				}
				unk_0xCF6040807CC0E4A5(uParam0);
			}
		}
		else
		{
			if (func_5(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), *uParam0, 0))
				{
					unk_0x1E7A09C1710FB071(uParam0);
					return;
				}
			}
			unk_0xCF6040807CC0E4A5(uParam0);
		}
	}
}

int func_5(var uParam0)
{
	if (unk_0x724D816EA203A79E(uParam0))
	{
		if (!unk_0x1D403DFADBC2DE3C(uParam0, 0))
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
		if (unk_0xE59B7F5A03335350(uParam0, 0))
		{
			if (!unk_0x7544D2465B934445(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_7(var uParam0)
{
	if (unk_0x724D816EA203A79E(*uParam0))
	{
		if (!unk_0x1D403DFADBC2DE3C(*uParam0, 0))
		{
			unk_0xB71D41C0310C93DE(*uParam0, 0, 1);
		}
		if (!unk_0x5CAE759AE8219D20(*uParam0))
		{
			unk_0x77815D3407C6700D(*uParam0, 1, 0);
		}
		unk_0xF845620A03C7425B(uParam0);
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
	unk_0xFB3EF14E3F131640(Param0, 8, 1f, 1, 0, 1065353216, 0);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		unk_0xFB3EF14E3F131640(Param0 + Var2[iVar0 /*3*/], 8, 1f, 1, 0, 1065353216, 0);
		iVar0++;
	}
}

void func_9(var uParam0)
{
	if (unk_0x2DA8CA50A72528FB(*uParam0))
	{
		unk_0x0BBAABB52887CF8C(*uParam0, 0);
		unk_0x07B8ECB35A4ED3AC(uParam0);
	}
}

void func_10(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	unk_0x8B371195127AACF2(sParam2);
	unk_0x3A8B9C7B1C825123(fParam0, fParam1, iParam3);
}

void func_11()
{
	func_2(&uLocal_45);
	unk_0xF243B7A14FCFD0F4(iLocal_46);
	while (!unk_0xD6513D668481290A(iLocal_46))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (func_6(uLocal_40))
	{
		uLocal_45 = unk_0x61C05BF08A1E0EFE(iLocal_46, unk_0xA4455714F3DCE207(uLocal_40, 50f, 0f, 15f), 0f, 1, 1, 0);
		unk_0x251A179731E0D207(uLocal_45);
		func_12(uLocal_45, uLocal_40);
		if (func_5(unk_0xBC25C936A095B5BA()))
		{
			unk_0xBD53A029D0155A42(unk_0xBC25C936A095B5BA(), uLocal_45, -1);
			unk_0x2B9AEC08E469E384(0f, 1065353216);
			unk_0xF3F01A78937DC905(0f);
			unk_0x6C5F5B5F6894CCE3(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), 500f, 1, 0, 0, 0);
		}
	}
	unk_0x2CA123B0622F495C(iLocal_46);
}

void func_12(var uParam0, var uParam1)
{
	var uVar0;
	
	uVar0 = func_13(unk_0x541C2AEF053615BC(uParam0, 1), unk_0x541C2AEF053615BC(uParam1, 1), 1);
	unk_0x019CE76D5286C95C(uParam0, uVar0);
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
		fVar0 = unk_0xE8CFCB6B2165523B(fVar1, fVar2);
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
		iVar0 = unk_0x511FE22BCF5353CD(uParam0);
		unk_0xF9C2945DB5BAB4BF(iVar0, iParam1);
		unk_0x12DB69036F6569F7(iVar0, iParam2);
		unk_0x3F5F1772D71D5EC4(iVar0, 1f);
	}
	return iVar0;
}

void func_16()
{
	unk_0xF243B7A14FCFD0F4(iLocal_44);
	while (!unk_0xD6513D668481290A(iLocal_44))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (func_6(uLocal_40))
	{
		uLocal_43 = unk_0xFD8987C090669BD5(uLocal_40, 26, iLocal_44, -1, 1, 1);
		if (func_5(uLocal_43))
		{
			unk_0x2E35C4FA5F0ED22F(uLocal_43, 1);
			unk_0xC8FD3EBBB90E8D7F(uLocal_43, 118, 0);
			unk_0xC8FD3EBBB90E8D7F(uLocal_43, 29, 0);
			unk_0xC8FD3EBBB90E8D7F(uLocal_43, 116, 0);
		}
	}
	if (func_6(uLocal_40))
	{
		unk_0x9E6D037EC3389728(uLocal_40, 1, "Blimp_City", 1);
	}
	unk_0x2CA123B0622F495C(iLocal_44);
}

void func_17()
{
	struct<3> Var0;
	
	if (func_6(uLocal_40) && unk_0xB34E411B0A4BF096(uLocal_40))
	{
		unk_0xD87F0F9CDF39238A(uLocal_40);
	}
	func_9(&uLocal_42);
	func_7(&uLocal_43);
	func_4(&uLocal_40);
	unk_0xF243B7A14FCFD0F4(iLocal_41);
	unk_0x1B2A7C8188ADBE04(1, "Blimp_City");
	while (!unk_0xD6513D668481290A(iLocal_41) || !unk_0x00D24B3F2A5CD22C(1, "Blimp_City"))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	Var0 = { unk_0x765910C3692C24BC(unk_0xE42C8D4CE70B2D35(1, "Blimp_City"), 0f) };
	uLocal_40 = unk_0x61C05BF08A1E0EFE(iLocal_41, unk_0xE69565EA6CC00034(unk_0xE42C8D4CE70B2D35(1, "Blimp_City"), 0f), Var0.f_2, 1, 1, 0);
	unk_0x2CA123B0622F495C(iLocal_41);
}

void func_18()
{
	if (func_6(uLocal_40) && unk_0xB34E411B0A4BF096(uLocal_40))
	{
		unk_0xD87F0F9CDF39238A(uLocal_40);
	}
	unk_0x4F5DAC981AF98536(1, "Blimp_city");
	func_9(&uLocal_42);
	func_3(&uLocal_43, 1, 0, 1);
	func_2(&uLocal_40);
	func_2(&uLocal_45);
	unk_0x2CA123B0622F495C(iLocal_44);
	unk_0x2CA123B0622F495C(iLocal_41);
	unk_0x2CA123B0622F495C(iLocal_46);
	unk_0xAEC867D0DBB7AFEB(6);
	unk_0x95E4B6F3ED223F5A();
}

