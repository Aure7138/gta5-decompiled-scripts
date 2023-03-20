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
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	float fLocal_31 = 0f;
	struct<3> Local_32 = { 0, 0, 0 } ;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	bool bLocal_37 = 0;
	int iLocal_38[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_45 = 0;
	bool bLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	struct<3> Local_50 = { 0, 0, 0 } ;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	struct<3> Local_55 = { 0, 0, 0 } ;
	float fLocal_58 = 0f;
	int iLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61[5] = { 0, 0, 0, 0, 0 };
	var uLocal_67[5] = { 0, 0, 0, 0, 0 };
	var uLocal_73 = 5;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_31 = 1E+07f;
	Local_32 = { 2134.06f, 4780.69f, 41.664f };
	iLocal_35 = -1;
	Local_50 = { 2136.133f, 4780.563f, 39.9702f };
	Local_55 = { 2149.737f, 4798.472f, 40.1071f };
	fLocal_58 = 55.4847f;
	if (unk_0x2170E7BC25114A22(82))
	{
		func_174();
	}
	func_173(17);
	func_172();
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	while (true)
	{
		if (func_171() == 309)
		{
			bLocal_37 = true;
		}
		else
		{
			bLocal_37 = false;
		}
		if (func_158())
		{
			if (!unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0))
			{
				fLocal_31 = unk_0xB7A628320EFF8E47(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1), Local_32);
			}
			func_156(&iVar1);
			func_29(&iVar2);
			if (iLocal_47 > 3)
			{
				if (fLocal_31 < 600f)
				{
					if (func_26(0) == 0 && (unk_0x84A97C70FFDEC0C8() - iLocal_81) > 2000)
					{
						iLocal_81 = unk_0x84A97C70FFDEC0C8();
						func_3();
					}
				}
			}
			iVar0 = 0;
		}
		else
		{
			if (!bLocal_46)
			{
				if (func_2(105))
				{
					func_1(105, 0, 0);
					Global_101652.f_18926.f_14 = 0;
				}
			}
			else
			{
				Global_101652.f_18926.f_14 = 0;
			}
			if (!bLocal_46)
			{
				if (func_2(106))
				{
					func_1(106, 0, 0);
					Global_101652.f_18926.f_13 = 0;
				}
			}
			else
			{
				Global_101652.f_18926.f_13 = 0;
			}
			iVar0 = 1000;
		}
		unk_0x4EDE34FBADD967A6(iVar0);
	}
}

