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
	if (unk_0x3934E959DB2478D3())
	{
		unk_0x4AD174B0D4656163(500);
	}
	if (unk_0x524AF15206846700(18))
	{
		func_18();
	}
	unk_0x193107EFB9C9FD44(0);
	func_17();
	func_16();
	func_14();
	func_11();
	while (true)
	{
		unk_0x09FBFA08412B6B1C(255, 255, 255, 255);
		unk_0xFFA0132BAEE84558(0.75f, 0.9f);
		unk_0x478FAED9828C3447(0f, 1f);
		func_10(0.05f, 0.63f, "PLCHLD_MISS", 0);
		unk_0x09FBFA08412B6B1C(255, 255, 255, 255);
		unk_0xFFA0132BAEE84558(0.4f, 0.45f);
		unk_0x478FAED9828C3447(0f, 1f);
		func_10(0.05f, 0.7f, "PLCHLD_PASS", 0);
		func_1();
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	struct<3> Var0;
	
	if (unk_0xD2CFFE76B625AE55(uLocal_40))
	{
		if ((unk_0x2006A8C1BA2AFE80(uLocal_40, 0) || unk_0x4C3235E6E203703D(uLocal_40) <= 0) || unk_0xB23CB7DBBE38B63C(uLocal_40) <= 0f)
		{
			func_9(&uLocal_42);
			if (unk_0x7E16166EB69398DB(uLocal_40))
			{
				unk_0x6F199D2803D51520(uLocal_40);
			}
			if (iLocal_47 == 1)
			{
				Var0 = { unk_0xA8CFDE65C45F813B(uLocal_40, 0) };
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
		else if (unk_0x7E16166EB69398DB(uLocal_40))
		{
			unk_0x9301AAD27B1B527B(uLocal_40, 0.25f);
		}
	}
}

void func_2(var uParam0)
{
	if (unk_0xD2CFFE76B625AE55(*uParam0))
	{
		unk_0x2006A8C1BA2AFE80(*uParam0, 0);
		if (unk_0xE24B37600DCB21FC(*uParam0) && unk_0xFF65D7BC656BA68E(*uParam0, 1))
		{
			unk_0x9846B4D56971A958(uParam0);
		}
	}
}

void func_3(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0xD2CFFE76B625AE55(*uParam0))
	{
		if (!unk_0xE4F7206742848BAF(*uParam0))
		{
			unk_0xD6FF698E7BC1C003(*uParam0, 0);
			if (iParam3 == 0)
			{
				unk_0xEC500F39EFE9D522(*uParam0);
			}
			unk_0x94DC76C688E7D222(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0xA8ED9F72DC442242(*uParam0, 0);
			}
		}
		unk_0x7E8F7C1D05860F53(uParam0);
	}
}

void func_4(var uParam0)
{
	if (unk_0xD2CFFE76B625AE55(*uParam0))
	{
		if (!unk_0xE24B37600DCB21FC(*uParam0))
		{
			unk_0xAF3355298F537BB0(*uParam0, 1, 0);
		}
		if (func_6(*uParam0))
		{
			if (unk_0xE24B37600DCB21FC(*uParam0) && unk_0xFF65D7BC656BA68E(*uParam0, 1))
			{
				if (func_5(unk_0x27D769C59BC9D030()))
				{
					if (unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), *uParam0, 0))
					{
						unk_0x9846B4D56971A958(uParam0);
						return;
					}
				}
				unk_0xF6E128C391C16F7C(uParam0);
			}
		}
		else
		{
			if (func_5(unk_0x27D769C59BC9D030()))
			{
				if (unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), *uParam0, 0))
				{
					unk_0x9846B4D56971A958(uParam0);
					return;
				}
			}
			unk_0xF6E128C391C16F7C(uParam0);
		}
	}
}

