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
	if (unk_0xD5DFCA69ACAA20E3())
	{
		unk_0x31E6EB2040318451(500);
	}
	if (unk_0x24862A9CDC8F8874(18))
	{
		func_18();
	}
	unk_0x60B57BC5E51D2074(0);
	func_17();
	func_16();
	func_14();
	func_11();
	while (true)
	{
		unk_0xE626AAE57E9B7B3E(255, 255, 255, 255);
		unk_0x3990B11991B0B160(0.75f, 0.9f);
		unk_0xC745BF043BF36DC4(0f, 1f);
		func_10(0.05f, 0.63f, "PLCHLD_MISS", 0);
		unk_0xE626AAE57E9B7B3E(255, 255, 255, 255);
		unk_0x3990B11991B0B160(0.4f, 0.45f);
		unk_0xC745BF043BF36DC4(0f, 1f);
		func_10(0.05f, 0.7f, "PLCHLD_PASS", 0);
		func_1();
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	struct<3> Var0;
	
	if (unk_0x95CCECA3948CFE7B(uLocal_40))
	{
		if ((unk_0xB6900B8CB0ABBD2B(uLocal_40) || unk_0xD3A4099D2845F152(uLocal_40) <= 0) || unk_0x78FF715074ED0311(uLocal_40) <= 0f)
		{
			func_9(&uLocal_42);
			if (unk_0xD80D5A6EF9C19146(uLocal_40))
			{
				unk_0x400BB22E7B8B5895(uLocal_40);
			}
			if (iLocal_47 == 1)
			{
				Var0 = { unk_0x44C17CCB85A88A1F(uLocal_40, 0) };
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
		else if (unk_0xD80D5A6EF9C19146(uLocal_40))
		{
			unk_0x3CC319FBB198DFA5(uLocal_40, 0.25f);
		}
	}
}

void func_2(var uParam0)
{
	if (unk_0x95CCECA3948CFE7B(*uParam0))
	{
		unk_0xB6900B8CB0ABBD2B(*uParam0);
		if (unk_0xD28A89C669EAD2E4(*uParam0) && unk_0x1F59F772AA90087D(*uParam0, 1))
		{
			unk_0xEF84021B2AB5E334(uParam0);
		}
	}
}

void func_3(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x95CCECA3948CFE7B(*uParam0))
	{
		if (!unk_0x2DC9BA2299B45EA6(*uParam0))
		{
			unk_0x05BE583DF8C6A617(*uParam0, 0);
			if (iParam3 == 0)
			{
				unk_0xEC466B3D55749458(*uParam0);
			}
			unk_0xF1A02DDEC7E15D6E(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0xAAD662D7E0D59F4C(*uParam0, 0);
			}
		}
		unk_0x459A6F82E024C891(uParam0);
	}
}

void func_4(var uParam0)
{
	if (unk_0x95CCECA3948CFE7B(*uParam0))
	{
		if (!unk_0xD28A89C669EAD2E4(*uParam0))
		{
			unk_0xFD816D0E738EB817(*uParam0, 1, 0);
		}
		if (func_6(*uParam0))
		{
			if (unk_0xD28A89C669EAD2E4(*uParam0) && unk_0x1F59F772AA90087D(*uParam0, 1))
			{
				if (func_5(unk_0xC8B93D94F8954288()))
				{
					if (unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), *uParam0, 0))
					{
						unk_0xEF84021B2AB5E334(uParam0);
						return;
					}
				}
				unk_0x95F5F15D238A7F1C(uParam0);
			}
		}
		else
		{
			if (func_5(unk_0xC8B93D94F8954288()))
			{
				if (unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), *uParam0, 0))
				{
					unk_0xEF84021B2AB5E334(uParam0);
					return;
				}
			}
			unk_0x95F5F15D238A7F1C(uParam0);
		}
	}
}