void func_1(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (!bParam2)
	{
		bVar1 = unk_0xF44A5E894FE76438(Global_25497[iVar0 /*23*/].f_11, 15);
		if (bVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != unk_0xF44A5E894FE76438(Global_25497[iVar0 /*23*/].f_11, 0))
	{
		unk_0xB8A73E7DA87B2968(&(Global_25497[iVar0 /*23*/].f_11), 18);
		if (Global_25494 == 1)
		{
			Global_25495 = 1;
		}
		Global_25494 = 1;
	}
	if (bParam1)
	{
		unk_0xB8A73E7DA87B2968(&(Global_25497[iVar0 /*23*/].f_11), 0);
		unk_0xB8A73E7DA87B2968(&(Global_25497[iVar0 /*23*/].f_11), 15);
		unk_0xB8A73E7DA87B2968(&(Global_25497[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		unk_0x4EA098C870B73AB7(&(Global_25497[iVar0 /*23*/].f_11), 0);
		unk_0x4EA098C870B73AB7(&(Global_25497[iVar0 /*23*/].f_11), 15);
	}
	if (!unk_0xF44A5E894FE76438(Global_25497[iVar0 /*23*/].f_11, 0))
	{
		if (unk_0x6901135DDCC4904D(Global_25497[iVar0 /*23*/].f_19))
		{
			unk_0x9CCF2EC98D9063CB(1);
			unk_0x8A3D7569826A325D(&(Global_25497[iVar0 /*23*/].f_19));
			unk_0x9CCF2EC98D9063CB(0);
		}
	}
}

bool func_2(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	return unk_0x6901135DDCC4904D(Global_25497[iVar0 /*23*/].f_19);
}

void func_3()
{
	func_4(&(Global_93588.f_2311), &Global_93588, 0, 1, 1, 0);
}

void func_4(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = unk_0xD5A676B97920D126();
	}
	if (unk_0x7887B64A08364778(iParam2))
	{
		uParam1->f_5 = func_25(iParam2);
	}
	if (func_18(iParam2, &iVar0, iParam3, iParam5))
	{
		func_5(uParam0, uParam1, iVar0, iParam4);
	}
	else if (unk_0x7887B64A08364778(iVar0))
	{
		if (!unk_0xB529B2A4B7C64D6D(iVar0, 0))
		{
			if (unk_0x960985BE189C5A3B(iVar0, joaat("skylift")) && unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), iVar0, 0))
			{
				func_5(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_5(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (unk_0xA4DB44DF73EF4FE5(iParam2, 0))
	{
		func_7(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_6(iParam2))
		{
			uParam1->f_3 = 1;
		}
		else
		{
			uParam1->f_3 = 0;
		}
		return 1;
	}
	return 0;
}

int func_6(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Global_91486.f_22[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_7(var uParam0, int iParam1, int iParam2)
{
	func_14(iParam1, &(uParam0->f_12));
	uParam0->f_7 = func_10(iParam1, 145, 0);
	uParam0->f_11 = func_9(iParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_10)
		{
			uParam0->f_10 = func_8(iParam1);
		}
	}
	if (iParam2 == 1)
	{
		*uParam0 = { unk_0xC086F8D75730FA3A(iParam1, 1) };
		uParam0->f_6 = unk_0x714F015B4D2DE1DC(iParam1);
		uParam0->f_3 = { unk_0x9C0A225C3A240597(iParam1) };
		if (unk_0x1AC9C20D51EE6DC3(iParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_6 = 305.6424f;
		}
		if (Global_69431 == iParam1)
		{
			uParam0->f_9 = 1;
		}
	}
	if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
	{
		uParam0->f_8 = 1;
	}
	else
	{
		uParam0->f_8 = 0;
	}
}

int func_8(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x7887B64A08364778(Global_68526.f_484[iVar0]))
		{
			if (iParam0 == Global_68526.f_484[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_9(int iParam0)
{
	int iVar0;
	
	if (!unk_0x7887B64A08364778(iParam0))
	{
		return 145;
	}
	if (!unk_0xA4DB44DF73EF4FE5(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x7887B64A08364778(Global_89150[iVar0]))
		{
			if (Global_89150[iVar0] == iParam0)
			{
				return Global_89160[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_10(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0x7887B64A08364778(iParam0))
	{
		return 0;
	}
	if (!unk_0xA4DB44DF73EF4FE5(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x7887B64A08364778(Global_89150[iVar0]))
		{
			if (Global_89150[iVar0] == iParam0)
			{
				if (iParam1 == 145 || iParam1 == Global_89160[iVar0])
				{
					if (iParam2 == 0 || unk_0xA0A4DA31DEDFAC4F(iParam0) == func_11(iParam1, iParam2))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_11(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_13(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_12(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_12(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_101652.f_8028.f_99.f_58[128] && !Global_101652.f_8028.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_101652.f_8028.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_101652.f_8028.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

bool func_13(int iParam0)
{
	return iParam0 < 3;
}

void func_14(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xA4DB44DF73EF4FE5(iParam0, 0))
	{
		func_17(uParam1);
		uParam1->f_66 = unk_0xA0A4DA31DEDFAC4F(iParam0);
		StringCopy(&(uParam1->f_1), unk_0x2CC6A8460C4261C6(iParam0), 16);
		*uParam1 = unk_0x643D0787FF300BE8(iParam0);
		unk_0xAB44311BC9F89232(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0xCFF130F4559BF748(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x43FF1E5EC4917728(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0xEF0C3A770E8892FA(iParam0);
		uParam1->f_67 = unk_0x49CCC8B15830B17D(iParam0);
		uParam1->f_69 = unk_0x65E205594044F652(iParam0);
		uParam1->f_70 = unk_0xF7E41E4E5E67E2CB(iParam0);
		unk_0x956FB9F729445ED6(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0xF69AB637A0DAC546(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0x1150CC5330ABD6DF(iParam0, 2))
		{
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 28);
		}
		if (unk_0x1150CC5330ABD6DF(iParam0, 3))
		{
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 29);
		}
		if (unk_0x1150CC5330ABD6DF(iParam0, 0))
		{
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 30);
		}
		if (unk_0x1150CC5330ABD6DF(iParam0, 1))
		{
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0xEF9CF6170A8C90B7(iParam0, 0))
		{
			uParam1->f_68 = unk_0x80F6A1A9BF0E38FD(iParam0);
		}
		if (unk_0x825416FB822BF706(uParam1->f_66))
		{
			if (unk_0x93B92294DAD9D50D(iParam0))
			{
				switch (unk_0xB230881064F01DEF(iParam0))
				{
					case 2:
					case 0:
						unk_0x4EA098C870B73AB7(&(uParam1->f_77), 23);
						unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 22);
						break;
					
					case 3:
					case 1:
						unk_0x4EA098C870B73AB7(&(uParam1->f_77), 23);
						unk_0x4EA098C870B73AB7(&(uParam1->f_77), 22);
						break;
					
					case 4:
						unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0xAB35C8D69EA2E6B5(iParam0))
		{
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 9);
		}
		if (unk_0x7E2FFDDA80D69669(iParam0))
		{
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 10);
		}
		if (unk_0x826C510E26394C33(iParam0))
		{
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 13);
			unk_0xD31BD28E3DFD0487(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0x5451EB0FF6AB9E17(iParam0))
		{
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 12);
		}
		func_16(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x90ECFFEFD5446B32(iParam0, iVar0 + 1))
			{
				unk_0xB8A73E7DA87B2968(&(uParam1->f_77), func_15(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x0A330F7918C05F13(iParam0, 0))
		{
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0x4EA098C870B73AB7(&(uParam1->f_77), 11);
		}
		if (unk_0xA438D75809973A56(iParam0, "IgnoredByQuickSave") && unk_0x79945CA981E4560A(iParam0, "IgnoredByQuickSave"))
		{
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0x4EA098C870B73AB7(&(uParam1->f_77), 27);
		}
	}
}

int func_15(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_16(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xA4DB44DF73EF4FE5(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x83608391BBAB09A9(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			(*uParam1)[iVar0] = 0;
			if (unk_0xFA1526FE26DC997C(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0xFFB080E19B6AD134(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0x54352EF465143135(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0x54352EF465143135(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_17(var uParam0)
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

int func_18(int iParam0, var uParam1, int iParam2, int iParam3)
{
	char* sVar0;
	
	if (unk_0x7887B64A08364778(iParam0))
	{
		if (!unk_0x00B5B0B68211D89B(iParam0))
		{
			if (iParam0 == unk_0xD5A676B97920D126())
			{
				*uParam1 = unk_0x80AA649904BB5788();
			}
			else
			{
				*uParam1 = unk_0x0DBD8FE531FD620D(iParam0, 1);
			}
			if (unk_0x7887B64A08364778(*uParam1))
			{
				if (unk_0xA4DB44DF73EF4FE5(*uParam1, 0))
				{
					if (iParam2 == 0 || unk_0x8E92CDAEB8357ABD(unk_0xC086F8D75730FA3A(*uParam1, 1), unk_0xC086F8D75730FA3A(iParam0, 1), 1) < 100f)
					{
						if (unk_0x960985BE189C5A3B(*uParam1, joaat("taxi")))
						{
							if (unk_0x98BE504E8B389665(*uParam1, -1, 0) != iParam0 && unk_0x98BE504E8B389665(*uParam1, -1, 0) != 0)
							{
								return 0;
							}
						}
						if (func_19(*uParam1, func_21(), 1))
						{
							sVar0 = unk_0x0FBCE11007AF301F();
							if (!unk_0xCC257DA11A122B5F(sVar0, "save_anywhere"))
							{
								return 0;
							}
							else if (!unk_0x6A0583ECFCCECC9B(iParam0, 1))
							{
								return 0;
							}
						}
						if (iParam3 == 1)
						{
							if (unk_0xA438D75809973A56(*uParam1, "IgnoredByQuickSave"))
							{
								if (unk_0x79945CA981E4560A(*uParam1, "IgnoredByQuickSave"))
								{
									return 0;
								}
							}
						}
						else if (unk_0x960985BE189C5A3B(*uParam1, joaat("blimp")))
						{
							return 0;
						}
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_19(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0x7887B64A08364778(iParam0) || !unk_0xA4DB44DF73EF4FE5(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_20(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0xF44A5E894FE76438(Global_101652.f_6172[iVar9], 0))
		{
			if (unk_0x2C1F463EB409D0B0(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_20(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

int func_21()
{
	func_22();
	return Global_101652.f_2079.f_539.f_3549;
}

void func_22()
{
	int iVar0;
	
	if (unk_0x7887B64A08364778(unk_0xD5A676B97920D126()))
	{
		if (func_24(Global_101652.f_2079.f_539.f_3549) != unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()))
		{
			iVar0 = func_25(unk_0xD5A676B97920D126());
			if (func_13(iVar0) && (!func_23(14) || Global_100604))
			{
				if (Global_101652.f_2079.f_539.f_3549 != iVar0 && func_13(Global_101652.f_2079.f_539.f_3549))
				{
					Global_101652.f_2079.f_539.f_3550 = Global_101652.f_2079.f_539.f_3549;
				}
				Global_101652.f_2079.f_539.f_3551 = iVar0;
				Global_101652.f_2079.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101652.f_2079.f_539.f_3549 != 145)
			{
				Global_101652.f_2079.f_539.f_3551 = Global_101652.f_2079.f_539.f_3549;
			}
			return;
		}
	}
	Global_101652.f_2079.f_539.f_3549 = 145;
}

bool func_23(int iParam0)
{
	return Global_35777 == iParam0;
}

int func_24(int iParam0)
{
	if (func_13(iParam0))
	{
		return Global_101652.f_26993[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_25(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7887B64A08364778(iParam0))
	{
		iVar1 = unk_0xA0A4DA31DEDFAC4F(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_24(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_26(int iParam0)
{
	if (Global_35777 == 15)
	{
		return 0;
	}
	if (func_27(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_27(int iParam0)
{
	return func_28(iParam0, Global_35777);
}

int func_28(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_29(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<91> Var4;
	int iVar101;
	
	bVar0 = false;
	if (iLocal_53 != 9)
	{
		if (!Global_101652.f_18926.f_13)
		{
			if (Global_101652.f_18926.f_1 == 0 && Global_101652.f_18926.f_2 == 0)
			{
				if (!func_155(Global_101652.f_18926, 32))
				{
					func_152("MG_TRAF_AVAIL", 0, 0, -1, 10000, 7, 0, 0, 0);
					func_150(&(Global_101652.f_18926), 32);
				}
			}
			func_1(106, 1, 0);
			Global_101652.f_18926.f_13 = 1;
			bVar0 = true;
		}
		else
		{
			bVar0 = true;
		}
	}
	else
	{
		func_1(106, 0, 0);
		Global_101652.f_18926.f_13 = 0;
	}
	if (iLocal_53 != 1 && iLocal_53 != 8)
	{
		if (func_149() && !*iParam0)
		{
			func_148(0);
			iLocal_53 = 1;
		}
	}
	switch (iLocal_53)
	{
		case 0:
			iLocal_53 = 1;
			break;
		
		case 1:
			if (!func_149())
			{
				if (fLocal_31 < 50625f)
				{
					iLocal_53 = 2;
				}
				else if (bLocal_37)
				{
					iLocal_53 = 2;
				}
			}
			break;
		
		case 2:
			unk_0x4ACD1E4CBA159ED1(joaat("dune"));
			iLocal_53 = 3;
			break;
		
		case 3:
			if (unk_0x7AD0E9452821C95D(joaat("dune")))
			{
				unk_0xBCDF9E3086B4229C(Local_55, 4f, 0, 0, 0, 0, 0);
				if (unk_0x7887B64A08364778(iLocal_54))
				{
					unk_0xAA8D7DFFDAAB903E(&iLocal_54);
				}
				iLocal_54 = unk_0xDE8A46A23FDCBBFE(func_147(), Local_55, fLocal_58, 1, 1);
				unk_0xCD91F364DDEED036(iLocal_54, 0);
				unk_0x8188DB74546FF484(func_147());
				if (unk_0x7887B64A08364778(iLocal_54))
				{
					if (unk_0x2D255ED31721D36D(iLocal_54, 1))
					{
						unk_0xE1896E88D2301642(iLocal_54, 1, 1);
					}
					if (unk_0x2D255ED31721D36D(iLocal_54, 2))
					{
						unk_0xE1896E88D2301642(iLocal_54, 2, 0);
					}
					if (unk_0x2D255ED31721D36D(iLocal_54, 3))
					{
						unk_0xE1896E88D2301642(iLocal_54, 3, 0);
					}
					unk_0xC243EB5E21E9A4EE(iLocal_54, 0, 0);
				}
				iLocal_53 = 4;
			}
			break;
		
		case 5:
			if (fLocal_31 >= 50625f && !*iParam0)
			{
				func_148(0);
				iLocal_53 = 1;
				return;
			}
			break;
		
		case 4:
			func_146();
			if (!bLocal_37)
			{
				if (fLocal_31 >= 50625f && !*iParam0)
				{
					func_148(0);
					iLocal_53 = 1;
					return;
				}
			}
			if (!bVar0 && !*iParam0)
			{
				if (!bVar0)
				{
				}
				if (!*iParam0)
				{
				}
				if (!iLocal_59)
				{
					if (unk_0x6A0583ECFCCECC9B(iLocal_28, 0))
					{
						iVar1 = unk_0x19912132A3CBAD3C(iLocal_28);
						if (iVar1 == iLocal_54)
						{
							iLocal_59 = 1;
							unk_0xB24D3BF5DABD13AA(&iLocal_54);
							iLocal_53 = 9;
						}
					}
				}
				return;
			}
			if (*iParam0)
			{
				if (!unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0) && !unk_0xB529B2A4B7C64D6D(iLocal_54, 0))
				{
					unk_0x5467EF651716201E(unk_0xD5A676B97920D126(), iLocal_54, -1);
				}
			}
			if (!unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0) && !unk_0xB529B2A4B7C64D6D(iLocal_54, 0))
			{
				if (unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), iLocal_54, 1))
				{
					func_145();
				}
			}
			if (!unk_0xB529B2A4B7C64D6D(iLocal_54, 0) && !unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0))
			{
				if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
				{
					iVar2 = unk_0x19912132A3CBAD3C(unk_0xD5A676B97920D126());
					if (iVar2 == iLocal_54)
					{
						if (unk_0xB7A628320EFF8E47(Local_55, unk_0xC086F8D75730FA3A(iLocal_28, 1)) < 100f)
						{
							unk_0x7FC35FCC666F974E("Traffick_Ground");
							if (unk_0x7887B64A08364778(iLocal_29) && !unk_0xB529B2A4B7C64D6D(iLocal_29, 0))
							{
								if (unk_0xA0A4DA31DEDFAC4F(iLocal_29) != joaat("dune") && unk_0xA0A4DA31DEDFAC4F(iLocal_29) != joaat("cuban800"))
								{
									func_118(iLocal_29, 2142.245f, 4823.463f, 40.2769f, 118.4428f, 24, 0);
								}
								else if (!unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0))
								{
									unk_0x03D40EF90D5FDA26(iLocal_29);
								}
							}
							iLocal_53 = 6;
						}
					}
				}
			}
			break;
		
		case 6:
			if (unk_0x4AAFD43C0AFB7A1A("Traffick_Ground"))
			{
				iVar3 = 0;
				if (*iParam0)
				{
					iVar3 = 1;
				}
				else
				{
					iVar3 = func_116(&iLocal_35, 6, 9, 0, 0);
					iLocal_45 = 1;
				}
				if (iVar3 == 1)
				{
					if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
					{
						unk_0x8761D8D070DDBD9A(unk_0xFB6B3EEFAB2DD12C());
					}
					if (!*iParam0)
					{
						func_80("Traffick_Ground", 0);
					}
					Var4 = -1;
					Var4.f_8 = 4;
					Var4.f_13 = 2;
					Var4.f_16 = 4;
					Var4.f_29 = 4;
					Var4.f_61 = 9;
					Var4.f_71 = 4;
					Var4.f_76 = 8;
					Var4.f_85 = 4;
					Var4.f_90 = 6;
					iLocal_30 = unk_0xB8BA7F44DF1575E1("Traffick_Ground", &Var4, 97, 20500);
					func_79(16);
					unk_0x0446A34B5E23D747("Traffick_Ground");
					unk_0xC53606C390BE2727(iLocal_54, 1, 0);
					unk_0xB24D3BF5DABD13AA(&iLocal_54);
					if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
					{
						if (Global_36908 == 1)
						{
							func_70(unk_0xD5A676B97920D126());
						}
					}
					iLocal_59 = 0;
					iLocal_53 = 7;
				}
				else if (iVar3 == 0)
				{
					iLocal_45 = 0;
					func_148(0);
					iLocal_53 = 9;
				}
			}
			break;
		
		case 7:
			if (!unk_0x597C1E51157E5516(iLocal_30))
			{
				iLocal_53 = 9;
				if (func_155(Global_100305, 2))
				{
					iLocal_53 = 8;
				}
				else
				{
					func_69(&iLocal_35);
					func_52();
					iLocal_36 = 1;
					iVar101 = func_51();
					func_43(&iVar101, 0, 0, 3, 0, 0, 0);
					Global_101652.f_18926.f_12 = iVar101;
					func_1(106, 0, 0);
					Global_101652.f_18926.f_13 = 0;
				}
				*iParam0 = 0;
				func_41(&Global_100305, 2);
			}
			break;
		
		case 8:
			if (Global_91486 == 10)
			{
				if (Global_91520)
				{
					*iParam0 = 1;
					unk_0x7FC35FCC666F974E("Traffick_Ground");
					iLocal_53 = 2;
				}
				else
				{
					*iParam0 = 0;
					iLocal_53 = 2;
				}
			}
			else if (Global_91486 == 13)
			{
				func_69(&iLocal_35);
				func_52();
				*iParam0 = 0;
				iLocal_53 = 2;
			}
			break;
		
		case 9:
			if (fLocal_31 >= 50625f && func_30(Global_101652.f_18926.f_12))
			{
				func_148(0);
				iLocal_53 = 1;
			}
			break;
		
		default:
			break;
	}
}

int func_30(int iParam0)
{
	return func_31(func_51(), iParam0);
}

int func_31(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_39(iParam1) || !func_39(iParam0))
	{
		return 1;
	}
	iVar0 = func_37(iParam0);
	iVar1 = func_37(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_36(iParam0);
	iVar1 = func_36(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_35(iParam0);
	iVar1 = func_35(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_34(iParam0);
	iVar1 = func_34(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_33(iParam0);
	iVar1 = func_33(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_32(iParam0);
	iVar1 = func_32(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_32(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_33(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_34(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_35(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_36(int iParam0)
{
	return iParam0 & 15;
}

var func_37(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_38(unk_0xF44A5E894FE76438(iParam0, 31), -1, 1)) + 2011;
}

int func_38(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_39(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_32(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_33(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_34(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_37(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_36(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_35(iParam0);
	if (iVar5 < 1 || iVar5 > func_40(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_40(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

void func_41(var uParam0, int iParam1)
{
	func_42(uParam0, iParam1);
}

void func_42(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_43(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_37(*iParam0);
	iVar1 = func_36(*iParam0);
	iVar2 = func_35(*iParam0);
	iVar3 = func_34(*iParam0);
	iVar4 = func_33(*iParam0);
	iVar5 = func_32(*iParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_40(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_40(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_44(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_44(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_50(uParam0, iParam1);
	func_49(uParam0, iParam2);
	func_48(uParam0, iParam3);
	func_47(uParam0, iParam5);
	func_46(uParam0, iParam4);
	func_45(uParam0, iParam6);
}

void func_45(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_46(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_36(*uParam0);
	iVar1 = func_37(*uParam0);
	if (iParam1 < 1 || iParam1 > func_40(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_47(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_48(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_49(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_50(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_51()
{
	var uVar0;
	
	func_50(&uVar0, unk_0xABA05E2C283C3D5F());
	func_49(&uVar0, unk_0xF72CA3D5BA977203());
	func_48(&uVar0, unk_0x83D6515EE2CBF18C());
	func_46(&uVar0, unk_0x3D13C79BF80EB767());
	func_47(&uVar0, unk_0xA93FEF8677A8AF58());
	func_45(&uVar0, unk_0xAC9128C6933DA69B());
	return uVar0;
}

void func_52()
{
	func_68();
	func_61();
	func_57();
	func_56();
	func_55();
	func_54();
	Global_91523 = 0;
	Global_85994 = -1;
	unk_0x4EA098C870B73AB7(&(Global_91486.f_20), 17);
	Global_91521 = 0;
	unk_0xBBB7FC3E39996714(0);
	unk_0xED4A4F9E67F92E16(0);
	unk_0xE044321D40979D1A(1);
	unk_0x1BE22A28D34D2F05(1);
	unk_0x434CF38B0942E85B(1);
	func_53(0);
}

void func_53(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xB8A73E7DA87B2968(&(Global_91486.f_20), 13);
	}
	else
	{
		unk_0x4EA098C870B73AB7(&(Global_91486.f_20), 13);
	}
}

void func_54()
{
	Global_69937 = { 0f, 0f, 0f };
	Global_69940 = 0f;
	Global_91486.f_21 = 145;
}

void func_55()
{
	StringCopy(&Global_69929, "", 16);
	StringCopy(&Global_69933, "", 16);
}

void func_56()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		Global_91486.f_22[iVar0] = 0;
		iVar0++;
	}
}

void func_57()
{
	Global_91486 = 13;
	Global_91486.f_1 = -1;
	Global_91486.f_2 = 0;
	Global_91486.f_30 = 0f;
	unk_0x4EA098C870B73AB7(&(Global_91486.f_20), 25);
	Global_91520 = 0;
	func_60(0);
	func_59();
	func_58();
	Global_91486.f_18 = -1;
	Global_91486.f_19 = -1;
}

void func_58()
{
	unk_0x4EA098C870B73AB7(&(Global_91486.f_20), 22);
	unk_0x4EA098C870B73AB7(&(Global_91486.f_20), 8);
}

void func_59()
{
	if (Global_91486.f_16 != 0)
	{
		unk_0x4292FC2ED4EC4212(&(Global_91486.f_16));
		Global_91486.f_16 = 0;
	}
	if (Global_91486.f_17 != 0)
	{
		unk_0x4292FC2ED4EC4212(&(Global_91486.f_17));
		Global_91486.f_17 = 0;
	}
}

void func_60(int iParam0)
{
	if (iParam0 == 1)
	{
		Global_36326 = 1;
	}
	else
	{
		Global_36326 = 0;
	}
}

void func_61()
{
	func_62(&Global_95993);
}

void func_62(var uParam0)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = 145;
	func_67(&(uParam0->f_1));
	uParam0->f_6 = -1;
	uParam0->f_7 = -1;
	uParam0->f_8 = 0f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 145;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_9[iVar1] = -1;
		uParam0->f_13[iVar1] = 0;
		uParam0->f_17[iVar1] = 0;
		uParam0->f_21[iVar1] = 0;
		func_66(&(uParam0->f_25[0 /*295*/][iVar1 /*98*/]));
		func_66(&(uParam0->f_25[1 /*295*/][iVar1 /*98*/]));
		iVar0 = 0;
		while (iVar0 < 12)
		{
			uParam0->f_616[iVar1 /*65*/][iVar0] = -1;
			uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = -1;
			uParam0->f_616[iVar1 /*65*/].f_26[iVar0] = -1;
			iVar0++;
		}
		uParam0->f_616[iVar1 /*65*/].f_59 = 0;
		uParam0->f_616[iVar1 /*65*/].f_60 = -99;
		uParam0->f_616[iVar1 /*65*/].f_61 = 2;
		uParam0->f_616[iVar1 /*65*/].f_62 = 0;
		uParam0->f_616[iVar1 /*65*/].f_63 = -99;
		uParam0->f_616[iVar1 /*65*/].f_64 = 1;
		iVar0 = 0;
		while (iVar0 < 9)
		{
			uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = -1;
			uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = -1;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1 /*284*/][iVar0 /*3*/].f_1 = 0;
			uParam0->f_812[iVar1 /*284*/][iVar0 /*3*/].f_2 = 0;
			uParam0->f_812[iVar1 /*284*/][iVar0 /*3*/] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			uParam0->f_812[iVar1 /*284*/].f_133[iVar0 /*3*/].f_1 = 0;
			uParam0->f_812[iVar1 /*284*/].f_133[iVar0 /*3*/].f_2 = 0;
			uParam0->f_812[iVar1 /*284*/].f_133[iVar0 /*3*/] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			uParam0->f_1665[iVar1 /*32*/][iVar0] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 10)
		{
			uParam0->f_1665[iVar1 /*32*/].f_5[iVar0] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 15)
		{
			uParam0->f_1665[iVar1 /*32*/].f_16[iVar0] = 0;
			iVar0++;
		}
		uParam0->f_1762[iVar1] = 0;
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2259[iVar1 /*15*/][iVar0] = 0;
			uParam0->f_2259[iVar1 /*15*/].f_5[iVar0] = 0;
			uParam0->f_2259[iVar1 /*15*/].f_10[iVar0] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_1766[iVar1 /*164*/][iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_4[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_8[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_12[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_16[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_20[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_24[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_28[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_32[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_36[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_40[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_44[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_48[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_52[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_56[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_60[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_64[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_68[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_72[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_76[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_80[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_84[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_88[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_92[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_96[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_100[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_104[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_108[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_112[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_116[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_120[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_124[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_128[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_132[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_136[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_140[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_144[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_148[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_152[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_156[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_160[iVar0] = 0;
			iVar0++;
		}
		iVar1++;
	}
	func_65(&(uParam0->f_2305));
	func_64(&(uParam0->f_2311));
	func_63(&(uParam0->f_2401));
}

void func_63(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_64(var uParam0)
{
	func_17(&(uParam0->f_12));
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = { 0f, 0f, 0f };
	uParam0->f_6 = 0f;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
}

void func_65(var uParam0)
{
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	uParam0->f_5 = -1;
}

void func_66(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0f;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		uParam0->f_11[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_24 = 0;
	uParam0->f_25 = 0;
	StringCopy(&(uParam0->f_27), "", 16);
	iVar0 = 0;
	while (iVar0 <= 48)
	{
		uParam0->f_31[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		uParam0->f_81[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_84 = 0;
	uParam0->f_85 = 0;
	uParam0->f_86 = 0;
	uParam0->f_87 = 0;
	uParam0->f_88 = 0;
	uParam0->f_89 = 0;
	uParam0->f_90 = 0;
	uParam0->f_91 = 0;
	uParam0->f_93 = 0;
	uParam0->f_94 = 0;
	uParam0->f_95 = 0;
	uParam0->f_92 = 0;
}

void func_67(var uParam0)
{
	*uParam0 = -15;
}

void func_68()
{
	StringCopy(&Global_93580, "", 32);
	func_62(&Global_93588);
}

void func_69(int iParam0)
{
	if (*iParam0 == -1)
	{
		return;
	}
	if (!*iParam0 == Global_35739)
	{
		*iParam0 = -1;
		return;
	}
	*iParam0 = -1;
	Global_35738 = 0;
	Global_35740 = 0;
	Global_35777 = 15;
	Global_55815 = 0;
	Global_55816 = 0;
}

void func_70(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!unk_0x7887B64A08364778(iParam0))
	{
		return;
	}
	iVar0 = func_78(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_36711[iVar0 /*5*/];
		func_73(1, iVar1, 1);
		return;
	}
	iVar2 = func_72(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_71(iVar2);
}

void func_71(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_36685[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_36685[iParam0 /*5*/].f_1 == unk_0xD5A676B97920D126())
		{
			Global_36906 = 0;
		}
	}
	Global_36685[iParam0 /*5*/] = 13;
	Global_36685[iParam0 /*5*/].f_1 = 0;
	Global_36685[iParam0 /*5*/].f_2 = 0;
	Global_36685[iParam0 /*5*/].f_3 = 0;
	Global_36685[iParam0 /*5*/].f_4 = 0;
	Global_36684 = (Global_36684 - 1);
	if (Global_36684 < 0)
	{
		Global_36684 = 0;
	}
}

int func_72(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_36685[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_73(int iParam0, int iParam1, int iParam2)
{
	func_74(iParam0, iParam1, iParam2, 0, 0);
}

void func_74(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_76(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_75();
	if (iVar0 == -1)
	{
		return;
	}
	Global_36792[iVar0 /*5*/] = iParam0;
	Global_36792[iVar0 /*5*/].f_1 = iParam1;
	Global_36792[iVar0 /*5*/].f_2 = iParam2;
	Global_36792[iVar0 /*5*/].f_3 = iParam3;
	Global_36792[iVar0 /*5*/].f_4 = iParam4;
}

int func_75()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36792[iVar0 /*5*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_76(int iParam0, int iParam1, int iParam2)
{
	if (func_77(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_77(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_36792[iVar0 /*5*/].f_2)
		{
			if (iParam0 == Global_36792[iVar0 /*5*/])
			{
				if (iParam1 == Global_36792[iVar0 /*5*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_78(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_36711[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_36711[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_79(int iParam0)
{
	var uVar0;
	char cVar1[24];
	
	if (unk_0x59D60465DE87FE2F() || unk_0xF1A016B51831B87B())
	{
		uVar0 = iParam0;
		unk_0xC4DF89AB50C9BF26(8, &uVar0, 1, 1);
	}
	else if (unk_0xC0915CC8FE05A943() || unk_0x603D621ED5E06CB0())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0x470FBAC1F65AC933(8, &cVar1);
	}
}

void func_80(char[4] cParam0, int iParam1)
{
	unk_0x4EA098C870B73AB7(&(Global_91486.f_20), 17);
	func_81(cParam0, iParam1, 0);
}

void func_81(char[4] cParam0, int iParam1, int iParam2)
{
	if (Global_91486 != 10 && Global_91486 != 9)
	{
		StringCopy(&Global_93580, cParam0, 32);
		func_83(&Global_93588, cParam0, 0, "Start", iParam1, iParam2);
		func_82();
		Global_85997 = 0;
	}
}

void func_82()
{
	int iVar0;
	int iVar1;
	
	Global_95993 = Global_93588;
	Global_95993.f_1 = Global_93588.f_1;
	Global_95993.f_6 = Global_93588.f_6;
	Global_95993.f_7 = Global_93588.f_7;
	Global_95993.f_8 = Global_93588.f_8;
	Global_95993.f_2 = Global_93588.f_2;
	Global_95993.f_3 = Global_93588.f_3;
	Global_95993.f_4 = Global_93588.f_4;
	Global_95993.f_5 = Global_93588.f_5;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		Global_95993.f_9[iVar1] = Global_93588.f_9[iVar1];
		Global_95993.f_13[iVar1] = Global_93588.f_13[iVar1];
		Global_95993.f_17[iVar1] = Global_93588.f_17[iVar1];
		Global_95993.f_21[iVar1] = Global_93588.f_21[iVar1];
		Global_95993.f_25[0 /*295*/][iVar1 /*98*/] = { Global_93588.f_25[0 /*295*/][iVar1 /*98*/] };
		Global_95993.f_25[1 /*295*/][iVar1 /*98*/] = { Global_93588.f_25[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 < 12)
		{
			Global_95993.f_616[iVar1 /*65*/][iVar0] = Global_93588.f_616[iVar1 /*65*/][iVar0];
			Global_95993.f_616[iVar1 /*65*/].f_13[iVar0] = Global_93588.f_616[iVar1 /*65*/].f_13[iVar0];
			Global_95993.f_616[iVar1 /*65*/].f_26[iVar0] = Global_93588.f_616[iVar1 /*65*/].f_26[iVar0];
			iVar0++;
		}
		Global_95993.f_616[iVar1 /*65*/].f_59 = Global_93588.f_616[iVar1 /*65*/].f_59;
		Global_95993.f_616[iVar1 /*65*/].f_60 = Global_93588.f_616[iVar1 /*65*/].f_60;
		Global_95993.f_616[iVar1 /*65*/].f_61 = Global_93588.f_616[iVar1 /*65*/].f_61;
		Global_95993.f_616[iVar1 /*65*/].f_62 = Global_93588.f_616[iVar1 /*65*/].f_62;
		Global_95993.f_616[iVar1 /*65*/].f_63 = Global_93588.f_616[iVar1 /*65*/].f_63;
		Global_95993.f_616[iVar1 /*65*/].f_64 = Global_93588.f_616[iVar1 /*65*/].f_64;
		iVar0 = 0;
		while (iVar0 < 9)
		{
			Global_95993.f_616[iVar1 /*65*/].f_39[iVar0] = Global_93588.f_616[iVar1 /*65*/].f_39[iVar0];
			Global_95993.f_616[iVar1 /*65*/].f_49[iVar0] = Global_93588.f_616[iVar1 /*65*/].f_49[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			Global_95993.f_812[iVar1 /*284*/][iVar0 /*3*/] = { Global_93588.f_812[iVar1 /*284*/][iVar0 /*3*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			Global_95993.f_812[iVar1 /*284*/].f_133[iVar0 /*3*/] = { Global_93588.f_812[iVar1 /*284*/].f_133[iVar0 /*3*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			Global_95993.f_1665[iVar1 /*32*/][iVar0] = Global_93588.f_1665[iVar1 /*32*/][iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Global_95993.f_1665[iVar1 /*32*/].f_5[iVar0] = Global_93588.f_1665[iVar1 /*32*/].f_5[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 15)
		{
			Global_95993.f_1665[iVar1 /*32*/].f_16[iVar0] = Global_93588.f_1665[iVar1 /*32*/].f_16[iVar0];
			iVar0++;
		}
		Global_95993.f_1762[iVar1] = Global_93588.f_1762[iVar1];
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			Global_95993.f_2259[iVar1 /*15*/][iVar0] = Global_93588.f_2259[iVar1 /*15*/][iVar0];
			Global_95993.f_2259[iVar1 /*15*/].f_5[iVar0] = Global_93588.f_2259[iVar1 /*15*/].f_5[iVar0];
			Global_95993.f_2259[iVar1 /*15*/].f_10[iVar0] = Global_93588.f_2259[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			Global_95993.f_1766[iVar1 /*164*/][iVar0] = Global_93588.f_1766[iVar1 /*164*/][iVar0];
			Global_95993.f_1766[iVar1 /*164*/].f_4[iVar0] = Global_93588.f_1766[iVar1 /*164*/].f_4[iVar0];
			Global_95993.f_1766[iVar1 /*164*/].f_8[iVar0] = Global_93588.f_1766[iVar1 /*164*/].f_8[iVar0];
			Global_95993.f_1766[iVar1 /*164*/].f_12[iVar0] = Global_93588.f_1766[iVar1 /*164*/].f_12[iVar0];
			Global_95993.f_1766[iVar1 /*164*/].f_16[iVar0] = Global_93588.f_1766[iVar1 /*164*/].f_16[iVar0];
			Global_95993.f_1766[iVar1 /*164*/].f_20[iVar0] = Global_93588.f_1766[iVar1 /*164*/].f_20[iVar0];
			Global_95993.f_1766[iVar1 /*164*/].f_24[iVar0] = Global_93588.f_1766[iVar1 /*164*/].f_24[iVar0];
			Global_95993.f_1766[iVar1 /*164*/].f_28[iVar0] = Global_93588.f_1766[iVar1 /*164*/].f_28[iVar0];
			Global_95993.f_1766[iVar1 /*164*/].f_32[iVar0] = Global_93588.f_1766[iVar1 /*164*/].f_32[iVar0];
			Global_95993.f_1766[iVar1 /*164*/].f_36[iVar0] = Global_93588.f_1766[iVar1 /*164*/].f_36[iVar0];
			Global_95993.f_1766[iVar1 /*164*/].f_40[iVar0] = Global_93588.f_1766[iVar1 /*164*/].f_40[iVar0];
			Global_95993.f_1766[iVar1 /*164*/].f_44[iVar0] = Global_93588.f_1766[iVar1 /*164*/].f_44[iVar0];
			Global_95993.f_1766[iVar1 /*164*/].f_48[iVar0] = Global_93588.f_1766[iVar1 /*164*/].f_48[iVar0];
			Global_95993.f_1766[iVar1 /*164*/].f_52[iVar0] = Global_93588.f_1766[iVar1 /*164*/].f_52[iVar0];
			Global_95993.f_1766[iVar1 /*164*/].f_56[iVar0] = Global_93588.f_1766[iVar1 /*164*/].f_56[iVar0];
			Global_95993.f_1766[iVar1 /*164*/].f_60[iVar0] = Global_93588.f_1766[iVar1 /*164*/].f_60[iVar0];
			Global_95993.f_1766[iVar1 /*164*/].f_64[iVar0] = Global_93588.f_1766[iVar1 /*164*/].f_64[iVar0];
			Global_95993.f_1766[iVar1 /*164*/].f_68[iVar0] = Global_93588.f_1766[iVar1 /*164*/].f_68[iVar0];
			Global_95993.f_1766[iVar1 /*164*/].f_72[iVar0] = Global_93588.f_1766[iVar1 /*164*/].f_72[iVar0];
			Global_95993.f_1766[iVar1 /*164*/].f_76[iVar0] = Global_93588.f_1766[iVar1 /*164*/].f_76[iVar0];
			Global_95993.f_1766[iVar1 /*164*/].f_80[iVar0] = Global_93588.f_1766[iVar1 /*164*/].f_80[iVar0];
			Global_95993.f_1766[iVar1 /*164*/].f_84[iVar0] = Global_93588.f_1766[iVar1 /*164*/].f_84[iVar0];
			Global_95993.f_1766[iVar1 /*164*/].f_88[iVar0] = Global_93588.f_1766[iVar1 /*164*/].f_88[iVar0];
			Global_95993.f_1766[iVar1 /*164*/].f_92[iVar0] = Global_93588.f_1766[iVar1 /*164*/].f_92[iVar0];
			Global_95993.f_1766[iVar1 /*164*/].f_96[iVar0] = Global_93588.f_1766[iVar1 /*164*/].f_96[iVar0];
			Global_95993.f_1766[iVar1 /*164*/].f_100[iVar0] = Global_93588.f_1766[iVar1 /*164*/].f_100[iVar0];
			Global_95993.f_1766[iVar1 /*164*/].f_104[iVar0] = Global_93588.f_1766[iVar1 /*164*/].f_104[iVar0];
			Global_95993.f_1766[iVar1 /*164*/].f_108[iVar0] = Global_93588.f_1766[iVar1 /*164*/].f_108[iVar0];
			Global_95993.f_1766[iVar1 /*164*/].f_112[iVar0] = Global_93588.f_1766[iVar1 /*164*/].f_112[iVar0];
			Global_95993.f_1766[iVar1 /*164*/].f_116[iVar0] = Global_93588.f_1766[iVar1 /*164*/].f_116[iVar0];
			Global_95993.f_1766[iVar1 /*164*/].f_120[iVar0] = Global_93588.f_1766[iVar1 /*164*/].f_120[iVar0];
			Global_95993.f_1766[iVar1 /*164*/].f_124[iVar0] = Global_93588.f_1766[iVar1 /*164*/].f_124[iVar0];
			Global_95993.f_1766[iVar1 /*164*/].f_128[iVar0] = Global_93588.f_1766[iVar1 /*164*/].f_128[iVar0];
			Global_95993.f_1766[iVar1 /*164*/].f_132[iVar0] = Global_93588.f_1766[iVar1 /*164*/].f_132[iVar0];
			Global_95993.f_1766[iVar1 /*164*/].f_136[iVar0] = Global_93588.f_1766[iVar1 /*164*/].f_136[iVar0];
			Global_95993.f_1766[iVar1 /*164*/].f_140[iVar0] = Global_93588.f_1766[iVar1 /*164*/].f_140[iVar0];
			Global_95993.f_1766[iVar1 /*164*/].f_144[iVar0] = Global_93588.f_1766[iVar1 /*164*/].f_144[iVar0];
			Global_95993.f_1766[iVar1 /*164*/].f_148[iVar0] = Global_93588.f_1766[iVar1 /*164*/].f_148[iVar0];
			Global_95993.f_1766[iVar1 /*164*/].f_152[iVar0] = Global_93588.f_1766[iVar1 /*164*/].f_152[iVar0];
			Global_95993.f_1766[iVar1 /*164*/].f_156[iVar0] = Global_93588.f_1766[iVar1 /*164*/].f_156[iVar0];
			Global_95993.f_1766[iVar1 /*164*/].f_160[iVar0] = Global_93588.f_1766[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	Global_95993.f_2305 = { Global_93588.f_2305 };
	Global_95993.f_2305.f_3 = Global_93588.f_2305.f_3;
	Global_95993.f_2311 = { Global_93588.f_2311 };
	Global_95993.f_2311.f_3 = { Global_93588.f_2311.f_3 };
	Global_95993.f_2311.f_6 = Global_93588.f_2311.f_6;
	Global_95993.f_2311.f_8 = Global_95993.f_2311.f_8;
	Global_95993.f_2311.f_7 = Global_93588.f_2311.f_7;
	Global_95993.f_2311.f_9 = Global_93588.f_2311.f_9;
	Global_95993.f_2311.f_11 = Global_93588.f_2311.f_11;
	Global_95993.f_2311.f_10 = Global_93588.f_2311.f_10;
	Global_95993.f_2311.f_12 = Global_93588.f_2311.f_12;
	Global_95993.f_2311.f_12.f_1 = { Global_93588.f_2311.f_12.f_1 };
	Global_95993.f_2311.f_12.f_5 = Global_93588.f_2311.f_12.f_5;
	Global_95993.f_2311.f_12.f_6 = Global_93588.f_2311.f_12.f_6;
	Global_95993.f_2311.f_12.f_7 = Global_93588.f_2311.f_12.f_7;
	Global_95993.f_2311.f_12.f_8 = Global_93588.f_2311.f_12.f_8;
	Global_95993.f_2311.f_12.f_9 = { Global_93588.f_2311.f_12.f_9 };
	Global_95993.f_2311.f_12.f_59 = { Global_93588.f_2311.f_12.f_59 };
	Global_95993.f_2311.f_12.f_62 = Global_93588.f_2311.f_12.f_62;
	Global_95993.f_2311.f_12.f_63 = Global_93588.f_2311.f_12.f_63;
	Global_95993.f_2311.f_12.f_64 = Global_93588.f_2311.f_12.f_64;
	Global_95993.f_2311.f_12.f_65 = Global_93588.f_2311.f_12.f_65;
	Global_95993.f_2311.f_12.f_77 = Global_93588.f_2311.f_12.f_77;
	Global_95993.f_2311.f_12.f_66 = Global_93588.f_2311.f_12.f_66;
	Global_95993.f_2311.f_12.f_67 = Global_93588.f_2311.f_12.f_67;
	Global_95993.f_2311.f_12.f_68 = Global_93588.f_2311.f_12.f_68;
	Global_95993.f_2311.f_12.f_69 = Global_93588.f_2311.f_12.f_69;
	Global_95993.f_2311.f_12.f_71 = Global_93588.f_2311.f_12.f_71;
	Global_95993.f_2311.f_12.f_72 = Global_93588.f_2311.f_12.f_72;
	Global_95993.f_2311.f_12.f_73 = Global_93588.f_2311.f_12.f_73;
	Global_95993.f_2311.f_12.f_74 = Global_93588.f_2311.f_12.f_74;
	Global_95993.f_2311.f_12.f_75 = Global_93588.f_2311.f_12.f_75;
	Global_95993.f_2311.f_12.f_76 = Global_93588.f_2311.f_12.f_76;
	Global_95993.f_2401 = Global_93588.f_2401;
	Global_95993.f_2401.f_1 = Global_93588.f_2401.f_1;
	Global_95993.f_2401.f_2 = Global_93588.f_2401.f_2;
	Global_95993.f_2401.f_3 = Global_93588.f_2401.f_3;
}

void func_83(var uParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_21();
	uParam0->f_1 = func_51();
	unk_0x63B2F81125DA4B32(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
	{
		func_100(&(uParam0->f_2305), 0);
		func_99(unk_0xD5A676B97920D126());
		func_93(unk_0xD5A676B97920D126(), 0);
		unk_0x2F29BEC857E6C0AC(unk_0xD5A676B97920D126(), &(uParam0->f_2), 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("object"))
		{
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_101652.f_2079.f_539.f_294[iVar1];
		if (iVar1 == func_92())
		{
			func_85(unk_0xD5A676B97920D126(), &(uParam0->f_616[iVar1 /*65*/]), 1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_616[iVar1 /*65*/][iVar0] = Global_91276[iVar1 /*65*/][iVar0];
				uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = Global_91276[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_616[iVar1 /*65*/].f_59 = Global_91276[iVar1 /*65*/].f_59;
			uParam0->f_616[iVar1 /*65*/].f_60 = Global_91276[iVar1 /*65*/].f_60;
			uParam0->f_616[iVar1 /*65*/].f_61 = Global_91276[iVar1 /*65*/].f_61;
			uParam0->f_616[iVar1 /*65*/].f_62 = Global_91276[iVar1 /*65*/].f_62;
			uParam0->f_616[iVar1 /*65*/].f_63 = Global_91276[iVar1 /*65*/].f_63;
			uParam0->f_616[iVar1 /*65*/].f_64 = Global_91276[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = Global_91276[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = Global_91276[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1 /*284*/][iVar0 /*3*/] = { Global_101652.f_2079.f_539.f_298[iVar1 /*284*/][iVar0 /*3*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			uParam0->f_812[iVar1 /*284*/].f_133[iVar0 /*3*/] = { Global_101652.f_2079.f_539.f_298[iVar1 /*284*/].f_133[iVar0 /*3*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				unk_0x5BC7B5709E38CBE0(joaat("sp0_weap_purch_0"), &(uParam0->f_1665[iVar1 /*32*/][0]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp0_weap_purch_1"), &(uParam0->f_1665[iVar1 /*32*/][1]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp0_weap_addon_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_5[0]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp0_weap_addon_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_5[1]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp0_weap_addon_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_5[2]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp0_weap_addon_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_5[3]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp0_weap_addon_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_5[4]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp0_weap_tint_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_16[0]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp0_weap_tint_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_16[1]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp0_weap_tint_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_16[2]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp0_weap_tint_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_16[3]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp0_weap_tint_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_16[4]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp0_weap_tint_purch_5"), &(uParam0->f_1665[iVar1 /*32*/].f_16[5]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp0_weap_tint_purch_6"), &(uParam0->f_1665[iVar1 /*32*/].f_16[6]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp0_weap_tint_purch_7"), &(uParam0->f_1665[iVar1 /*32*/].f_16[7]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp0_weap_tint_purch_8"), &(uParam0->f_1665[iVar1 /*32*/].f_16[8]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp0_weap_tint_purch_9"), &(uParam0->f_1665[iVar1 /*32*/].f_16[9]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp0_weap_tint_purch_10"), &(uParam0->f_1665[iVar1 /*32*/].f_16[10]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp0_weap_tint_purch_11"), &(uParam0->f_1665[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 1:
				unk_0x5BC7B5709E38CBE0(joaat("sp1_weap_purch_0"), &(uParam0->f_1665[iVar1 /*32*/][0]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp1_weap_purch_1"), &(uParam0->f_1665[iVar1 /*32*/][1]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp1_weap_addon_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_5[0]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp1_weap_addon_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_5[1]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp1_weap_addon_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_5[2]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp1_weap_addon_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_5[3]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp1_weap_addon_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_5[4]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp1_weap_tint_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_16[0]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp1_weap_tint_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_16[1]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp1_weap_tint_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_16[2]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp1_weap_tint_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_16[3]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp1_weap_tint_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_16[4]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp1_weap_tint_purch_5"), &(uParam0->f_1665[iVar1 /*32*/].f_16[5]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp1_weap_tint_purch_6"), &(uParam0->f_1665[iVar1 /*32*/].f_16[6]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp1_weap_tint_purch_7"), &(uParam0->f_1665[iVar1 /*32*/].f_16[7]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp1_weap_tint_purch_8"), &(uParam0->f_1665[iVar1 /*32*/].f_16[8]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp1_weap_tint_purch_9"), &(uParam0->f_1665[iVar1 /*32*/].f_16[9]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp1_weap_tint_purch_10"), &(uParam0->f_1665[iVar1 /*32*/].f_16[10]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp1_weap_tint_purch_11"), &(uParam0->f_1665[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 2:
				unk_0x5BC7B5709E38CBE0(joaat("sp2_weap_purch_0"), &(uParam0->f_1665[iVar1 /*32*/][0]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp2_weap_purch_1"), &(uParam0->f_1665[iVar1 /*32*/][1]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp2_weap_addon_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_5[0]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp2_weap_addon_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_5[1]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp2_weap_addon_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_5[2]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp2_weap_addon_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_5[3]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp2_weap_addon_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_5[4]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp2_weap_tint_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_16[0]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp2_weap_tint_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_16[1]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp2_weap_tint_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_16[2]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp2_weap_tint_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_16[3]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp2_weap_tint_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_16[4]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp2_weap_tint_purch_5"), &(uParam0->f_1665[iVar1 /*32*/].f_16[5]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp2_weap_tint_purch_6"), &(uParam0->f_1665[iVar1 /*32*/].f_16[6]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp2_weap_tint_purch_7"), &(uParam0->f_1665[iVar1 /*32*/].f_16[7]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp2_weap_tint_purch_8"), &(uParam0->f_1665[iVar1 /*32*/].f_16[8]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp2_weap_tint_purch_9"), &(uParam0->f_1665[iVar1 /*32*/].f_16[9]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp2_weap_tint_purch_10"), &(uParam0->f_1665[iVar1 /*32*/].f_16[10]), -1);
				unk_0x5BC7B5709E38CBE0(joaat("sp2_weap_tint_purch_11"), &(uParam0->f_1665[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_101652.f_19507.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_52992[iVar1];
		uParam0->f_25[0 /*295*/][iVar1 /*98*/] = { Global_101652.f_2079.f_539.f_1635[0 /*295*/][iVar1 /*98*/] };
		uParam0->f_25[1 /*295*/][iVar1 /*98*/] = { Global_101652.f_2079.f_539.f_1635[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2259[iVar1 /*15*/][iVar0] = Global_101652.f_2079.f_493[iVar1 /*15*/][iVar0];
			uParam0->f_2259[iVar1 /*15*/].f_5[iVar0] = Global_101652.f_2079.f_493[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2259[iVar1 /*15*/].f_10[iVar0] = Global_101652.f_2079.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_1766[iVar1 /*164*/][iVar0] = Global_101652.f_2079[iVar1 /*164*/][iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_4[iVar0] = Global_101652.f_2079[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_8[iVar0] = Global_101652.f_2079[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_12[iVar0] = Global_101652.f_2079[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_16[iVar0] = Global_101652.f_2079[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_20[iVar0] = Global_101652.f_2079[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_24[iVar0] = Global_101652.f_2079[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_28[iVar0] = Global_101652.f_2079[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_32[iVar0] = Global_101652.f_2079[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_36[iVar0] = Global_101652.f_2079[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_40[iVar0] = Global_101652.f_2079[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_44[iVar0] = Global_101652.f_2079[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_48[iVar0] = Global_101652.f_2079[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_52[iVar0] = Global_101652.f_2079[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_56[iVar0] = Global_101652.f_2079[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_60[iVar0] = Global_101652.f_2079[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_64[iVar0] = Global_101652.f_2079[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_68[iVar0] = Global_101652.f_2079[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_72[iVar0] = Global_101652.f_2079[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_76[iVar0] = Global_101652.f_2079[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_80[iVar0] = Global_101652.f_2079[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_84[iVar0] = Global_101652.f_2079[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_88[iVar0] = Global_101652.f_2079[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_92[iVar0] = Global_101652.f_2079[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_96[iVar0] = Global_101652.f_2079[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_100[iVar0] = Global_101652.f_2079[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_104[iVar0] = Global_101652.f_2079[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_108[iVar0] = Global_101652.f_2079[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_112[iVar0] = Global_101652.f_2079[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_116[iVar0] = Global_101652.f_2079[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_120[iVar0] = Global_101652.f_2079[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_124[iVar0] = Global_101652.f_2079[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_128[iVar0] = Global_101652.f_2079[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_132[iVar0] = Global_101652.f_2079[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_136[iVar0] = Global_101652.f_2079[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_140[iVar0] = Global_101652.f_2079[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_144[iVar0] = Global_101652.f_2079[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_148[iVar0] = Global_101652.f_2079[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_152[iVar0] = Global_101652.f_2079[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_156[iVar0] = Global_101652.f_2079[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_160[iVar0] = Global_101652.f_2079[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	unk_0x5BC7B5709E38CBE0(joaat("sp0_special_ability"), &(uParam0->f_1762[0]), -1);
	unk_0x5BC7B5709E38CBE0(joaat("sp1_special_ability"), &(uParam0->f_1762[1]), -1);
	unk_0x5BC7B5709E38CBE0(joaat("sp2_special_ability"), &(uParam0->f_1762[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		func_4(&(uParam0->f_2311), uParam0, iParam5, 1, 1, 0);
	}
	func_84(&(uParam0->f_2401));
	sParam3 = sParam3;
	iParam2 = iParam2;
}

int func_84(var uParam0)
{
	*uParam0 = Global_87668;
	uParam0->f_1 = Global_87669;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_85(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x00B5B0B68211D89B(iParam0))
	{
		iVar0 = func_25(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_91(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_90(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_13(iVar0))
		{
			uParam1->f_59 = Global_101652.f_2079.f_539[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_101652.f_2079.f_539[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_101652.f_2079.f_539[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_101652.f_2079.f_539[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_101652.f_2079.f_539[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_101652.f_2079.f_539[iVar0 /*65*/].f_64;
		}
		else if (unk_0x1995B52453EF6537() && unk_0xA0A4DA31DEDFAC4F(iParam0) == unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()))
		{
			if (func_89(161, -1))
			{
				uParam1->f_59 = func_86(2045, Global_69516, 0);
			}
			else
			{
				uParam1->f_59 = func_86(747, Global_69516, 0);
			}
			uParam1->f_60 = func_86(748, Global_69516, 0);
			uParam1->f_61 = func_86(749, Global_69516, 0);
		}
		if (unk_0x1995B52453EF6537() && iParam0 == unk_0xD5A676B97920D126())
		{
			if (func_89(161, -1))
			{
				uParam1->f_59 = func_86(2045, Global_69516, 0);
			}
			else
			{
				uParam1->f_59 = func_86(747, Global_69516, 0);
			}
		}
	}
}

int func_86(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2503773[iParam0 /*3*/][func_87(iParam1)];
	if (unk_0x5BC7B5709E38CBE0(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_87(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_88();
		if (iVar1 > -1)
		{
			Global_2503486 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2503486 = 1;
		}
	}
	return iVar0;
}

var func_88()
{
	return Global_1312731;
}

int func_89(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2522528[iParam0 /*3*/][func_87(iParam1)];
	if (unk_0xC76B1795CAE597C4(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_90(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_25(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0xAB9908FC72EDECCD(iParam0, iParam1);
		*uParam3 = unk_0x3B8EAC78093F7707(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam5;
	}
	if (iParam4 == 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
		{
			if (iParam0 != 0)
			{
				if (unk_0x24F65742A2FF75C2(iParam0) && unk_0x59B1F5BAB938B866(iParam0) != -1)
				{
					*uParam2 = unk_0x59B1F5BAB938B866(iParam0);
					*uParam3 = unk_0x309118E8B693DC86(iParam0);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 0)
			{
				if (*uParam2 == 7)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 28)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (*uParam2 == 1)
				{
					if (iParam4 & 2 != 0 || iParam4 & 64 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				if (*uParam2 == 2)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 4)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 6)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 17)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 20)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 8 && *uParam2 <= 14)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				if (*uParam2 == 9)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 12)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if ((*uParam2 >= 14 && *uParam2 <= 20) || *uParam2 == 2)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	}
}

void func_91(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = func_25(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0x0DF5DCF0FB12F865(iParam0, iParam1);
		*uParam3 = unk_0xF48FEED29B821958(iParam0, iParam1);
		*uParam4 = unk_0x2A8A29E2EFF14437(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam6;
	}
	if (iParam5 == 0)
	{
		return;
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 15)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 3 || *uParam2 == 22)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 8)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 1 || *uParam2 == 10)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 19)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (*uParam2 >= 5 && *uParam2 <= 7)
				{
					if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	}
}

int func_92()
{
	func_22();
	return Global_101652.f_2079.f_539.f_3549;
}

void func_93(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = func_25(iParam0);
	if (func_13(iVar0) && !unk_0x00B5B0B68211D89B(iParam0))
	{
		if (iParam0 == unk_0xD5A676B97920D126())
		{
			func_94(iParam0, &(Global_101652.f_2079.f_539.f_298[iVar0 /*284*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_101652.f_2079.f_539.f_1151[iVar2 /*4*/][iVar0] = unk_0x7577E26F2E9239BF(iVar2);
				if (bParam1)
				{
					iVar1 = unk_0x8112C04EC95B41F9();
					if (Global_101652.f_2079.f_539.f_1151[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_101652.f_2079.f_539.f_1184 = iVar2;
					}
				}
				iVar2++;
			}
			unk_0xE8500CB551D56C5E(unk_0xFB6B3EEFAB2DD12C(), &uVar3);
			if (iVar0 == 0)
			{
				unk_0xB924315F0872835A(joaat("sp0_parachute_current_tint"), uVar3, 1);
			}
			else if (iVar0 == 1)
			{
				unk_0xB924315F0872835A(joaat("sp1_parachute_current_tint"), uVar3, 1);
			}
			else if (iVar0 == 2)
			{
				unk_0xB924315F0872835A(joaat("sp2_parachute_current_tint"), uVar3, 1);
			}
		}
	}
}

void func_94(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	int iVar7;
	int iVar8;
	struct<2> Var9;
	struct<4> Var48;
	int iVar70;
	
	if (!unk_0x00B5B0B68211D89B(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			(uParam1[iVar0 /*3*/])->f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar3 = func_98(iVar0);
			if (iVar3 != 0)
			{
				Var4.f_0 = unk_0x9B30B9013A2D9ACA(iParam0, func_98(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				if (Var4.f_0 != 0 && Var4.f_0 != joaat("weapon_unarmed"))
				{
					Var4.f_1 = unk_0xEC114559311F56E2(iParam0, Var4.f_0);
					if (Var4.f_0 == joaat("gadget_parachute"))
					{
						Var4.f_1 = 1;
					}
					unk_0xB8A73E7DA87B2968(&(Var4.f_2), (20 + unk_0xEF5797A178BC1DCB(iParam0, Var4.f_0)));
					if (Var4.f_1 == -1)
					{
						if (!unk_0x01648DF7BF4D1636(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*3*/])->f_1 = Var4.f_1;
					iVar1 = 0;
					iVar2 = func_96(Var4.f_0, iVar1);
					while (iVar2 != 0)
					{
						if (unk_0xBC123D210F0BF5FB(iParam0, Var4.f_0, iVar2))
						{
							unk_0xB8A73E7DA87B2968(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_96(Var4.f_0, iVar1);
					}
				}
				*(uParam1[iVar0 /*3*/]) = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (50 - 1))
		{
			uParam1->f_133[iVar0 /*3*/].f_1 = 0;
			iVar0++;
		}
		iVar8 = unk_0x41DD9BE0891252D4();
		iVar7 = 0;
		while (iVar7 < iVar8)
		{
			if ((unk_0x8B2BCE658D6CB0A1(iVar7, &Var9) && !func_95(Var9.f_1)) && iVar70 < 50)
			{
				if (!unk_0x68410A55F20AE7A5(Var9.f_0))
				{
					Var4.f_0 = Var9.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_1 = unk_0xEC114559311F56E2(iParam0, Var4.f_0);
					if (unk_0xE5A6095B39C65EBC(iParam0, Var4.f_0, 0))
					{
						unk_0xB8A73E7DA87B2968(&(Var4.f_2), (20 + unk_0xEF5797A178BC1DCB(iParam0, Var4.f_0)));
					}
					else
					{
						unk_0xB8A73E7DA87B2968(&(Var4.f_2), 20);
					}
					if (Var4.f_1 == -1)
					{
						if (!unk_0x01648DF7BF4D1636(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_133[iVar70 /*3*/].f_1 = Var4.f_1;
					iVar1 = 0;
					while (iVar1 < unk_0xA9F7970C93266CD4(iVar7))
					{
						if (unk_0xCE4C3C6C9F6705A1(iVar7, iVar1, &Var48))
						{
							if (unk_0xBC123D210F0BF5FB(iParam0, Var4.f_0, Var48.f_3))
							{
								unk_0xB8A73E7DA87B2968(&(Var4.f_2), iVar1);
							}
						}
						iVar1++;
					}
				}
				if (Var4.f_0 != 0)
				{
					if (!unk_0xE5A6095B39C65EBC(iParam0, Var4.f_0, 0))
					{
						Var4.f_0 = 0;
						Var4.f_1 = 0;
					}
				}
				uParam1->f_133[iVar70 /*3*/] = { Var4 };
				iVar70++;
			}
			iVar7++;
		}
	}
}

int func_95(int iParam0)
{
	if (unk_0x1995B52453EF6537())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("weapon_pistol50"):
			case joaat("weapon_bullpupshotgun"):
			case joaat("weapon_assaultsmg"):
				return 0;
				break;
			
			case joaat("weapon_bottle"):
			case joaat("weapon_snspistol"):
			case joaat("weapon_gusenberg"):
				return 0;
				break;
			
			case joaat("weapon_heavypistol"):
			case joaat("weapon_specialcarbine"):
				return 0;
				break;
			
			case joaat("weapon_bullpuprifle"):
				return 0;
				break;
			
			case joaat("weapon_dagger"):
			case joaat("weapon_vintagepistol"):
				return 0;
				break;
			
			case joaat("weapon_firework"):
			case joaat("weapon_musket"):
				return 0;
				break;
			
			case joaat("weapon_heavyshotgun"):
			case joaat("weapon_marksmanrifle"):
				return 0;
				break;
			
			case joaat("weapon_hominglauncher"):
			case joaat("weapon_proxmine"):
				return 0;
				break;
			
			case joaat("weapon_combatpdw"):
			case joaat("weapon_knuckle"):
			case joaat("weapon_marksmanpistol"):
				return 0;
				break;
			
			case joaat("weapon_heavyrifle"):
			case -572349828:
			case 392730790:
			case -1523701417:
			case -2112826155:
			case -664359727:
			case -1887867191:
			case -837150131:
			case -344484024:
			case joaat("weapon_flaregun"):
			case joaat("weapon_handcuffs"):
			case joaat("weapon_snowball"):
			case joaat("weapon_garbagebag"):
			case joaat("weapon_flashlight"):
			case joaat("weapon_switchblade"):
			case joaat("weapon_revolver"):
			case joaat("weapon_dbshotgun"):
			case joaat("weapon_compactrifle"):
			case joaat("weapon_autoshotgun"):
			case joaat("weapon_minismg"):
			case joaat("weapon_compactlauncher"):
			case joaat("weapon_battleaxe"):
			case joaat("weapon_pipebomb"):
			case joaat("weapon_poolcue"):
			case joaat("weapon_wrench"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_96(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	struct<4> Var41;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_combatpistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_appistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_appistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_appistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_microsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_microsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_microsmg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_smg_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 7:
					iVar0 = joaat("component_smg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_assaultrifle_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 5:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 7:
					iVar0 = joaat("component_assaultrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_carbinerifle_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 8:
					iVar0 = joaat("component_carbinerifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_advancedrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_advancedrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_advancedrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_mg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_mg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_mg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 4:
					iVar0 = joaat("component_combatmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_sr_supp");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_pumpshotgun_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultshotgun_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultshotgun_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sniperrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_sniperrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small");
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minigun_clip_01");
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_assaultsmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol50_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol50_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol50_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpdw_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpdw_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_combatpdw_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sawnoffshotgun_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_bullpuprifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_bullpuprifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_bullpuprifle_varmod_low");
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_snspistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_snspistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_snspistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_specialcarbine_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_specialcarbine_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_specialcarbine_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 7:
					iVar0 = joaat("component_specialcarbine_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_knuckle_varmod_pimp");
					break;
				
				case 1:
					iVar0 = joaat("component_knuckle_varmod_ballas");
					break;
				
				case 2:
					iVar0 = joaat("component_knuckle_varmod_dollar");
					break;
				
				case 3:
					iVar0 = joaat("component_knuckle_varmod_diamond");
					break;
				
				case 4:
					iVar0 = joaat("component_knuckle_varmod_hate");
					break;
				
				case 5:
					iVar0 = joaat("component_knuckle_varmod_love");
					break;
				
				case 6:
					iVar0 = joaat("component_knuckle_varmod_player");
					break;
				
				case 7:
					iVar0 = joaat("component_knuckle_varmod_king");
					break;
				
				case 8:
					iVar0 = joaat("component_knuckle_varmod_vagos");
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_machinepistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_machinepistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_machinepistol_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_switchblade_varmod_var1");
					break;
				
				case 1:
					iVar0 = joaat("component_switchblade_varmod_var2");
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_revolver_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_revolver_varmod_boss");
					break;
				
				case 2:
					iVar0 = joaat("component_revolver_varmod_goon");
					break;
			}
			break;
		
		case joaat("weapon_minismg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minismg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_minismg_clip_02");
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_97(iParam0, &uVar2);
				if (iVar1 != -1)
				{
					if (iParam1 < unk_0xA9F7970C93266CD4(iVar1))
					{
						if (unk_0xCE4C3C6C9F6705A1(iVar1, iParam1, &Var41))
						{
							return Var41.f_3;
						}
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_97(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x41DD9BE0891252D4();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0x8B2BCE658D6CB0A1(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_98(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 1993361168;
			break;
		
		case 1:
			iVar0 = 1277010230;
			break;
		
		case 2:
			iVar0 = 932043479;
			break;
		
		case 3:
			iVar0 = -690654591;
			break;
		
		case 4:
			iVar0 = -1459198205;
			break;
		
		case 5:
			iVar0 = 195782970;
			break;
		
		case 6:
			iVar0 = -438797331;
			break;
		
		case 7:
			iVar0 = 896793492;
			break;
		
		case 8:
			iVar0 = 495159329;
			break;
		
		case 9:
			iVar0 = -1155528315;
			break;
		
		case 10:
			iVar0 = -515636489;
			break;
		
		case 11:
			iVar0 = -871913299;
			break;
		
		case 12:
			iVar0 = -1352759032;
			break;
		
		case 13:
			iVar0 = -542958961;
			break;
		
		case 14:
			iVar0 = 1682645887;
			break;
		
		case 15:
			iVar0 = -859470162;
			break;
		
		case 16:
			iVar0 = -2125426402;
			break;
		
		case 17:
			iVar0 = 2067210266;
			break;
		
		case 18:
			iVar0 = -538172856;
			break;
		
		case 19:
			iVar0 = 1783244476;
			break;
		
		case 20:
			iVar0 = 439844898;
			break;
		
		case 21:
			iVar0 = -24829327;
			break;
		
		case 22:
			iVar0 = 1949306232;
			break;
		
		case 23:
			iVar0 = -1941230881;
			break;
		
		case 24:
			iVar0 = -1033554448;
			break;
		
		case 25:
			iVar0 = 320513715;
			break;
		
		case 26:
			iVar0 = -695165975;
			break;
		
		case 27:
			iVar0 = -281028447;
			break;
		
		case 28:
			iVar0 = -686713772;
			break;
		
		case 29:
			iVar0 = 347509793;
			break;
		
		case 30:
			iVar0 = 1769089473;
			break;
		
		case 31:
			iVar0 = 189935548;
			break;
		
		case 33:
			iVar0 = 248801358;
			break;
		
		case 34:
			iVar0 = 386596758;
			break;
		
		case 35:
			iVar0 = -157212362;
			break;
		
		case 36:
			iVar0 = 436985596;
			break;
		
		case 37:
			iVar0 = -47957369;
			break;
		
		case 38:
			iVar0 = 575938238;
			break;
	}
	return iVar0;
}

void func_99(int iParam0)
{
	int iVar0;
	
	iVar0 = func_25(iParam0);
	if (func_13(iVar0) && !unk_0x00B5B0B68211D89B(iParam0))
	{
		Global_101652.f_2079.f_539.f_294[iVar0] = unk_0x378417C04D2D42A5(iParam0);
	}
}

void func_100(var uParam0, int iParam1)
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	int iVar5;
	
	*uParam0 = { unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1) };
	uParam0->f_3 = unk_0x714F015B4D2DE1DC(unk_0xD5A676B97920D126());
	uParam0->f_5 = unk_0xB94077C2679C1B6F(unk_0xD5A676B97920D126());
	if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
	{
		uParam0->f_4 = unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C());
	}
	if (unk_0x2A488C176D52CCA5(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f)
	{
		*uParam0 = { 301.2162f, 202.1357f, 103.3797f };
		uParam0->f_3 = 156.5144f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f)
	{
		*uParam0 = { 394.2567f, -713.5439f, 28.2853f };
		uParam0->f_3 = 276.6273f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, -1425.564f, -244.3f, 15.8053f) < 10f)
	{
		*uParam0 = { -1423.472f, -214.2539f, 45.5004f };
		uParam0->f_3 = 353.8757f;
	}
	else if (unk_0xAB964FCFAC3C767A(joaat("finale_choice")) > 0)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (unk_0xF44A5E894FE76438(Global_69945, 4))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (unk_0xF44A5E894FE76438(Global_69945, 5))
	{
		*uParam0 = { -745.4462f, 5595.146f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (unk_0xF44A5E894FE76438(Global_69945, 6))
	{
		*uParam0 = { -1675.521f, -1125.59f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (unk_0xF44A5E894FE76438(Global_69945, 7))
	{
		*uParam0 = { -1631.219f, -1112.805f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (unk_0xDC9C34EF6C270425(unk_0xD5A676B97920D126()) == unk_0xC294D34374133831(1272.659f, -1715.467f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.956f, -1725.189f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (unk_0x1AC9C20D51EE6DC3(unk_0xD5A676B97920D126(), -415.4365f, 2068.289f, 113.3002f, -564.9516f, 1884.703f, 134.0403f, 258.75f, 0, 1, 0) || unk_0x1AC9C20D51EE6DC3(unk_0xD5A676B97920D126(), -596.4706f, 2089.921f, 125.4128f, -581.2134f, 2036.256f, 136.2836f, 9.5f, 0, 1, 0))
	{
		*uParam0 = { -601.59f, 2099.197f, 128.8928f };
		uParam0->f_3 = 204.7498f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, -1007.393f, -477.9584f, 52.5357f) < 8f)
	{
		*uParam0 = { -1018.376f, -483.9436f, 36.0964f };
		uParam0->f_3 = 114.7664f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, 480.6662f, -1317.808f, 28.20303f) < 15f)
	{
		*uParam0 = { 497.7238f, -1310.932f, 28.2372f };
		uParam0->f_3 = 289.3663f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, 2329.527f, 2571.311f, 45.6779f) < 5f)
	{
		*uParam0 = { 2316.93f, 2594.153f, 45.7199f };
		uParam0->f_3 = 348.1325f;
	}
	if (iParam1 == 1)
	{
		if (func_104(&iVar0))
		{
			if (func_102(iVar0, &Var1, &uVar4))
			{
				Var1.f_2 = (Var1.f_2 + 1f);
				*uParam0 = { Var1 };
				uParam0->f_3 = uVar4;
			}
		}
		else if (unk_0x1AC9C20D51EE6DC3(unk_0xD5A676B97920D126(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, 1, 0))
		{
			iVar5 = func_21();
			if (iVar5 == 0)
			{
				*uParam0 = { -65.1234f, 81.2517f, 70.5644f };
				uParam0->f_3 = 71.6237f;
			}
			else if (iVar5 == 1)
			{
				*uParam0 = { -68.5531f, -1824.377f, 25.9424f };
				uParam0->f_3 = 215.8295f;
			}
			else if (iVar5 == 2)
			{
				*uParam0 = { -220.8189f, -1162.302f, 22.0242f };
				uParam0->f_3 = 70.2711f;
			}
		}
		else if (unk_0x1AC9C20D51EE6DC3(unk_0xD5A676B97920D126(), 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, 0, 1, 0))
		{
			*uParam0 = { 495.4108f, -1306.08f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (unk_0x1AC9C20D51EE6DC3(unk_0xD5A676B97920D126(), -1146.77f, -1534.22f, 3.37f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (unk_0x1AC9C20D51EE6DC3(unk_0xD5A676B97920D126(), 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, 0, 1, 0))
		{
			*uParam0 = { 431.8853f, -1013.133f, 28.7907f };
			uParam0->f_3 = 186.6814f;
		}
		else if (func_101(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}

int func_101(struct<3> Param0, char* sParam3, struct<3> Param4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x2A962D5F6CB393D4(Param0))
	{
		iVar0 = unk_0xC294D34374133831(Param4, sParam3);
		if (!unk_0x7B66213B5E371C3F(iVar0))
		{
			return 0;
		}
		iVar1 = unk_0x44FA3A8ACC24BDA5(Param0);
		if (iVar1 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_102(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -829.842f, -191.7454f, 36.4386f };
			*uParam2 = 29.5061f;
			break;
		
		case 1:
			*uParam1 = { 129.8484f, -1716.528f, 28.0702f };
			*uParam2 = 50.3483f;
			break;
		
		case 2:
			*uParam1 = { -1296.913f, -1120.999f, 5.3951f };
			*uParam2 = 0.9933f;
			break;
		
		case 3:
			*uParam1 = { 1938.028f, 3718.736f, 31.3154f };
			*uParam2 = 118.2305f;
			break;
		
		case 4:
			*uParam1 = { 1197.866f, -469.3809f, 65.0885f };
			*uParam2 = 346.4477f;
			break;
		
		case 5:
			*uParam1 = { -32.2161f, -135.8212f, 56.0532f };
			*uParam2 = 186.0052f;
			break;
		
		case 6:
			*uParam1 = { -287.7696f, 6238.081f, 30.2902f };
			*uParam2 = 316.1349f;
			break;
		
		case 7:
			*uParam1 = { 99.2876f, -1395.16f, 28.2759f };
			*uParam2 = 320.2739f;
			break;
		
		case 8:
			*uParam1 = { 1679.445f, 4819.056f, 41.0035f };
			*uParam2 = 4.6192f;
			break;
		
		case 9:
			*uParam1 = { 411.3063f, -809.1863f, 28.1554f };
			*uParam2 = 1.8972f;
			break;
		
		case 10:
			*uParam1 = { -1088.054f, 2699.167f, 19.2748f };
			*uParam2 = 129.7382f;
			break;
		
		case 11:
			*uParam1 = { 1194.163f, 2695.644f, 36.9225f };
			*uParam2 = 1.1454f;
			break;
		
		case 12:
			*uParam1 = { -821.2829f, -1088.027f, 10.0499f };
			*uParam2 = 120.5883f;
			break;
		
		case 13:
			*uParam1 = { -3.3416f, 6521.303f, 30.2961f };
			*uParam2 = 316.4451f;
			break;
		
		case 14:
			*uParam1 = { -1208.417f, -785.9635f, 16.0139f };
			*uParam2 = 36.3181f;
			break;
		
		case 15:
			*uParam1 = { 623.1845f, 2739.191f, 40.9588f };
			*uParam2 = 3.5411f;
			break;
		
		case 16:
			*uParam1 = { 130.9555f, -198.2084f, 53.41f };
			*uParam2 = 251.3506f;
			break;
		
		case 17:
			*uParam1 = { -3164.065f, 1067.317f, 19.6778f };
			*uParam2 = 101.2229f;
			break;
		
		case 18:
			*uParam1 = { -713.2797f, -174.2767f, 35.8962f };
			*uParam2 = 29.8138f;
			break;
		
		case 19:
			*uParam1 = { -147.0616f, -306.4322f, 37.7912f };
			*uParam2 = 160.4526f;
			break;
		
		case 20:
			*uParam1 = { -1461.355f, -230.6092f, 48.3064f };
			*uParam2 = 318.7851f;
			break;
		
		case 21:
			*uParam1 = { -1347.739f, -1278.573f, 3.8952f };
			*uParam2 = 17.9365f;
			break;
		
		case 22:
			*uParam1 = { 325.6833f, 164.3263f, 102.4425f };
			*uParam2 = 68.6407f;
			break;
		
		case 23:
			*uParam1 = { 1858.774f, 3742.393f, 32.0779f };
			*uParam2 = 301.2329f;
			break;
		
		case 24:
			*uParam1 = { -286.3272f, 6202.802f, 30.3323f };
			*uParam2 = 225.1334f;
			break;
		
		case 25:
			*uParam1 = { -1161.596f, -1417.7f, 3.712f };
			*uParam2 = 246.9161f;
			break;
		
		case 26:
			*uParam1 = { 1308.952f, -1660.611f, 50.2362f };
			*uParam2 = 163.5456f;
			break;
		
		case 27:
			*uParam1 = { -3161.585f, 1074.214f, 19.6847f };
			*uParam2 = 98.6092f;
			break;
		
		case 28:
			*uParam1 = { 28.423f, -1110.814f, 28.2848f };
			*uParam2 = 85.2495f;
			break;
		
		case 29:
			*uParam1 = { 1704.966f, 3749.709f, 33.0188f };
			*uParam2 = 45.6778f;
			break;
		
		case 30:
			*uParam1 = { 223.949f, -38.7894f, 68.6483f };
			*uParam2 = 159.4265f;
			break;
		
		case 31:
			*uParam1 = { 837.7854f, -1017.963f, 26.3045f };
			*uParam2 = 181.0445f;
			break;
		
		case 32:
			*uParam1 = { -313.1914f, 6093.351f, 30.4625f };
			*uParam2 = 315.8405f;
			break;
		
		case 33:
			*uParam1 = { -663.4631f, -952.8069f, 20.3143f };
			*uParam2 = 92.6796f;
			break;
		
		case 34:
			*uParam1 = { -1323.06f, -392.8577f, 35.4596f };
			*uParam2 = 210.7398f;
			break;
		
		case 35:
			*uParam1 = { -1106.102f, 2684.35f, 18.0953f };
			*uParam2 = 127.0383f;
			break;
		
		case 36:
			*uParam1 = { -3157.932f, 1081.309f, 19.6953f };
			*uParam2 = 100.2942f;
			break;
		
		case 37:
			*uParam1 = { 2562.882f, 312.8641f, 107.4612f };
			*uParam2 = 179.205f;
			break;
		
		case 38:
			*uParam1 = { 822.48f, -2142.875f, 27.8496f };
			*uParam2 = 355.0598f;
			break;
		
		case 39:
			*uParam1 = { -1137.053f, -1993.916f, 12.1677f };
			*uParam2 = 43.1213f;
			break;
		
		case 40:
			*uParam1 = { 717.8107f, -1084.081f, 21.3094f };
			*uParam2 = 93.2649f;
			break;
		
		case 41:
			*uParam1 = { -387.6789f, -128.2568f, 37.6796f };
			*uParam2 = 119.1085f;
			break;
		
		case 42:
			*uParam1 = { 117.8835f, 6599.415f, 31.0134f };
			*uParam2 = 90.7225f;
			break;
		
		case 43:
			*uParam1 = { 1201.709f, 2664.813f, 36.8102f };
			*uParam2 = 133.9002f;
			break;
		
		case 44:
			*uParam1 = { -200.1521f, -1297.502f, 30.296f };
			*uParam2 = 269.0687f;
			break;
		
		case 45:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	}
	return !func_103(*uParam1, 0f, 0f, 0f, 0);
}

bool func_103(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_104(var uParam0)
{
	if (!unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0) && !unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
	{
		if (func_115())
		{
			*uParam0 = func_110(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 0), 6, -1, 0, 1, -1);
			if (func_109(*uParam0) && !func_105(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_105(int iParam0)
{
	return func_106(iParam0, 0, 1);
}

int func_106(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0xF44A5E894FE76438(Global_91538.f_1308[iParam0], iParam1);
	}
	else if (unk_0x1995B52453EF6537())
	{
		if (func_108() == 0)
		{
			return unk_0xF44A5E894FE76438(func_86(func_107(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xF44A5E894FE76438(Global_101652.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_107(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 822;
			break;
		
		case 1:
			return 823;
			break;
		
		case 2:
			return 824;
			break;
		
		case 3:
			return 825;
			break;
		
		case 4:
			return 826;
			break;
		
		case 5:
			return 827;
			break;
		
		case 6:
			return 828;
			break;
		
		case 7:
			return 829;
			break;
		
		case 8:
			return 830;
			break;
		
		case 9:
			return 831;
			break;
		
		case 10:
			return 832;
			break;
		
		case 11:
			return 833;
			break;
		
		case 12:
			return 834;
			break;
		
		case 13:
			return 835;
			break;
		
		case 14:
			return 836;
			break;
		
		case 15:
			return 838;
			break;
		
		case 16:
			return 839;
			break;
		
		case 17:
			return 840;
			break;
		
		case 18:
			return 841;
			break;
		
		case 19:
			return 842;
			break;
		
		case 20:
			return 843;
			break;
		
		case 21:
			return 844;
			break;
		
		case 22:
			return 845;
			break;
		
		case 23:
			return 846;
			break;
		
		case 24:
			return 847;
			break;
		
		case 25:
			return 848;
			break;
		
		case 26:
			return 849;
			break;
		
		case 27:
			return 850;
			break;
		
		case 28:
			return 851;
			break;
		
		case 29:
			return 852;
			break;
		
		case 30:
			return 853;
			break;
		
		case 31:
			return 854;
			break;
		
		case 32:
			return 855;
			break;
		
		case 33:
			return 856;
			break;
		
		case 34:
			return 857;
			break;
		
		case 35:
			return 858;
			break;
		
		case 36:
			return 859;
			break;
		
		case 37:
			return 860;
			break;
		
		case 38:
			return 861;
			break;
		
		case 39:
			return 862;
			break;
		
		case 40:
			return 866;
			break;
		
		case 41:
			return 867;
			break;
		
		case 42:
			return 868;
			break;
		
		case 43:
			return 869;
			break;
		
		case 44:
			return 5847;
			break;
		
		case 45:
			return 3780;
			break;
		
		default:
			break;
	}
	return 6022;
}

int func_108()
{
	return Global_25185;
}

int func_109(int iParam0)
{
	return func_106(iParam0, 5, 1);
}

int func_110(struct<3> Param0, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 45)
	{
		if (iParam3 == 6 || iParam3 == func_114(iVar0))
		{
			if (!bParam5 || func_113(iVar0))
			{
				fVar1 = unk_0x8E92CDAEB8357ABD(Param0, func_111(iVar0, 0), 1);
				if (((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam4) || iParam4 == -1)) && (iParam6 || iVar0 != 21)) && iVar0 != iParam7)
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

Vector3 func_111(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
			break;
		
		case 0:
			return -821.9946f, -187.1776f, 36.5689f;
			break;
		
		case 1:
			return 133.5702f, -1710.918f, 28.2916f;
			break;
		
		case 2:
			return -1287.082f, -1116.558f, 5.9901f;
			break;
		
		case 3:
			return 1933.119f, 3726.079f, 31.8444f;
			break;
		
		case 4:
			return 1208.333f, -470.917f, 65.208f;
			break;
		
		case 5:
			return -30.7448f, -148.4921f, 56.0765f;
			break;
		
		case 6:
			return -280.8165f, 6231.771f, 30.6955f;
			break;
		
		case 7:
			return 80.665f, -1391.669f, 28.3761f;
			break;
		
		case 8:
			return 1687.881f, 4820.55f, 41.0096f;
			break;
		
		case 9:
			return 419.531f, -807.5787f, 28.4896f;
			break;
		
		case 10:
			return -1094.049f, 2704.171f, 18.0873f;
			break;
		
		case 11:
			return 1197.972f, 2704.22f, 37.1572f;
			break;
		
		case 12:
			return -818.6218f, -1077.533f, 10.3282f;
			break;
		
		case 13:
			return -0.2361f, 6516.045f, 30.8684f;
			break;
		
		case 14:
			return -1199.809f, -776.6886f, 16.3237f;
			break;
		
		case 15:
			return 618.1857f, 2752.567f, 41.0881f;
			break;
		
		case 16:
			return 126.6853f, -212.5027f, 53.5578f;
			break;
		
		case 17:
			return -3168.966f, 1055.287f, 19.8632f;
			break;
		
		case 18:
			return -715.3598f, -155.7742f, 36.4105f;
			break;
		
		case 19:
			return -158.2199f, -304.9663f, 38.735f;
			break;
		
		case 20:
			return -1455.005f, -233.1862f, 48.7936f;
			break;
		
		case 21:
			return -1335.973f, -1278.555f, 3.8598f;
			break;
		
		case 22:
			return 321.6098f, 179.4165f, 102.5865f;
			break;
		
		case 23:
			return 1861.685f, 3750.08f, 32.0318f;
			break;
		
		case 24:
			return -290.1603f, 6199.095f, 30.4871f;
			break;
		
		case 25:
			return -1153.948f, -1425.019f, 3.9544f;
			break;
		
		case 26:
			return 1322.455f, -1651.125f, 51.1885f;
			break;
		
		case 27:
			return -3169.42f, 1074.727f, 19.8343f;
			break;
		
		case 28:
			return 17.6804f, -1114.288f, 28.797f;
			break;
		
		case 29:
			return 1697.979f, 3753.2f, 33.7053f;
			break;
		
		case 30:
			return 245.2711f, -45.8126f, 68.941f;
			break;
		
		case 31:
			return 844.1248f, -1025.571f, 27.1948f;
			break;
		
		case 32:
			return -325.8904f, 6077.026f, 30.4548f;
			break;
		
		case 33:
			return -664.2178f, -943.3646f, 20.8292f;
			break;
		
		case 34:
			return -1313.948f, -390.9637f, 35.592f;
			break;
		
		case 35:
			return -1111.238f, 2688.463f, 17.6131f;
			break;
		
		case 36:
			return -3165.231f, 1082.855f, 19.8438f;
			break;
		
		case 37:
			return 2569.612f, 302.576f, 107.7349f;
			break;
		
		case 38:
			return 811.8699f, -2149.102f, 28.6363f;
			break;
		
		case 39:
			return -1147.314f, -1992.434f, 12.1803f;
			break;
		
		case 40:
			return 724.524f, -1089.081f, 21.1692f;
			break;
		
		case 41:
			return -354.5272f, -135.4011f, 38.185f;
			break;
		
		case 42:
			return 113.2615f, 6624.28f, 30.7871f;
			break;
		
		case 43:
			return 1174.707f, 2644.45f, 36.7552f;
			break;
		
		case 44:
			if (bParam1)
			{
				return -211.5f, -1324.2f, 30.296f;
			}
			else
			{
				return -205.6654f, -1311.113f, 30.296f;
			}
			break;
		
		case 45:
			return func_112(Global_92999);
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

Vector3 func_112(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1060f, -2990f, -35f;
			break;
		
		case 2:
			return 1060f, -2990f, -35f;
			break;
		
		case 3:
			return 974.9542f, -3000.091f, -35f;
			break;
		
		case 6:
			return -1586.36f, -566.6f, 106.17f;
			break;
		
		case 7:
			return -1389.87f, -465.17f, 82.68f;
			break;
		
		case 8:
			return -145.81f, -590.2f, 171.13f;
			break;
		
		case 9:
			return -62.49f, -823.55f, 288.74f;
			break;
		
		case 4:
			return 1102.515f, -3158.888f, -38.5186f;
			break;
		
		case 5:
			return 1005.861f, -3156.162f, -39.907f;
			break;
		
		default:
			return 0f, 0f, -200f;
			break;
	}
	return 0f, 0f, -200f;
}

int func_113(int iParam0)
{
	return func_106(iParam0, 0, 0);
}

int func_114(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
	}
	return 6;
}

bool func_115()
{
	return Global_91538.f_303 > 0;
}

int func_116(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_89297.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_26(0))
		{
			return 0;
		}
		Global_35741++;
		*iParam0 = Global_35741;
		unk_0x680452B13E83C406(unk_0xF3F8195C98263BF5(), 0);
		Global_17151.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x503D3643C5FE49F7(8);
		}
		Global_35777 = iParam2;
		Global_35739 = *iParam0;
		Global_35740 = iParam4;
		Global_35738 = 0;
		return 1;
	}
	if (*iParam0 != -1)
	{
		if (Global_35738 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35738)
			{
				if (Global_35744[iVar0 /*4*/] == *iParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35739 == *iParam0)
		{
			return 1;
		}
		*iParam0 = -1;
	}
	if (*iParam0 == -1)
	{
		if (!func_27(iParam2))
		{
			return 0;
		}
		if (Global_35738 == 8)
		{
			return 0;
		}
		Global_35741++;
		*iParam0 = Global_35741;
		Global_35744[Global_35738 /*4*/] = Global_35741;
		Global_35744[Global_35738 /*4*/].f_1 = iParam1;
		Global_35744[Global_35738 /*4*/].f_2 = iParam2;
		Global_35744[Global_35738 /*4*/].f_3 = 0;
		Global_35738++;
		if (iParam4 != 0)
		{
			func_117(iParam0, iParam4);
		}
	}
	return 2;
}

void func_117(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_35738 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35738)
	{
		if (Global_35744[iVar0 /*4*/] == *uParam0)
		{
			Global_35744[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

void func_118(int iParam0, struct<3> Param1, float fParam4, int iParam5, bool bParam6)
{
	struct<60> Var0;
	
	if (unk_0x7887B64A08364778(iParam0) && unk_0xA4DB44DF73EF4FE5(iParam0, 0))
	{
		if (iParam5 != 24 && iParam5 != 25)
		{
			return;
		}
		if (iParam5 == 24)
		{
			if (unk_0x7887B64A08364778(Global_68526.f_484[25]) && unk_0xA4DB44DF73EF4FE5(Global_68526.f_484[25], 0))
			{
				if (Global_68526.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam6)
		{
			if ((unk_0x2116DC64F00A4D05(iParam0) || unk_0xA0A4DA31DEDFAC4F(iParam0) == joaat("bus")) || unk_0xA0A4DA31DEDFAC4F(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_144(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_14(iParam0, &Var0);
		if (func_103(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { unk_0xC086F8D75730FA3A(iParam0, 1) };
			fParam4 = unk_0x714F015B4D2DE1DC(iParam0);
		}
		if (iParam5 == 24)
		{
			if (unk_0x6D9FF4C899CD785F(unk_0x0FBCE11007AF301F()) != joaat("vehicle_gen_controller"))
			{
				Global_69514 = unk_0x6D9FF4C899CD785F(unk_0x0FBCE11007AF301F());
			}
		}
		func_138(iParam5, &Var0, Param1, fParam4, func_9(iParam0));
		func_119(iParam5, iParam0, 0);
	}
}

void func_119(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_137(&(Global_68526.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!unk_0xF44A5E894FE76438(Global_68526.f_555[0 /*21*/].f_9, 12) && !unk_0xF44A5E894FE76438(Global_68526.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_68526.f_555[0 /*21*/].f_4 != unk_0xA0A4DA31DEDFAC4F(iParam1))
		{
			return;
		}
	}
	if (Global_69433 != -1 && Global_69433 != iParam0)
	{
		return;
	}
	if (unk_0x7887B64A08364778(iParam1))
	{
		if (unk_0xA4DB44DF73EF4FE5(iParam1, 0))
		{
			if (!unk_0x2A29BF08180E7ADF(iParam1))
			{
				unk_0xC53606C390BE2727(iParam1, 1, 1);
			}
			if (iParam0 == 24)
			{
				Global_101652.f_31373.f_4801 = func_51();
			}
			if (iParam1 != Global_68526.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_136(iParam0);
					if ((unk_0x7887B64A08364778(iVar0) && unk_0xA4DB44DF73EF4FE5(iVar0, 0)) && iParam1 != iVar0)
					{
						func_120(iVar0, 145);
					}
				}
				Global_69432 = iParam1;
				Global_69433 = iParam0;
				Global_69434 = iParam2;
			}
		}
	}
}

void func_120(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_121(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0x98BE504E8B389665(iParam0, -1, 0);
		if (!unk_0x7887B64A08364778(iVar0))
		{
			iVar0 = unk_0x517A852AA8FDFD63(iParam0, -1);
		}
		if (unk_0x7887B64A08364778(iVar0) && !unk_0x00B5B0B68211D89B(iVar0))
		{
			if (unk_0xA0A4DA31DEDFAC4F(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0xA0A4DA31DEDFAC4F(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0xA0A4DA31DEDFAC4F(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_101652.f_2079.f_539.f_3549;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0xA0A4DA31DEDFAC4F(iParam0) == Global_101652.f_31373.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0xC55B9553B3EDADE9(&(Global_101652.f_31373.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0xCC257DA11A122B5F(unk_0x2CC6A8460C4261C6(iParam0), &(Global_101652.f_31373.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_101652.f_31373.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_101652.f_31373.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (unk_0xA0A4DA31DEDFAC4F(iParam0) == Global_101652.f_31373.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0xC55B9553B3EDADE9(&(Global_101652.f_31373.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0xCC257DA11A122B5F(unk_0x2CC6A8460C4261C6(iParam0), &(Global_101652.f_31373.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_101652.f_31373.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_101652.f_31373.f_5590 = iParam1;
	Global_69431 = iParam0;
	Global_101652.f_31373.f_5588 = 1;
	func_14(iParam0, &(Global_101652.f_31373.f_5510));
}

int func_121(int iParam0)
{
	if ((((((((((!unk_0x7887B64A08364778(iParam0) || !unk_0xA4DB44DF73EF4FE5(iParam0, 0)) || func_19(iParam0, 0, 0)) || func_19(iParam0, 1, 0)) || func_19(iParam0, 2, 0)) || func_9(iParam0) != 145) || func_135(iParam0)) || func_134(iParam0)) || func_133(iParam0)) || func_132(iParam0)) || !func_122(unk_0xA0A4DA31DEDFAC4F(iParam0)))
	{
		if (func_134(iParam0))
		{
		}
		if (func_134(iParam0))
		{
		}
		if (func_19(iParam0, 0, 0))
		{
		}
		if (func_19(iParam0, 1, 0))
		{
		}
		if (func_19(iParam0, 2, 0))
		{
		}
		if (func_9(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_122(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_123(iParam0, 0))
	{
		return 0;
	}
	if (((unk_0xDA82A890460AACEE(iParam0) || unk_0x825416FB822BF706(iParam0)) || unk_0x4B09D3321F53E524(iParam0)) || unk_0x8F8A0D55EBDCBE44(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case joaat("firetruk"):
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_123(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x5B8C6C17DBDB0252(iParam0))
	{
		return 0;
	}
	if ((((((((((((iParam0 == joaat("dodo") || iParam0 == joaat("dukes")) || iParam0 == joaat("dukes2")) || (iParam0 == joaat("dominator2") && !unk_0x1995B52453EF6537())) || (iParam0 == joaat("buffalo3") && !unk_0x1995B52453EF6537())) || (iParam0 == joaat("gauntlet2") && !unk_0x1995B52453EF6537())) || iParam0 == joaat("blimp2")) || iParam0 == joaat("stalion")) || (iParam0 == joaat("stalion2") && !unk_0x1995B52453EF6537())) || iParam0 == joaat("submersible2")) || iParam0 == joaat("marshall")) || iParam0 == joaat("blista2")) || iParam0 == joaat("blista3"))
	{
		if (!func_131())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x8858A4ECC3790CBC())
		{
			if (unk_0xAC7E4897AB3A644C(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x68410A55F20AE7A5(Var1.f_0))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_130() && !func_129()) && !func_128()) && !func_127()) && !func_131())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xF1A016B51831B87B() || unk_0x2D337DD29A7ABD30()) || unk_0x603D621ED5E06CB0())
		{
		}
		else if (!func_128())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_126(iParam0))
		{
			return 0;
		}
	}
	if (!func_124(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_124(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_125())
	{
		return 1;
	}
	unk_0x157A3D4FE52A3BBF(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!unk_0x0E4E21380596D57E(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_125()
{
	if (unk_0x2D337DD29A7ABD30())
	{
		return 1;
	}
	return 0;
}

int func_126(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2482045)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0x632066A9E8CB2C4D();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_5431 && !Global_262145.f_11409) && iVar1 < Global_262145.f_11410)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_12221 && iVar1 < Global_262145.f_12233)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_12217 && iVar1 < Global_262145.f_12229)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_12218 && iVar1 < Global_262145.f_12230)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_12219 && iVar1 < Global_262145.f_12231)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_12220 && iVar1 < Global_262145.f_12232)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_12222 && iVar1 < Global_262145.f_12234)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_12223 && iVar1 < Global_262145.f_12226)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_12224 && iVar1 < Global_262145.f_12227)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_12225 && iVar1 < Global_262145.f_12228)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_14848 && iVar1 < Global_262145.f_14813)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_14843 && iVar1 < Global_262145.f_14808)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_14847 && iVar1 < Global_262145.f_14812)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_14846 && iVar1 < Global_262145.f_14811)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_14840 && iVar1 < Global_262145.f_14805)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_14841 && iVar1 < Global_262145.f_14806)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_14844 && iVar1 < Global_262145.f_14809)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_14845 && iVar1 < Global_262145.f_14810)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_14842 && iVar1 < Global_262145.f_14807)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_14850 && iVar1 < Global_262145.f_14815)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_14851 && iVar1 < Global_262145.f_14816)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_14839 && iVar1 < Global_262145.f_14804)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_14838 && iVar1 < Global_262145.f_14803)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_14837 && iVar1 < Global_262145.f_14802)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_14849 && iVar1 < Global_262145.f_14814)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_14852 && iVar1 < Global_262145.f_14817)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_14853 && iVar1 < Global_262145.f_14818)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_14854 && iVar1 < Global_262145.f_14819)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_14855 && iVar1 < Global_262145.f_14820)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_15000 && iVar1 < Global_262145.f_15022)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_15001 && iVar1 < Global_262145.f_15023)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_15002 && iVar1 < Global_262145.f_15024)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_15003 && iVar1 < Global_262145.f_15025)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_15004 && iVar1 < Global_262145.f_15026)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_15005 && iVar1 < Global_262145.f_15027)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_15007 && iVar1 < Global_262145.f_15028)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_15008 && iVar1 < Global_262145.f_15029)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_15009 && iVar1 < Global_262145.f_15030)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_15010 && iVar1 < Global_262145.f_15031)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_15011 && iVar1 < Global_262145.f_15032)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_15012 && iVar1 < Global_262145.f_15033)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_15013 && iVar1 < Global_262145.f_15034)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_15019 && iVar1 < Global_262145.f_15041)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_15016 && iVar1 < Global_262145.f_15037)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_15017 && iVar1 < Global_262145.f_15038)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_15018 && iVar1 < Global_262145.f_15039)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_15006 && iVar1 < Global_262145.f_15040)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_15020 && iVar1 < Global_262145.f_15042)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_15014 && iVar1 < Global_262145.f_15035)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_15015 && iVar1 < Global_262145.f_15036)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_15021 && iVar1 < Global_262145.f_15043)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_16649 && iVar1 < Global_262145.f_16690)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_16650 && iVar1 < Global_262145.f_16691)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_16651 && iVar1 < Global_262145.f_16692)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_16652 && iVar1 < Global_262145.f_16693)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_16653 && iVar1 < Global_262145.f_16694)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_16654 && iVar1 < Global_262145.f_16695)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_16655 && iVar1 < Global_262145.f_16696)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_16656 && iVar1 < Global_262145.f_16697)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_16657 && iVar1 < Global_262145.f_16698)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_16658 && iVar1 < Global_262145.f_16699)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_16659 && iVar1 < Global_262145.f_16700)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_16660 && iVar1 < Global_262145.f_16701)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_16661 && iVar1 < Global_262145.f_16702)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_16662 && iVar1 < Global_262145.f_16703)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_16663 && iVar1 < Global_262145.f_16704)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_16664 && iVar1 < Global_262145.f_16705)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_16665 && iVar1 < Global_262145.f_16706)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_16666 && iVar1 < Global_262145.f_16707)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_16667 && iVar1 < Global_262145.f_16708)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_16668 && iVar1 < Global_262145.f_16709)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_16669 && iVar1 < Global_262145.f_16710)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_16670 && iVar1 < Global_262145.f_16711)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_16671 && iVar1 < Global_262145.f_16712)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_16672 && iVar1 < Global_262145.f_16713)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_16673 && iVar1 < Global_262145.f_16714)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_127()
{
	return 0;
}

int func_128()
{
	return 1;
}

int func_129()
{
	return 1;
}

int func_130()
{
	if (unk_0xF14C5BAFFF8F4CB7(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_131()
{
	var uVar0;
	
	if (unk_0x52F8BF27157D00A2())
	{
		if (unk_0xA65719DC666C97C3())
		{
			if (unk_0x65D57B279D4CB27E())
			{
				unk_0x5BC7B5709E38CBE0(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xB8A73E7DA87B2968(&uVar0, 2);
				unk_0xB8A73E7DA87B2968(&uVar0, 4);
				unk_0xB8A73E7DA87B2968(&uVar0, 6);
				unk_0xB8A73E7DA87B2968(&Global_25, 2);
				unk_0xB8A73E7DA87B2968(&Global_25, 4);
				unk_0xB8A73E7DA87B2968(&Global_25, 6);
				unk_0xB924315F0872835A(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0xE0A03D8892BEF6BB())
				{
					uVar0 = unk_0x2428688746A375BE(866);
					unk_0xB8A73E7DA87B2968(&uVar0, 0);
					unk_0xC0F82A66B119B68A(uVar0);
				}
				return 1;
			}
		}
	}
	if (Global_139115 == 2)
	{
		return 1;
	}
	else if (Global_139115 == 3)
	{
		return 0;
	}
	if (unk_0xE0A03D8892BEF6BB())
	{
		if (unk_0xF44A5E894FE76438(unk_0x2428688746A375BE(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_132(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0xA0A4DA31DEDFAC4F(iParam0);
	sVar1 = unk_0x2CC6A8460C4261C6(iParam0);
	if (iVar0 == joaat("speedo") && unk_0xCC257DA11A122B5F(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_123(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_133(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x7887B64A08364778(Global_89180[iVar0]))
		{
			if (Global_89180[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_134(int iParam0)
{
	int iVar0;
	
	if (unk_0x7887B64A08364778(iParam0) && unk_0xA4DB44DF73EF4FE5(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x7887B64A08364778(Global_89150[iVar0]) && unk_0xA4DB44DF73EF4FE5(Global_89150[iVar0], 0))
			{
				if (Global_89150[iVar0] == iParam0 && unk_0xA0A4DA31DEDFAC4F(Global_89150[iVar0]) == unk_0xA0A4DA31DEDFAC4F(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_135(int iParam0)
{
	int iVar0;
	
	if (unk_0x7887B64A08364778(Global_68526.f_484[24]))
	{
		if (iParam0 == Global_68526.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x7887B64A08364778(Global_68526.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_68526.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_136(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_68526.f_139[iParam0];
}

int func_137(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_11(0, 1);
			uParam0->f_12 = 0;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 20);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_11(0, 1);
			uParam0->f_12 = 0;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 20);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_11(1, 1);
			uParam0->f_12 = 1;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 20);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_11(1, 2);
			uParam0->f_12 = 1;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 19);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_11(1, 1);
			uParam0->f_12 = 1;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 20);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_11(1, 2);
			uParam0->f_12 = 1;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 19);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_11(2, 1);
			uParam0->f_12 = 2;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 20);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_11(2, 1);
			uParam0->f_12 = 2;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 20);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_11(2, 1);
			uParam0->f_12 = 2;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 20);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 0);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 21);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 14);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 7);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 10);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 12);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 0);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 21);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 14);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 7);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 10);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 12);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 0);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 21);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 14);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 7);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 10);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 12);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 0);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 21);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 14);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 7);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 10);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 12);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 22);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 0);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 21);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 14);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 7);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 10);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 12);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 22);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 0);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 21);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 14);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 7);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 10);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 12);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 22);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 0);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 21);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 14);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 7);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 10);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 12);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 0);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 21);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 14);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 7);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 10);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 12);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 0);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 21);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 14);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 7);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 10);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 12);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 23);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 0);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 21);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 14);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 7);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 10);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 12);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 24);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 28);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 0);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 21);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 14);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 7);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 10);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 12);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 24);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 28);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 0);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 21);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 14);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 7);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 10);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 12);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 24);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 28);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_14 = (12 + iVar1);
			*uParam0 = { 196.2794f, -1020.479f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 10);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 12);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 7);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 27);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 24);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_14 = (15 + iVar1);
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 10);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 12);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 7);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 27);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 24);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_14 = (18 + iVar1);
			*uParam0 = { 203.6006f, -1019.776f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 10);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 12);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 7);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 27);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 24);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 10);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 11);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 13);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 10);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 11);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 13);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 9);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 9);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 23);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 23);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 23);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("vacca");
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("surano");
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("tornado2");
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("superd");
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = { -1321.519f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = { -1267.999f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = { -1062.076f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = { 68.16914f, -1558.958f, 29.46904f };
			uParam0->f_3 = 49.90575f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 2);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 30);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 2);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 22);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = { 2116.571f, 4763.279f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("bfinjection");
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (func_131())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 13);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 2);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 1);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 23);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_131())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 13);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 2);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 1);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 23);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 0);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 21);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 23);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 6);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 30);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 23);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 30);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 23);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (unk_0xF44A5E894FE76438(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_101652.f_31373.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_103(Global_101652.f_31373.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_101652.f_31373.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_101652.f_31373.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_101652.f_31373.f_1934[uParam0->f_14];
		}
	}
	if (unk_0xF44A5E894FE76438(uParam0->f_9, 19))
	{
		if (!func_103(Global_101652.f_2079.f_539.f_2816[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_101652.f_2079.f_539.f_2816[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_101652.f_2079.f_539.f_2837[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0xF44A5E894FE76438(uParam0->f_9, 20))
	{
		if (!func_103(Global_101652.f_2079.f_539.f_2816[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_101652.f_2079.f_539.f_2816[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_101652.f_2079.f_539.f_2837[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

void func_138(int iParam0, var uParam1, struct<3> Param2, var uParam5, int iParam6)
{
	if (func_137(&(Global_68526.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xF44A5E894FE76438(Global_68526.f_555[0 /*21*/].f_9, 10))
		{
			func_143(iParam0);
			func_142(uParam1, &(Global_101652.f_31373.f_69[Global_68526.f_555[0 /*21*/].f_14 /*78*/]));
			if (unk_0xF44A5E894FE76438(Global_68526.f_555[0 /*21*/].f_9, 11))
			{
				Global_101652.f_31373.f_1864[Global_68526.f_555[0 /*21*/].f_14 /*3*/] = { Param2 };
				Global_101652.f_31373.f_1934[Global_68526.f_555[0 /*21*/].f_14] = uParam5;
			}
			else
			{
				Global_101652.f_31373.f_1864[Global_68526.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_101652.f_31373.f_1934[Global_68526.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_101652.f_31373.f_1958[Global_68526.f_555[0 /*21*/].f_14] = iParam6 + 1;
			func_139(iParam0, 1);
		}
	}
}

void func_139(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_141(iParam0, 0))
		{
			func_140(iParam0, 1, 0);
			func_140(iParam0, 2, 0);
			func_140(iParam0, 3, 0);
			func_140(iParam0, 4, 0);
			func_140(iParam0, 0, 1);
			Global_68526[iParam0] = 1;
		}
	}
	else
	{
		func_140(iParam0, 0, 0);
	}
}

void func_140(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xB8A73E7DA87B2968(&(Global_101652.f_31373[iParam0]), iParam1);
	}
	else
	{
		unk_0x4EA098C870B73AB7(&(Global_101652.f_31373[iParam0]), iParam1);
	}
}

bool func_141(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xF44A5E894FE76438(Global_101652.f_31373[iParam0], iParam1);
}

void func_142(var uParam0, var uParam1)
{
	uParam1->f_66 = uParam0->f_66;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_59 = { uParam0->f_59 };
	uParam1->f_62 = uParam0->f_62;
	uParam1->f_63 = uParam0->f_63;
	uParam1->f_64 = uParam0->f_64;
	uParam1->f_65 = uParam0->f_65;
	uParam1->f_77 = uParam0->f_77;
	uParam1->f_67 = uParam0->f_67;
	uParam1->f_69 = uParam0->f_69;
	uParam1->f_68 = uParam0->f_68;
	uParam1->f_71 = uParam0->f_71;
	uParam1->f_72 = uParam0->f_72;
	uParam1->f_73 = uParam0->f_73;
	uParam1->f_74 = uParam0->f_74;
	uParam1->f_75 = uParam0->f_75;
	uParam1->f_76 = uParam0->f_76;
}

void func_143(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_137(&(Global_68526.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x7887B64A08364778(Global_68526.f_139[iParam0]))
		{
			unk_0xC53606C390BE2727(Global_68526.f_139[iParam0], 1, 1);
			unk_0xB24D3BF5DABD13AA(&(Global_68526.f_139[iParam0]));
			Global_68526.f_139[iParam0] = 0;
		}
		if (unk_0xF44A5E894FE76438(Global_68526.f_555[0 /*21*/].f_9, 13))
		{
			func_139(iParam0, 0);
		}
	}
}

void func_144(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_143(iParam0);
	func_139(iParam0, 0);
}

void func_145()
{
	Global_17151.f_6 = 1;
}

void func_146()
{
	int iVar0;
	
	if (!unk_0x7887B64A08364778(iLocal_29))
	{
		if (!unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0))
		{
			if (unk_0xB7A628320EFF8E47(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1), Local_32) < 2500f)
			{
				iLocal_29 = unk_0x80AA649904BB5788();
				if (unk_0x7887B64A08364778(iLocal_29))
				{
					iVar0 = unk_0xA0A4DA31DEDFAC4F(iLocal_29);
					if (iVar0 == joaat("dune"))
					{
					}
				}
			}
		}
	}
}

int func_147()
{
	return joaat("dune");
}

void func_148(bool bParam0)
{
	unk_0x8188DB74546FF484(joaat("dune"));
	if (unk_0x7887B64A08364778(iLocal_54))
	{
		if (bParam0)
		{
			unk_0xAA8D7DFFDAAB903E(&iLocal_54);
		}
		else
		{
			unk_0xB24D3BF5DABD13AA(&iLocal_54);
		}
	}
}

int func_149()
{
	if (func_26(9))
	{
		if (unk_0xAB964FCFAC3C767A(joaat("trevor2")) == 1)
		{
			if (!iLocal_38[0])
			{
				iLocal_38[0] = 1;
			}
			return 0;
		}
		if (unk_0xAB964FCFAC3C767A(joaat("finale_heist2b")) == 1)
		{
			if (!iLocal_38[1])
			{
				iLocal_38[1] = 1;
			}
			return 0;
		}
		if (unk_0xAB964FCFAC3C767A(joaat("traffick_air")) == 1)
		{
			if (!iLocal_38[2])
			{
				iLocal_38[2] = 1;
			}
			return 0;
		}
		if (unk_0xAB964FCFAC3C767A(joaat("traffick_ground")) == 1)
		{
			if (!iLocal_38[3])
			{
				iLocal_38[3] = 1;
			}
			return 0;
		}
		if (Global_91520)
		{
			return 0;
		}
		if (iLocal_35 != -1)
		{
			return 0;
		}
		if (func_171() == 309)
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

void func_150(var uParam0, int iParam1)
{
	func_151(uParam0, iParam1);
}

void func_151(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_152(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_153(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_153(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0xCC257DA11A122B5F(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_101652.f_19353.f_145)
	{
		if (unk_0xCC257DA11A122B5F(&(Global_101652.f_19353[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_101652.f_19353.f_145 < 9)
	{
		StringCopy(&(Global_101652.f_19353[Global_101652.f_19353.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_101652.f_19353[Global_101652.f_19353.f_145 /*16*/].f_4), sParam1, 16);
		Global_101652.f_19353[Global_101652.f_19353.f_145 /*16*/].f_8 = (unk_0x84A97C70FFDEC0C8() + iParam3);
		Global_101652.f_19353[Global_101652.f_19353.f_145 /*16*/].f_9 = iParam5;
		Global_101652.f_19353[Global_101652.f_19353.f_145 /*16*/].f_11 = iParam6;
		Global_101652.f_19353[Global_101652.f_19353.f_145 /*16*/].f_12 = uParam2;
		Global_101652.f_19353[Global_101652.f_19353.f_145 /*16*/].f_13 = iParam7;
		Global_101652.f_19353[Global_101652.f_19353.f_145 /*16*/].f_14 = iParam8;
		Global_101652.f_19353[Global_101652.f_19353.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_101652.f_19353[Global_101652.f_19353.f_145 /*16*/].f_10 = ((unk_0x84A97C70FFDEC0C8() + iParam3) + iParam4);
		}
		else
		{
			Global_101652.f_19353[Global_101652.f_19353.f_145 /*16*/].f_10 = -1;
		}
		Global_101652.f_19353.f_145++;
		func_154();
	}
}

void func_154()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_101652.f_19353.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101652.f_19353.f_145)
	{
		if (unk_0xF44A5E894FE76438(Global_101652.f_19353[iVar0 /*16*/].f_11, 0))
		{
			if (Global_101652.f_19353[iVar0 /*16*/].f_12 > Global_101652.f_19353.f_146[0])
			{
				Global_101652.f_19353.f_146[0] = Global_101652.f_19353[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xF44A5E894FE76438(Global_101652.f_19353[iVar0 /*16*/].f_11, 1))
		{
			if (Global_101652.f_19353[iVar0 /*16*/].f_12 > Global_101652.f_19353.f_146[1])
			{
				Global_101652.f_19353.f_146[1] = Global_101652.f_19353[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xF44A5E894FE76438(Global_101652.f_19353[iVar0 /*16*/].f_11, 2))
		{
			if (Global_101652.f_19353[iVar0 /*16*/].f_12 > Global_101652.f_19353.f_146[2])
			{
				Global_101652.f_19353.f_146[2] = Global_101652.f_19353[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

bool func_155(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_156(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	
	bVar0 = false;
	if (iLocal_47 != 9)
	{
		if (!Global_101652.f_18926.f_14)
		{
			func_1(105, 1, 0);
			Global_101652.f_18926.f_14 = 1;
			bVar0 = true;
		}
		else
		{
			bVar0 = true;
		}
	}
	else
	{
		func_1(105, 0, 0);
		Global_101652.f_18926.f_14 = 0;
	}
	if (iLocal_47 != 1 && iLocal_47 != 8)
	{
		if (func_149() && !*iParam0)
		{
			func_157(0);
			iLocal_47 = 1;
		}
	}
	switch (iLocal_47)
	{
		case 0:
			iLocal_47 = 1;
			break;
		
		case 1:
			if (!func_149())
			{
				if (fLocal_31 < 50625f)
				{
					iLocal_47 = 2;
				}
				else if (bLocal_37)
				{
					iLocal_47 = 2;
				}
			}
			break;
		
		case 2:
			unk_0x4ACD1E4CBA159ED1(joaat("cuban800"));
			iLocal_47 = 3;
			break;
		
		case 3:
			unk_0x4ACD1E4CBA159ED1(joaat("cuban800"));
			if (unk_0x7AD0E9452821C95D(joaat("cuban800")))
			{
				if (!unk_0x7887B64A08364778(iLocal_48))
				{
					unk_0xBCDF9E3086B4229C(Local_50, 8f, 0, 0, 0, 0, 0);
					iLocal_48 = unk_0xDE8A46A23FDCBBFE(joaat("cuban800"), Local_50, 25.29f, 1, 1);
					unk_0x8188DB74546FF484(joaat("cuban800"));
					unk_0xE7D6BFCADFE1076B(iLocal_48, 2);
					func_150(&(Global_101652.f_18926), 128);
					iLocal_47 = 4;
				}
				else
				{
					iLocal_47 = 4;
				}
			}
			break;
		
		case 4:
			if (unk_0x7887B64A08364778(iLocal_48))
			{
				if (unk_0xB529B2A4B7C64D6D(iLocal_48, 0) || unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0))
				{
					iLocal_47 = 9;
					return;
				}
			}
			if (func_26(9))
			{
				if (unk_0xAB964FCFAC3C767A(joaat("traffick_ground")) == 1)
				{
					if (!unk_0xB529B2A4B7C64D6D(iLocal_48, 0))
					{
						unk_0xAFC3B32426D08964(iLocal_48, 2);
						return;
					}
				}
			}
			else if (unk_0xAB964FCFAC3C767A(joaat("traffick_ground")) == 0)
			{
				if (!unk_0xB529B2A4B7C64D6D(iLocal_48, 0))
				{
					unk_0xAFC3B32426D08964(iLocal_48, 1);
				}
			}
			if (!bLocal_37)
			{
				if (fLocal_31 >= 50625f && !*iParam0)
				{
					func_157(0);
					iLocal_47 = 1;
					return;
				}
			}
			if (!bVar0 && !*iParam0)
			{
				if (!iLocal_49)
				{
					if (unk_0x6A0583ECFCCECC9B(iLocal_28, 0))
					{
						iVar1 = unk_0x19912132A3CBAD3C(iLocal_28);
						if (iVar1 == iLocal_48)
						{
							iLocal_49 = 1;
							unk_0xB24D3BF5DABD13AA(&iLocal_48);
							iLocal_47 = 9;
						}
					}
				}
			}
			if (*iParam0)
			{
				unk_0x5467EF651716201E(iLocal_28, iLocal_48, -1);
			}
			if (!unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0) && !unk_0xB529B2A4B7C64D6D(iLocal_48, 0))
			{
				if (unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), iLocal_48, 1))
				{
					func_145();
				}
			}
			if (!unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0))
			{
				if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
				{
					iVar2 = unk_0x19912132A3CBAD3C(unk_0xD5A676B97920D126());
					if (iVar2 == iLocal_48)
					{
						unk_0x7FC35FCC666F974E("Traffick_Air");
						if (unk_0x7887B64A08364778(iLocal_29) && !unk_0xB529B2A4B7C64D6D(iLocal_29, 0))
						{
							if (unk_0xA0A4DA31DEDFAC4F(iLocal_29) != joaat("dune") && unk_0xA0A4DA31DEDFAC4F(iLocal_29) != joaat("cuban800"))
							{
								if (!unk_0x1AC9C20D51EE6DC3(iLocal_29, 2137.12f, 4799.97f, 39.67854f, 2116.64f, 4790.417f, 45.45295f, 25f, 0, 1, 0))
								{
									func_118(iLocal_29, 2142.245f, 4823.463f, 40.2769f, 118.4428f, 24, 0);
								}
							}
							else if (!unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0))
							{
								unk_0x03D40EF90D5FDA26(iLocal_29);
							}
						}
						iLocal_47 = 6;
					}
				}
			}
			break;
		
		case 6:
			if (unk_0x4AAFD43C0AFB7A1A("Traffick_Air"))
			{
				iVar3 = 0;
				if (*iParam0)
				{
					iVar3 = 1;
				}
				else
				{
					iVar3 = func_116(&iLocal_35, 6, 9, 0, 0);
					iLocal_45 = 1;
				}
				if (iVar3 == 1)
				{
					if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
					{
						unk_0x8761D8D070DDBD9A(unk_0xFB6B3EEFAB2DD12C());
					}
					if (!*iParam0)
					{
						func_80(unk_0x0FBCE11007AF301F(), 0);
					}
					iLocal_30 = unk_0xE81651AD79516E48("Traffick_Air", 20500);
					func_79(15);
					unk_0x0446A34B5E23D747("Traffick_Air");
					unk_0xB24D3BF5DABD13AA(&iLocal_48);
					if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
					{
						if (Global_36908 == 1)
						{
							func_70(unk_0xD5A676B97920D126());
						}
					}
					iLocal_49 = 0;
					iLocal_47 = 7;
				}
				else if (iVar3 == 0)
				{
					iLocal_45 = 0;
					func_157(0);
					iLocal_47 = 9;
				}
			}
			break;
		
		case 7:
			if (!unk_0x597C1E51157E5516(iLocal_30))
			{
				if (func_155(Global_100305, 1))
				{
					iLocal_47 = 8;
				}
				else
				{
					func_69(&iLocal_35);
					func_52();
					uVar4 = func_51();
					func_43(&uVar4, 0, 0, 3, 0, 0, 0);
					Global_101652.f_18926.f_11 = uVar4;
					func_1(105, 0, 0);
					Global_101652.f_18926.f_14 = 0;
					iLocal_47 = 9;
				}
				*iParam0 = 0;
				func_41(&Global_100305, 1);
			}
			break;
		
		case 8:
			if (Global_91486 == 10)
			{
				if (Global_91520)
				{
					*iParam0 = 1;
					if (unk_0x7887B64A08364778(unk_0xD5A676B97920D126()))
					{
						if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
						{
							unk_0xBB9A2DB94A862D7A(unk_0xD5A676B97920D126(), 2136.446f, 4791.483f, 39.9702f, 1, 0, 0, 1);
						}
					}
					unk_0x4ACD1E4CBA159ED1(joaat("cuban800"));
					unk_0x7FC35FCC666F974E("Traffick_Air");
					if (unk_0x7AD0E9452821C95D(joaat("cuban800")))
					{
						unk_0xBCDF9E3086B4229C(Local_50, 8f, 0, 0, 0, 0, 0);
						iLocal_48 = unk_0xDE8A46A23FDCBBFE(joaat("cuban800"), Local_50, 25.29f, 1, 1);
						unk_0x8188DB74546FF484(joaat("cuban800"));
						iLocal_47 = 3;
					}
				}
				else
				{
					*iParam0 = 0;
					iLocal_47 = 1;
				}
			}
			else if (Global_91486 == 13)
			{
				func_69(&iLocal_35);
				func_52();
				*iParam0 = 0;
				iLocal_47 = 1;
			}
			break;
		
		case 9:
			if (fLocal_31 >= 50625f && func_30(Global_101652.f_18926.f_11))
			{
				func_157(0);
				iLocal_47 = 1;
			}
			break;
		
		default:
			break;
	}
}

void func_157(bool bParam0)
{
	unk_0x8188DB74546FF484(joaat("cuban800"));
	if (unk_0x7887B64A08364778(iLocal_48))
	{
		if (bParam0)
		{
			unk_0xAA8D7DFFDAAB903E(&iLocal_48);
		}
		else
		{
			unk_0xB24D3BF5DABD13AA(&iLocal_48);
		}
	}
	if (func_155(Global_101652.f_18926, 128))
	{
		func_41(&(Global_101652.f_18926), 128);
	}
	iLocal_49 = 0;
}

int func_158()
{
	if (!func_169())
	{
		return 0;
	}
	if (!iLocal_45)
	{
		if (func_171() == 309)
		{
			return 1;
		}
		if (!func_27(9))
		{
			return 0;
		}
	}
	if (unk_0xAB964FCFAC3C767A(joaat("traffick_ground")) == 1 || unk_0xAB964FCFAC3C767A(joaat("traffick_air")) == 1)
	{
		return 1;
	}
	iLocal_28 = unk_0xD5A676B97920D126();
	if (unk_0xB529B2A4B7C64D6D(iLocal_28, 0))
	{
	}
	if (func_168())
	{
		return 1;
	}
	if (func_21() != 2)
	{
		return 0;
	}
	if (!func_162(6))
	{
		if (unk_0xD7143F03AB03DDF2(unk_0xD5A676B97920D126()))
		{
			bLocal_46 = true;
		}
		if (!unk_0xFD491158A0A4F57B(unk_0xFB6B3EEFAB2DD12C()))
		{
			bLocal_46 = true;
		}
		if (unk_0xDA4E21D6BC58AB75(unk_0xD5A676B97920D126(), 0))
		{
		}
		if (!unk_0xFD491158A0A4F57B(unk_0xFB6B3EEFAB2DD12C()))
		{
		}
		if (unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) > 0)
		{
		}
		if (unk_0x222B4D6308DFC3F1(unk_0xFB6B3EEFAB2DD12C(), 0))
		{
		}
		if (unk_0x7C4BC3264552091A(unk_0xD5A676B97920D126()))
		{
		}
		if (unk_0xD7143F03AB03DDF2(unk_0xD5A676B97920D126()))
		{
		}
		if (unk_0x9B0C8A2FC23E64AB(unk_0xD5A676B97920D126()))
		{
		}
		if (unk_0x6F49D44BC97A2171(unk_0xFB6B3EEFAB2DD12C(), 1))
		{
		}
		if (unk_0xB7FE4CCB71F0CA65(unk_0xFB6B3EEFAB2DD12C()))
		{
		}
		if (Global_100699)
		{
		}
		if (Global_25187)
		{
		}
		if (func_161())
		{
		}
		if (func_160(8, -1))
		{
		}
		if (func_159())
		{
			return 1;
		}
		return 0;
	}
	else
	{
		bLocal_46 = false;
	}
	return 1;
}

int func_159()
{
	if (Global_69957)
	{
		return 1;
	}
	else if (Global_55812 && !Global_55818)
	{
		return 1;
	}
	return 0;
}

bool func_160(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1352862.f_203[iParam1];
			}
			break;
	}
	return unk_0xF44A5E894FE76438(Global_1352862.f_1015, iParam0);
}

bool func_161()
{
	return Global_1315229;
}

int func_162(int iParam0)
{
	int iVar0;
	
	if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
	{
		if (unk_0x7887B64A08364778(unk_0xD5A676B97920D126()))
		{
			if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
			{
				iVar0 = func_21();
				if (!func_13(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0xFD491158A0A4F57B(unk_0xFB6B3EEFAB2DD12C()) || unk_0x7C4BC3264552091A(unk_0xD5A676B97920D126())) || unk_0xD7143F03AB03DDF2(unk_0xD5A676B97920D126())) || unk_0x9B0C8A2FC23E64AB(unk_0xD5A676B97920D126())) || unk_0xB10E14D4FD54871F(unk_0xD5A676B97920D126())) || unk_0x6F49D44BC97A2171(unk_0xFB6B3EEFAB2DD12C(), 1)) || unk_0xB7FE4CCB71F0CA65(unk_0xFB6B3EEFAB2DD12C())) || unk_0xDA4E21D6BC58AB75(unk_0xD5A676B97920D126(), 0)) || func_167()) || Global_100699) || Global_25187) || func_161()) || func_160(8, -1)) || func_115()) || func_166()) || func_159()) || func_165()) || Global_101652.f_6631.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x6F49D44BC97A2171(unk_0xFB6B3EEFAB2DD12C(), 1) || func_167()) || Global_25187) || func_161()) || func_160(8, -1)) || func_159()) || func_115()) || func_166()) || func_165()) || Global_101652.f_6631.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0xFD491158A0A4F57B(unk_0xFB6B3EEFAB2DD12C()) || unk_0x7C4BC3264552091A(unk_0xD5A676B97920D126())) || unk_0xD7143F03AB03DDF2(unk_0xD5A676B97920D126())) || unk_0x9B0C8A2FC23E64AB(unk_0xD5A676B97920D126())) || unk_0xB10E14D4FD54871F(unk_0xD5A676B97920D126())) || unk_0x6F49D44BC97A2171(unk_0xFB6B3EEFAB2DD12C(), 1)) || unk_0xB7FE4CCB71F0CA65(unk_0xFB6B3EEFAB2DD12C())) || unk_0xDA4E21D6BC58AB75(unk_0xD5A676B97920D126(), 0)) || func_167()) || Global_100699) || Global_25187) || func_161()) || func_160(8, -1)) || func_159()) || func_115()) || func_166()) || func_165()) || Global_101652.f_6631.f_919[iVar0] == 5) || Global_36324 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x9B0C8A2FC23E64AB(unk_0xD5A676B97920D126()) || unk_0xB10E14D4FD54871F(unk_0xD5A676B97920D126())) || unk_0x6F49D44BC97A2171(unk_0xFB6B3EEFAB2DD12C(), 1)) || unk_0xDA4E21D6BC58AB75(unk_0xD5A676B97920D126(), 0)) || func_167()) || Global_100699) || Global_25187) || func_161()) || func_160(8, -1)) || func_115()) || func_166()) || func_165()) || Global_101652.f_6631.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_167() || unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) > 0) || func_160(8, -1)) || func_165()) || func_164()) || Global_101652.f_6631.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_160(8, -1) || func_115()) || func_166()) || func_164()) || func_163())
						{
							return 0;
						}
						if ((unk_0xB0D174BA6F10DF7B() && unk_0xF5009C16308B9147() != 3) && unk_0x96A69406F234414D() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x7887B64A08364778(unk_0xD5A676B97920D126()))
						{
							if ((((((((((((((unk_0xDA4E21D6BC58AB75(unk_0xD5A676B97920D126(), 0) || unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) > 0) || unk_0x7C4BC3264552091A(unk_0xD5A676B97920D126())) || unk_0x9B0C8A2FC23E64AB(unk_0xD5A676B97920D126())) || unk_0xB10E14D4FD54871F(unk_0xD5A676B97920D126())) || unk_0x6F49D44BC97A2171(unk_0xFB6B3EEFAB2DD12C(), 1)) || unk_0xB7FE4CCB71F0CA65(unk_0xFB6B3EEFAB2DD12C())) || func_167()) || Global_25187) || func_161()) || func_160(8, -1)) || func_166()) || func_159()) || func_165()) || Global_101652.f_6631.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0xDA4E21D6BC58AB75(unk_0xD5A676B97920D126(), 0) || !unk_0x0E4A3783CD75D9CE(unk_0xFB6B3EEFAB2DD12C())) || !unk_0xFD491158A0A4F57B(unk_0xFB6B3EEFAB2DD12C())) || !unk_0x8AFBC859AA63D3D7()) || unk_0x7C4BC3264552091A(unk_0xD5A676B97920D126())) || unk_0x9B0C8A2FC23E64AB(unk_0xD5A676B97920D126())) || unk_0xB10E14D4FD54871F(unk_0xD5A676B97920D126())) || unk_0x6F49D44BC97A2171(unk_0xFB6B3EEFAB2DD12C(), 1)) || func_167()) || func_166()) || Global_100699) || Global_25187) || func_161()) || Global_36908) || func_160(8, -1)) || func_159()) || func_164()) || func_165()) || Global_101652.f_6631.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0xDA4E21D6BC58AB75(unk_0xD5A676B97920D126(), 0) || !unk_0x0E4A3783CD75D9CE(unk_0xFB6B3EEFAB2DD12C())) || !unk_0xFD491158A0A4F57B(unk_0xFB6B3EEFAB2DD12C())) || !unk_0x8AFBC859AA63D3D7()) || unk_0x222B4D6308DFC3F1(unk_0xFB6B3EEFAB2DD12C(), 0)) || unk_0x7C4BC3264552091A(unk_0xD5A676B97920D126())) || unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1)) || unk_0x9B0C8A2FC23E64AB(unk_0xD5A676B97920D126())) || unk_0xB10E14D4FD54871F(unk_0xD5A676B97920D126())) || unk_0x13A15A61A159801A(unk_0xD5A676B97920D126())) || unk_0x6F49D44BC97A2171(unk_0xFB6B3EEFAB2DD12C(), 1)) || unk_0xB7FE4CCB71F0CA65(unk_0xFB6B3EEFAB2DD12C())) || func_167()) || Global_100699) || Global_25187) || func_161()) || func_160(8, -1)) || func_159()) || func_164()) || func_115()) || func_166()) || func_165())
						{
							return 0;
						}
						break;
				}
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

var func_163()
{
	return Global_91525.f_1;
}

int func_164()
{
	if (Global_88741 != -1)
	{
		return unk_0xF44A5E894FE76438(Global_82607[Global_88741 /*34*/].f_15, 13);
	}
	return 0;
}

int func_165()
{
	if (unk_0xAB964FCFAC3C767A(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_166()
{
	return Global_91538.f_304 > 0;
}

int func_167()
{
	if (!unk_0x1995B52453EF6537())
	{
		return Global_89297.f_44 == 1;
	}
	return 0;
}

int func_168()
{
	if (((Global_91486 == 13 || Global_91486 == 10) || Global_91486 == 11) || Global_91486 == 12)
	{
		return 0;
	}
	return 1;
}

int func_169()
{
	if (Global_101652.f_8028)
	{
		return (func_170(0, 15) && func_170(0, 16));
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_170(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == 11 || iParam0 == -1)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	bVar0 = unk_0xF44A5E894FE76438(Global_101652.f_8028.f_99.f_219[iParam0], iParam1);
	return bVar0;
}

int func_171()
{
	if (unk_0xB0D174BA6F10DF7B())
	{
		return Global_89661;
	}
	if (func_165())
	{
		return Global_89661;
	}
	return 318;
}

void func_172()
{
	if (!iLocal_80)
	{
		iLocal_79 = unk_0x2B2CCF3F6B9ED3A3(Vector(40.073f, 4788.559f, 2157.109f) - Vector(25f, 25f, 25f), Vector(40.073f, 4788.559f, 2157.109f) + Vector(25f, 25f, 25f), 0, 1, 1, 1);
		iLocal_80 = 1;
	}
}

int func_173(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (unk_0xF44A5E894FE76438(Global_101652.f_8028.f_99.f_219[iVar0], iVar1))
	{
		return 0;
	}
	unk_0xB8A73E7DA87B2968(&(Global_101652.f_8028.f_99.f_219[iVar0]), iVar1);
	return 1;
}

void func_174()
{
	if (iLocal_79 != 0)
	{
		unk_0x1AAA727AD9762D22(iLocal_79, 0);
	}
	func_157(1);
	func_148(1);
	func_177();
	func_175();
	unk_0x01DFCA3621B68C4A();
}

void func_175()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_88752[iVar0 /*17*/] && !Global_88752[iVar0 /*17*/].f_1)
		{
			if (Global_88752[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_88752[iVar0 /*17*/].f_5 != 88 && Global_88752[iVar0 /*17*/].f_5 != 89) && Global_88752[iVar0 /*17*/].f_5 != 92)
				{
					func_176(Global_88752[iVar0 /*17*/].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_176(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_85804[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_85804[iParam0 /*2*/] = 0;
	}
}

void func_177()
{
	int iVar0;
	
	iLocal_36 = 0;
	unk_0x3F457A274AD63D08(joaat("weapon_combatpistol"));
	unk_0x3F457A274AD63D08(joaat("weapon_smg"));
	unk_0x3F457A274AD63D08(joaat("weapon_stickybomb"));
	unk_0x3F457A274AD63D08(joaat("weapon_assaultshotgun"));
	unk_0x3F457A274AD63D08(joaat("weapon_rpg"));
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (unk_0x233F1CC43F061218(uLocal_67[iVar0]))
		{
			unk_0x21B0DFDAD96C837D(uLocal_67[iVar0]);
		}
		if (unk_0x7887B64A08364778(uLocal_61[iVar0]))
		{
			unk_0x77CEDAB7C44BFD4E(&(uLocal_61[iVar0]));
		}
		iVar0++;
	}
}

