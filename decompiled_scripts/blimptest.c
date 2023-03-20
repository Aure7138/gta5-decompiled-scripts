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
	if (unk_0x7E3640C27B17457C())
	{
		unk_0xFF11D473E95357D3(500);
	}
	if (unk_0x2170E7BC25114A22(18))
	{
		func_18();
	}
	unk_0x028AA922F2B17B2A(0);
	func_17();
	func_16();
	func_14();
	func_11();
	while (true)
	{
		unk_0xDABBD2E6CAD829E1(255, 255, 255, 255);
		unk_0x3B71612DD3973D97(0.75f, 0.9f);
		unk_0x286B7C12CAFE210E(0f, 1f);
		func_10(0.05f, 0.63f, "PLCHLD_MISS", 0);
		unk_0xDABBD2E6CAD829E1(255, 255, 255, 255);
		unk_0x3B71612DD3973D97(0.4f, 0.45f);
		unk_0x286B7C12CAFE210E(0f, 1f);
		func_10(0.05f, 0.7f, "PLCHLD_PASS", 0);
		func_1();
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	struct<3> Var0;
	
	if (unk_0x7887B64A08364778(uLocal_40))
	{
		if ((unk_0xB529B2A4B7C64D6D(uLocal_40, 0) || unk_0xB38A470B669AC00B(uLocal_40) <= 0) || unk_0xD5ABCE2B8F82DD84(uLocal_40) <= 0f)
		{
			func_9(&uLocal_42);
			if (unk_0xEEF37219FA4E5EAF(uLocal_40))
			{
				unk_0x37DCEBF483A3FF22(uLocal_40);
			}
			if (iLocal_47 == 1)
			{
				Var0 = { unk_0xC086F8D75730FA3A(uLocal_40, 0) };
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
		else if (unk_0xEEF37219FA4E5EAF(uLocal_40))
		{
			unk_0x39408BD94098453B(uLocal_40, 0.25f);
		}
	}
}

void func_2(var uParam0)
{
	if (unk_0x7887B64A08364778(*uParam0))
	{
		unk_0xB529B2A4B7C64D6D(*uParam0, 0);
		if (unk_0x2A29BF08180E7ADF(*uParam0) && unk_0x67F42C4B7B64C593(*uParam0, 1))
		{
			unk_0xB24D3BF5DABD13AA(uParam0);
		}
	}
}

void func_3(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x7887B64A08364778(*uParam0))
	{
		if (!unk_0x00B5B0B68211D89B(*uParam0))
		{
			unk_0x6D20A3AA82585D8C(*uParam0, 0);
			if (iParam3 == 0)
			{
				unk_0xB42E7901B9B18D2A(*uParam0);
			}
			unk_0x7D99F00F48D15ADB(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0x5457695C257D1470(*uParam0, 0);
			}
		}
		unk_0xD4B3FF1E63C36391(uParam0);
	}
}

void func_4(var uParam0)
{
	if (unk_0x7887B64A08364778(*uParam0))
	{
		if (!unk_0x2A29BF08180E7ADF(*uParam0))
		{
			unk_0xC53606C390BE2727(*uParam0, 1, 0);
		}
		if (func_6(*uParam0))
		{
			if (unk_0x2A29BF08180E7ADF(*uParam0) && unk_0x67F42C4B7B64C593(*uParam0, 1))
			{
				if (func_5(unk_0xD5A676B97920D126()))
				{
					if (unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), *uParam0, 0))
					{
						unk_0xB24D3BF5DABD13AA(uParam0);
						return;
					}
				}
				unk_0xAA8D7DFFDAAB903E(uParam0);
			}
		}
		else
		{
			if (func_5(unk_0xD5A676B97920D126()))
			{
				if (unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), *uParam0, 0))
				{
					unk_0xB24D3BF5DABD13AA(uParam0);
					return;
				}
			}
			unk_0xAA8D7DFFDAAB903E(uParam0);
		}
	}
}

