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
	if (unk_0xF4EE9D6C8E60AE22())
	{
		unk_0x9B0467159FAB9F56(500);
	}
	if (unk_0x78BF2001491914AC(18))
	{
		func_18();
	}
	unk_0xE0125DCD8DB3EFC3(0);
	func_17();
	func_16();
	func_14();
	func_11();
	while (true)
	{
		unk_0x7A83819F1CCA85D1(255, 255, 255, 255);
		unk_0xA039A39804D96298(0.75f, 0.9f);
		unk_0x91583F702E592B88(0f, 1f);
		func_10(0.05f, 0.63f, "PLCHLD_MISS", 0);
		unk_0x7A83819F1CCA85D1(255, 255, 255, 255);
		unk_0xA039A39804D96298(0.4f, 0.45f);
		unk_0x91583F702E592B88(0f, 1f);
		func_10(0.05f, 0.7f, "PLCHLD_PASS", 0);
		func_1();
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	struct<3> Var0;
	
	if (unk_0x2137828D03306CAF(uLocal_40))
	{
		if ((unk_0xA9A04898798AE9E6(uLocal_40, 0) || unk_0xE86A53C202B21FAB(uLocal_40) <= 0) || unk_0xB01B1648698791BB(uLocal_40) <= 0f)
		{
			func_9(&uLocal_42);
			if (unk_0x2B5189D75DFE6D55(uLocal_40))
			{
				unk_0xB3AE8D41B88ED362(uLocal_40);
			}
			if (iLocal_47 == 1)
			{
				Var0 = { unk_0xD1EE0E9FCD74A37B(uLocal_40, 0) };
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
		else if (unk_0x2B5189D75DFE6D55(uLocal_40))
		{
			unk_0xA3C9B76D7AC54190(uLocal_40, 0.25f);
		}
	}
}

void func_2(var uParam0)
{
	if (unk_0x2137828D03306CAF(*uParam0))
	{
		unk_0xA9A04898798AE9E6(*uParam0, 0);
		if (unk_0x03322C3918511AA0(*uParam0) && unk_0xDDB64A4460B8504C(*uParam0, 1))
		{
			unk_0xFECCD8AF38671477(uParam0);
		}
	}
}

void func_3(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x2137828D03306CAF(*uParam0))
	{
		if (!unk_0x769F0F6444C1ABE0(*uParam0))
		{
			unk_0xD44F61F61676BA14(*uParam0, 0);
			if (iParam3 == 0)
			{
				unk_0xEE46A5BD4C4846BF(*uParam0);
			}
			unk_0x015B50BC21C88C8C(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0x4C47904AE69D7393(*uParam0, 0);
			}
		}
		unk_0x6C559FCFFD2365CB(uParam0);
	}
}

void func_4(var uParam0)
{
	if (unk_0x2137828D03306CAF(*uParam0))
	{
		if (!unk_0x03322C3918511AA0(*uParam0))
		{
			unk_0x216B434C1A609F5B(*uParam0, 1, 0);
		}
		if (func_6(*uParam0))
		{
			if (unk_0x03322C3918511AA0(*uParam0) && unk_0xDDB64A4460B8504C(*uParam0, 1))
			{
				if (func_5(unk_0x2A5EB8B0FE590B91()))
				{
					if (unk_0x5B9B499C707C2A95(unk_0x2A5EB8B0FE590B91(), *uParam0, 0))
					{
						unk_0xFECCD8AF38671477(uParam0);
						return;
					}
				}
				unk_0xA613FDAC42DBBFAD(uParam0);
			}
		}
		else
		{
			if (func_5(unk_0x2A5EB8B0FE590B91()))
			{
				if (unk_0x5B9B499C707C2A95(unk_0x2A5EB8B0FE590B91(), *uParam0, 0))
				{
					unk_0xFECCD8AF38671477(uParam0);
					return;
				}
			}
			unk_0xA613FDAC42DBBFAD(uParam0);
		}
	}
}

int func_5(var uParam0)
{
	if (unk_0x2137828D03306CAF(uParam0))
	{
		if (!unk_0xA9A04898798AE9E6(uParam0, 0))
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
		if (unk_0x7FAC45D56235AB39(uParam0, 0))
		{
			if (!unk_0xFB4BF464D20ED824(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_7(var uParam0)
{
	if (unk_0x2137828D03306CAF(*uParam0))
	{
		if (!unk_0xA9A04898798AE9E6(*uParam0, 0))
		{
			unk_0xD44F61F61676BA14(*uParam0, 0);
		}
		if (!unk_0x03322C3918511AA0(*uParam0))
		{
			unk_0x216B434C1A609F5B(*uParam0, 1, 0);
		}
		unk_0x27BAC9B39BCC6522(uParam0);
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
	unk_0xBBB571ECEE421BCB(Param0, 8, 1f, 1, 0, 1065353216, 0);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		unk_0xBBB571ECEE421BCB(Param0 + Var2[iVar0 /*3*/], 8, 1f, 1, 0, 1065353216, 0);
		iVar0++;
	}
}

void func_9(var uParam0)
{
	if (unk_0xBDD3EABACAB97D09(*uParam0))
	{
		unk_0xD42DEAFD12809447(*uParam0, 0);
		unk_0x789C84F1B8496AD0(uParam0);
	}
}

void func_10(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	unk_0x13525DFE840376C7(sParam2);
	unk_0xAB829F64BD72CEC8(fParam0, fParam1, iParam3);
}

void func_11()
{
	func_2(&uLocal_45);
	unk_0x0F39DF6675B2333E(iLocal_46);
	while (!unk_0xA1FC9D7AEA164881(iLocal_46))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (func_6(uLocal_40))
	{
		uLocal_45 = unk_0xE42A511281C9895B(iLocal_46, unk_0x82D9CF397BA8C885(uLocal_40, 50f, 0f, 15f), 0f, 1, 1, 0);
		unk_0x6437B8B0C99971F3(uLocal_45);
		func_12(uLocal_45, uLocal_40);
		if (func_5(unk_0x2A5EB8B0FE590B91()))
		{
			unk_0x01EE2412A2609146(unk_0x2A5EB8B0FE590B91(), uLocal_45, -1);
			unk_0x61C3B2A4FEFA1D6D(0f, 1065353216);
			unk_0x164CA344DBD7B6F3(0f);
			unk_0x333EF04F1A5ADEB5(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1), 500f, 1, 0, 0, 0);
		}
	}
	unk_0xFD213087BC4CC3B3(iLocal_46);
}

void func_12(var uParam0, var uParam1)
{
	var uVar0;
	
	uVar0 = func_13(unk_0xD1EE0E9FCD74A37B(uParam0, 1), unk_0xD1EE0E9FCD74A37B(uParam1, 1), 1);
	unk_0x2681BA3707AF6DA7(uParam0, uVar0);
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
		fVar0 = unk_0x12E20547A5AF64B1(fVar1, fVar2);
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
		iVar0 = unk_0x9E3A324AB806771E(uParam0);
		unk_0xE1DA6FCEE4F2BEEC(iVar0, iParam1);
		unk_0x697F84823ACFF84C(iVar0, iParam2);
		unk_0x0B584E556B01101F(iVar0, 1f);
	}
	return iVar0;
}

void func_16()
{
	unk_0x0F39DF6675B2333E(iLocal_44);
	while (!unk_0xA1FC9D7AEA164881(iLocal_44))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (func_6(uLocal_40))
	{
		uLocal_43 = unk_0x7B47BFDF39EC38D3(uLocal_40, 26, iLocal_44, -1, 1, 1);
		if (func_5(uLocal_43))
		{
			unk_0x4C47904AE69D7393(uLocal_43, 1);
			unk_0x31AC59B7C21A2047(uLocal_43, 118, 0);
			unk_0x31AC59B7C21A2047(uLocal_43, 29, 0);
			unk_0x31AC59B7C21A2047(uLocal_43, 116, 0);
		}
	}
	if (func_6(uLocal_40))
	{
		unk_0xFF6757A3AC8108B0(uLocal_40, 1, "Blimp_City", 1);
	}
	unk_0xFD213087BC4CC3B3(iLocal_44);
}

void func_17()
{
	struct<3> Var0;
	
	if (func_6(uLocal_40) && unk_0x2B5189D75DFE6D55(uLocal_40))
	{
		unk_0xB3AE8D41B88ED362(uLocal_40);
	}
	func_9(&uLocal_42);
	func_7(&uLocal_43);
	func_4(&uLocal_40);
	unk_0x0F39DF6675B2333E(iLocal_41);
	unk_0x6C2A4A9F6C64E132(1, "Blimp_City");
	while (!unk_0xA1FC9D7AEA164881(iLocal_41) || !unk_0x3FCFBAC760CAEC03(1, "Blimp_City"))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	Var0 = { unk_0xAF680BFD9BE45F59(unk_0xB48B31AD52B7414A(1, "Blimp_City"), 0f) };
	uLocal_40 = unk_0xE42A511281C9895B(iLocal_41, unk_0x5DDFE408EE347464(unk_0xB48B31AD52B7414A(1, "Blimp_City"), 0f), Var0.f_2, 1, 1, 0);
	unk_0xFD213087BC4CC3B3(iLocal_41);
}

void func_18()
{
	if (func_6(uLocal_40) && unk_0x2B5189D75DFE6D55(uLocal_40))
	{
		unk_0xB3AE8D41B88ED362(uLocal_40);
	}
	unk_0x0090DF2486F4EBEE(1, "Blimp_city");
	func_9(&uLocal_42);
	func_3(&uLocal_43, 1, 0, 1);
	func_2(&uLocal_40);
	func_2(&uLocal_45);
	unk_0xFD213087BC4CC3B3(iLocal_44);
	unk_0xFD213087BC4CC3B3(iLocal_41);
	unk_0xFD213087BC4CC3B3(iLocal_46);
	unk_0xE0125DCD8DB3EFC3(6);
	unk_0xA232817B0B36F2E5();
}

