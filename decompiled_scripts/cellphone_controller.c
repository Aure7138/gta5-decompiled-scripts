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
	char* sLocal_19 = NULL;
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	bool bLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32[4] = { 0, 0, 0, 0 };
	var uLocal_37[4] = { 0, 0, 0, 0 };
	var uLocal_42[4] = { 0, 0, 0, 0 };
	var uLocal_47[4] = { 0, 0, 0, 0 };
	int iLocal_52 = 0;
	var uLocal_53 = 0;
	int iLocal_54 = 0;
	var uLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	var uLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	bool bLocal_70 = 0;
	float fLocal_71 = 0f;
	float fLocal_72 = 0f;
	float fLocal_73 = 0f;
	float fLocal_74 = 0f;
	float fLocal_75 = 0f;
	float fLocal_76 = 0f;
	float fLocal_77 = 0f;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
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
	sLocal_19 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	fLocal_74 = 0.95f;
	fLocal_75 = 0.07f;
	fLocal_76 = 0.755f;
	unk_0x1ED2FDBD02899869();
	Global_97300 = unk_0x17103F66FBB44C3C();
	func_77();
	func_75();
	func_73();
	Global_14393.f_1 = 3;
	Global_14381 = 0;
	Global_14553 = 0;
	Global_16727 = 0;
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x708CE249B4F97BF8())
		{
			if (unk_0x970F55EB506DBB0C())
			{
				if (Global_14393.f_1 == 6)
				{
					Global_14393.f_1 = 3;
				}
			}
		}
		if (func_72(146))
		{
			if (Global_68245 == 0)
			{
				Global_96306 = 1;
				func_70(0);
			}
		}
		if (Global_2446533.f_4381 == 1)
		{
			if (Global_14393.f_1 > 3)
			{
				Global_14393.f_1 = 3;
			}
		}
		if (Global_68245 == 1)
		{
			if (Global_14393.f_1 == 3)
			{
				if (unk_0x94E72F17611BCD3C(Global_2545539, 15))
				{
					unk_0xEDB9A377CD8B7F03(&Global_2545539, 14);
					unk_0x4EDE34FBADD967A6(0);
					while (!func_68(3, 0, 1, 0))
					{
						unk_0x4EDE34FBADD967A6(0);
					}
					unk_0xF76EE56D3E7DAF1B(&Global_2545539, 14);
					unk_0xF76EE56D3E7DAF1B(&Global_2545539, 15);
				}
				if (unk_0x94E72F17611BCD3C(Global_2545539, 16))
				{
					unk_0xEDB9A377CD8B7F03(&Global_2545539, 14);
					unk_0x4EDE34FBADD967A6(0);
					while (!func_68(17, 0, 1, 0))
					{
						unk_0x4EDE34FBADD967A6(0);
					}
					unk_0xF76EE56D3E7DAF1B(&Global_2545539, 14);
					unk_0xF76EE56D3E7DAF1B(&Global_2545539, 16);
				}
			}
		}
		if (Global_68245 == 0)
		{
			if (unk_0x94E72F17611BCD3C(Global_2545539, 11))
			{
				if ((Global_14393.f_1 != 10 && Global_14393.f_1 != 9) || func_67() == 0)
				{
					unk_0xF76EE56D3E7DAF1B(&Global_2545539, 11);
					unk_0xEDB9A377CD8B7F03(&Global_2264, 11);
				}
			}
			else if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
			{
				if (func_67())
				{
					unk_0xEDB9A377CD8B7F03(&Global_2545539, 11);
					unk_0xEDB9A377CD8B7F03(&Global_2264, 11);
				}
			}
			if (unk_0x94E72F17611BCD3C(Global_2545539, 12))
			{
				unk_0xF76EE56D3E7DAF1B(&Global_2545539, 12);
				unk_0xEDB9A377CD8B7F03(&Global_2264, 11);
			}
		}
		else if (unk_0x94E72F17611BCD3C(Global_2545539, 12))
		{
			if ((Global_16755 == 0 || Global_16756 == 0) && !Global_16757)
			{
				unk_0xF76EE56D3E7DAF1B(&Global_2545539, 12);
				unk_0xEDB9A377CD8B7F03(&Global_2264, 11);
			}
		}
		else if (Global_16757 || (Global_16755 > 0 && Global_16756 == 1))
		{
			unk_0xEDB9A377CD8B7F03(&Global_2545539, 12);
			unk_0xEDB9A377CD8B7F03(&Global_2264, 11);
		}
		if (unk_0x708CE249B4F97BF8())
		{
			if (unk_0x3EE8E1FA72CEFCDB())
			{
				if (!unk_0x94E72F17611BCD3C(Global_2545539, 19))
				{
					unk_0xEDB9A377CD8B7F03(&Global_2545539, 19);
					unk_0xEDB9A377CD8B7F03(&Global_2264, 11);
				}
			}
			else if (unk_0x94E72F17611BCD3C(Global_2545539, 19))
			{
				unk_0xF76EE56D3E7DAF1B(&Global_2545539, 19);
				unk_0xEDB9A377CD8B7F03(&Global_2264, 11);
			}
		}
		if (iLocal_81 == 0)
		{
			if (unk_0x94E72F17611BCD3C(Global_2263, 25))
			{
				unk_0x39496A55977AA312(joaat("sp_cellphone_sleep_time"), &iLocal_80, -1);
				iLocal_78 = unk_0x17103F66FBB44C3C();
				iLocal_81 = 1;
			}
		}
		else if (!unk_0x94E72F17611BCD3C(Global_2263, 25))
		{
			unk_0x39496A55977AA312(joaat("sp_cellphone_sleep_time"), &iLocal_80, -1);
			iLocal_79 = unk_0x17103F66FBB44C3C();
			iLocal_81 = 0;
			unk_0xC46BDC34976E9532(joaat("sp_cellphone_sleep_time"), (iLocal_80 + (iLocal_79 - iLocal_78)), 1);
		}
		func_66();
		func_65();
		func_64();
		func_62();
		func_51();
		func_50();
		func_49();
		if (unk_0x94E72F17611BCD3C(Global_2264, 21))
		{
			if (!unk_0x81F816DFB649C470())
			{
				unk_0xF76EE56D3E7DAF1B(&Global_2264, 21);
			}
		}
		if (unk_0x94E72F17611BCD3C(Global_2263, 7))
		{
			func_42();
			unk_0xF76EE56D3E7DAF1B(&Global_2263, 7);
		}
		if (unk_0x94E72F17611BCD3C(Global_2263, 0))
		{
			func_41();
		}
		if (unk_0x94E72F17611BCD3C(Global_2545539, 0))
		{
			func_40();
		}
		if (unk_0x94E72F17611BCD3C(Global_2264, 11))
		{
			Global_2967 = 0;
			if (unk_0x94E72F17611BCD3C(Global_2263, 25))
			{
				Global_2967++;
			}
			if (unk_0x94E72F17611BCD3C(Global_2545539, 11))
			{
				if (Global_68245 == 0)
				{
					Global_2967++;
				}
			}
			if (unk_0x94E72F17611BCD3C(Global_2545539, 12))
			{
				if (Global_68245 && (Global_16756 || Global_16757))
				{
					Global_2967++;
				}
			}
			if (unk_0x94E72F17611BCD3C(Global_2545539, 19))
			{
				Global_2967++;
			}
			if (Global_2967 == 0)
			{
				unk_0xF76EE56D3E7DAF1B(&Global_2264, 11);
				iLocal_30 = 0;
			}
			else
			{
				iLocal_30 = 1;
			}
		}
		if (!func_39())
		{
			if (!unk_0x3B8CF48C3FC0CF62())
			{
				if (Global_14393.f_1 == 3)
				{
					if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
					{
						if (unk_0x1C7932D7B27409A6(unk_0xCFC72E446B0B3AD7()) || unk_0xB6AE776ED38E0C82())
						{
							if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
							{
								if (Global_68245)
								{
									func_31();
								}
								else
								{
									func_31();
								}
							}
						}
					}
				}
			}
			if (Global_14393.f_1 == 4)
			{
				if (unk_0x94E72F17611BCD3C(Global_2264, 21))
				{
					func_31();
				}
			}
			func_21();
		}
		else if (func_14())
		{
		}
		switch (Global_16727)
		{
			case 0:
				func_13();
				if (Global_16729 == 1)
				{
					func_12();
				}
				break;
			
			case 1:
				func_11();
				break;
			
			case 2:
				func_10();
				break;
			
			case 3:
				func_9();
				break;
			
			case 4:
				func_8();
				break;
			
			case 5:
				func_7();
				break;
			
			case 14:
				func_12();
				break;
			
			case 6:
				if (Global_16729 == 1)
				{
					func_12();
				}
				if (Global_16730 == 1)
				{
					Global_16727 = 9;
					Global_16730 = 0;
				}
				break;
			
			case 8:
				func_6();
				break;
			
			case 9:
				func_5();
				break;
			
			case 10:
				func_4();
				break;
			
			case 11:
				func_3();
				break;
			
			case 12:
				func_2();
				break;
			
			case 13:
				func_1();
				break;
		}
	}
}

void func_1()
{
	iLocal_58 = unk_0x30011AD24D35A50D(Global_16731);
	switch (iLocal_58)
	{
		case 0:
			Global_16727 = 4;
			break;
		
		case 1:
			break;
		
		case 2:
			unk_0xEDB9A377CD8B7F03(&Global_2264, 15);
			func_12();
			break;
	}
}

void func_2()
{
	if (unk_0x3DDAF986D1E76EBC(Global_16731))
	{
		Global_16727 = 13;
	}
	else
	{
		func_12();
	}
}

void func_3()
{
	if (unk_0x4B69FB3A5B09A1BA())
	{
		iLocal_57 = unk_0xE1C532DCCBD8FED6(unk_0x6A8628B6E9F055B3(), uLocal_55);
	}
	else
	{
		iLocal_56 = unk_0x17103F66FBB44C3C();
		iLocal_57 = (iLocal_56 - iLocal_54);
	}
	if (iLocal_57 > 3000)
	{
		unk_0xBFB1954F04B5BAEA();
	}
	if (iLocal_57 > 3200)
	{
		Global_16727 = 6;
	}
}

void func_4()
{
	iLocal_58 = unk_0x0989D9868421ECD1();
	switch (iLocal_58)
	{
		case 0:
			if (unk_0x4B69FB3A5B09A1BA())
			{
				uLocal_55 = unk_0x6A8628B6E9F055B3();
			}
			else
			{
				iLocal_54 = unk_0x17103F66FBB44C3C();
			}
			Global_16727 = 11;
			unk_0x5AE11BC36633DE4E(0);
			break;
		
		case 1:
			break;
		
		case 2:
			func_12();
			break;
	}
}

void func_5()
{
	Global_16732 = -1;
	if (unk_0xA333D3D28F0DFC13(Global_16732))
	{
		Global_16727 = 10;
		unk_0xD2527DA9A2BC60B0("CELL_278");
		unk_0x9D67E5549B880DF9(1);
	}
	else
	{
		func_12();
	}
}

void func_6()
{
	iLocal_58 = unk_0x30D562222CC0DC9B(1);
	switch (iLocal_58)
	{
		case 0:
			Global_16727 = 9;
			break;
		
		case 1:
			break;
		
		case 2:
			func_12();
			break;
	}
}

