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
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	char* sLocal_43 = NULL;
	char* sLocal_44 = NULL;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	struct<3> Local_48 = { 0, 0, 0 } ;
	struct<3> Local_51 = { 0, 0, 0 } ;
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
	sLocal_20 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0.0375f;
	fLocal_28 = 0.17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_37 = 3;
	sLocal_43 = "RCMBarryLeadInOut";
	sLocal_44 = "idle";
	Local_48 = { 189.5964f, -956.0344f, 29.5771f };
	Local_51 = { 190.2424f, -956.379f, 28.63f };
	unk_0x562F5D788AF3FA80(0, 26, 1);
	if (func_24(unk_0x096275889B8E0EE0()))
	{
		if (unk_0xABC532F9098BFD9D(unk_0x217E9DC48139933D()) != 0)
		{
			unk_0x384D4765395E006C(unk_0x217E9DC48139933D(), 0, 0);
		}
	}
	if (unk_0xC11469DCA6FC3BB5(83))
	{
		func_21(0);
	}
	unk_0xA862A2AD321F94B4(sLocal_43);
	unk_0x7C11D0C2EFACD80D("BARY1", 7);
	while (!unk_0x27FF6FE8009B40CA(sLocal_43) || !unk_0x6C01088174B23EE3(7))
	{
		unk_0x562F5D788AF3FA80(0, 26, 1);
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0x562F5D788AF3FA80(0, 26, 1);
	func_24(unk_0x096275889B8E0EE0());
	iLocal_45 = unk_0x4F67E8ECA7D3F667() + 13000;
	iLocal_46 = unk_0x9C1C462D7B1DD1F9(0, 5);
	func_18();
	while (!func_13(&uLocal_42, 49, Local_51, func_17(1.12f), 0))
	{
		unk_0x562F5D788AF3FA80(0, 26, 1);
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0x562F5D788AF3FA80(0, 26, 1);
	func_12();
	iLocal_47 = unk_0x4F67E8ECA7D3F667() + 1000;
	unk_0x562F5D788AF3FA80(0, 26, 1);
	while (true)
	{
		func_24(unk_0x096275889B8E0EE0());
		if (unk_0x4F67E8ECA7D3F667() < iLocal_47)
		{
			unk_0x562F5D788AF3FA80(0, 26, 1);
		}
		func_11();
		if (!func_24(uLocal_42))
		{
			func_21(0);
		}
		if (func_3())
		{
		}
		if (func_2(unk_0x096275889B8E0EE0(), Local_51, 1) > 70f)
		{
			func_1(&uLocal_39, 0);
			func_1(&uLocal_40, 0);
			func_1(&uLocal_41, 0);
			func_21(0);
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1(var uParam0, bool bParam1)
{
	if (unk_0xD42BD6EB2E0F1677(*uParam0))
	{
		if (unk_0xC841153DED2CA89A(*uParam0))
		{
			unk_0x64CDE9D6BF8ECAD3(*uParam0, 1, 1);
		}
		if (!bParam1)
		{
			unk_0x0AD8BB0ADAFEDEE5(uParam0);
		}
		else
		{
			unk_0x2FF919702D2464F3(*uParam0);
		}
	}
}

float func_2(var uParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x7D5B1F88E7504BBA(uParam0))
	{
		Var0 = { unk_0xA86D5F069399F44D(uParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xA86D5F069399F44D(uParam0, 0) };
	}
	return unk_0x0BE7F4E3CDBAFB28(Var0, Param1, iParam4);
}

int func_3()
{
	var uVar0;
	
	if (((((func_10(unk_0x096275889B8E0EE0()) && func_10(uLocal_42)) && !func_9()) && unk_0x4F67E8ECA7D3F667() > iLocal_45) && func_8(unk_0x096275889B8E0EE0(), uLocal_42, 1) < 20f) && !unk_0xB15CD1CF58771DE1())
	{
		uVar0 = 16;
		func_7(&uVar0, 0, uLocal_42, "BARRY", 0, 1);
		func_4(&uVar0, "BARY1AU", func_6(), 7, 0, 0);
		iLocal_45 = (unk_0x4F67E8ECA7D3F667() + unk_0x9C1C462D7B1DD1F9(12000, 18000));
		return 1;
	}
	return 0;
}

void func_4(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	func_5(uParam0, 145, sParam1, iParam4, iParam5, 0);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	unk_0xF73FBE4845C43B5B(&Global_14558, 0);
	Global_15695 = iParam3;
	StringCopy(&Global_15682, sParam2, 24);
}

void func_5(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15146 = { *uParam0 };
	Global_1579 = iParam1;
	StringCopy(&Global_15762, sParam2, 24);
	Global_16681 = iParam5;
	if (iParam3 == 0)
	{
		Global_16679 = 1;
		Global_16677 = 0;
	}
	else
	{
		Global_16679 = 0;
		Global_16677 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16680 = 1;
		Global_16678 = 0;
	}
	else
	{
		Global_16680 = 0;
		Global_16678 = 1;
	}
}

char* func_6()
{
	char* sVar0;
	
	switch (iLocal_46)
	{
		case 0:
			sVar0 = "BARY1_RCMLI1";
			break;
		
		case 1:
			sVar0 = "BARY1_RCMLI2";
			break;
		
		case 2:
			sVar0 = "BARY1_RCMLI3";
			break;
		
		case 3:
			sVar0 = "BARY1_RCMLI4";
			break;
		
		case 4:
			sVar0 = "BARY1_RCMLI5";
			break;
	}
	iLocal_46++;
	if (iLocal_46 > 4)
	{
		iLocal_46 = 0;
	}
	return sVar0;
}

void func_7(var uParam0, int iParam1, var uParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_68245)
	{
		if (!unk_0x6CFF81397164A1D3(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x4FE2FB654BF367EB(uParam2, 0);
			}
			else
			{
				unk_0x4FE2FB654BF367EB(uParam2, 1);
			}
		}
		if (!unk_0x6CFF81397164A1D3(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x5461EC345E4967B2(uParam2, 0);
			}
			else
			{
				unk_0x5461EC345E4967B2(uParam2, 1);
			}
		}
	}
}

float func_8(var uParam0, var uParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x7D5B1F88E7504BBA(uParam0))
	{
		Var0 = { unk_0xA86D5F069399F44D(uParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xA86D5F069399F44D(uParam0, 0) };
	}
	if (!unk_0x7D5B1F88E7504BBA(uParam1))
	{
		Var3 = { unk_0xA86D5F069399F44D(uParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xA86D5F069399F44D(uParam1, 0) };
	}
	return unk_0x0BE7F4E3CDBAFB28(Var0, Var3, iParam2);
}

int func_9()
{
	if (Global_15692 != 0 || unk_0x200E87988220C592())
	{
		return 1;
	}
	return 0;
}

int func_10(var uParam0)
{
	if (unk_0xD42BD6EB2E0F1677(uParam0))
	{
		if (!unk_0x7D5B1F88E7504BBA(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_11()
{
	if (unk_0xD62DD846D82CBB90(-1, Local_51, 5f))
	{
		if (func_10(uLocal_42))
		{
			unk_0x7D9EFB7AD6B19754(uLocal_42, 0);
			unk_0xBBFF2E0EA894DC1F(uLocal_42, 1000, 1);
		}
		if (func_10(uLocal_40))
		{
			unk_0x7D9EFB7AD6B19754(uLocal_40, 0);
		}
		if (func_10(uLocal_39))
		{
			unk_0x7D9EFB7AD6B19754(uLocal_39, 0);
		}
	}
}

void func_12()
{
	if (func_10(uLocal_42))
	{
		if (!unk_0x138190F64DB4BBD1(uLocal_42))
		{
			unk_0xDC19C288082E586E(uLocal_42, 1, 0);
		}
		unk_0x4E9EA562C49B7B2C(uLocal_42, 1, 0, 0, 0);
		unk_0x49876BF356F39E66(uLocal_42, 1);
		unk_0x92DA957FFDF2DA79(uLocal_42, 0);
		unk_0x5E95290AF8605EA1(uLocal_42, 0);
		unk_0x88C774425FE9380C(uLocal_42, "POSTBARRY");
		unk_0x6ECBACF91786FB7A(uLocal_42, joaat("player"));
		unk_0xF66F820909453B8C(uLocal_42, 0, 0);
		unk_0x7D9EFB7AD6B19754(uLocal_42, 1);
		unk_0xF6A103413A202C37(uLocal_42, Local_51, 1, 0, 0, 1);
		unk_0xCF2B9C0645C4651B(uLocal_42, func_17(1.12f));
		unk_0x7D9EFB7AD6B19754(uLocal_42, 1);
		unk_0x8DBC05C86F873CC9(uLocal_42, sLocal_43, sLocal_44, 8f, -8f, -1, 9, 0, 0, 0, 0);
		unk_0xD4648EA39998A07B(uLocal_42, unk_0x096275889B8E0EE0(), -1, 0, 2);
	}
}

int func_13(var uParam0, int iParam1, struct<3> Param2, var uParam5, bool bParam6)
{
	int iVar0;
	
	if (!func_16(iParam1))
	{
		iVar0 = func_15(iParam1);
		unk_0xFA28FE3A6246FC30(iVar0);
		if (unk_0x1283B8B89DD5D1B6(iVar0))
		{
			if (unk_0xD42BD6EB2E0F1677(*uParam0))
			{
				unk_0xCC0EF140F99365C5(uParam0);
			}
			*uParam0 = unk_0x9066DFD4D92E6773(26, iVar0, Param2, uParam5, 0, 0);
			unk_0x2F090A456EE8FF41(*uParam0);
			if (iVar0 == joaat("ig_lamardavis"))
			{
				if (unk_0x7F42B7520C9EB853(*uParam0, 3) == 0)
				{
					unk_0x584EEBEECD248926(*uParam0, 5, 2, 0, 0);
				}
			}
			func_14(*uParam0, iParam1);
			if (bParam6)
			{
				unk_0x4AD96EF928BD4F9A(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_14(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 7;
	if (iParam1 == 19)
	{
		iVar0 = 3;
	}
	else if (iParam1 == 14)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 17)
	{
		iVar0 = 5;
	}
	else
	{
		iVar0 = 7;
		return 0;
	}
	Global_86201[(iVar0 - 3)] = uParam0;
	return 1;
}

int func_15(int iParam0)
{
	if (!func_16(iParam0))
	{
		return Global_97353.f_29774[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_16(int iParam0)
{
	return iParam0 < 3;
}

float func_17(float fParam0)
{
	return (fParam0 * 57.29578f);
}

void func_18()
{
	if (unk_0x1C168182BEBE2DDA(190.56f, -956.4f, 28.63f, 20f, joaat("prop_protest_table_01"), 0))
	{
		uLocal_40 = unk_0x066A16145417A72D(190.56f, -956.4f, 28.63f, 20f, joaat("prop_protest_table_01"), 0, 0, 1);
		if (func_24(uLocal_40))
		{
			if (!unk_0x138190F64DB4BBD1(uLocal_40))
			{
				unk_0xDC19C288082E586E(uLocal_40, 1, 0);
			}
			Local_48 = { 189.5964f, -956.0344f, 29.54f };
			unk_0xF6A103413A202C37(uLocal_40, Local_48, 1, 0, 0, 1);
			unk_0xCF2B9C0645C4651B(uLocal_40, func_17(-2.01f));
			unk_0x7D9EFB7AD6B19754(uLocal_40, 1);
		}
	}
	if (unk_0x1C168182BEBE2DDA(190.56f, -956.4f, 28.63f, 20f, joaat("prop_chair_08"), 0))
	{
		uLocal_39 = unk_0x066A16145417A72D(190.56f, -956.4f, 28.63f, 20f, joaat("prop_chair_08"), 0, 0, 1);
		if (func_24(uLocal_39))
		{
			if (!unk_0x138190F64DB4BBD1(uLocal_39))
			{
				unk_0xDC19C288082E586E(uLocal_39, 1, 0);
			}
			Local_48 = { 190.2574f, -956.3513f, 29.621f };
			unk_0xF6A103413A202C37(uLocal_39, Local_48, 1, 0, 0, 1);
			unk_0xCF2B9C0645C4651B(uLocal_39, func_17(-1.68f));
			unk_0x7D9EFB7AD6B19754(uLocal_39, 1);
		}
	}
	else
	{
		Local_48 = { 190.2574f, -956.3513f, 29.621f };
		func_19(&uLocal_39, joaat("prop_chair_08"), Local_48, func_17(-1.68f));
		unk_0xF6A103413A202C37(uLocal_39, Local_48, 1, 0, 0, 1);
		unk_0xCF2B9C0645C4651B(uLocal_39, func_17(-1.68f));
		unk_0x7D9EFB7AD6B19754(uLocal_39, 1);
	}
	Local_48 = { 192.4462f, -953.5946f, 29.0919f };
	if (unk_0x1C168182BEBE2DDA(Local_48, 25f, joaat("prop_protest_sign_01"), 0))
	{
		uLocal_41 = unk_0x066A16145417A72D(Local_48, 25f, joaat("prop_protest_sign_01"), 0, 0, 1);
		if (func_24(uLocal_41))
		{
			if (!unk_0x138190F64DB4BBD1(uLocal_41))
			{
				unk_0xDC19C288082E586E(uLocal_41, 1, 0);
			}
			Local_48.f_2 = 29.603f;
			unk_0xF6A103413A202C37(uLocal_41, Local_48, 1, 0, 0, 1);
			unk_0xCF2B9C0645C4651B(uLocal_41, 23.45f);
		}
	}
	else
	{
		func_19(&uLocal_41, joaat("prop_protest_sign_01"), Local_48, 23.45f);
		unk_0xF6A103413A202C37(uLocal_41, Local_48, 1, 0, 0, 1);
		unk_0xCF2B9C0645C4651B(uLocal_41, 23.45f);
	}
}

void func_19(var uParam0, int iParam1, struct<3> Param2, float fParam5)
{
	func_20(uParam0);
	*uParam0 = unk_0x1A2D7464B1CAA1C8(iParam1, Param2, 1, 1, 0);
	unk_0xCF2B9C0645C4651B(*uParam0, fParam5);
}

void func_20(var uParam0)
{
	if (unk_0xD42BD6EB2E0F1677(*uParam0))
	{
		if (unk_0xC841153DED2CA89A(*uParam0))
		{
			unk_0x64CDE9D6BF8ECAD3(*uParam0, 1, 1);
		}
		unk_0x931914268722C263(uParam0);
	}
}

void func_21(bool bParam0)
{
	if (bParam0)
	{
		func_23(&uLocal_42);
	}
	else
	{
		func_22(&uLocal_42, 1, 0, 1);
	}
	if (func_10(uLocal_40))
	{
		unk_0x7D9EFB7AD6B19754(uLocal_40, 0);
	}
	if (func_10(uLocal_39))
	{
		unk_0x7D9EFB7AD6B19754(uLocal_39, 0);
	}
	if (bParam0)
	{
		func_20(&uLocal_39);
		func_20(&uLocal_40);
		func_20(&uLocal_41);
	}
	else
	{
		func_1(&uLocal_39, 0);
		func_1(&uLocal_40, 0);
		func_1(&uLocal_41, 0);
	}
	unk_0x4763145053A33D46(sLocal_43);
	unk_0xF3D4779E285B441F(7, 0);
	unk_0x5E8B6D17FF91CD59();
}

void func_22(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0xD42BD6EB2E0F1677(*uParam0))
	{
		if (!unk_0x6CFF81397164A1D3(*uParam0))
		{
			unk_0x9B9EE31AED48072E(*uParam0, 0);
			if (iParam3 == 0)
			{
				unk_0x74D112F5843DB3CA(*uParam0);
			}
			unk_0x2AD4789CBFD829EC(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0x49876BF356F39E66(*uParam0, 0);
			}
		}
		unk_0xEB7C3FF98F454165(uParam0);
	}
}

void func_23(var uParam0)
{
	if (unk_0xD42BD6EB2E0F1677(*uParam0))
	{
		if (!unk_0x7D5B1F88E7504BBA(*uParam0))
		{
			unk_0x9B9EE31AED48072E(*uParam0, 0);
		}
		if (!unk_0x138190F64DB4BBD1(*uParam0))
		{
			unk_0xDC19C288082E586E(*uParam0, 1, 0);
		}
		unk_0xCC0EF140F99365C5(uParam0);
	}
}

bool func_24(var uParam0)
{
	if (!unk_0xD42BD6EB2E0F1677(uParam0))
	{
		return 0;
	}
	return !unk_0x7D5B1F88E7504BBA(uParam0);
}