int func_5(var uParam0)
{
	if (unk_0x95CCECA3948CFE7B(uParam0))
	{
		if (!unk_0xB6900B8CB0ABBD2B(uParam0))
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
		if (unk_0x5D42322C7DB888D0(uParam0, 0))
		{
			if (!unk_0x79E944054F6C9DCD(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_7(var uParam0)
{
	if (unk_0x95CCECA3948CFE7B(*uParam0))
	{
		if (!unk_0xB6900B8CB0ABBD2B(*uParam0))
		{
			unk_0x05BE583DF8C6A617(*uParam0, 0);
		}
		if (!unk_0xD28A89C669EAD2E4(*uParam0))
		{
			unk_0xFD816D0E738EB817(*uParam0, 1, 0);
		}
		unk_0x26B3B761603F5232(uParam0);
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
	unk_0x78391100F5CB7BF0(Param0, 8, 1f, 1, 0, 1065353216);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		unk_0x78391100F5CB7BF0(Param0 + Var2[iVar0 /*3*/], 8, 1f, 1, 0, 1065353216);
		iVar0++;
	}
}

void func_9(var uParam0)
{
	if (unk_0x6B4865E08E90ACC5(*uParam0))
	{
		unk_0x706ABF1139F36482(*uParam0, 0);
		unk_0x5356E82C1E5E0C44(uParam0);
	}
}

void func_10(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	unk_0xCF61D472051E607A(sParam2);
	unk_0x0A3C6E0278C7BCEF(fParam0, fParam1, iParam3);
}

void func_11()
{
	func_2(&uLocal_45);
	unk_0x7567CEA8E6B5340B(iLocal_46);
	while (!unk_0x0845149A26DABBA5(iLocal_46))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (func_6(uLocal_40))
	{
		uLocal_45 = unk_0xD53B4DCC7B2C8551(iLocal_46, unk_0xCC31DB73C65552D8(uLocal_40, 50f, 0f, 15f), 0f, 1, 1);
		unk_0x0C7C7F68B472963C(uLocal_45);
		func_12(uLocal_45, uLocal_40);
		if (func_5(unk_0xC8B93D94F8954288()))
		{
			unk_0x6D9DB313D50E9A0D(unk_0xC8B93D94F8954288(), uLocal_45, -1);
			unk_0x0F9FDCEB321235AB(0f, 1065353216);
			unk_0x8C67D2FDE360FBCA(0f);
			unk_0x98371F41D43CDFA9(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), 500f, 1, 0, 0, 0);
		}
	}
	unk_0x4BBD72565A0AF033(iLocal_46);
}

void func_12(var uParam0, var uParam1)
{
	var uVar0;
	
	uVar0 = func_13(unk_0x44C17CCB85A88A1F(uParam0, 1), unk_0x44C17CCB85A88A1F(uParam1, 1), 1);
	unk_0x765E3FA65D011F03(uParam0, uVar0);
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
		fVar0 = unk_0x77491A28B7D799AF(fVar1, fVar2);
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
		iVar0 = unk_0x361E437CE4AD5532(uParam0);
		unk_0xDDD65F4720293225(iVar0, iParam1);
		unk_0xEB19FBC5156AAE3A(iVar0, iParam2);
		unk_0x3734DA1F207E7166(iVar0, 1f);
	}
	return iVar0;
}

void func_16()
{
	unk_0x7567CEA8E6B5340B(iLocal_44);
	while (!unk_0x0845149A26DABBA5(iLocal_44))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (func_6(uLocal_40))
	{
		uLocal_43 = unk_0xDEFAEEE1A4058454(uLocal_40, 26, iLocal_44, -1, 1, 1);
		if (func_5(uLocal_43))
		{
			unk_0xAAD662D7E0D59F4C(uLocal_43, 1);
			unk_0xC778754E36F3FFD6(uLocal_43, 118, 0);
			unk_0xC778754E36F3FFD6(uLocal_43, 29, 0);
			unk_0xC778754E36F3FFD6(uLocal_43, 116, 0);
		}
	}
	if (func_6(uLocal_40))
	{
		unk_0x40564938AEE5A138(uLocal_40, 1, "Blimp_City", 1);
	}
	unk_0x4BBD72565A0AF033(iLocal_44);
}

void func_17()
{
	struct<3> Var0;
	
	if (func_6(uLocal_40) && unk_0xD80D5A6EF9C19146(uLocal_40))
	{
		unk_0x400BB22E7B8B5895(uLocal_40);
	}
	func_9(&uLocal_42);
	func_7(&uLocal_43);
	func_4(&uLocal_40);
	unk_0x7567CEA8E6B5340B(iLocal_41);
	unk_0xC80AE0BAE243FFB1(1, "Blimp_City");
	while (!unk_0x0845149A26DABBA5(iLocal_41) || !unk_0x953ED5E61AD54581(1, "Blimp_City"))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	Var0 = { unk_0x2E3BE6CC74307EC2(unk_0x8293EA452CC6E344(1, "Blimp_City"), 0f) };
	uLocal_40 = unk_0xD53B4DCC7B2C8551(iLocal_41, unk_0x6967699860232038(unk_0x8293EA452CC6E344(1, "Blimp_City"), 0f), Var0.f_2, 1, 1);
	unk_0x4BBD72565A0AF033(iLocal_41);
}

void func_18()
{
	if (func_6(uLocal_40) && unk_0xD80D5A6EF9C19146(uLocal_40))
	{
		unk_0x400BB22E7B8B5895(uLocal_40);
	}
	unk_0x28ED861DB3DADA0B(1, "Blimp_city");
	func_9(&uLocal_42);
	func_3(&uLocal_43, 1, 0, 1);
	func_2(&uLocal_40);
	func_2(&uLocal_45);
	unk_0x4BBD72565A0AF033(iLocal_44);
	unk_0x4BBD72565A0AF033(iLocal_41);
	unk_0x4BBD72565A0AF033(iLocal_46);
	unk_0x60B57BC5E51D2074(6);
	unk_0xA4E0D8FD51F2A6F7();
}