void func_7()
{
	iLocal_58 = unk_0x60AE89E88F58AF0D(iLocal_59);
	switch (iLocal_58)
	{
		case 0:
			unk_0xA695E73AF205B3C7(1, 1);
			Global_16727 = 6;
			break;
		
		case 1:
			break;
		
		case 2:
			if (iLocal_59 == 3)
			{
				unk_0xEDB9A377CD8B7F03(&Global_2264, 14);
				unk_0xA695E73AF205B3C7(0, 0);
				unk_0x67DD7C94D9E8219F();
				unk_0xD2EDF62087D3B509();
				Global_16727 = 6;
			}
			if (Global_16727 == 5)
			{
				if (iLocal_59 == 0)
				{
					Global_16727 = 4;
					iLocal_59 = 1;
					unk_0xD2EDF62087D3B509();
					unk_0x4EDE34FBADD967A6(0);
				}
			}
			if (Global_16727 == 5)
			{
				if (iLocal_59 == 1)
				{
					Global_16727 = 4;
					iLocal_59 = 2;
					unk_0xD2EDF62087D3B509();
					unk_0x4EDE34FBADD967A6(0);
				}
			}
			if (Global_16727 == 5)
			{
				if (iLocal_59 == 2)
				{
					Global_16727 = 4;
					iLocal_59 = 3;
					unk_0xD2EDF62087D3B509();
					unk_0x4EDE34FBADD967A6(0);
				}
			}
			break;
	}
}

void func_8()
{
	if (unk_0xC600E0CD8BE93CF9(iLocal_59))
	{
		Global_16727 = 5;
	}
	else
	{
		unk_0xEDB9A377CD8B7F03(&Global_2264, 15);
		func_12();
	}
}

void func_9()
{
	iLocal_58 = unk_0x57280DE50ADD0B49();
	switch (iLocal_58)
	{
		case 0:
			Global_16727 = 4;
			iLocal_59 = 2;
			break;
		
		case 1:
			break;
		
		case 2:
			Global_14393.f_1 = 3;
			func_12();
			break;
	}
}

void func_10()
{
	if (unk_0x2805C013C609AFFE())
	{
		Global_16727 = 3;
	}
}

void func_11()
{
	if (unk_0xC9D9444186B5A374() > 0)
	{
		Global_16727 = 2;
	}
}

void func_12()
{
	unk_0xA695E73AF205B3C7(0, 0);
	unk_0x67DD7C94D9E8219F();
	unk_0xD2EDF62087D3B509();
	unk_0xBFB1954F04B5BAEA();
	Global_16728 = 0;
	Global_16729 = 0;
	Global_16730 = 0;
	Global_16727 = 0;
}

void func_13()
{
	if (Global_16728)
	{
		Global_16727 = 1;
		unk_0xF76EE56D3E7DAF1B(&Global_2264, 14);
		unk_0x5AE11BC36633DE4E(0);
	}
}

int func_14()
{
	char* sVar0;
	
	if ((func_20(2, Global_14360, 0) && !unk_0xA27CA832C6E89714(19)) && !unk_0x970F55EB506DBB0C())
	{
		if (unk_0x708CE249B4F97BF8())
		{
			if (unk_0xB4289912C78431FE(unk_0x9F92518438215DD0(), "Synched"))
			{
				sVar0 = unk_0x398E4CFB573BEBB7("CELL_ANTIH_A");
				unk_0x3BE5C2319988C0DB("CELL_ANTIH");
				unk_0x47BD44C357490C29("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", 0, 0, sVar0, 0);
			}
		}
		if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
		{
			if (func_19(unk_0x9F92518438215DD0()) || unk_0x09F870211EA9CA4B(unk_0x9F92518438215DD0()))
			{
				if (unk_0x859C6F0CEF1CB9FE(0, 25) || unk_0x859C6F0CEF1CB9FE(0, 68))
				{
					return 0;
				}
			}
		}
		Global_16751 = 0;
		Global_16752 = 0;
		if (unk_0x963D52E6D19A6FE0() == Global_16749 && unk_0x963D52E6D19A6FE0() != -1)
		{
			Global_16751 = Global_16750;
			iLocal_62 = unk_0x17103F66FBB44C3C();
			iLocal_64 = 0;
			iLocal_65 = 0;
			while (((func_18(2, Global_14360) && iLocal_64 < 250) && Global_14559 == 0) && !unk_0xA27CA832C6E89714(19))
			{
				if (Global_2967 > 0)
				{
					func_15();
				}
				unk_0x4EDE34FBADD967A6(0);
				iLocal_63 = unk_0x17103F66FBB44C3C();
				iLocal_64 = (iLocal_63 - iLocal_62);
				if (Global_2967 > 0)
				{
					func_15();
				}
			}
			if ((func_18(2, Global_14360) && Global_14559 == 0) && !unk_0xA27CA832C6E89714(19))
			{
				iLocal_65 = 1;
			}
			if (Global_14559 == 0)
			{
				if (iLocal_65 == 1)
				{
					Global_16752 = 1;
					Global_16751 = Global_16750;
					if (Global_16751 == 1)
					{
					}
					if (Global_16751 == 2)
					{
					}
					if (Global_16751 == 3)
					{
					}
					if (Global_16751 == 0)
					{
					}
				}
				else
				{
					Global_16751 = 0;
				}
			}
			else
			{
				Global_16751 = 0;
			}
		}
		else
		{
			Global_16751 = 0;
		}
		if (!unk_0xA27CA832C6E89714(19))
		{
			return 1;
		}
		else
		{
			Global_16751 = 0;
			Global_16752 = 0;
			return 0;
		}
	}
	return 0;
}