int func_5(var uParam0)
{
	if (unk_0xD2CFFE76B625AE55(uParam0))
	{
		if (!unk_0x2006A8C1BA2AFE80(uParam0, 0))
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
		if (unk_0x0B4DDB992C7BCF57(uParam0, 0))
		{
			if (!unk_0xFA7888B344869306(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_7(var uParam0)
{
	if (unk_0xD2CFFE76B625AE55(*uParam0))
	{
		if (!unk_0x2006A8C1BA2AFE80(*uParam0, 0))
		{
			unk_0xD6FF698E7BC1C003(*uParam0, 0);
		}
		if (!unk_0xE24B37600DCB21FC(*uParam0))
		{
			unk_0xAF3355298F537BB0(*uParam0, 1, 0);
		}
		unk_0xF6ADC11BDB5ECA41(uParam0);
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
	unk_0x704886F0F0CF2BF3(Param0, 8, 1f, 1, 0, 1065353216);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		unk_0x704886F0F0CF2BF3(Param0 + Var2[iVar0 /*3*/], 8, 1f, 1, 0, 1065353216);
		iVar0++;
	}
}

void func_9(var uParam0)
{
	if (unk_0x7B4654D62B7E0E9E(*uParam0))
	{
		unk_0xAB27F3DE6390C749(*uParam0, 0);
		unk_0x9403D0F4C7711241(uParam0);
	}
}

void func_10(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	unk_0x16073B7747C188AC(sParam2);
	unk_0x03BB339EA038BF3F(fParam0, fParam1, iParam3);
}

void func_11()
{
	func_2(&uLocal_45);
	unk_0x97C59C4E8349D15F(iLocal_46);
	while (!unk_0x875098323FCA8FE6(iLocal_46))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (func_6(uLocal_40))
	{
		uLocal_45 = unk_0x4E76306EE6AE7596(iLocal_46, unk_0xD7C4E2CB0B216852(uLocal_40, 50f, 0f, 15f), 0f, 1, 1);
		unk_0x2251EC5E0EBF14D3(uLocal_45);
		func_12(uLocal_45, uLocal_40);
		if (func_5(unk_0x27D769C59BC9D030()))
		{
			unk_0xBD875C7680C64C56(unk_0x27D769C59BC9D030(), uLocal_45, -1);
			unk_0x4523FDDB9926E1D8(0f, 1065353216);
			unk_0x0B28AEB595CB09AF(0f);
			unk_0xEFA71310CAEBAE1F(unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 1), 500f, 1, 0, 0, 0);
		}
	}
	unk_0x0049DE0B34213B12(iLocal_46);
}

void func_12(var uParam0, var uParam1)
{
	var uVar0;
	
	uVar0 = func_13(unk_0xA8CFDE65C45F813B(uParam0, 1), unk_0xA8CFDE65C45F813B(uParam1, 1), 1);
	unk_0xFBDCF3D5834B58D8(uParam0, uVar0);
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
		fVar0 = unk_0x81CC6B68E6E0E55F(fVar1, fVar2);
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
		iVar0 = unk_0xABF4388EB11AD060(uParam0);
		unk_0xD1B211F2EB392B46(iVar0, iParam1);
		unk_0x1FDCAFA848ABB8FA(iVar0, iParam2);
		unk_0xC5B4E9487339A2BB(iVar0, 1f);
	}
	return iVar0;
}

void func_16()
{
	unk_0x97C59C4E8349D15F(iLocal_44);
	while (!unk_0x875098323FCA8FE6(iLocal_44))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (func_6(uLocal_40))
	{
		uLocal_43 = unk_0x9961770283FB23FE(uLocal_40, 26, iLocal_44, -1, 1, 1);
		if (func_5(uLocal_43))
		{
			unk_0xA8ED9F72DC442242(uLocal_43, 1);
			unk_0x56F64CC9254C2E4F(uLocal_43, 118, 0);
			unk_0x56F64CC9254C2E4F(uLocal_43, 29, 0);
			unk_0x56F64CC9254C2E4F(uLocal_43, 116, 0);
		}
	}
	if (func_6(uLocal_40))
	{
		unk_0x5809312A3DC0ED0D(uLocal_40, 1, "Blimp_City", 1);
	}
	unk_0x0049DE0B34213B12(iLocal_44);
}

void func_17()
{
	struct<3> Var0;
	
	if (func_6(uLocal_40) && unk_0x7E16166EB69398DB(uLocal_40))
	{
		unk_0x6F199D2803D51520(uLocal_40);
	}
	func_9(&uLocal_42);
	func_7(&uLocal_43);
	func_4(&uLocal_40);
	unk_0x97C59C4E8349D15F(iLocal_41);
	unk_0xA252A3A0F6CD48EC(1, "Blimp_City");
	while (!unk_0x875098323FCA8FE6(iLocal_41) || !unk_0xEBB7C2AE703AC573(1, "Blimp_City"))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	Var0 = { unk_0xEE301A2D9AD9433C(unk_0x6AAC233AFC1A2D42(1, "Blimp_City"), 0f) };
	uLocal_40 = unk_0x4E76306EE6AE7596(iLocal_41, unk_0xE185B1C4FB7C13C3(unk_0x6AAC233AFC1A2D42(1, "Blimp_City"), 0f), Var0.f_2, 1, 1);
	unk_0x0049DE0B34213B12(iLocal_41);
}

void func_18()
{
	if (func_6(uLocal_40) && unk_0x7E16166EB69398DB(uLocal_40))
	{
		unk_0x6F199D2803D51520(uLocal_40);
	}
	unk_0x1AB756D010D94832(1, "Blimp_city");
	func_9(&uLocal_42);
	func_3(&uLocal_43, 1, 0, 1);
	func_2(&uLocal_40);
	func_2(&uLocal_45);
	unk_0x0049DE0B34213B12(iLocal_44);
	unk_0x0049DE0B34213B12(iLocal_41);
	unk_0x0049DE0B34213B12(iLocal_46);
	unk_0x193107EFB9C9FD44(6);
	unk_0x7C3AA2D27E16E2AD();
}

