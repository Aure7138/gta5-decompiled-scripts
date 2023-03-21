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
	if (unk_0x3E9CABD07B829173())
	{
		unk_0x59C3AC31C7544A28(500);
	}
	if (unk_0x7D9C4B359376D38A(18))
	{
		func_18();
	}
	unk_0xC0EBC1452FCAB15C(0);
	func_17();
	func_16();
	func_14();
	func_11();
	while (true)
	{
		unk_0xA54B8BFDEBB2AF89(255, 255, 255, 255);
		unk_0x8D95497078BC0E3B(0.75f, 0.9f);
		unk_0xEDC290CB1C56B732(0f, 1f);
		func_10(0.05f, 0.63f, "PLCHLD_MISS", 0);
		unk_0xA54B8BFDEBB2AF89(255, 255, 255, 255);
		unk_0x8D95497078BC0E3B(0.4f, 0.45f);
		unk_0xEDC290CB1C56B732(0f, 1f);
		func_10(0.05f, 0.7f, "PLCHLD_PASS", 0);
		func_1();
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	struct<3> Var0;
	
	if (unk_0x6ADD12BF4D6D2587(uLocal_40))
	{
		if ((unk_0x191BE1BC8F26F3C1(uLocal_40, 0) || unk_0xDE523AF6F7B269AB(uLocal_40) <= 0) || unk_0xA7B0253B80B52B2B(uLocal_40) <= 0f)
		{
			func_9(&uLocal_42);
			if (unk_0x8DDE799D31A3D099(uLocal_40))
			{
				unk_0x7674774BB9279265(uLocal_40);
			}
			if (iLocal_47 == 1)
			{
				Var0 = { unk_0xB3328BA8976B416C(uLocal_40, 0) };
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
		else if (unk_0x8DDE799D31A3D099(uLocal_40))
		{
			unk_0x3998782E46B46C7F(uLocal_40, 0.25f);
		}
	}
}

void func_2(var uParam0)
{
	if (unk_0x6ADD12BF4D6D2587(*uParam0))
	{
		unk_0x191BE1BC8F26F3C1(*uParam0, 0);
		if (unk_0x9761C10D57B68069(*uParam0) && unk_0xCB234F3DD6FF9368(*uParam0, 1))
		{
			unk_0x5380482A432E314E(uParam0);
		}
	}
}

void func_3(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x6ADD12BF4D6D2587(*uParam0))
	{
		if (!unk_0x3AB6A1A9084FB0A4(*uParam0))
		{
			unk_0xCFF0CD14B439821D(*uParam0, 0, 1);
			if (iParam3 == 0)
			{
				unk_0x2CEA76A7F93740C6(*uParam0);
			}
			unk_0xE9B3D12A64CC7C1A(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0x771A86309E0CA47B(*uParam0, 0);
			}
		}
		unk_0x486F346ADFE56674(uParam0);
	}
}

void func_4(var uParam0)
{
	if (unk_0x6ADD12BF4D6D2587(*uParam0))
	{
		if (!unk_0x9761C10D57B68069(*uParam0))
		{
			unk_0xDD29FF4BAB8AFF9C(*uParam0, 1, 0);
		}
		if (func_6(*uParam0))
		{
			if (unk_0x9761C10D57B68069(*uParam0) && unk_0xCB234F3DD6FF9368(*uParam0, 1))
			{
				if (func_5(unk_0xFC1458A37D98B502()))
				{
					if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), *uParam0, 0))
					{
						unk_0x5380482A432E314E(uParam0);
						return;
					}
				}
				unk_0xC91FE17AD7353B70(uParam0);
			}
		}
		else
		{
			if (func_5(unk_0xFC1458A37D98B502()))
			{
				if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), *uParam0, 0))
				{
					unk_0x5380482A432E314E(uParam0);
					return;
				}
			}
			unk_0xC91FE17AD7353B70(uParam0);
		}
	}
}