void func_15()
{
	if (Global_16757)
	{
		fLocal_75 = -0.055f;
		fLocal_76 = 0.745f;
		fLocal_71 = unk_0x4F55F372ED95FA6C();
		fLocal_77 = ((100f * fLocal_74) - (100f * fLocal_71));
		fLocal_72 = (fLocal_75 + (fLocal_77 * 0.005f));
		fLocal_73 = (fLocal_76 - (fLocal_77 * 0.005f));
		if (!func_17())
		{
			unk_0x0ABDE626ED91F161(1);
			unk_0xF36D3CA21410B7D5(7);
			if (unk_0x708CE249B4F97BF8())
			{
				unk_0x02E852C43F133DB7();
			}
			unk_0x6FFAE2D893387C6F(uLocal_28, fLocal_72, fLocal_73, 0.27f, 0.45f, 255, 255, 255, 255, 0);
			unk_0x0ABDE626ED91F161(0);
			unk_0xF36D3CA21410B7D5(4);
		}
	}
	else
	{
		if (unk_0x708CE249B4F97BF8())
		{
			if (Global_2410495.f_463)
			{
				bLocal_29 = false;
			}
			else if (unk_0x94E72F17611BCD3C(Global_2263, 13))
			{
				if (unk_0x94E72F17611BCD3C(Global_2545539, 19))
				{
					bLocal_29 = false;
				}
				else
				{
					bLocal_29 = true;
				}
			}
			else
			{
				bLocal_29 = false;
			}
		}
		else if (Global_2410495.f_463 || unk_0x94E72F17611BCD3C(Global_2263, 13))
		{
			bLocal_29 = true;
		}
		else
		{
			bLocal_29 = false;
		}
		if (unk_0x304B94DC2DC1255E())
		{
			if (!unk_0x625EC485BAF01C53())
			{
				if (!bLocal_29)
				{
					if (!func_39())
					{
						if (!func_16())
						{
							if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
							{
								if (!unk_0x6BD7C167138FCD4C(unk_0xCFC72E446B0B3AD7(), 1))
								{
									unk_0xF36D3CA21410B7D5(4);
									if (unk_0x708CE249B4F97BF8() && Global_2410495.f_463)
									{
										fLocal_75 = 0.165f;
										fLocal_76 = 0.755f;
									}
									else
									{
										fLocal_75 = 0.07f;
										fLocal_76 = 0.755f;
									}
									fLocal_71 = unk_0x4F55F372ED95FA6C();
									fLocal_77 = ((100f * fLocal_74) - (100f * fLocal_71));
									fLocal_72 = (fLocal_75 + (fLocal_77 * 0.005f));
									fLocal_73 = (fLocal_76 - (fLocal_77 * 0.005f));
									if (!func_17())
									{
										if (unk_0x708CE249B4F97BF8())
										{
											unk_0x02E852C43F133DB7();
										}
										unk_0x6FFAE2D893387C6F(uLocal_28, fLocal_72, fLocal_73, 0.27f, 0.45f, 255, 255, 255, 255, 0);
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_16()
{
	if (unk_0x7B47A371E2D93C2C(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_17()
{
	if (unk_0x94E72F17611BCD3C(Global_2265, 3))
	{
		return 1;
	}
	return 0;
}

int func_18(int iParam0, int iParam1)
{
	if (unk_0x859C6F0CEF1CB9FE(iParam0, iParam1))
	{
		if (unk_0x708CE249B4F97BF8())
		{
			if (unk_0x16F8ADED32EFC76D() == 0)
			{
				return 0;
			}
		}
		if (unk_0xC8557993A78C1B3E() || unk_0x3B8CF48C3FC0CF62())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_19(var uParam0)
{
	int iVar0;
	
	if (unk_0x4A92EC439A129446())
	{
		if (!unk_0x3E0478C40AB5B38D(uParam0))
		{
			unk_0x9DA0F3A686A566A6(uParam0, &iVar0, 1);
			if ((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_20(int iParam0, var uParam1, int iParam2)
{
	if (unk_0x205C5BF7277043DF(iParam0, uParam1) || (iParam2 == 1 && unk_0x4841051C33809BC4(iParam0, uParam1)))
	{
		if (unk_0x708CE249B4F97BF8())
		{
			if (unk_0x16F8ADED32EFC76D() == 0 || (unk_0xB693DB1187BBD585() && unk_0x286FD331C17C5174(2)))
			{
				return 0;
			}
		}
		if (unk_0xC8557993A78C1B3E() || unk_0x3B8CF48C3FC0CF62())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_21()
{
	switch (Global_14393.f_1)
	{
		case 4:
			if (unk_0x94E72F17611BCD3C(Global_2264, 21))
			{
			}
			else
			{
				if (unk_0x4E8A0A2FF31F0831(Global_14390))
				{
				}
				else
				{
					if (!unk_0x4E8A0A2FF31F0831(Global_14390))
					{
						if (unk_0x7B47A371E2D93C2C(joaat("cellphone_flashhand")) == 0)
						{
							unk_0x9AD29F8AF48B9AD1("cellphone_flashhand");
							while (!unk_0x197501C41CB2403F("cellphone_flashhand"))
							{
								unk_0x4EDE34FBADD967A6(0);
								if (Global_2967 > 0)
								{
									func_15();
								}
							}
							if (unk_0x7B47A371E2D93C2C(joaat("cellphone_flashhand")) == 0)
							{
								Global_14390 = unk_0xE81651AD79516E48("cellphone_flashhand", 1424);
							}
							unk_0x45C517E671FFDD0E("cellphone_flashhand");
						}
					}
					func_30(0);
				}
				if (Global_15702 || Global_15703)
				{
					if (!unk_0x4E8A0A2FF31F0831(Global_14390))
					{
						if (unk_0x7B47A371E2D93C2C(joaat("cellphone_flashhand")) == 0)
						{
							unk_0x9AD29F8AF48B9AD1("cellphone_flashhand");
							while (!unk_0x197501C41CB2403F("cellphone_flashhand"))
							{
								unk_0x4EDE34FBADD967A6(0);
								if (Global_2967 > 0)
								{
									func_15();
								}
							}
							if (unk_0x7B47A371E2D93C2C(joaat("cellphone_flashhand")) == 0)
							{
								Global_14390 = unk_0xE81651AD79516E48("cellphone_flashhand", 1424);
							}
							unk_0x45C517E671FFDD0E("cellphone_flashhand");
						}
					}
					while (!unk_0x5E3461E729DA646E(Global_14374) && Global_14376 == 0)
					{
						unk_0x4EDE34FBADD967A6(0);
						if (Global_2967 > 0)
						{
							func_15();
						}
					}
					if (Global_14376 == 0)
					{
						Global_14393.f_1 = 9;
						func_22();
					}
				}
				else
				{
					bLocal_70 = false;
					if (Global_68245 && Global_16754)
					{
						bLocal_70 = true;
					}
					if (((Global_97358.f_12305[Global_14393 /*20*/].f_18 == 1 || Global_97358.f_12305[Global_14393 /*20*/].f_17 == 1) || bLocal_70 == 1) || Global_16751 != 0)
					{
						while (!unk_0x5E3461E729DA646E(Global_14374) && Global_14376 == 0)
						{
							unk_0x4EDE34FBADD967A6(0);
							if (Global_2967 > 0)
							{
								func_15();
							}
						}
						if (Global_14376 == 0)
						{
							if (Global_14393.f_1 > 3)
							{
								Global_14393.f_1 = 6;
								if (Global_16751 == 0)
								{
									if (bLocal_70)
									{
									}
									else if (Global_68245 == 0)
									{
										if (Global_97358.f_12305[Global_14393 /*20*/].f_17 == 1)
										{
											func_68(1, 0, 1, 0);
										}
									}
								}
								else
								{
									if (Global_16751 == 3)
									{
									}
									if (Global_16751 == 1)
									{
									}
									if (Global_16751 == 2)
									{
									}
								}
							}
						}
					}
					else
					{
						while (!unk_0x5E3461E729DA646E(Global_14374) && Global_14376 == 0)
						{
							unk_0x4EDE34FBADD967A6(0);
							if (Global_2967 > 0)
							{
								func_15();
							}
						}
						if (Global_14376 == 0)
						{
							if (Global_14393.f_1 > 3)
							{
								if (Global_15702 || Global_15703)
								{
									Global_14393.f_1 = 9;
								}
								else
								{
									Global_14393.f_1 = 6;
								}
							}
						}
					}
				}
			}
			break;
	}
}

void func_22()
{
	struct<3> Var0;
	
	if (Global_14376 == 1)
	{
		return;
	}
	if (Global_14393.f_1 < 4)
	{
		return;
	}
	while (!unk_0x5E3461E729DA646E(Global_14374))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	switch (Global_14393.f_1)
	{
		case 6:
			func_29(Global_14374, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_27(Global_2868);
			if (Global_2868 == 1)
			{
				func_29(Global_14374, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14397), -1082130432, -1082130432, -1082130432);
				Global_14373 = Global_14397;
			}
			else
			{
				func_29(Global_14374, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14398), -1082130432, -1082130432, -1082130432);
				Global_14373 = Global_14398;
			}
			if (Global_14381)
			{
				func_26(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_26(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_26(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_26(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_14553 == 0)
			{
				func_26(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0xF76EE56D3E7DAF1B(&Global_2263, 17);
			}
			else if (Global_68245)
			{
				func_26(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0xF76EE56D3E7DAF1B(&Global_2263, 17);
			}
			else
			{
				if (Global_14552 == 1)
				{
					if (Global_14381)
					{
						func_26(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_26(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_14381)
				{
					func_26(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_26(Global_14374, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				unk_0xEDB9A377CD8B7F03(&Global_2263, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_29(Global_14374, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_26(Global_14374, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_26(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xF76EE56D3E7DAF1B(&Global_2263, 17);
			if (unk_0x94E72F17611BCD3C(Global_2263, 20))
			{
				func_26(Global_14374, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14381)
			{
				func_26(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14336)
				{
					func_26(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_26(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_14392 == 1)
			{
				func_25();
				func_29(Global_14374, "SET_THEME", unk_0xBBDA792448DB5A89(Global_97358.f_12305[Global_14393 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_15705)
				{
					unk_0x48F299599202B77A(Global_14374, "SET_DATA_SLOT");
					unk_0x4BD4D58838D3F8E5(4);
					unk_0x4BD4D58838D3F8E5(0);
					unk_0x4BD4D58838D3F8E5(2);
					unk_0x0F79C8080022554A("CELL_CONDFON");
					unk_0x7FAFF3E791AF486A(&Global_15707);
					unk_0xE6EC84BF3A7A64B6();
					func_24("CELL_300");
					func_24("CELL_217");
					func_24("CELL_217");
					unk_0x7E86CE5F658823DB();
				}
				else if (Global_97358.f_29774[Global_1578 /*29*/].f_24[Global_14393] == 0)
				{
					func_26(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_97[Global_1578 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_26(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_97358.f_29774[Global_1578 /*29*/].f_3), &(Global_97358.f_29774[Global_1578 /*29*/].f_7), "CELL_217", &(Global_97358.f_29774[Global_1578 /*29*/].f_3), 0);
				}
				func_29(Global_14374, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_15692 == 4 || Global_15692 == 3)
			{
				func_29(Global_14374, "SET_THEME", unk_0xBBDA792448DB5A89(Global_97358.f_12305[Global_14393 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_25();
				if (Global_15705)
				{
					unk_0x48F299599202B77A(Global_14374, "SET_DATA_SLOT");
					unk_0x4BD4D58838D3F8E5(4);
					unk_0x4BD4D58838D3F8E5(0);
					unk_0x4BD4D58838D3F8E5(2);
					unk_0x0F79C8080022554A("CELL_CONDFON");
					unk_0x7FAFF3E791AF486A(&Global_15707);
					unk_0xE6EC84BF3A7A64B6();
					func_24("CELL_300");
					func_24("CELL_219");
					func_24("CELL_219");
					unk_0x7E86CE5F658823DB();
				}
				else
				{
					if (Global_15950)
					{
						StringCopy(&Var0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&Var0, "CELL_211", 24);
					}
					if (Global_97358.f_29774[Global_1578 /*29*/].f_24[Global_14393] == 0)
					{
						func_29(Global_14374, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_26(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_97[Global_1578 /*10*/].f_4), "CELL_300", &Var0, "CELL_195", 0);
					}
					else
					{
						func_29(Global_14374, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_26(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_97358.f_29774[Global_1578 /*29*/].f_3), &(Global_97358.f_29774[Global_1578 /*29*/].f_7), &Var0, &(Global_97358.f_29774[Global_1578 /*29*/].f_3), 0);
					}
				}
				func_29(Global_14374, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_23();
			break;
		
		default:
			break;
	}
}

void func_23()
{
	if (unk_0x5E3461E729DA646E(Global_14374))
	{
		if (Global_14392 == 1)
		{
			if (Global_14381)
			{
				func_26(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_26(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_15739)
			{
				func_26(Global_14374, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (unk_0x94E72F17611BCD3C(Global_2263, 20))
			{
				func_26(Global_14374, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14381)
			{
				func_26(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_26(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_26(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xF76EE56D3E7DAF1B(&Global_2263, 17);
		}
		else
		{
			func_26(Global_14374, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_26(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xF76EE56D3E7DAF1B(&Global_2263, 17);
			if (unk_0x94E72F17611BCD3C(Global_2263, 20))
			{
				func_26(Global_14374, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14381)
			{
				func_26(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14336)
				{
					func_26(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_26(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_24(char* sParam0)
{
	unk_0x0F79C8080022554A(sParam0);
	unk_0xE6EC84BF3A7A64B6();
}

void func_25()
{
	if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
	{
		if (Global_14393 == 0)
		{
			switch (Global_97358.f_12305[Global_14393 /*20*/].f_6)
			{
				case 1:
					unk_0x00657822CE88C85D(unk_0xCFC72E446B0B3AD7(), 0);
					break;
				
				case 2:
					unk_0x00657822CE88C85D(unk_0xCFC72E446B0B3AD7(), 1);
					break;
				
				case 3:
					unk_0x00657822CE88C85D(unk_0xCFC72E446B0B3AD7(), 2);
					break;
				
				case 4:
					unk_0x00657822CE88C85D(unk_0xCFC72E446B0B3AD7(), 3);
					break;
				
				case 5:
					unk_0x00657822CE88C85D(unk_0xCFC72E446B0B3AD7(), 4);
					break;
				
				case 6:
					unk_0x00657822CE88C85D(unk_0xCFC72E446B0B3AD7(), 5);
					break;
				
				case 7:
					unk_0x00657822CE88C85D(unk_0xCFC72E446B0B3AD7(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_14393 == 1)
		{
			switch (Global_97358.f_12305[Global_14393 /*20*/].f_6)
			{
				case 1:
					unk_0x00657822CE88C85D(unk_0xCFC72E446B0B3AD7(), 6);
					break;
				
				case 2:
					unk_0x00657822CE88C85D(unk_0xCFC72E446B0B3AD7(), 0);
					break;
				
				case 3:
					unk_0x00657822CE88C85D(unk_0xCFC72E446B0B3AD7(), 1);
					break;
				
				case 4:
					unk_0x00657822CE88C85D(unk_0xCFC72E446B0B3AD7(), 2);
					break;
				
				case 5:
					unk_0x00657822CE88C85D(unk_0xCFC72E446B0B3AD7(), 3);
					break;
				
				case 6:
					unk_0x00657822CE88C85D(unk_0xCFC72E446B0B3AD7(), 4);
					break;
				
				case 7:
					unk_0x00657822CE88C85D(unk_0xCFC72E446B0B3AD7(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_14393 == 2)
		{
			switch (Global_97358.f_12305[Global_14393 /*20*/].f_6)
			{
				case 1:
					unk_0x00657822CE88C85D(unk_0xCFC72E446B0B3AD7(), 5);
					break;
				
				case 2:
					unk_0x00657822CE88C85D(unk_0xCFC72E446B0B3AD7(), 6);
					break;
				
				case 3:
					unk_0x00657822CE88C85D(unk_0xCFC72E446B0B3AD7(), 1);
					break;
				
				case 4:
					unk_0x00657822CE88C85D(unk_0xCFC72E446B0B3AD7(), 0);
					break;
				
				case 5:
					unk_0x00657822CE88C85D(unk_0xCFC72E446B0B3AD7(), 2);
					break;
				
				case 6:
					unk_0x00657822CE88C85D(unk_0xCFC72E446B0B3AD7(), 3);
					break;
				
				case 7:
					unk_0x00657822CE88C85D(unk_0xCFC72E446B0B3AD7(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_14393 == 3)
		{
			switch (Global_2545739)
			{
				case 1:
					unk_0x00657822CE88C85D(unk_0xCFC72E446B0B3AD7(), 0);
					break;
				
				case 2:
					unk_0x00657822CE88C85D(unk_0xCFC72E446B0B3AD7(), 1);
					break;
				
				case 3:
					unk_0x00657822CE88C85D(unk_0xCFC72E446B0B3AD7(), 2);
					break;
				
				case 4:
					unk_0x00657822CE88C85D(unk_0xCFC72E446B0B3AD7(), 3);
					break;
				
				case 5:
					unk_0x00657822CE88C85D(unk_0xCFC72E446B0B3AD7(), 4);
					break;
				
				case 6:
					unk_0x00657822CE88C85D(unk_0xCFC72E446B0B3AD7(), 5);
					break;
				
				case 7:
					unk_0x00657822CE88C85D(unk_0xCFC72E446B0B3AD7(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_26(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0x48F299599202B77A(uParam0, sParam1);
	unk_0x4BD4D58838D3F8E5(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x4BD4D58838D3F8E5(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x4BD4D58838D3F8E5(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x4BD4D58838D3F8E5(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x4BD4D58838D3F8E5(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x9E9AFDBF482248F6(sParam7))
	{
		func_24(sParam7);
	}
	if (!unk_0x9E9AFDBF482248F6(iParam8))
	{
		func_24(iParam8);
	}
	if (!unk_0x9E9AFDBF482248F6(iParam9))
	{
		func_24(iParam9);
	}
	if (!unk_0x9E9AFDBF482248F6(iParam10))
	{
		func_24(iParam10);
	}
	if (!unk_0x9E9AFDBF482248F6(iParam11))
	{
		func_24(iParam11);
	}
	unk_0x7E86CE5F658823DB();
}

void func_27(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	Global_16760 = 0;
	Global_2868 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2832[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_28(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2270[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2270[iVar1 /*15*/].f_4)
					{
						if (Global_2832[iVar0] == 0)
						{
							Global_2796[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0x94E72F17611BCD3C(Global_2264, 3))
								{
									iVar2 = 42;
									Global_14555 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14555 = 0;
								}
								unk_0x48F299599202B77A(Global_14374, "SET_DATA_SLOT");
								unk_0x4BD4D58838D3F8E5(1);
								unk_0x4BD4D58838D3F8E5(iVar0);
								unk_0x4BD4D58838D3F8E5(Global_2270[iVar1 /*15*/].f_10);
								unk_0x4BD4D58838D3F8E5(0);
								func_24(&(Global_2270[iVar1 /*15*/]));
								unk_0x4BD4D58838D3F8E5(iVar2);
								unk_0x7E86CE5F658823DB();
							}
							Global_2832[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2270[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2270[iVar1 /*15*/].f_4)
					{
						if (Global_2832[iVar0] == 0)
						{
							Global_2796[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_97358.f_12395[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_97358.f_12395[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_97358.f_12395[iVar3 /*104*/].f_99[Global_14393] == 1)
											{
												Global_16760++;
											}
										}
									}
									iVar3++;
								}
								func_26(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2270[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16760), -1f, &(Global_2270[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_68245)
								{
									iVar4 = 0;
									iVar5 = 0;
									while (iVar4 < 12)
									{
										if (Global_2544274[iVar4 /*104*/].f_24 != 0)
										{
											if (Global_2544274[iVar4 /*104*/].f_28 == 0)
											{
												if (Global_2544274[iVar4 /*104*/].f_99[Global_14393] == 1)
												{
													iVar5++;
												}
											}
										}
										iVar4++;
									}
									func_26(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2270[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar5), -1f, &(Global_2270[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14393)
									{
										case 0:
											iVar6 = Global_35962;
											break;
										
										case 1:
											iVar6 = Global_35963;
											break;
										
										case 2:
											iVar6 = Global_35964;
											break;
										
										default:
											break;
									}
									func_26(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2270[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar6), -1f, &(Global_2270[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_26(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2270[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16755), -1f, &(Global_2270[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x48F299599202B77A(Global_14374, "SET_DATA_SLOT");
								unk_0x4BD4D58838D3F8E5(1);
								unk_0x4BD4D58838D3F8E5(iVar0);
								unk_0x4BD4D58838D3F8E5(Global_2270[iVar1 /*15*/].f_10);
								unk_0x4BD4D58838D3F8E5(0);
								func_24(&(Global_2270[iVar1 /*15*/]));
								unk_0x4BD4D58838D3F8E5(Global_2269);
								unk_0x7E86CE5F658823DB();
							}
							else if (iVar1 == 2)
							{
								if (unk_0x94E72F17611BCD3C(Global_2264, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0x48F299599202B77A(Global_14374, "SET_DATA_SLOT");
								unk_0x4BD4D58838D3F8E5(1);
								unk_0x4BD4D58838D3F8E5(iVar0);
								unk_0x4BD4D58838D3F8E5(Global_2270[iVar1 /*15*/].f_10);
								unk_0x4BD4D58838D3F8E5(0);
								func_24(&(Global_2270[iVar1 /*15*/]));
								unk_0x4BD4D58838D3F8E5(iVar7);
								unk_0x7E86CE5F658823DB();
							}
							else if (iVar1 == 3)
							{
								if (unk_0x94E72F17611BCD3C(Global_2264, 3))
								{
									iVar8 = 42;
									Global_14555 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14555 = 0;
								}
								unk_0x48F299599202B77A(Global_14374, "SET_DATA_SLOT");
								unk_0x4BD4D58838D3F8E5(1);
								unk_0x4BD4D58838D3F8E5(iVar0);
								unk_0x4BD4D58838D3F8E5(Global_2270[iVar1 /*15*/].f_10);
								unk_0x4BD4D58838D3F8E5(0);
								func_24(&(Global_2270[iVar1 /*15*/]));
								unk_0x4BD4D58838D3F8E5(iVar8);
								unk_0x7E86CE5F658823DB();
							}
							else if (iVar1 == 8)
							{
								unk_0x48F299599202B77A(Global_14374, "SET_DATA_SLOT");
								unk_0x4BD4D58838D3F8E5(1);
								unk_0x4BD4D58838D3F8E5(iVar0);
								unk_0x4BD4D58838D3F8E5(Global_2270[iVar1 /*15*/].f_10);
								unk_0x4BD4D58838D3F8E5(0);
								func_24(&(Global_2270[iVar1 /*15*/]));
								unk_0x4BD4D58838D3F8E5(42);
								unk_0x7E86CE5F658823DB();
							}
							else
							{
								func_26(Global_14374, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2270[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_2270[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2832[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

bool func_28(int iParam0)
{
	return Global_34913 == iParam0;
}

void func_29(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x48F299599202B77A(uParam0, sParam1);
	unk_0x4BD4D58838D3F8E5(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x4BD4D58838D3F8E5(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x4BD4D58838D3F8E5(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x4BD4D58838D3F8E5(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x4BD4D58838D3F8E5(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0x7E86CE5F658823DB();
}

void func_30(bool bParam0)
{
	if (bParam0)
	{
		if (Global_14393.f_1 == 9)
		{
			Global_14551 = 1;
		}
	}
	else
	{
		Global_14551 = 0;
	}
}

void func_31()
{
	if (func_14() || unk_0x94E72F17611BCD3C(Global_2263, 8))
	{
		unk_0xF76EE56D3E7DAF1B(&Global_2263, 8);
		func_33();
		if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
		{
			if (!unk_0x02616AAC1A02E70E(unk_0x9F92518438215DD0()))
			{
				if (func_32())
				{
				}
				else if (unk_0x7B47A371E2D93C2C(joaat("cellphone_flashhand")) == 0)
				{
					if (unk_0x94E72F17611BCD3C(Global_2264, 21))
					{
						unk_0xF76EE56D3E7DAF1B(&Global_2264, 21);
					}
					if (Global_14559 == 1)
					{
						Global_14559 = 0;
					}
					switch (Global_14393.f_1)
					{
						case 3:
							Global_14393.f_1 = 4;
							break;
						
						default:
							break;
					}
					Global_14549 = 1;
				}
			}
		}
	}
}

int func_32()
{
	if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
	{
		if ((((unk_0xD1C0C220414EB327(unk_0x9F92518438215DD0(), 78, 1) || unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0())) || unk_0x29CF5578FD16B3A2(unk_0x9F92518438215DD0(), 0)) || unk_0xA75CD3E8519BDC0D(unk_0x9F92518438215DD0())) || unk_0x1B8283038D161B68(unk_0x9F92518438215DD0()) == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_33()
{
	if (func_28(14))
	{
		if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
		{
			if (unk_0xB6A50C909A8FABC3(unk_0x9F92518438215DD0()) == Global_97358.f_29774[0 /*29*/])
			{
				Global_14393 = 0;
			}
			else if (unk_0xB6A50C909A8FABC3(unk_0x9F92518438215DD0()) == Global_97358.f_29774[1 /*29*/])
			{
				Global_14393 = 1;
			}
			else if (unk_0xB6A50C909A8FABC3(unk_0x9F92518438215DD0()) == Global_97358.f_29774[2 /*29*/])
			{
				Global_14393 = 2;
			}
			else
			{
				Global_14393 = 0;
			}
		}
	}
	else
	{
		Global_14393 = func_34();
		if (Global_14393 == 145)
		{
			Global_14393 = 3;
		}
		if (Global_68245)
		{
			Global_14393 = 3;
		}
		if (Global_14393 > 3)
		{
			Global_14393 = 3;
		}
	}
}

var func_34()
{
	func_35();
	return Global_97358.f_1729.f_539.f_3213;
}

void func_35()
{
	int iVar0;
	
	if (unk_0x746960881FB19A89(unk_0x9F92518438215DD0()))
	{
		if (func_38(Global_97358.f_1729.f_539.f_3213) != unk_0xB6A50C909A8FABC3(unk_0x9F92518438215DD0()))
		{
			iVar0 = func_37(unk_0x9F92518438215DD0());
			if (func_36(iVar0) && (!func_28(14) || Global_96311))
			{
				if (Global_97358.f_1729.f_539.f_3213 != iVar0 && func_36(Global_97358.f_1729.f_539.f_3213))
				{
					Global_97358.f_1729.f_539.f_3214 = Global_97358.f_1729.f_539.f_3213;
				}
				Global_97358.f_1729.f_539.f_3215 = iVar0;
				Global_97358.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97358.f_1729.f_539.f_3213 != 145)
			{
				Global_97358.f_1729.f_539.f_3215 = Global_97358.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97358.f_1729.f_539.f_3213 = 145;
}

bool func_36(int iParam0)
{
	return iParam0 < 3;
}

int func_37(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x746960881FB19A89(uParam0))
	{
		iVar1 = unk_0xB6A50C909A8FABC3(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_38(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_38(int iParam0)
{
	if (func_36(iParam0))
	{
		return Global_97358.f_29774[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_39()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_40()
{
	char cVar0[64];
	int iVar16;
	char cVar17[64];
	char cVar33[64];
	char cVar49[64];
	char cVar65[64];
	
	unk_0xF76EE56D3E7DAF1B(&Global_2545539, 0);
	if (Global_16753 != 0)
	{
		if (unk_0xB72DEA463116350F(Global_16753))
		{
			if (unk_0xA8985BD1EF3D9A7B(Global_16753))
			{
				StringCopy(&cVar0, unk_0xEE19D2B42122B330(Global_16753), 64);
				Global_16761[Global_16759] = Global_16753;
			}
			else
			{
				StringCopy(&cVar0, "CHAR_DEFAULT", 64);
				Global_16761[Global_2545523] = 0;
			}
		}
		else
		{
			StringCopy(&cVar0, "CHAR_DEFAULT", 64);
			Global_16761[Global_2545523] = 0;
		}
	}
	else
	{
		StringCopy(&cVar0, unk_0x398E4CFB573BEBB7(&(Global_97358.f_29774[Global_2544274[Global_2545523 /*104*/].f_17 /*29*/].f_7)), 64);
		Global_16761[Global_2545523] = 0;
	}
	if (unk_0x9E9AFDBF482248F6(&cVar0))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
	}
	else if (unk_0x6B08EC9A88700FBB(&cVar0, "NULL"))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
	}
	if (((((((Global_2544274[Global_2545523 /*104*/].f_32 == 4 || Global_2544274[Global_2545523 /*104*/].f_32 == 5) || Global_2544274[Global_2545523 /*104*/].f_32 == 6) || Global_2544274[Global_2545523 /*104*/].f_32 == 7) || Global_2544274[Global_2545523 /*104*/].f_32 == 8) || Global_2544274[Global_2545523 /*104*/].f_32 == 9) || Global_2544274[Global_2545523 /*104*/].f_32 == 10) || Global_2544274[Global_2545523 /*104*/].f_32 == 11)
	{
		iVar16 = 0;
		switch (Global_2544274[Global_2545523 /*104*/].f_49)
		{
			case 1:
				unk_0x3BE5C2319988C0DB("CELL_CL01");
				break;
			
			case 2:
				unk_0x3BE5C2319988C0DB("CELL_CL02");
				break;
			
			case 3:
				unk_0x3BE5C2319988C0DB("CELL_CL03");
				break;
			
			case 4:
				unk_0x3BE5C2319988C0DB("CELL_CL04");
				break;
			
			case 5:
				unk_0x3BE5C2319988C0DB("CELL_CL05");
				break;
			
			case 6:
				unk_0x3BE5C2319988C0DB("CELL_CL06");
				break;
			
			case 7:
				unk_0x3BE5C2319988C0DB("CELL_CL07");
				break;
			
			case 8:
				unk_0x3BE5C2319988C0DB("CELL_CL08");
				break;
			
			case 9:
				unk_0x3BE5C2319988C0DB("CELL_CL09");
				break;
		}
		unk_0xDB4BC767CEF09274(&(Global_2544274[Global_2545523 /*104*/]));
		while (iVar16 < Global_2544274[Global_2545523 /*104*/].f_49)
		{
			switch (Global_2544274[Global_2545523 /*104*/].f_32)
			{
				case 4:
					unk_0xDB4BC767CEF09274(&(Global_2446533.f_1551[iVar16 /*4*/]));
					break;
				
				case 5:
					unk_0xDB4BC767CEF09274(&(Global_1685210[iVar16 /*4*/]));
					break;
				
				case 6:
					unk_0xDB4BC767CEF09274(&(Global_1685251[iVar16 /*4*/]));
					break;
				
				case 7:
					unk_0xDB4BC767CEF09274(&(Global_1685272[iVar16 /*4*/]));
					break;
				
				case 8:
					unk_0xDB4BC767CEF09274(&(Global_1685289[iVar16 /*4*/]));
					break;
				
				case 9:
					unk_0xDB4BC767CEF09274(&(Global_1685302[iVar16 /*4*/]));
					break;
				
				case 10:
					unk_0xDB4BC767CEF09274(&(Global_1685315[iVar16 /*4*/]));
					break;
				
				case 11:
					unk_0xDB4BC767CEF09274(&(Global_1685328[iVar16 /*4*/]));
					break;
			}
			iVar16++;
		}
		StringCopy(&cVar17, unk_0x398E4CFB573BEBB7(&(Global_97358.f_29774[Global_2544274[Global_2545523 /*104*/].f_17 /*29*/].f_3)), 64);
		uLocal_53 = unk_0x47BD44C357490C29(&cVar0, &cVar0, 0, 2, &cVar17, 0);
		unk_0xEDB9A377CD8B7F03(&Global_2545539, 1);
		Global_16750 = 1;
		Global_16749 = uLocal_53;
		Global_16753 = 0;
	}
	else
	{
		unk_0x3BE5C2319988C0DB(&(Global_2544274[Global_2545523 /*104*/]));
		switch (Global_2544274[Global_2545523 /*104*/].f_32)
		{
			case 0:
				break;
			
			case 1:
				unk_0x7FAFF3E791AF486A(&(Global_2544274[Global_2545523 /*104*/].f_33));
				if (Global_2544274[Global_2545523 /*104*/].f_66 == 1 && !unk_0x6B08EC9A88700FBB(&(Global_2544274[Global_2545523 /*104*/].f_67), "NULL"))
				{
					unk_0x7FAFF3E791AF486A(&(Global_2544274[Global_2545523 /*104*/].f_67));
				}
				if ((Global_2544274[Global_2545523 /*104*/].f_66 == 2 && !unk_0x6B08EC9A88700FBB(&(Global_2544274[Global_2545523 /*104*/].f_67), "NULL")) && !unk_0x6B08EC9A88700FBB(&(Global_2544274[Global_2545523 /*104*/].f_83), "NULL"))
				{
					if (unk_0x75426D5397CE9E5D(&(Global_2544274[Global_2545523 /*104*/].f_67)))
					{
						unk_0xDB4BC767CEF09274(&(Global_2544274[Global_2545523 /*104*/].f_67));
					}
					else
					{
						unk_0x7FAFF3E791AF486A(&(Global_2544274[Global_2545523 /*104*/].f_67));
					}
					if (unk_0x75426D5397CE9E5D(&(Global_2544274[Global_2545523 /*104*/].f_83)))
					{
						unk_0xDB4BC767CEF09274(&(Global_2544274[Global_2545523 /*104*/].f_83));
					}
					else
					{
						unk_0x7FAFF3E791AF486A(&(Global_2544274[Global_2545523 /*104*/].f_83));
					}
				}
				break;
			
			case 2:
				unk_0x25585F3578FE81FC(Global_2544274[Global_2545523 /*104*/].f_49);
				break;
			
			case 3:
				unk_0x7FAFF3E791AF486A(&(Global_2544274[Global_2545523 /*104*/].f_33));
				unk_0x25585F3578FE81FC(Global_2544274[Global_2545523 /*104*/].f_49);
				if (Global_2544274[Global_2545523 /*104*/].f_66 == 1 && !unk_0x6B08EC9A88700FBB(&(Global_2544274[Global_2545523 /*104*/].f_67), "NULL"))
				{
					unk_0x7FAFF3E791AF486A(&(Global_2544274[Global_2545523 /*104*/].f_67));
				}
				if ((Global_2544274[Global_2545523 /*104*/].f_66 == 2 && !unk_0x6B08EC9A88700FBB(&(Global_2544274[Global_2545523 /*104*/].f_67), "NULL")) && !unk_0x6B08EC9A88700FBB(&(Global_2544274[Global_2545523 /*104*/].f_83), "NULL"))
				{
					if (unk_0x75426D5397CE9E5D(&(Global_2544274[Global_2545523 /*104*/].f_67)))
					{
						unk_0xDB4BC767CEF09274(&(Global_2544274[Global_2545523 /*104*/].f_67));
					}
					else
					{
						unk_0x7FAFF3E791AF486A(&(Global_2544274[Global_2545523 /*104*/].f_67));
					}
					if (unk_0x75426D5397CE9E5D(&(Global_2544274[Global_2545523 /*104*/].f_83)))
					{
						unk_0xDB4BC767CEF09274(&(Global_2544274[Global_2545523 /*104*/].f_83));
					}
					else
					{
						unk_0x7FAFF3E791AF486A(&(Global_2544274[Global_2545523 /*104*/].f_83));
					}
				}
				break;
		}
		if (Global_2544274[Global_2545523 /*104*/].f_17 == 145)
		{
			StringCopy(&cVar33, "<C>", 64);
			StringConCat(&cVar33, &Global_2951, 64);
			StringConCat(&cVar33, "</C>", 64);
			uLocal_53 = unk_0x47BD44C357490C29(&cVar0, &cVar0, 0, 2, &cVar33, 0);
			unk_0xEDB9A377CD8B7F03(&Global_2545539, 1);
			Global_16750 = 1;
			Global_16749 = uLocal_53;
		}
		else
		{
			StringCopy(&cVar49, unk_0x398E4CFB573BEBB7(&(Global_97358.f_29774[Global_2544274[Global_2545523 /*104*/].f_17 /*29*/].f_3)), 64);
			if (Global_2544274[Global_2545523 /*104*/].f_17 == 98)
			{
				StringCopy(&cVar65, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
				StringConCat(&cVar65, &cVar49, 64);
				uLocal_53 = unk_0x47BD44C357490C29(&cVar0, &cVar0, 0, 2, &cVar65, 0);
			}
			else
			{
				uLocal_53 = unk_0x47BD44C357490C29(&cVar0, &cVar0, 0, 2, &cVar49, 0);
			}
			unk_0xEDB9A377CD8B7F03(&Global_2545539, 1);
			Global_16750 = 1;
			Global_16749 = uLocal_53;
			Global_16753 = 0;
		}
	}
	Global_2544274[Global_2545523 /*104*/].f_16 = uLocal_53;
}

void func_41()
{
	char cVar0[64];
	char cVar16[64];
	char* sVar32;
	
	StringCopy(&cVar0, unk_0x398E4CFB573BEBB7(&(Global_97358.f_29774[Global_2949 /*29*/].f_7)), 64);
	if (Global_2968 == 0)
	{
		unk_0x3BE5C2319988C0DB("");
		StringCopy(&cVar16, unk_0x398E4CFB573BEBB7(&(Global_2873[1 /*6*/])), 64);
		sVar32 = unk_0x398E4CFB573BEBB7("CELL_253");
		unk_0x47BD44C357490C29(&cVar0, &cVar0, 0, 3, sVar32, &cVar16);
	}
	else
	{
		unk_0x3BE5C2319988C0DB("CELL_255");
		unk_0xDB4BC767CEF09274(&(Global_2873[1 /*6*/]));
		unk_0x47BD44C357490C29(&cVar0, &cVar0, 0, 3, "", 0);
	}
	unk_0xF76EE56D3E7DAF1B(&Global_2263, 0);
}

void func_42()
{
	if (unk_0x94E72F17611BCD3C(Global_2263, 1))
	{
		func_48();
		func_43();
		Global_97358.f_12305[Global_14393 /*20*/].f_18 = 1;
		if (unk_0x4B69FB3A5B09A1BA())
		{
			uLocal_42[Global_14393] = unk_0x6A8628B6E9F055B3();
			iLocal_32[Global_14393] = 1;
		}
		else if (!unk_0x94E72F17611BCD3C(Global_2263, 10))
		{
			uLocal_37[Global_14393] = unk_0x17103F66FBB44C3C();
			iLocal_32[Global_14393] = 1;
		}
		else
		{
			uLocal_37[0] = unk_0x17103F66FBB44C3C();
			uLocal_37[2] = unk_0x17103F66FBB44C3C();
			uLocal_37[1] = unk_0x17103F66FBB44C3C();
			iLocal_32[0] = 1;
			iLocal_32[2] = 1;
			iLocal_32[1] = 1;
		}
		unk_0xF76EE56D3E7DAF1B(&Global_2263, 1);
	}
}

void func_43()
{
	func_33();
	if (Global_68245)
	{
		Global_97358.f_12305[3 /*20*/].f_10 = func_45(1189, -1, 0);
	}
	if (Global_97358.f_12305[Global_14393 /*20*/].f_10 == 1)
	{
		if (!func_44(0))
		{
			unk_0xA1571D45BF60560F(0, 2000, 100);
		}
	}
}

int func_44(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x94E72F17611BCD3C(Global_2263, 14))
			{
				return 1;
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
	if (unk_0x7B47A371E2D93C2C(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14393.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

int func_45(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2454588[iParam0 /*6*/][func_46(iParam1)];
	if (unk_0x39496A55977AA312(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_46(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_47();
		if (iVar1 > -1)
		{
			Global_2454301 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2454301 = 1;
		}
	}
	return iVar0;
}

var func_47()
{
	return Global_1312737;
}

void func_48()
{
	char cVar0[64];
	int iVar16;
	char cVar17[64];
	char cVar33[64];
	char cVar49[64];
	char cVar65[64];
	
	if (Global_16753 != 0)
	{
		if (unk_0xB72DEA463116350F(Global_16753))
		{
			if (unk_0xA8985BD1EF3D9A7B(Global_16753))
			{
				StringCopy(&cVar0, unk_0xEE19D2B42122B330(Global_16753), 64);
				Global_16761[Global_16759] = Global_16753;
			}
			else
			{
				StringCopy(&cVar0, "CHAR_DEFAULT", 64);
				Global_16761[Global_16759] = 0;
			}
		}
		else
		{
			StringCopy(&cVar0, "CHAR_DEFAULT", 64);
			Global_16761[Global_16759] = 0;
		}
	}
	else
	{
		StringCopy(&cVar0, unk_0x398E4CFB573BEBB7(&(Global_97358.f_29774[Global_97358.f_12395[Global_16759 /*104*/].f_17 /*29*/].f_7)), 64);
		Global_16761[Global_16759] = 0;
	}
	if (unk_0x9E9AFDBF482248F6(&cVar0))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
	}
	else if (unk_0x6B08EC9A88700FBB(&cVar0, "NULL"))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
	}
	if (((((((Global_97358.f_12395[Global_16759 /*104*/].f_32 == 4 || Global_97358.f_12395[Global_16759 /*104*/].f_32 == 5) || Global_97358.f_12395[Global_16759 /*104*/].f_32 == 6) || Global_97358.f_12395[Global_16759 /*104*/].f_32 == 7) || Global_97358.f_12395[Global_16759 /*104*/].f_32 == 8) || Global_97358.f_12395[Global_16759 /*104*/].f_32 == 9) || Global_97358.f_12395[Global_16759 /*104*/].f_32 == 10) || Global_97358.f_12395[Global_16759 /*104*/].f_32 == 11)
	{
		iVar16 = 0;
		switch (Global_97358.f_12395[Global_16759 /*104*/].f_49)
		{
			case 1:
				unk_0x3BE5C2319988C0DB("CELL_CL01");
				break;
			
			case 2:
				unk_0x3BE5C2319988C0DB("CELL_CL02");
				break;
			
			case 3:
				unk_0x3BE5C2319988C0DB("CELL_CL03");
				break;
			
			case 4:
				unk_0x3BE5C2319988C0DB("CELL_CL04");
				break;
			
			case 5:
				unk_0x3BE5C2319988C0DB("CELL_CL05");
				break;
			
			case 6:
				unk_0x3BE5C2319988C0DB("CELL_CL06");
				break;
			
			case 7:
				unk_0x3BE5C2319988C0DB("CELL_CL07");
				break;
			
			case 8:
				unk_0x3BE5C2319988C0DB("CELL_CL08");
				break;
			
			case 9:
				unk_0x3BE5C2319988C0DB("CELL_CL09");
				break;
		}
		unk_0xDB4BC767CEF09274(&(Global_97358.f_12395[Global_16759 /*104*/]));
		while (iVar16 < Global_97358.f_12395[Global_16759 /*104*/].f_49)
		{
			switch (Global_97358.f_12395[Global_16759 /*104*/].f_32)
			{
				case 4:
					unk_0xDB4BC767CEF09274(&(Global_2446533.f_1551[iVar16 /*4*/]));
					break;
				
				case 5:
					unk_0xDB4BC767CEF09274(&(Global_1685210[iVar16 /*4*/]));
					break;
				
				case 6:
					unk_0xDB4BC767CEF09274(&(Global_1685251[iVar16 /*4*/]));
					break;
				
				case 7:
					unk_0xDB4BC767CEF09274(&(Global_1685272[iVar16 /*4*/]));
					break;
				
				case 8:
					unk_0xDB4BC767CEF09274(&(Global_1685289[iVar16 /*4*/]));
					break;
				
				case 9:
					unk_0xDB4BC767CEF09274(&(Global_1685302[iVar16 /*4*/]));
					break;
				
				case 10:
					unk_0xDB4BC767CEF09274(&(Global_1685315[iVar16 /*4*/]));
					break;
				
				case 11:
					unk_0xDB4BC767CEF09274(&(Global_1685328[iVar16 /*4*/]));
					break;
			}
			iVar16++;
		}
		StringCopy(&cVar17, unk_0x398E4CFB573BEBB7(&(Global_97358.f_29774[Global_97358.f_12395[Global_16759 /*104*/].f_17 /*29*/].f_3)), 64);
		uLocal_53 = unk_0x47BD44C357490C29(&cVar0, &cVar0, 0, 1, &cVar17, 0);
		Global_16750 = 3;
		Global_16749 = uLocal_53;
		Global_16753 = 0;
	}
	else
	{
		unk_0x3BE5C2319988C0DB(&(Global_97358.f_12395[Global_16759 /*104*/]));
		switch (Global_97358.f_12395[Global_16759 /*104*/].f_32)
		{
			case 0:
				break;
			
			case 1:
				unk_0x7FAFF3E791AF486A(&(Global_97358.f_12395[Global_16759 /*104*/].f_33));
				if (Global_97358.f_12395[Global_16759 /*104*/].f_66 == 1 && !unk_0x6B08EC9A88700FBB(&(Global_97358.f_12395[Global_16759 /*104*/].f_67), "NULL"))
				{
					unk_0x7FAFF3E791AF486A(&(Global_97358.f_12395[Global_16759 /*104*/].f_67));
				}
				if ((Global_97358.f_12395[Global_16759 /*104*/].f_66 == 2 && !unk_0x6B08EC9A88700FBB(&(Global_97358.f_12395[Global_16759 /*104*/].f_67), "NULL")) && !unk_0x6B08EC9A88700FBB(&(Global_97358.f_12395[Global_16759 /*104*/].f_83), "NULL"))
				{
					if (unk_0x75426D5397CE9E5D(&(Global_97358.f_12395[Global_16759 /*104*/].f_67)))
					{
						unk_0xDB4BC767CEF09274(&(Global_97358.f_12395[Global_16759 /*104*/].f_67));
					}
					else
					{
						unk_0x7FAFF3E791AF486A(&(Global_97358.f_12395[Global_16759 /*104*/].f_67));
					}
					if (unk_0x75426D5397CE9E5D(&(Global_97358.f_12395[Global_16759 /*104*/].f_83)))
					{
						unk_0xDB4BC767CEF09274(&(Global_97358.f_12395[Global_16759 /*104*/].f_83));
					}
					else
					{
						unk_0x7FAFF3E791AF486A(&(Global_97358.f_12395[Global_16759 /*104*/].f_83));
					}
				}
				break;
			
			case 2:
				unk_0x25585F3578FE81FC(Global_97358.f_12395[Global_16759 /*104*/].f_49);
				break;
			
			case 3:
				unk_0x7FAFF3E791AF486A(&(Global_97358.f_12395[Global_16759 /*104*/].f_33));
				unk_0x25585F3578FE81FC(Global_97358.f_12395[Global_16759 /*104*/].f_49);
				if (Global_97358.f_12395[Global_16759 /*104*/].f_66 == 1 && !unk_0x6B08EC9A88700FBB(&(Global_97358.f_12395[Global_16759 /*104*/].f_67), "NULL"))
				{
					unk_0x7FAFF3E791AF486A(&(Global_97358.f_12395[Global_16759 /*104*/].f_67));
				}
				if ((Global_97358.f_12395[Global_16759 /*104*/].f_66 == 2 && !unk_0x6B08EC9A88700FBB(&(Global_97358.f_12395[Global_16759 /*104*/].f_67), "NULL")) && !unk_0x6B08EC9A88700FBB(&(Global_97358.f_12395[Global_16759 /*104*/].f_83), "NULL"))
				{
					if (unk_0x75426D5397CE9E5D(&(Global_97358.f_12395[Global_16759 /*104*/].f_67)))
					{
						unk_0xDB4BC767CEF09274(&(Global_97358.f_12395[Global_16759 /*104*/].f_67));
					}
					else
					{
						unk_0x7FAFF3E791AF486A(&(Global_97358.f_12395[Global_16759 /*104*/].f_67));
					}
					if (unk_0x75426D5397CE9E5D(&(Global_97358.f_12395[Global_16759 /*104*/].f_83)))
					{
						unk_0xDB4BC767CEF09274(&(Global_97358.f_12395[Global_16759 /*104*/].f_83));
					}
					else
					{
						unk_0x7FAFF3E791AF486A(&(Global_97358.f_12395[Global_16759 /*104*/].f_83));
					}
				}
				break;
		}
		if (Global_97358.f_12395[Global_16759 /*104*/].f_17 == 145)
		{
			StringCopy(&cVar33, "<C>", 64);
			StringConCat(&cVar33, &Global_2951, 64);
			StringConCat(&cVar33, "</C>", 64);
			uLocal_53 = unk_0x47BD44C357490C29(&cVar0, &cVar0, 0, 1, &cVar33, 0);
			Global_16750 = 3;
			Global_16749 = uLocal_53;
		}
		else
		{
			StringCopy(&cVar49, unk_0x398E4CFB573BEBB7(&(Global_97358.f_29774[Global_97358.f_12395[Global_16759 /*104*/].f_17 /*29*/].f_3)), 64);
			if (Global_97358.f_12395[Global_16759 /*104*/].f_17 == 98)
			{
				StringCopy(&cVar65, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
				StringConCat(&cVar65, &cVar49, 64);
				uLocal_53 = unk_0x47BD44C357490C29(&cVar0, &cVar0, 0, 1, &cVar65, 0);
			}
			else
			{
				uLocal_53 = unk_0x47BD44C357490C29(&cVar0, &cVar0, 0, 1, &cVar49, 0);
			}
			Global_16750 = 3;
			Global_16749 = uLocal_53;
			Global_16753 = 0;
		}
	}
	Global_97358.f_12395[Global_16759 /*104*/].f_16 = uLocal_53;
}

void func_49()
{
	if (unk_0x94E72F17611BCD3C(Global_2263, 19))
	{
		unk_0xF76EE56D3E7DAF1B(&Global_2263, 19);
		func_33();
		Global_97358.f_12305[3 /*20*/].f_18 = 0;
		Global_97358.f_12305[3 /*20*/].f_17 = 0;
	}
}

void func_50()
{
	if (iLocal_32[Global_14393] == 1)
	{
		if (unk_0x4B69FB3A5B09A1BA())
		{
			iLocal_52 = unk_0xE1C532DCCBD8FED6(unk_0x6A8628B6E9F055B3(), uLocal_42[Global_14393]);
		}
		else
		{
			uLocal_47[Global_14393] = unk_0x17103F66FBB44C3C();
			iLocal_52 = (uLocal_47[Global_14393] - uLocal_37[Global_14393]);
		}
		if (iLocal_52 > 300000)
		{
			Global_97358.f_12305[Global_14393 /*20*/].f_18 = 0;
			Global_97358.f_12305[Global_14393 /*20*/].f_17 = 0;
			iLocal_32[Global_14393] = 0;
		}
	}
}

void func_51()
{
	func_33();
	if (Global_68245 == 0)
	{
		if (!func_39())
		{
			switch (Global_14393)
			{
				case 0:
					iLocal_31 = 21;
					break;
				
				case 1:
					iLocal_31 = 22;
					break;
				
				case 2:
					iLocal_31 = 23;
					break;
				
				default:
					iLocal_31 = 21;
					break;
			}
			if (iLocal_68 == 0)
			{
				if (Global_2939[Global_14393])
				{
					iLocal_68 = 1;
					iLocal_69 = Global_14393;
					if (unk_0x4B69FB3A5B09A1BA())
					{
						uLocal_66 = unk_0x6A8628B6E9F055B3();
					}
					else
					{
						iLocal_60 = unk_0x17103F66FBB44C3C();
					}
				}
			}
			else
			{
				if (unk_0x4B69FB3A5B09A1BA())
				{
					iLocal_67 = unk_0xE1C532DCCBD8FED6(unk_0x6A8628B6E9F055B3(), uLocal_66);
				}
				else
				{
					iLocal_61 = unk_0x17103F66FBB44C3C();
					iLocal_67 = (iLocal_61 - iLocal_60);
				}
				if (iLocal_67 > 7000)
				{
					if (func_60(0))
					{
						Global_2873[1 /*6*/] = { Global_2922[Global_14393 /*4*/] };
						Global_2949 = Global_2944[Global_14393];
						Global_2939[Global_14393] = 0;
						iLocal_68 = 0;
					}
				}
				if (iLocal_69 != Global_14393)
				{
					iLocal_68 = 0;
				}
			}
			if (Global_97358.f_12395[iLocal_31 /*104*/].f_24 != 0)
			{
				if (func_52(Global_97358.f_12395[iLocal_31 /*104*/].f_17, &(Global_97358.f_12395[iLocal_31 /*104*/]), Global_97358.f_12395[iLocal_31 /*104*/].f_24, Global_97358.f_12395[iLocal_31 /*104*/].f_25, Global_97358.f_12395[iLocal_31 /*104*/].f_26, Global_97358.f_12395[iLocal_31 /*104*/].f_29, 0, 1, Global_97358.f_12395[iLocal_31 /*104*/].f_31, Global_97358.f_12395[iLocal_31 /*104*/].f_30))
				{
					Global_97358.f_12395[iLocal_31 /*104*/].f_24 = 0;
				}
			}
		}
	}
}

int func_52(int iParam0, char* sParam1, int iParam2, int iParam3, var uParam4, var uParam5, int iParam6, bool bParam7, var uParam8, var uParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	unk_0xF76EE56D3E7DAF1B(&Global_2263, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_53(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, uParam4, uParam5, bParam7, uParam8, uParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_2970 = iParam6;
			Global_2873[3 /*6*/] = { Global_97358.f_29774[iParam0 /*29*/].f_3 };
			Global_2950 = iParam0;
			unk_0xEDB9A377CD8B7F03(&Global_2263, 1);
			unk_0xEDB9A377CD8B7F03(&Global_2263, 7);
		}
		return 1;
	}
	return 0;
}

int func_53(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x6B08EC9A88700FBB(sParam14, sParam15))
	{
	}
	func_33();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14393 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14393 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14393 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
		{
			if (unk_0x02616AAC1A02E70E(unk_0x9F92518438215DD0()))
			{
				return 0;
			}
		}
		if (Global_97358.f_12305[Global_14393 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0x7B47A371E2D93C2C(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0x7B47A371E2D93C2C(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_59() == 0)
	{
		func_57();
		return 0;
	}
	func_56(Global_16759);
	StringCopy(&(Global_97358.f_12395[Global_16759 /*104*/]), sParam1, 64);
	Global_97358.f_12395[Global_16759 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_97358.f_12395[Global_16759 /*104*/].f_24 = iParam2;
	}
	Global_97358.f_12395[Global_16759 /*104*/].f_25 = iParam7;
	Global_97358.f_12395[Global_16759 /*104*/].f_26 = uParam8;
	Global_97358.f_12395[Global_16759 /*104*/].f_29 = uParam9;
	Global_97358.f_12395[Global_16759 /*104*/].f_30 = uParam12;
	Global_97358.f_12395[Global_16759 /*104*/].f_31 = uParam11;
	Global_97358.f_12395[Global_16759 /*104*/].f_28 = 0;
	Global_97358.f_12395[Global_16759 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_97358.f_12395[Global_16759 /*104*/].f_33), sParam4, 64);
	Global_97358.f_12395[Global_16759 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_97358.f_12395[Global_16759 /*104*/].f_50), sParam5, 64);
	Global_97358.f_12395[Global_16759 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_97358.f_12395[Global_16759 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_97358.f_12395[Global_16759 /*104*/].f_83), sParam15, 64);
	if (unk_0x94E72F17611BCD3C(Global_2263, 10))
	{
		Global_97358.f_12395[Global_16759 /*104*/].f_99[0] = 1;
		Global_97358.f_12395[Global_16759 /*104*/].f_99[1] = 1;
		Global_97358.f_12395[Global_16759 /*104*/].f_99[2] = 1;
		Global_2969 = 4;
		func_55(0);
		func_55(2);
		func_55(1);
	}
	else
	{
		func_33();
		switch (iParam16)
		{
			case 3:
				Global_97358.f_12395[Global_16759 /*104*/].f_99[Global_14393] = 1;
				break;
			
			case 0:
				Global_97358.f_12395[Global_16759 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_97358.f_12395[Global_16759 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_97358.f_12395[Global_16759 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_14393)
			{
				case 0:
					func_55(0);
					Global_2969 = 0;
					break;
				
				case 1:
					func_55(1);
					Global_2969 = 1;
					break;
				
				case 2:
					func_55(2);
					Global_2969 = 2;
					break;
				
				case 3:
					func_55(3);
					Global_2969 = 3;
					break;
				
				default:
					Global_2969 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (unk_0x94E72F17611BCD3C(Global_2263, 10))
		{
			Global_97358.f_12305[0 /*20*/].f_17 = 1;
			Global_97358.f_12305[1 /*20*/].f_17 = 1;
			Global_97358.f_12305[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_97358.f_12305[Global_14393 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_97358.f_12305[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_97358.f_12305[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_97358.f_12305[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_16761[Global_16759] = 0;
	if (bParam10)
	{
		func_33();
		if (Global_14336)
		{
			StringCopy(&Global_14382, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14393)
			{
				case 0:
					StringCopy(&Global_14382, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14382, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14382, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14382, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_54())
			{
				unk_0x86F4B3D6FF8F65DE(-1, "Text_Arrive_Tone", &Global_14382, 1);
			}
		}
	}
	if (!Global_14552)
	{
		if (Global_14393.f_1 == 6)
		{
			func_29(Global_14374, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_27(1);
			func_29(Global_14374, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14373), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

bool func_54()
{
	return Global_1315900;
}

void func_55(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_97358.f_12305[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_56(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0xD9940DF735CED1D5();
	uVar1 = unk_0x00CE62DFC32D8B1E();
	uVar2 = unk_0x3E15607264E063C3();
	uVar3 = unk_0xA2C54D866C588926();
	uVar4 = unk_0x35E06151CD8A2DD1() + 1;
	uVar5 = unk_0x4C625096668FC49E();
	Global_97358.f_12395[iParam0 /*104*/].f_18 = uVar0;
	Global_97358.f_12395[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_97358.f_12395[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_97358.f_12395[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_97358.f_12395[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_97358.f_12395[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_57()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_68245)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_16759 = 34;
	Global_97358.f_12395[Global_16759 /*104*/].f_18 = -1;
	Global_97358.f_12395[Global_16759 /*104*/].f_18.f_1 = 0;
	Global_97358.f_12395[Global_16759 /*104*/].f_18.f_2 = 0;
	Global_97358.f_12395[Global_16759 /*104*/].f_18.f_3 = 0;
	Global_97358.f_12395[Global_16759 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_58(Global_97358.f_12395[iVar2 /*104*/].f_18, Global_97358.f_12395[Global_16759 /*104*/].f_18))
		{
			Global_16759 = iVar2;
		}
		iVar2++;
	}
	Global_97358.f_12395[Global_16759 /*104*/].f_24 = 1;
}

int func_58(struct<6> Param0, struct<6> Param6)
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;
	
	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0.f_0 = Param0.f_0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0.f_0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6.f_0 = Param6.f_0;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6.f_0 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_59()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_68245)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_97358.f_12395[iVar2 /*104*/].f_24 == 0)
		{
			Global_16759 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16759 = 34;
	Global_97358.f_12395[Global_16759 /*104*/].f_18 = -1;
	Global_97358.f_12395[Global_16759 /*104*/].f_18.f_1 = 0;
	Global_97358.f_12395[Global_16759 /*104*/].f_18.f_2 = 0;
	Global_97358.f_12395[Global_16759 /*104*/].f_18.f_3 = 0;
	Global_97358.f_12395[Global_16759 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_97358.f_12395[iVar2 /*104*/].f_24 == 0 || Global_97358.f_12395[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_58(Global_97358.f_12395[iVar2 /*104*/].f_18, Global_97358.f_12395[Global_16759 /*104*/].f_18))
			{
				Global_16759 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_16759 == 34)
	{
		return 0;
	}
	Global_97358.f_12395[Global_16759 /*104*/].f_99[0] = 0;
	Global_97358.f_12395[Global_16759 /*104*/].f_99[1] = 0;
	Global_97358.f_12395[Global_16759 /*104*/].f_99[2] = 0;
	return 1;
}

bool func_60(int iParam0)
{
	return func_61(iParam0, Global_34913);
}

int func_61(int iParam0, int iParam1)
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

void func_62()
{
	if (unk_0x94E72F17611BCD3C(Global_2263, 6))
	{
		if (Global_2967 > 0)
		{
			if (unk_0x94E72F17611BCD3C(Global_2264, 11))
			{
				if (iLocal_30)
				{
					func_63(uLocal_28, "CLEAR_ALL");
					if (unk_0x94E72F17611BCD3C(Global_2263, 25))
					{
						unk_0x48F299599202B77A(uLocal_28, "CREATE_ALERT");
						unk_0x4BD4D58838D3F8E5(26);
						unk_0xC4F81CF078CCB564(222f);
						unk_0xC4F81CF078CCB564(222f);
						unk_0x7E86CE5F658823DB();
					}
					if (unk_0x94E72F17611BCD3C(Global_2545539, 11))
					{
						unk_0x48F299599202B77A(uLocal_28, "CREATE_ALERT");
						unk_0x4BD4D58838D3F8E5(53);
						unk_0xC4F81CF078CCB564(222f);
						unk_0xC4F81CF078CCB564(222f);
						unk_0x7E86CE5F658823DB();
					}
					if (Global_68245 == 1)
					{
						if (unk_0x94E72F17611BCD3C(Global_2545539, 12))
						{
							unk_0x48F299599202B77A(uLocal_28, "CREATE_ALERT");
							unk_0x4BD4D58838D3F8E5(52);
							unk_0xC4F81CF078CCB564(222f);
							unk_0xC4F81CF078CCB564(222f);
							unk_0x7E86CE5F658823DB();
						}
					}
					if (unk_0x94E72F17611BCD3C(Global_2545539, 19))
					{
						unk_0x48F299599202B77A(uLocal_28, "CREATE_ALERT");
						unk_0x4BD4D58838D3F8E5(55);
						unk_0xC4F81CF078CCB564(222f);
						if ((unk_0x94E72F17611BCD3C(Global_2545539, 12) || unk_0x94E72F17611BCD3C(Global_2545539, 11)) || unk_0x94E72F17611BCD3C(Global_2263, 25))
						{
							unk_0xC4F81CF078CCB564(192f);
						}
						else
						{
							unk_0xC4F81CF078CCB564(222f);
						}
						unk_0x7E86CE5F658823DB();
					}
					unk_0xF76EE56D3E7DAF1B(&Global_2264, 11);
					iLocal_30 = 0;
				}
			}
		}
		if (Global_2967 < 1)
		{
			unk_0x76D57BAF1F432EA7(&uLocal_28);
			unk_0xF76EE56D3E7DAF1B(&Global_2263, 6);
		}
		else
		{
			func_15();
		}
	}
	else if (Global_2967 > 0)
	{
		uLocal_28 = unk_0xC97D787CE7726A2F("cellphone_alert_popup");
		while (!unk_0x5E3461E729DA646E(uLocal_28))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xF36D3CA21410B7D5(4);
		unk_0xEDB9A377CD8B7F03(&Global_2263, 6);
	}
}

void func_63(var uParam0, char* sParam1)
{
	unk_0x48F299599202B77A(uParam0, sParam1);
	unk_0x7E86CE5F658823DB();
}

void func_64()
{
	if (unk_0x94E72F17611BCD3C(Global_2264, 7))
	{
		unk_0xEDB9A377CD8B7F03(&Global_2264, 6);
		unk_0xF76EE56D3E7DAF1B(&Global_2264, 7);
		return;
	}
	if (!unk_0x94E72F17611BCD3C(Global_2264, 7))
	{
		unk_0xF76EE56D3E7DAF1B(&Global_2264, 6);
		return;
	}
}

void func_65()
{
	if (unk_0x94E72F17611BCD3C(Global_2264, 4))
	{
		unk_0xEDB9A377CD8B7F03(&Global_2264, 3);
		unk_0xF76EE56D3E7DAF1B(&Global_2264, 4);
		return;
	}
	if (!unk_0x94E72F17611BCD3C(Global_2264, 4))
	{
		unk_0xF76EE56D3E7DAF1B(&Global_2264, 3);
		return;
	}
}

void func_66()
{
	if (unk_0x94E72F17611BCD3C(Global_2264, 2))
	{
		if (!Global_14393.f_1 == 1)
		{
			Global_14393.f_1 = 0;
		}
		unk_0xF76EE56D3E7DAF1B(&Global_2264, 2);
		return;
	}
	if (!unk_0x94E72F17611BCD3C(Global_2264, 2))
	{
		if (!Global_14393.f_1 == 1)
		{
			if (Global_14393.f_1 < 4)
			{
				Global_14393.f_1 = 3;
			}
		}
		return;
	}
}

int func_67()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
	{
		if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
		{
			if (Global_14336 == 0)
			{
				if (Global_1578 != 128)
				{
					if (!unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
					{
						if (Global_15692 != 2)
						{
						}
					}
				}
			}
		}
		if (func_28(14))
		{
			return 0;
		}
		if (unk_0xFDFEC308151CBB48(unk_0x9F92518438215DD0(), 0))
		{
			return 0;
		}
		if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
		{
			if (!unk_0xD2E2E2E4739E1617())
			{
				if (unk_0x5BFFEED2EB6664D5(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0)))
				{
					return 0;
				}
			}
		}
		if (((unk_0xC8399522CF774929(unk_0x9F92518438215DD0()) || unk_0x02616AAC1A02E70E(unk_0x9F92518438215DD0())) || unk_0x29F9C49274370985(unk_0xCFC72E446B0B3AD7())) || unk_0xBB969630444F8B91(unk_0x9F92518438215DD0()))
		{
			return 0;
		}
		if (Global_96406)
		{
			return 0;
		}
	}
	if (Global_68245)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0xB14E47EA29D7193F();
	iVar1 = unk_0xB49A1BEB8771FD4C(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || unk_0xD2E2E2E4739E1617()))
	{
		iVar2 = 1;
		if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
		{
			if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
			{
				uVar3 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
				if ((((((((unk_0x8D759C5DD707B910(unk_0xB6A50C909A8FABC3(uVar3)) || unk_0x1B3D1C08625F69DF(unk_0xB6A50C909A8FABC3(uVar3))) || unk_0x0724E81841E756B7(unk_0xB6A50C909A8FABC3(uVar3))) || unk_0xB6A50C909A8FABC3(uVar3) == joaat("seashark")) || unk_0xB6A50C909A8FABC3(uVar3) == joaat("seashark2")) || unk_0xB6A50C909A8FABC3(uVar3) == joaat("rhino")) || unk_0xB6A50C909A8FABC3(uVar3) == joaat("submersible")) || unk_0xB6A50C909A8FABC3(uVar3) == joaat("submersible2")) || unk_0xB6A50C909A8FABC3(uVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_2545741 || iVar2 == 1)
	{
		if (unk_0x7B47A371E2D93C2C(joaat("apptrackify")) > 0 || Global_97358.f_12305.f_89)
		{
			if (unk_0x7B47A371E2D93C2C(joaat("michael2")) > 0)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_68(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	func_33();
	if (Global_68245 == 0)
	{
		if (func_28(14))
		{
			return 0;
		}
	}
	if (Global_14393.f_1 == 9)
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		if (func_44(0) == 1)
		{
			return 0;
		}
	}
	if (Global_14359 == 1)
	{
		return 0;
	}
	if (Global_14393.f_1 == 7)
	{
		return 0;
	}
	if (iParam1 == 1)
	{
	}
	if (!unk_0x4E8A0A2FF31F0831(Global_14390))
	{
		if (unk_0x7B47A371E2D93C2C(joaat("cellphone_flashhand")) == 0)
		{
			if (Global_14393.f_1 < 4)
			{
				func_69("cellphone_flashhand");
				if (unk_0x7B47A371E2D93C2C(joaat("cellphone_flashhand")) == 0)
				{
					Global_14390 = unk_0xE81651AD79516E48("cellphone_flashhand", 1424);
				}
				unk_0x45C517E671FFDD0E("cellphone_flashhand");
			}
		}
	}
	while (!Global_14375)
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_75();
	func_73();
	if (unk_0x7B47A371E2D93C2C(Global_2270[iParam0 /*15*/].f_9) == 0)
	{
		Global_2869 = 0;
		Global_14393.f_1 = 7;
		func_69(&(Global_2270[iParam0 /*15*/].f_5));
		if (bParam3)
		{
			if (unk_0x7B47A371E2D93C2C(Global_2270[iParam0 /*15*/].f_9) == 0)
			{
				Global_14391 = unk_0xE81651AD79516E48(&(Global_2270[iParam0 /*15*/].f_5), 3800);
			}
		}
		else if (unk_0x7B47A371E2D93C2C(Global_2270[iParam0 /*15*/].f_9) == 0)
		{
			Global_14391 = unk_0xE81651AD79516E48(&(Global_2270[iParam0 /*15*/].f_5), 2552);
		}
		unk_0x45C517E671FFDD0E(&(Global_2270[iParam0 /*15*/].f_5));
		return 1;
	}
	return 1;
}

void func_69(char* sParam0)
{
	unk_0x9AD29F8AF48B9AD1(sParam0);
	while (!unk_0x197501C41CB2403F(sParam0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_70(int iParam0)
{
	if (Global_14551)
	{
		func_71(0, 0);
	}
	if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
	{
		unk_0xEDB9A377CD8B7F03(&Global_2264, 16);
	}
	if (unk_0x71F866C9C77F9B9F())
	{
		unk_0xC318E8D9E0AA1394(0);
	}
	Global_15692 = 5;
	if (iParam0 == 1)
	{
		unk_0xEDB9A377CD8B7F03(&Global_2263, 30);
	}
	else
	{
		unk_0xF76EE56D3E7DAF1B(&Global_2263, 30);
	}
	if (!func_39())
	{
		Global_14393.f_1 = 3;
	}
}

void func_71(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_44(0))
		{
			Global_14551 = 1;
			if (bParam1)
			{
				unk_0xF490905A59C5583B(&Global_14330);
			}
			Global_14321 = { Global_14339[Global_14338 /*3*/] };
			unk_0x25CC5D98FBA7C72B(Global_14321);
		}
	}
	else if (Global_14551 == 1)
	{
		Global_14551 = 0;
		Global_14321 = { Global_14346[Global_14338 /*3*/] };
		if (bParam1)
		{
			unk_0x25CC5D98FBA7C72B(Global_14330);
		}
		else
		{
			unk_0x25CC5D98FBA7C72B(Global_14321);
		}
	}
}

int func_72(int iParam0)
{
	if ((Global_16806 || Global_16805) || Global_16807)
	{
		if (iParam0 == 130)
		{
		}
		else
		{
			return 0;
		}
	}
	if (Global_97[iParam0 /*10*/].f_8 != 138)
	{
		if (Global_14393.f_1 == 10)
		{
			if (Global_1578 == iParam0)
			{
				return 1;
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
	return 0;
}

void func_73()
{
	if (Global_68245 == 0)
	{
		Global_2270[14 /*15*/].f_4 = -99;
		Global_2270[4 /*15*/].f_4 = -99;
		if (Global_2435124)
		{
			func_74(14, "CELL_29", 2, "appMPJobListNEW", 12, 1, 1, 0, 0);
		}
		else
		{
			func_74(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		}
	}
}

void func_74(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	StringCopy(&(Global_2270[iParam0 /*15*/]), sParam1, 16);
	Global_2270[iParam0 /*15*/].f_4 = iParam2;
	StringCopy(&(Global_2270[iParam0 /*15*/].f_5), sParam3, 16);
	Global_2270[iParam0 /*15*/].f_9 = unk_0x398F092142D37E17(sParam3);
	Global_2270[iParam0 /*15*/].f_10 = iParam4;
	Global_2270[iParam0 /*15*/].f_11 = iParam5;
	Global_2270[iParam0 /*15*/].f_12 = iParam6;
	Global_2270[iParam0 /*15*/].f_13 = iParam7;
	Global_2270[iParam0 /*15*/].f_14 = iParam8;
	if (Global_2270[iParam0 /*15*/].f_12 == 0)
	{
		Global_2270[iParam0 /*15*/].f_12 = 0;
	}
	if (Global_2270[iParam0 /*15*/].f_13 == 0)
	{
		Global_2270[iParam0 /*15*/].f_13 = 0;
	}
	if (Global_2270[iParam0 /*15*/].f_14 == 0)
	{
		Global_2270[iParam0 /*15*/].f_14 = 0;
	}
}

void func_75()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 34)
	{
		Global_2270[iVar0 /*15*/].f_4 = -99;
		iVar0++;
	}
	if (Global_68245 == 0)
	{
		iVar1 = 0;
		while (iVar2 < 147)
		{
			if (Global_97358.f_29774[iVar2 /*29*/].f_19[Global_14393] == 1)
			{
				iVar1 = 1;
			}
			iVar2++;
		}
		func_74(7, "CELL_5", 0, "appEmail", 4, 1, 1, 0, 0);
		func_74(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_74(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		if ((Global_34913 == 15 && func_76(0) == 0) && Global_2268 == 0)
		{
			func_74(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_14554 = 0;
			Global_2269 = 255;
		}
		else
		{
			func_74(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_14554 = 1;
			Global_2269 = 42;
		}
		if (iVar1 == 1)
		{
			func_74(0, "CELL_0", 4, "appContacts", 27, 1, 1, 0, 0);
		}
		else
		{
			func_74(0, "CELL_0", 4, "appContacts", 5, 1, 1, 0, 0);
		}
		func_74(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_74(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_74(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		if (Global_97358.f_12305.f_89 == 1)
		{
			func_74(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		if (Global_97358.f_12305.f_88 == 1)
		{
			func_74(16, "CELL_25", 0, "appContacts", 40, 2, 1, 0, 0);
		}
		func_74(25, "CELL_14", -99, "appContacts", 17, 2, 1, 0, 0);
		func_74(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_74(11, "CELL_14", -99, "appContacts", 8, 2, 1, 0, 0);
		func_74(27, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_74(28, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_74(29, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
		func_74(30, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_74(31, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_74(32, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
	}
	else
	{
		func_74(7, "CELL_5", 0, "appMPEmail", 4, 1, 1, 0, 0);
		func_74(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_74(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_74(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_74(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		func_74(14, "CELL_29", 4, "appMPJobListNEW", 12, 1, 1, 0, 0);
		func_74(0, "CELL_0", 2, "appContacts", 5, 1, 1, 0, 0);
		func_74(21, "JIPMP_QJ", 3, "AppJIPMP", 14, 1, 1, 0, 0);
		if (unk_0x94E72F17611BCD3C(Global_2545539, 4) == 1)
		{
			func_74(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		func_74(13, "CELL_35", -99, "appMPCopBackup", 39, 1, 1, 0, 0);
		func_74(13, "CELL_20", -99, "appMPCopBackup", 16, 1, 1, 0, 0);
		func_74(15, "CELL_18", -99, "appContacts", 8, 1, 1, 0, 0);
		func_74(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_74(5, "CELL_4", -99, "appContacts", 12, 2, 1, 0, 0);
		func_74(23, "CELL_15", 0, "appContacts", 17, 2, 1, 0, 0);
		func_74(24, "CELL_15", 1, "appContacts", 17, 2, 1, 0, 0);
		func_74(25, "CELL_15", 2, "appContacts", 17, 2, 1, 0, 0);
		func_74(26, "CELL_15", 3, "appContacts", 17, 2, 1, 0, 0);
		func_74(27, "CELL_15", 4, "appContacts", 17, 2, 1, 0, 0);
		func_74(28, "CELL_15", 5, "appContacts", 17, 2, 1, 0, 0);
		func_74(29, "CELL_15", 6, "appContacts", 17, 2, 1, 0, 0);
		func_74(30, "CELL_15", 7, "appContacts", 17, 2, 1, 0, 0);
		func_74(31, "CELL_15", 8, "appContacts", 17, 2, 1, 0, 0);
		func_74(32, "CELL_15", 9, "appContacts", 17, 2, 1, 0, 0);
		func_74(33, "CELL_15", 10, "appContacts", 17, 2, 1, 0, 0);
		if (!unk_0x94E72F17611BCD3C(Global_2545539, 4) == 1)
		{
			if (Global_1573284)
			{
				func_74(23, "CELL_CIRCBREAK", 8, "AppVLSI", 54, 1, 1, 0, 0);
			}
		}
	}
}

bool func_76(bool bParam0)
{
	if (!bParam0 && unk_0x7B47A371E2D93C2C(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x94E72F17611BCD3C(Global_68493, 0);
}

void func_77()
{
}