int func_5(var uParam0)
{
	if (unk_0x7887B64A08364778(uParam0))
	{
		if (!unk_0xB529B2A4B7C64D6D(uParam0, 0))
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
		if (unk_0xA4DB44DF73EF4FE5(uParam0, 0))
		{
			if (!unk_0xF60B0BCAFB1D30FF(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_7(var uParam0)
{
	if (unk_0x7887B64A08364778(*uParam0))
	{
		if (!unk_0xB529B2A4B7C64D6D(*uParam0, 0))
		{
			unk_0x6D20A3AA82585D8C(*uParam0, 0);
		}
		if (!unk_0x2A29BF08180E7ADF(*uParam0))
		{
			unk_0xC53606C390BE2727(*uParam0, 1, 0);
		}
		unk_0xA2AC407F9132DD0B(uParam0);
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
	unk_0x59EEDA08D13241C9(Param0, 8, 1f, 1, 0, 1065353216, 0);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		unk_0x59EEDA08D13241C9(Param0 + Var2[iVar0 /*3*/], 8, 1f, 1, 0, 1065353216, 0);
		iVar0++;
	}
}

void func_9(var uParam0)
{
	if (unk_0x6901135DDCC4904D(*uParam0))
	{
		unk_0xD947D2F43FD7F6D7(*uParam0, 0);
		unk_0x8A3D7569826A325D(uParam0);
	}
}

void func_10(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	unk_0x7C12F16D6CF17166(sParam2);
	unk_0x7E3D5998E914CAD3(fParam0, fParam1, iParam3);
}

void func_11()
{
	func_2(&uLocal_45);
	unk_0x4ACD1E4CBA159ED1(iLocal_46);
	while (!unk_0x7AD0E9452821C95D(iLocal_46))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (func_6(uLocal_40))
	{
		uLocal_45 = unk_0xDE8A46A23FDCBBFE(iLocal_46, unk_0x7E140C583F91AE2B(uLocal_40, 50f, 0f, 15f), 0f, 1, 1);
		unk_0x26D544204410CB38(uLocal_45);
		func_12(uLocal_45, uLocal_40);
		if (func_5(unk_0xD5A676B97920D126()))
		{
			unk_0x5467EF651716201E(unk_0xD5A676B97920D126(), uLocal_45, -1);
			unk_0xCA3B54980FA9D86F(0f, 1065353216);
			unk_0xB6AE7C18ADC0F901(0f);
			unk_0x500FFA49AC5ABB1D(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1), 500f, 1, 0, 0, 0);
		}
	}
	unk_0x8188DB74546FF484(iLocal_46);
}

void func_12(var uParam0, var uParam1)
{
	var uVar0;
	
	uVar0 = func_13(unk_0xC086F8D75730FA3A(uParam0, 1), unk_0xC086F8D75730FA3A(uParam1, 1), 1);
	unk_0x99569FEC2425586D(uParam0, uVar0);
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
		fVar0 = unk_0x2047800436E7B1E2(fVar1, fVar2);
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
		iVar0 = unk_0x890C68C377CE0CA4(uParam0);
		unk_0x1BDDADB5ACDFD382(iVar0, iParam1);
		unk_0x0D792BA553E57B27(iVar0, iParam2);
		unk_0xF563C3AC64885E69(iVar0, 1f);
	}
	return iVar0;
}

void func_16()
{
	unk_0x4ACD1E4CBA159ED1(iLocal_44);
	while (!unk_0x7AD0E9452821C95D(iLocal_44))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (func_6(uLocal_40))
	{
		uLocal_43 = unk_0x0BD2D83BDCAED6E6(uLocal_40, 26, iLocal_44, -1, 1, 1);
		if (func_5(uLocal_43))
		{
			unk_0x5457695C257D1470(uLocal_43, 1);
			unk_0x237B0CFB6EEBD3BA(uLocal_43, 118, 0);
			unk_0x237B0CFB6EEBD3BA(uLocal_43, 29, 0);
			unk_0x237B0CFB6EEBD3BA(uLocal_43, 116, 0);
		}
	}
	if (func_6(uLocal_40))
	{
		unk_0x94A20FCCDB39D57C(uLocal_40, 1, "Blimp_City", 1);
	}
	unk_0x8188DB74546FF484(iLocal_44);
}

void func_17()
{
	struct<3> Var0;
	
	if (func_6(uLocal_40) && unk_0xEEF37219FA4E5EAF(uLocal_40))
	{
		unk_0x37DCEBF483A3FF22(uLocal_40);
	}
	func_9(&uLocal_42);
	func_7(&uLocal_43);
	func_4(&uLocal_40);
	unk_0x4ACD1E4CBA159ED1(iLocal_41);
	unk_0x3E276C5F51A6C832(1, "Blimp_City");
	while (!unk_0x7AD0E9452821C95D(iLocal_41) || !unk_0x536796E3DCB32FB1(1, "Blimp_City"))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	Var0 = { unk_0x7267CEF9BC9FCF26(unk_0x5E8782AC27968A3B(1, "Blimp_City"), 0f) };
	uLocal_40 = unk_0xDE8A46A23FDCBBFE(iLocal_41, unk_0x36FE89EEB3CCBA7C(unk_0x5E8782AC27968A3B(1, "Blimp_City"), 0f), Var0.f_2, 1, 1);
	unk_0x8188DB74546FF484(iLocal_41);
}

void func_18()
{
	if (func_6(uLocal_40) && unk_0xEEF37219FA4E5EAF(uLocal_40))
	{
		unk_0x37DCEBF483A3FF22(uLocal_40);
	}
	unk_0x66EB3531711325DB(1, "Blimp_city");
	func_9(&uLocal_42);
	func_3(&uLocal_43, 1, 0, 1);
	func_2(&uLocal_40);
	func_2(&uLocal_45);
	unk_0x8188DB74546FF484(iLocal_44);
	unk_0x8188DB74546FF484(iLocal_41);
	unk_0x8188DB74546FF484(iLocal_46);
	unk_0x028AA922F2B17B2A(6);
	unk_0x01DFCA3621B68C4A();
}