int func_5(var uParam0)
{
	if (unk_0x6ADD12BF4D6D2587(uParam0))
	{
		if (!unk_0x191BE1BC8F26F3C1(uParam0, 0))
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
		if (unk_0xB8DE76287EDC4957(uParam0, 0))
		{
			if (!unk_0x6B4C37F2EEC636CC(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_7(var uParam0)
{
	if (unk_0x6ADD12BF4D6D2587(*uParam0))
	{
		if (!unk_0x191BE1BC8F26F3C1(*uParam0, 0))
		{
			unk_0xCFF0CD14B439821D(*uParam0, 0, 1);
		}
		if (!unk_0x9761C10D57B68069(*uParam0))
		{
			unk_0xDD29FF4BAB8AFF9C(*uParam0, 1, 0);
		}
		unk_0x68433819717660CF(uParam0);
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
	unk_0x91C52DAA1CBF6F0B(Param0, 8, 1f, 1, 0, 1065353216, 0);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		unk_0x91C52DAA1CBF6F0B(Param0 + Var2[iVar0 /*3*/], 8, 1f, 1, 0, 1065353216, 0);
		iVar0++;
	}
}

void func_9(var uParam0)
{
	if (unk_0xA6DECE14FC9A8C51(*uParam0))
	{
		unk_0xAAAC88CC20771601(*uParam0, 0);
		unk_0xE30CF11C0EE14316(uParam0);
	}
}

void func_10(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	unk_0x76CCD673085CBF57(sParam2);
	unk_0xD3DA9EADE295C3C5(fParam0, fParam1, iParam3);
}

void func_11()
{
	func_2(&uLocal_45);
	unk_0x6FF834D85E2DD4C6(iLocal_46);
	while (!unk_0x9A0B2ED5055D3F0B(iLocal_46))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (func_6(uLocal_40))
	{
		uLocal_45 = unk_0xEA60F3B426BB095B(iLocal_46, unk_0x3F90543934DCD7E6(uLocal_40, 50f, 0f, 15f), 0f, 1, 1, 0);
		unk_0xFDAFE1354D61AE41(uLocal_45);
		func_12(uLocal_45, uLocal_40);
		if (func_5(unk_0xFC1458A37D98B502()))
		{
			unk_0xBB0358802AA14401(unk_0xFC1458A37D98B502(), uLocal_45, -1);
			unk_0x7C9705890EF6612E(0f, 1065353216);
			unk_0xBB9A3C553EECB180(0f);
			unk_0x247EAA2E93D4A021(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 500f, 1, 0, 0, 0);
		}
	}
	unk_0x14776E43F90DD454(iLocal_46);
}

void func_12(var uParam0, var uParam1)
{
	var uVar0;
	
	uVar0 = func_13(unk_0xB3328BA8976B416C(uParam0, 1), unk_0xB3328BA8976B416C(uParam1, 1), 1);
	unk_0x48ED7B2293A96722(uParam0, uVar0);
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
		fVar0 = unk_0xF5596B3A7E5F3C68(fVar1, fVar2);
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
		iVar0 = unk_0xCA43F0FC44D9B846(uParam0);
		unk_0xDB6E56C09E5CF0AA(iVar0, iParam1);
		unk_0xF27F72CA15E148EE(iVar0, iParam2);
		unk_0xA5D25D3F884FF516(iVar0, 1f);
	}
	return iVar0;
}

void func_16()
{
	unk_0x6FF834D85E2DD4C6(iLocal_44);
	while (!unk_0x9A0B2ED5055D3F0B(iLocal_44))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (func_6(uLocal_40))
	{
		uLocal_43 = unk_0x00D1A9572426E8DD(uLocal_40, 26, iLocal_44, -1, 1, 1);
		if (func_5(uLocal_43))
		{
			unk_0x771A86309E0CA47B(uLocal_43, 1);
			unk_0xAE01EF4BC84AFE7C(uLocal_43, 118, 0);
			unk_0xAE01EF4BC84AFE7C(uLocal_43, 29, 0);
			unk_0xAE01EF4BC84AFE7C(uLocal_43, 116, 0);
		}
	}
	if (func_6(uLocal_40))
	{
		unk_0x8D7ABC97ED508270(uLocal_40, 1, "Blimp_City", 1);
	}
	unk_0x14776E43F90DD454(iLocal_44);
}

void func_17()
{
	struct<3> Var0;
	
	if (func_6(uLocal_40) && unk_0x8DDE799D31A3D099(uLocal_40))
	{
		unk_0x7674774BB9279265(uLocal_40);
	}
	func_9(&uLocal_42);
	func_7(&uLocal_43);
	func_4(&uLocal_40);
	unk_0x6FF834D85E2DD4C6(iLocal_41);
	unk_0x0D9525F20FB71C52(1, "Blimp_City");
	while (!unk_0x9A0B2ED5055D3F0B(iLocal_41) || !unk_0x0840F461D7BD8859(1, "Blimp_City"))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	Var0 = { unk_0x2D4774FD064005BE(unk_0xBAFDD5E72D902333(1, "Blimp_City"), 0f) };
	uLocal_40 = unk_0xEA60F3B426BB095B(iLocal_41, unk_0xADCBC459AA10697F(unk_0xBAFDD5E72D902333(1, "Blimp_City"), 0f), Var0.f_2, 1, 1, 0);
	unk_0x14776E43F90DD454(iLocal_41);
}

void func_18()
{
	if (func_6(uLocal_40) && unk_0x8DDE799D31A3D099(uLocal_40))
	{
		unk_0x7674774BB9279265(uLocal_40);
	}
	unk_0x9E6ACDF1473CD846(1, "Blimp_city");
	func_9(&uLocal_42);
	func_3(&uLocal_43, 1, 0, 1);
	func_2(&uLocal_40);
	func_2(&uLocal_45);
	unk_0x14776E43F90DD454(iLocal_44);
	unk_0x14776E43F90DD454(iLocal_41);
	unk_0x14776E43F90DD454(iLocal_46);
	unk_0xC0EBC1452FCAB15C(6);
	unk_0x96A3D9A8A4C7AFD4();
}

