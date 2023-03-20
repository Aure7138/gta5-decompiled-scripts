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
	if (unk_0xAEF17BDE274A1247())
	{
		unk_0x2D3BB3EF936C4B76(500);
	}
	if (unk_0x89522B8E487D4EF9(18))
	{
		func_18();
	}
	unk_0x8C1CE4F676968E94(0);
	func_17();
	func_16();
	func_14();
	func_11();
	while (true)
	{
		unk_0x63EBA277B22A4C2D(255, 255, 255, 255);
		unk_0x1C00A83A6321F5E9(0.75f, 0.9f);
		unk_0xE2458E4F6B499A9C(0f, 1f);
		func_10(0.05f, 0.63f, "PLCHLD_MISS", 0);
		unk_0x63EBA277B22A4C2D(255, 255, 255, 255);
		unk_0x1C00A83A6321F5E9(0.4f, 0.45f);
		unk_0xE2458E4F6B499A9C(0f, 1f);
		func_10(0.05f, 0.7f, "PLCHLD_PASS", 0);
		func_1();
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	struct<3> Var0;
	
	if (unk_0xD51CFE69539DB6D8(uLocal_40))
	{
		if ((unk_0x76B2D234F1895632(uLocal_40) || unk_0x8219941CC4732B36(uLocal_40) <= 0) || unk_0xF4E8009A18C52112(uLocal_40) <= 0f)
		{
			func_9(&uLocal_42);
			if (unk_0x05BA2AC20921A37E(uLocal_40))
			{
				unk_0x6035B71FBC2881EC(uLocal_40);
			}
			if (iLocal_47 == 1)
			{
				Var0 = { unk_0x1141852D07400777(uLocal_40, 0) };
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
		else if (unk_0x05BA2AC20921A37E(uLocal_40))
		{
			unk_0xEB35A2486E0DCF8F(uLocal_40, 0.25f);
		}
	}
}

void func_2(var uParam0)
{
	if (unk_0xD51CFE69539DB6D8(*uParam0))
	{
		unk_0x76B2D234F1895632(*uParam0);
		if (unk_0x28D33422BA6C479D(*uParam0) && unk_0x4C5CA989AEF3A14C(*uParam0, 1))
		{
			unk_0xC1F2137782A816E9(uParam0);
		}
	}
}

void func_3(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0xD51CFE69539DB6D8(*uParam0))
	{
		if (!unk_0xAF437D7C802AB246(*uParam0))
		{
			unk_0xC602CB510D8B9EAE(*uParam0, 0);
			if (iParam3 == 0)
			{
				unk_0xAA6742AEFA0B2BC4(*uParam0);
			}
			unk_0x8D6671D78D1F569B(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0x9BEE7E791BC4D38B(*uParam0, 0);
			}
		}
		unk_0x506D42CB68AE4EA5(uParam0);
	}
}

void func_4(var uParam0)
{
	if (unk_0xD51CFE69539DB6D8(*uParam0))
	{
		if (!unk_0x28D33422BA6C479D(*uParam0))
		{
			unk_0x20BB4B94CC6DDC9A(*uParam0, 1, 0);
		}
		if (func_6(*uParam0))
		{
			if (unk_0x28D33422BA6C479D(*uParam0) && unk_0x4C5CA989AEF3A14C(*uParam0, 1))
			{
				if (func_5(unk_0xE7869D5D7816A9B6()))
				{
					if (unk_0x8AF655CC5761C7A2(unk_0xE7869D5D7816A9B6(), *uParam0, 0))
					{
						unk_0xC1F2137782A816E9(uParam0);
						return;
					}
				}
				unk_0x9E55BD45B84E7BDC(uParam0);
			}
		}
		else
		{
			if (func_5(unk_0xE7869D5D7816A9B6()))
			{
				if (unk_0x8AF655CC5761C7A2(unk_0xE7869D5D7816A9B6(), *uParam0, 0))
				{
					unk_0xC1F2137782A816E9(uParam0);
					return;
				}
			}
			unk_0x9E55BD45B84E7BDC(uParam0);
		}
	}
}

int func_5(var uParam0)
{
	if (unk_0xD51CFE69539DB6D8(uParam0))
	{
		if (!unk_0x76B2D234F1895632(uParam0))
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
		if (unk_0xC45A34912542C4EB(uParam0, 0))
		{
			if (!unk_0x9DD85FBDD5BC3BF1(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_7(var uParam0)
{
	if (unk_0xD51CFE69539DB6D8(*uParam0))
	{
		if (!unk_0x76B2D234F1895632(*uParam0))
		{
			unk_0xC602CB510D8B9EAE(*uParam0, 0);
		}
		if (!unk_0x28D33422BA6C479D(*uParam0))
		{
			unk_0x20BB4B94CC6DDC9A(*uParam0, 1, 0);
		}
		unk_0x2C9DDB5306DF417C(uParam0);
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
	unk_0xDD20AC898717225A(Param0, 8, 1f, 1, 0, 1065353216);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		unk_0xDD20AC898717225A(Param0 + Var2[iVar0 /*3*/], 8, 1f, 1, 0, 1065353216);
		iVar0++;
	}
}

void func_9(var uParam0)
{
	if (unk_0xD11595488376CB53(*uParam0))
	{
		unk_0x1AD7485666C5160C(*uParam0, 0);
		unk_0x5B62CAB9B0D6ABF1(uParam0);
	}
}

void func_10(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	unk_0x608B6701BEC4527A(sParam2);
	unk_0x2ED77CF10395403E(fParam0, fParam1, iParam3);
}

void func_11()
{
	func_2(&uLocal_45);
	unk_0x801429C020C467BA(iLocal_46);
	while (!unk_0x5053BF6D5604065B(iLocal_46))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (func_6(uLocal_40))
	{
		uLocal_45 = unk_0xD504D1FF5DD2FFD7(iLocal_46, unk_0xBD306D8AFEF4E078(uLocal_40, 50f, 0f, 15f), 0f, 1, 1);
		unk_0x1C2B331EA00BB294(uLocal_45);
		func_12(uLocal_45, uLocal_40);
		if (func_5(unk_0xE7869D5D7816A9B6()))
		{
			unk_0x0CC1C59D57D7212B(unk_0xE7869D5D7816A9B6(), uLocal_45, -1);
			unk_0x6EF372C057320AD4(0f, 1065353216);
			unk_0x7FB81B1DD14A3BE4(0f);
			unk_0xB86B1248EA9B87EA(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1), 500f, 1, 0, 0, 0);
		}
	}
	unk_0x839E9476E54502A2(iLocal_46);
}

void func_12(var uParam0, var uParam1)
{
	var uVar0;
	
	uVar0 = func_13(unk_0x1141852D07400777(uParam0, 1), unk_0x1141852D07400777(uParam1, 1), 1);
	unk_0x151F32CB40BE730C(uParam0, uVar0);
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
		fVar0 = unk_0x891E2ECBAA111C66(fVar1, fVar2);
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
		iVar0 = unk_0xF800CF9298ABC708(uParam0);
		unk_0x4ADC112587E95B61(iVar0, iParam1);
		unk_0xA09285173B92875E(iVar0, iParam2);
		unk_0xFC630C7120A34CE4(iVar0, 1f);
	}
	return iVar0;
}

void func_16()
{
	unk_0x801429C020C467BA(iLocal_44);
	while (!unk_0x5053BF6D5604065B(iLocal_44))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (func_6(uLocal_40))
	{
		uLocal_43 = unk_0xF430A9686E704FA3(uLocal_40, 26, iLocal_44, -1, 1, 1);
		if (func_5(uLocal_43))
		{
			unk_0x9BEE7E791BC4D38B(uLocal_43, 1);
			unk_0x1C26C4B0DAB91B21(uLocal_43, 118, 0);
			unk_0x1C26C4B0DAB91B21(uLocal_43, 29, 0);
			unk_0x1C26C4B0DAB91B21(uLocal_43, 116, 0);
		}
	}
	if (func_6(uLocal_40))
	{
		unk_0x23F0735A27D6F6B3(uLocal_40, 1, "Blimp_City", 1);
	}
	unk_0x839E9476E54502A2(iLocal_44);
}

void func_17()
{
	struct<3> Var0;
	
	if (func_6(uLocal_40) && unk_0x05BA2AC20921A37E(uLocal_40))
	{
		unk_0x6035B71FBC2881EC(uLocal_40);
	}
	func_9(&uLocal_42);
	func_7(&uLocal_43);
	func_4(&uLocal_40);
	unk_0x801429C020C467BA(iLocal_41);
	unk_0xDBDFBE5906702D9E(1, "Blimp_City");
	while (!unk_0x5053BF6D5604065B(iLocal_41) || !unk_0x08F84BB137ADEE81(1, "Blimp_City"))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	Var0 = { unk_0x24D6943BFE0EE704(unk_0x4F804572A750487C(1, "Blimp_City"), 0f) };
	uLocal_40 = unk_0xD504D1FF5DD2FFD7(iLocal_41, unk_0x232293F1B0A3E165(unk_0x4F804572A750487C(1, "Blimp_City"), 0f), Var0.f_2, 1, 1);
	unk_0x839E9476E54502A2(iLocal_41);
}

void func_18()
{
	if (func_6(uLocal_40) && unk_0x05BA2AC20921A37E(uLocal_40))
	{
		unk_0x6035B71FBC2881EC(uLocal_40);
	}
	unk_0xFC8E26A6FE4C2E54(1, "Blimp_city");
	func_9(&uLocal_42);
	func_3(&uLocal_43, 1, 0, 1);
	func_2(&uLocal_40);
	func_2(&uLocal_45);
	unk_0x839E9476E54502A2(iLocal_44);
	unk_0x839E9476E54502A2(iLocal_41);
	unk_0x839E9476E54502A2(iLocal_46);
	unk_0x8C1CE4F676968E94(6);
	unk_0x52F20802944F8DCE();
}

