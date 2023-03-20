#region Local Var
	char* sLocal_0 = NULL;
	int iLocal_1 = 0;
	bool bLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	int iLocal_13 = 0;
	int iLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	int iLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	int iLocal_30 = 0;
	bool bLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	char cVar1[64];
	
	sLocal_0 = "BG_PC 1.3.11";
	iLocal_27 = -1;
	unk_0xB43679BBB30F1391(0);
	unk_0x44E747EFAA4C6724();
	if (iScriptParam_0 == iScriptParam_0)
	{
	}
	iVar0 = unk_0xF976C624234A4AA8() + 10000;
	while (unk_0xF976C624234A4AA8() < iVar0)
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (true)
	{
		func_58();
		func_56();
		func_55();
		if (unk_0xD95428C8AA1DBBF2())
		{
			func_54();
			func_52();
			func_51();
			func_50();
			func_48();
			func_47();
			func_26();
			func_25();
			func_24();
			func_23();
			func_22();
			func_19();
			func_18();
			func_13();
			func_12();
			func_4();
		}
		if (func_3())
		{
			func_2();
			if (bLocal_2)
			{
				StringCopy(&cVar1, sLocal_0, 64);
				StringConCat(&cVar1, " - [", 64);
				StringIntConCat(&cVar1, iLocal_1, 64);
				StringConCat(&cVar1, "]", 64);
				unk_0x8F290D3FB4225BC6(0f, 0.23f);
				unk_0xAF24EA89F4EF8594(255, 255, 255, 255);
				func_1(0.69f, 0.06f, "STRING", &cVar1);
			}
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0x883793591E631A3B();
}

void func_1(float fParam0, float fParam1, char* sParam2, char[4] cParam3)
{
	unk_0x55B01783B33A78F6(sParam2);
	unk_0xA61713D07D196CBB(cParam3);
	unk_0x268B3979E044050D(fParam0, fParam1, 0);
}

void func_2()
{
	if (!bLocal_2)
	{
		if (unk_0xBB02FD0C8166DE6D())
		{
			switch (iLocal_3)
			{
				case 0:
					if (unk_0x58FC9C7DF8FE009B(2, 189))
					{
						iLocal_3++;
						unk_0xC1B1E9A034A63A62(0);
					}
					break;
				
				case 1:
					if (unk_0x58FC9C7DF8FE009B(2, 190))
					{
						iLocal_3++;
						unk_0xC1B1E9A034A63A62(0);
					}
					else if (unk_0x83666F9FB8FEBD4B() > 2000)
					{
						iLocal_3 = 0;
					}
					break;
				
				case 2:
					if (unk_0x58FC9C7DF8FE009B(2, 189))
					{
						iLocal_3++;
						unk_0xC1B1E9A034A63A62(0);
					}
					else if (unk_0x83666F9FB8FEBD4B() > 2000)
					{
						iLocal_3 = 0;
					}
					break;
				
				case 3:
					if (unk_0x58FC9C7DF8FE009B(2, 190))
					{
						iLocal_3++;
						unk_0xC1B1E9A034A63A62(0);
					}
					else if (unk_0x83666F9FB8FEBD4B() > 2000)
					{
						iLocal_3 = 0;
					}
					break;
				
				case 4:
					if (unk_0x58FC9C7DF8FE009B(2, 188))
					{
						bLocal_2 = true;
						unk_0xC1B1E9A034A63A62(0);
					}
					else if (unk_0x83666F9FB8FEBD4B() > 2000)
					{
						iLocal_3 = 0;
					}
					break;
				}
		}
	}
	else if (unk_0xBB02FD0C8166DE6D())
	{
		switch (iLocal_3)
		{
			case 0:
				if (unk_0x58FC9C7DF8FE009B(2, 188))
				{
					iLocal_3++;
					unk_0xC1B1E9A034A63A62(0);
				}
				break;
			
			case 1:
				if (unk_0x58FC9C7DF8FE009B(2, 190))
				{
					iLocal_3++;
					unk_0xC1B1E9A034A63A62(0);
				}
				else if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					iLocal_3 = 0;
				}
				break;
			
			case 2:
				if (unk_0x58FC9C7DF8FE009B(2, 189))
				{
					iLocal_3++;
					unk_0xC1B1E9A034A63A62(0);
				}
				else if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					iLocal_3 = 0;
				}
				break;
			
			case 3:
				if (unk_0x58FC9C7DF8FE009B(2, 190))
				{
					iLocal_3++;
					unk_0xC1B1E9A034A63A62(0);
				}
				else if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					iLocal_3 = 0;
				}
				break;
			
			case 4:
				if (unk_0x58FC9C7DF8FE009B(2, 189))
				{
					bLocal_2 = false;
					unk_0xC1B1E9A034A63A62(0);
				}
				else if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					iLocal_3 = 0;
				}
				break;
			}
	}
}

bool func_3()
{
	return unk_0xFBD0BD8E550E0625(-1762644250);
}

void func_4()
{
	bool bVar0;
	int iVar1;
	
	unk_0x3DBE2A7AF9E71C82(&iLocal_1, 17);
	if (unk_0x61D8FEAF64881CDA(Global_2413868[unk_0xAF65E5A58BE87D95() /*253*/].f_194, 4))
	{
		if (!bLocal_31)
		{
			if (func_10())
			{
				iLocal_32 = 1;
			}
			else
			{
				iLocal_32 = 0;
			}
			bLocal_31 = true;
		}
		else if ((!iLocal_32 && func_10()) && !iLocal_33)
		{
			iLocal_33 = 1;
		}
	}
	else
	{
		iLocal_32 = 0;
		bLocal_31 = false;
	}
	if (!Global_1672070 && !unk_0x61D8FEAF64881CDA(Global_1048576.f_4, 0))
	{
		if (func_9(unk_0xAF65E5A58BE87D95(), 1, 1))
		{
			if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
			{
				if (func_10())
				{
					if (!Global_2446210.f_785)
					{
						bVar0 = true;
					}
					if (iLocal_33 && !bLocal_31)
					{
						iVar1 = unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0);
						if (!unk_0xD665B29FEC987319(iVar1, "Player_Vehicle"))
						{
							if (!unk_0xD665B29FEC987319(iVar1, "Not_Allow_As_Saved_Veh"))
							{
								if (!func_8(&uLocal_34))
								{
									func_7(&uLocal_34, 1, 0);
								}
								else if (func_6(&uLocal_34, 500, 1))
								{
									if (unk_0x02F5CF849AAF443C("Not_Allow_As_Saved_Veh", 3))
									{
										unk_0xD88478BF58FAE749(iVar1, "Not_Allow_As_Saved_Veh", 1);
										iLocal_33 = 0;
									}
									func_5(&uLocal_34);
								}
							}
							else
							{
								iLocal_33 = 0;
								func_5(&uLocal_34);
							}
						}
						else
						{
							iLocal_33 = 0;
							func_5(&uLocal_34);
						}
					}
				}
			}
		}
	}
	if (Global_2446210.f_785)
	{
		bVar0 = true;
	}
	if (Global_2446210.f_785 != bVar0)
	{
		Global_2446210.f_785 = bVar0;
	}
	if (!bVar0 && iLocal_33)
	{
		iLocal_33 = 0;
		func_5(&uLocal_34);
	}
}

void func_5(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_6(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_7(uParam0, bParam2, 0);
	if (unk_0xD95428C8AA1DBBF2() && !bParam2)
	{
		if (unk_0xEC8415598F0CAF4B(unk_0x88702B74B95C046D(unk_0xFACC0E85E40AD425(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xEC8415598F0CAF4B(unk_0x88702B74B95C046D(unk_0xF976C624234A4AA8(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_7(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0xD95428C8AA1DBBF2() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0xFACC0E85E40AD425();
			}
			else
			{
				*uParam0 = unk_0x49BD9731DF21C969();
			}
		}
		else
		{
			*uParam0 = unk_0xF976C624234A4AA8();
		}
		uParam0->f_1 = 1;
	}
}

bool func_8(var uParam0)
{
	return uParam0->f_1;
}

int func_9(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0xB832D52B86777A35(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x52A84D9C3A400EA8(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2421967.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int func_10()
{
	if (func_11(2) || func_11(1))
	{
		return 1;
	}
	return 0;
}

bool func_11(int iParam0)
{
	if (iParam0 < 32)
	{
		return unk_0x61D8FEAF64881CDA(Global_2421967.f_499.f_1, iParam0);
	}
	return unk_0x61D8FEAF64881CDA(Global_2421967.f_499.f_2, (iParam0 - 32));
}

void func_12()
{
	int iVar0;
	
	unk_0x3DBE2A7AF9E71C82(&iLocal_1, 16);
	iVar0 = 0;
	if (unk_0x61D8FEAF64881CDA(Global_1582048[unk_0xAF65E5A58BE87D95() /*324*/].f_235.f_4, 3))
	{
		if (func_9(unk_0xAF65E5A58BE87D95(), 1, 1))
		{
			if (func_10())
			{
				unk_0x500F4CA776CEBD0A(0, 23, 1);
				if (unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), 220.6866f, -980.3885f, -99.99992f, 220.6055f, -974.7847f, -95.99992f, 3.5f, 0, 1, 0) || unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), 192.9275f, -993.8544f, -100.25f, 197.0276f, -993.9958f, -96.24996f, 2.25f, 0, 1, 0))
				{
					Global_35724 = 1;
				}
				iVar0 = 1;
				if (!iLocal_30)
				{
				}
			}
		}
	}
	iLocal_30 = iVar0;
}

void func_13()
{
	if (Global_2421967.f_499.f_24 && Global_2421967.f_499.f_25 == 0)
	{
		if (Global_2421967.f_499.f_26 < 0)
		{
		}
		else if (!func_17(Global_2446210.f_273))
		{
			if (func_16(Global_2446210.f_273, 1, 0, 0))
			{
				if (unk_0x61D8FEAF64881CDA(Global_2097152[func_15() /*8053*/][Global_2421967.f_499.f_26 /*111*/].f_72, 6))
				{
				}
				else
				{
					unk_0xCD27BF29FB9012E2(&(Global_2097152[func_15() /*8053*/][Global_2421967.f_499.f_26 /*111*/].f_72), 0);
					func_14(1);
					if (unk_0xD95428C8AA1DBBF2())
					{
						Global_2446210.f_349 = unk_0xFACC0E85E40AD425();
					}
					Global_2421967.f_499.f_25 = 1;
				}
			}
		}
		else if (unk_0xFD68187442384158(Global_2446210.f_273))
		{
			if (func_16(Global_2446210.f_273, 1, 0, 0))
			{
				Global_2413868[unk_0xAF65E5A58BE87D95() /*253*/].f_117 = 0;
				func_14(1);
				if (unk_0xD95428C8AA1DBBF2())
				{
					Global_2446210.f_349 = unk_0xFACC0E85E40AD425();
				}
				Global_2421967.f_499.f_25 = 3;
			}
		}
	}
}

void func_14(int iParam0)
{
	if (iParam0 < 32)
	{
		if (!unk_0x61D8FEAF64881CDA(Global_2421967.f_499.f_1, iParam0))
		{
			unk_0x3DBE2A7AF9E71C82(&(Global_2421967.f_499.f_1), iParam0);
		}
	}
	else if (!unk_0x61D8FEAF64881CDA(Global_2421967.f_499.f_2, (iParam0 - 32)))
	{
		unk_0x3DBE2A7AF9E71C82(&(Global_2421967.f_499.f_2), (iParam0 - 32));
	}
}

int func_15()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_16(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = unk_0xF7D9833F1E3C722B(uParam0) + 1;
	if (!unk_0xE5D56342B0FF1D0D(uParam0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (!unk_0xC51FBEBD87CFD69C(iParam0, (iVar0 - 1)))
			{
				iVar2 = unk_0xE634CB9EE7094537(iParam0, (iVar0 - 1));
				if (iParam3 && iVar2 == unk_0x507DA4994C3D8EBD())
				{
				}
				else if (bParam2)
				{
					if (!unk_0x9F94F2CFDCA78C55(iVar2))
					{
						if (unk_0xBC57175ED22C698D(iVar2))
						{
							return 0;
						}
					}
					else if (iParam1 == 0)
					{
						return 0;
					}
				}
				else if (iParam1 == 0)
				{
					return 0;
				}
				else
				{
					iVar3 = unk_0xE634CB9EE7094537(iParam0, (iVar0 - 1));
					if (!unk_0x9F94F2CFDCA78C55(iVar3))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_17(int iParam0)
{
	if (unk_0xFD68187442384158(uParam0))
	{
		if (unk_0xE5D56342B0FF1D0D(iParam0))
		{
			return 1;
		}
		else if (!unk_0xCA8794CE207FC6D5(iParam0, 0))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_18()
{
	unk_0x3DBE2A7AF9E71C82(&iLocal_1, 15);
	if (!func_8(&uLocal_28))
	{
		func_7(&uLocal_28, 1, 0);
	}
	else if (func_6(&uLocal_28, 2000, 1))
	{
		if (func_9(unk_0xAF65E5A58BE87D95(), 1, 1))
		{
			if (!unk_0xDAB2315B565377E3(unk_0x507DA4994C3D8EBD()))
			{
				if (((unk_0xA54B09EB6B49FA94(unk_0xAF65E5A58BE87D95()) && !unk_0x47245DD35A0EDC7B()) && !unk_0x1965D5FB1AA96228()) && !unk_0xA4ADA92842355D33())
				{
					if (func_6(&uLocal_28, 2000, 1))
					{
						unk_0x07E0AE075425AA06(unk_0x507DA4994C3D8EBD(), 1);
						func_5(&uLocal_28);
					}
				}
				else
				{
					func_5(&uLocal_28);
				}
			}
			else
			{
				func_5(&uLocal_28);
			}
		}
		else
		{
			func_5(&uLocal_28);
		}
	}
}

void func_19()
{
	int iVar0;
	
	unk_0x3DBE2A7AF9E71C82(&iLocal_1, 14);
	iVar0 = unk_0xAF65E5A58BE87D95();
	if (iVar0 != -1)
	{
		if (Global_1582048[iVar0 /*324*/].f_75 == 4)
		{
			if (Global_1582048[iVar0 /*324*/].f_165 == 0 || Global_1582048[iVar0 /*324*/].f_165 == 35)
			{
				if (unk_0xFD68187442384158(unk_0x507DA4994C3D8EBD()) && !unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
				{
					if (unk_0xA7C37587D6D77CA4(unk_0x507DA4994C3D8EBD(), 187, 1))
					{
						unk_0x7FEDD088E489CE41(unk_0x507DA4994C3D8EBD(), 187, 0);
						unk_0x708A5EFEB2660CE4(unk_0x507DA4994C3D8EBD(), 1048576000);
						unk_0x278C9D6141B17BA8(unk_0x507DA4994C3D8EBD(), 0, 0);
						unk_0x149174181F6271F0(unk_0x507DA4994C3D8EBD(), 0);
					}
				}
			}
		}
		if (!iLocal_6)
		{
			if (Global_1582048[unk_0xAF65E5A58BE87D95() /*324*/].f_75 == 3 && Global_1312466.f_18 == 0)
			{
				func_20(unk_0x507DA4994C3D8EBD());
				iLocal_6 = 1;
			}
		}
	}
	if (Global_1315898)
	{
		if (iLocal_6)
		{
			iLocal_6 = 0;
		}
	}
}

void func_20(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	struct<2> Var6;
	
	iVar0 = 0;
	while (iVar0 < 44)
	{
		iVar1 = func_21(iVar0);
		if (iVar1 != 0)
		{
			iVar2 = unk_0x844EDB06A8B25065(iParam0, iVar1);
			if ((iVar2 != 0 && iVar2 != joaat("weapon_unarmed")) && iVar2 != joaat("object"))
			{
				if (unk_0x05B6F0BD6BBB2050(iParam0, iVar2) == -1)
				{
					bVar3 = true;
					unk_0x278C9D6141B17BA8(iParam0, 0, iVar2);
				}
			}
		}
		iVar0++;
	}
	iVar5 = unk_0x2611EF4947AA943C();
	iVar4 = 0;
	while (iVar4 < iVar5)
	{
		if (unk_0x82A3D8743B8B79C0(iVar4, &Var6))
		{
			iVar2 = Var6.f_1;
			if (unk_0x05B6F0BD6BBB2050(iParam0, iVar2) == -1)
			{
				bVar3 = true;
				unk_0x278C9D6141B17BA8(iParam0, 0, iVar2);
			}
		}
		iVar4++;
	}
	if (bVar3)
	{
		unk_0x278C9D6141B17BA8(iParam0, 0, 0);
		unk_0x149174181F6271F0(iParam0, 0);
	}
}

int func_21(int iParam0)
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

void func_22()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	unk_0x3DBE2A7AF9E71C82(&iLocal_1, 13);
	bVar2 = false;
	if (Global_2421967.f_499.f_23 == 1 && !func_17(Global_2446210.f_273))
	{
		if (iLocal_27 < 0)
		{
			if (Global_2097152[func_15() /*8053*/].f_5756.f_2 >= 0)
			{
				iLocal_27 = Global_2097152[func_15() /*8053*/].f_5756.f_2;
			}
		}
		else if (!func_10())
		{
			if (iLocal_27 != Global_2097152[func_15() /*8053*/].f_5756.f_2)
			{
				iLocal_26 = 1;
			}
		}
	}
	else
	{
		iLocal_27 = -1;
		if (iLocal_26 == 1)
		{
			iLocal_26 = 0;
		}
	}
	if (!Global_1672070 && !unk_0x61D8FEAF64881CDA(Global_1048576.f_4, 0))
	{
		if (func_9(unk_0xAF65E5A58BE87D95(), 1, 1))
		{
			if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
			{
				iVar0 = unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0);
				if (unk_0xD665B29FEC987319(iVar0, "Player_Vehicle") && unk_0x5DAE13F383297C37(unk_0xAF65E5A58BE87D95()) == unk_0xB98156B7389A5A3F(iVar0, "Player_Vehicle"))
				{
					if (unk_0xD665B29FEC987319(iVar0, "PV_Slot") && !unk_0xD665B29FEC987319(iVar0, "Not_Allow_As_Saved_Veh"))
					{
						iVar1 = unk_0xB98156B7389A5A3F(iVar0, "PV_Slot");
						if (iVar1 >= 0)
						{
							if (((iLocal_26 && iLocal_27 >= 0) && iVar1 != iLocal_27) && !func_10())
							{
								Global_2097152[func_15() /*8053*/].f_5756.f_2 = iLocal_27;
								unk_0xD88478BF58FAE749(iVar0, "PV_Slot", iLocal_27);
								unk_0x3DBE2A7AF9E71C82(&(Global_2097152[func_15() /*8053*/][Global_2097152[func_15() /*8053*/].f_5756.f_2 /*111*/].f_72), 0);
							}
							else if ((iVar1 != Global_2097152[func_15() /*8053*/].f_5756.f_2 && func_10()) && iVar0 != Global_2446210.f_273)
							{
								bVar2 = true;
								if (!func_8(&uLocal_24))
								{
									func_7(&uLocal_24, 1, 0);
								}
								else if (func_6(&uLocal_24, 500, 1))
								{
									if (unk_0x02F5CF849AAF443C("Not_Allow_As_Saved_Veh", 3))
									{
										unk_0xD88478BF58FAE749(iVar0, "Not_Allow_As_Saved_Veh", 1);
									}
									func_5(&uLocal_24);
								}
							}
							else if (iVar1 != Global_2097152[func_15() /*8053*/].f_5756.f_2)
							{
								bVar2 = true;
								if (!func_8(&uLocal_24))
								{
									func_7(&uLocal_24, 1, 0);
								}
								else if (func_6(&uLocal_24, 500, 1))
								{
									Global_2097152[func_15() /*8053*/].f_5756.f_2 = iVar1;
									func_5(&uLocal_24);
									if (!unk_0x61D8FEAF64881CDA(Global_2097152[func_15() /*8053*/][Global_2097152[func_15() /*8053*/].f_5756.f_2 /*111*/].f_72, 0))
									{
										unk_0x3DBE2A7AF9E71C82(&(Global_2097152[func_15() /*8053*/][Global_2097152[func_15() /*8053*/].f_5756.f_2 /*111*/].f_72), 0);
										func_5(&uLocal_24);
									}
								}
							}
							else if (Global_2097152[func_15() /*8053*/].f_5756.f_2 >= 0)
							{
								if (!unk_0x61D8FEAF64881CDA(Global_2097152[func_15() /*8053*/][Global_2097152[func_15() /*8053*/].f_5756.f_2 /*111*/].f_72, 0))
								{
									bVar2 = true;
									if (!func_8(&uLocal_24))
									{
										func_7(&uLocal_24, 1, 0);
									}
									else if (func_6(&uLocal_24, 500, 1))
									{
										unk_0x3DBE2A7AF9E71C82(&(Global_2097152[func_15() /*8053*/][Global_2097152[func_15() /*8053*/].f_5756.f_2 /*111*/].f_72), 0);
										func_5(&uLocal_24);
									}
								}
							}
						}
					}
				}
			}
		}
	}
	if (!bVar2 && func_8(&uLocal_24))
	{
		func_5(&uLocal_24);
	}
}

void func_23()
{
	unk_0x3DBE2A7AF9E71C82(&iLocal_1, 12);
	if (Global_1572908 != Global_2428692.f_5462)
	{
		Global_1572908 = Global_2428692.f_5462;
	}
}

void func_24()
{
	var uVar0;
	
	unk_0x3DBE2A7AF9E71C82(&iLocal_1, 11);
	if (!func_8(&uLocal_17))
	{
		func_7(&uLocal_17, 1, 0);
	}
	else if (func_6(&uLocal_17, 3000, 1))
	{
		if (func_9(unk_0xAF65E5A58BE87D95(), 1, 1))
		{
			if (!unk_0x47245DD35A0EDC7B())
			{
				if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
				{
					uVar0 = unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0);
					if (!unk_0xDAB2315B565377E3(uVar0))
					{
						if (unk_0xA54B09EB6B49FA94(unk_0xAF65E5A58BE87D95()))
						{
							if (func_6(&uLocal_17, 7000, 1))
							{
								if (unk_0xFD54DBFF23B29E98(iVar0))
								{
									if (unk_0xFE0D96A75DA37EB0(iVar0))
									{
										unk_0x07E0AE075425AA06(iVar0, 1);
										func_5(&uLocal_17);
									}
								}
								else
								{
									unk_0x07E0AE075425AA06(iVar0, 1);
									func_5(&uLocal_17);
								}
							}
						}
						else
						{
							func_5(&uLocal_17);
						}
					}
					else
					{
						func_5(&uLocal_17);
					}
				}
				else
				{
					func_5(&uLocal_17);
				}
			}
			else
			{
				func_5(&uLocal_17);
			}
		}
		else
		{
			func_5(&uLocal_17);
		}
	}
}

void func_25()
{
	var uVar0;
	
	unk_0x3DBE2A7AF9E71C82(&iLocal_1, 10);
	if (unk_0x0971F0C5992C6780())
	{
		func_5(&uLocal_15);
		return;
	}
	if (!func_8(&uLocal_15))
	{
		if (Global_1582048[unk_0xAF65E5A58BE87D95() /*324*/] == 5)
		{
			func_7(&uLocal_15, 1, 0);
		}
	}
	else if (func_6(&uLocal_15, 100, 1))
	{
		if (func_9(unk_0xAF65E5A58BE87D95(), 1, 1))
		{
			if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
			{
				uVar0 = unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0);
				if (((unk_0xA54B09EB6B49FA94(unk_0xAF65E5A58BE87D95()) && !unk_0x47245DD35A0EDC7B()) && !unk_0x1965D5FB1AA96228()) && !unk_0xA4ADA92842355D33())
				{
					if (unk_0xFD54DBFF23B29E98(uVar0))
					{
						if (unk_0xFE0D96A75DA37EB0(iVar0))
						{
							unk_0x843E25883D2C32A3(iVar0, 1);
							func_5(&uLocal_15);
						}
					}
					else
					{
						unk_0x843E25883D2C32A3(iVar0, 1);
						func_5(&uLocal_15);
					}
				}
				else
				{
					func_5(&uLocal_15);
				}
			}
			else
			{
				func_5(&uLocal_15);
			}
		}
		else
		{
			func_5(&uLocal_15);
		}
	}
}

void func_26()
{
	int iVar0;
	struct<4> Var1;
	float fVar11;
	
	unk_0x3DBE2A7AF9E71C82(&iLocal_1, 9);
	iVar0 = 0;
	while (iVar0 < unk_0xB301423C53556EA6(1))
	{
		if (unk_0xAAB64DCC229F922F(1, iVar0) == 179)
		{
			if (unk_0x6EDD33D6B8546C95(1, iVar0, &Var1, 10))
			{
				if (unk_0xFD68187442384158(Var1.f_1))
				{
					if (unk_0x91F594068DF4424F(Var1.f_1))
					{
						if (unk_0x274BAC44978F9161(Var1.f_1) == unk_0x507DA4994C3D8EBD())
						{
							if (!func_44(unk_0xAF65E5A58BE87D95(), 1))
							{
								if (unk_0xFD68187442384158(Var1.f_0))
								{
									if (unk_0xE5D56342B0FF1D0D(Var1.f_0) && Var1.f_3 == 1)
									{
										if (unk_0x91F594068DF4424F(Var1.f_0) && !unk_0x274BAC44978F9161(Var1.f_0) == unk_0x507DA4994C3D8EBD())
										{
											if (unk_0xBC57175ED22C698D(unk_0x274BAC44978F9161(Var1.f_0)))
											{
												if (!(func_43(unk_0xB53DE20B11FF02FE(unk_0x274BAC44978F9161(Var1.f_0))) && func_33()))
												{
													if (!(func_43(unk_0xAF65E5A58BE87D95()) && func_32(unk_0xB53DE20B11FF02FE(unk_0x274BAC44978F9161(Var1.f_0)))))
													{
														fVar11 = Global_2413868[unk_0xB53DE20B11FF02FE(unk_0x274BAC44978F9161(Var1.f_0)) /*253*/].f_250;
														if (fVar11 > 80f)
														{
															func_27(82, 1, -1);
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
				}
			}
		}
		iVar0++;
	}
}

void func_27(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_29(iParam0, func_30(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_28(iParam0, iVar0, iParam2);
}

void func_28(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = Global_2474212[iParam0 /*6*/][func_30(iParam2)];
	unk_0x96B68C67633472DC(uVar0, iParam1, 1);
}

int func_29(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2474212[iParam0 /*6*/][func_30(iParam1)];
	if (unk_0x55FFE396AA3CA77A(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_30(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_31();
		if (iVar1 > -1)
		{
			Global_2453903 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2453903 = 1;
		}
	}
	return iVar0;
}

var func_31()
{
	return Global_1312736;
}

int func_32(int iParam0)
{
	if (Global_1582048[iParam0 /*324*/].f_164)
	{
		return 1;
	}
	return 0;
}

int func_33()
{
	if (func_34(29, 0))
	{
		return 1;
	}
	return 0;
}

bool func_34(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (Global_262145.f_6000 == 1)
	{
		if (iParam0 == 67)
		{
			return 1;
		}
		if (iParam0 == 74)
		{
			return 1;
		}
		if (func_38(unk_0xAF65E5A58BE87D95(), 85))
		{
			if (((((iParam0 == 64 || iParam0 == 77) || iParam0 == 61) || iParam0 == 81) || iParam0 == 63) || iParam0 == 62)
			{
				return 1;
			}
		}
		if ((((((((((iParam0 == 66 || iParam0 == 116) || iParam0 == 103) || iParam0 == 104) || iParam0 == 105) || iParam0 == 119) || iParam0 == 88) || iParam0 == 75) || iParam0 == 95) || iParam0 == 65) || iParam0 == 98)
		{
			return 1;
		}
	}
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 == 31)
	{
		if (Global_262145.f_4806 == 1)
		{
			return 1;
		}
	}
	if (func_37() || func_36())
	{
		return 1;
	}
	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar0 = (iVar0 % 32);
	if (bParam1)
	{
		if (iParam0 == 3)
		{
			if (func_35())
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return unk_0x61D8FEAF64881CDA(Global_1573719[iVar1], iVar0);
}

int func_35()
{
	var uVar0;
	
	if (Global_1312447)
	{
		return 1;
	}
	if (unk_0x61D8FEAF64881CDA(Global_2446210.f_1615, 23))
	{
		return 1;
	}
	if (func_37())
	{
		return 1;
	}
	if (func_36())
	{
		return 1;
	}
	uVar0 = Global_1333824[func_30(-1)];
	if (unk_0x61D8FEAF64881CDA(uVar0, 7))
	{
		unk_0x3DBE2A7AF9E71C82(&(Global_2446210.f_1615), 23);
		return 1;
	}
	return 0;
}

bool func_36()
{
	return Global_1315886;
}

bool func_37()
{
	return Global_1315888;
}

bool func_38(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	if (!func_41())
	{
		return 0;
	}
	if (func_40())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	uVar0 = func_39(iParam1);
	iVar1 = uVar0;
	return unk_0x61D8FEAF64881CDA(Global_1582048[iParam0 /*324*/].f_300, iVar1);
}

int func_39(int iParam0)
{
	switch (iParam0)
	{
		case 86:
			return 0;
		
		case 19:
			return 1;
		
		case 12:
			return 2;
		
		case 31:
			return 3;
		
		case 20:
			return 4;
		
		case 18:
			return 5;
		
		case 2:
			return 6;
		
		case 76:
			return 7;
		
		default:
	}
	return 1;
}

bool func_40()
{
	return unk_0x61D8FEAF64881CDA(Global_1582048[unk_0xAF65E5A58BE87D95() /*324*/].f_120, 3);
}

int func_41()
{
	if (Global_1312447)
	{
		return 1;
	}
	if (func_37())
	{
		return 1;
	}
	if (func_36())
	{
		return 1;
	}
	return func_42(120, -1);
}

int func_42(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2472534[iParam0 /*6*/][func_30(iParam1)];
	if (unk_0xED5C4CADD81A8853(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_43(int iParam0)
{
	if (Global_1572932.f_4[iParam0 /*3*/] == 1)
	{
		return 1;
	}
	return 0;
}

int func_44(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_45(iParam0))
		{
			return 1;
		}
	}
	if (Global_1582048[iParam0 /*324*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_45(int iParam0)
{
	return func_46(iParam0);
}

bool func_46(int iParam0)
{
	return unk_0x61D8FEAF64881CDA(Global_1582048[iParam0 /*324*/].f_13.f_1, 0);
}

void func_47()
{
	var uVar0[32];
	int iVar33;
	int iVar34;
	var uVar35;
	
	unk_0x3DBE2A7AF9E71C82(&iLocal_1, 8);
	if (!iLocal_13)
	{
		iLocal_14 = unk_0xFACC0E85E40AD425();
		iLocal_13 = 1;
	}
	if (unk_0xEC8415598F0CAF4B(unk_0x88702B74B95C046D(iLocal_14, unk_0xFACC0E85E40AD425())) < 1000)
	{
		return;
	}
	else
	{
		iLocal_14 = unk_0xFACC0E85E40AD425();
	}
	iVar34 = unk_0x44110552833E1A96(unk_0x507DA4994C3D8EBD(), &uVar0);
	if (iVar34 > 32)
	{
		iVar34 = 32;
	}
	if (Global_1581881.f_23 == -1 && !Global_1680938)
	{
		iVar33 = 0;
		while (iVar33 < iVar34)
		{
			if (unk_0xFD68187442384158(uVar0[iVar33]) && unk_0xCA8794CE207FC6D5(uVar0[iVar33], 0))
			{
				if (Global_1581881.f_23 == -1 && unk_0xA858564DC37EED5E(unk_0x6438FDFEA7CD1702(uVar0[iVar33], &uVar35), "AM_MP_PROPERTY_EXT"))
				{
					if (unk_0x53170344050F2301(unk_0x507DA4994C3D8EBD(), uVar0[iVar33], 1))
					{
						unk_0xCEBD1B99CF343672(unk_0x507DA4994C3D8EBD());
					}
					if (func_16(uVar0[iVar33], 1, 1, 0))
					{
						if (unk_0xFE0D96A75DA37EB0(uVar0[iVar33]))
						{
							unk_0xBAE5DF507EEC53C8(uVar0[iVar33], 0, 1);
							unk_0x10EA498723DC5A09(&(uVar0[iVar33]));
						}
					}
				}
			}
			iVar33++;
		}
	}
}

void func_48()
{
	var uVar0;
	
	unk_0x3DBE2A7AF9E71C82(&iLocal_1, 7);
	if (func_9(unk_0xAF65E5A58BE87D95(), 1, 1))
	{
		if (Global_2446210.f_733 && !func_49())
		{
			if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0) && !Global_2446210.f_734)
			{
				if (!Global_1681085)
				{
					if (unk_0xEC043AB2FEE0E94F(unk_0x507DA4994C3D8EBD(), -828834893) == 1 || unk_0xEC043AB2FEE0E94F(unk_0x507DA4994C3D8EBD(), -828834893) == 0)
					{
						if (!iLocal_11)
						{
							iLocal_11 = 1;
							uLocal_12 = unk_0xFACC0E85E40AD425();
						}
						else if (unk_0xEC8415598F0CAF4B(unk_0x88702B74B95C046D(unk_0xFACC0E85E40AD425(), uLocal_12)) > 7000)
						{
							uVar0 = unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0);
							if (unk_0xFE0D96A75DA37EB0(uVar0) && unk_0xD665B29FEC987319(iVar0, "Player_Vehicle"))
							{
								unk_0xBAE5DF507EEC53C8(iVar0, 0, 1);
								unk_0x10EA498723DC5A09(&iVar0);
							}
						}
						return;
					}
				}
			}
		}
	}
	iLocal_11 = 0;
}

int func_49()
{
	if (((((((((unk_0x61D8FEAF64881CDA(Global_89836.f_1267[39], 6) || unk_0x61D8FEAF64881CDA(Global_89836.f_1267[40], 6)) || unk_0x61D8FEAF64881CDA(Global_89836.f_1267[41], 6)) || unk_0x61D8FEAF64881CDA(Global_89836.f_1267[42], 6)) || unk_0x61D8FEAF64881CDA(Global_89836.f_1267[43], 6)) || unk_0x61D8FEAF64881CDA(Global_89836.f_1267[39], 25)) || unk_0x61D8FEAF64881CDA(Global_89836.f_1267[40], 25)) || unk_0x61D8FEAF64881CDA(Global_89836.f_1267[41], 25)) || unk_0x61D8FEAF64881CDA(Global_89836.f_1267[42], 25)) || unk_0x61D8FEAF64881CDA(Global_89836.f_1267[43], 25))
	{
		return 1;
	}
	return 0;
}

void func_50()
{
	unk_0x3DBE2A7AF9E71C82(&iLocal_1, 6);
	if (unk_0x09CAFDEAB6242673() || (Global_1672071 && unk_0x61D8FEAF64881CDA(Global_1582048[unk_0xAF65E5A58BE87D95() /*324*/].f_235.f_4, 14)))
	{
		unk_0x500F4CA776CEBD0A(0, 23, 1);
	}
	if (Global_2421967.f_499.f_7)
	{
		if (!unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
		{
			if (!func_8(&uLocal_9))
			{
				func_7(&uLocal_9, 1, 0);
			}
			else if (func_6(&uLocal_9, 2000, 1))
			{
				func_5(&uLocal_9);
				Global_2421967.f_499.f_7 = 0;
			}
		}
		else
		{
			func_5(&uLocal_9);
		}
	}
	else
	{
		func_5(&uLocal_9);
	}
}

void func_51()
{
	unk_0x3DBE2A7AF9E71C82(&iLocal_1, 5);
	if (unk_0x61D8FEAF64881CDA(Global_1581881.f_22, 8))
	{
		if (!unk_0x61D8FEAF64881CDA(Global_1582048[unk_0xAF65E5A58BE87D95() /*324*/].f_235.f_4, 11))
		{
			if (unk_0x25531002BCF0D968(joaat("am_mp_property_int")) <= 0 && !Global_1672070)
			{
				unk_0xCD27BF29FB9012E2(&(Global_1581881.f_22), 8);
			}
		}
	}
	if (!iLocal_7)
	{
		if (unk_0x61D8FEAF64881CDA(Global_1581881.f_22, 8) && unk_0x61D8FEAF64881CDA(Global_1582048[unk_0xAF65E5A58BE87D95() /*324*/].f_235.f_4, 11))
		{
			iLocal_7 = 1;
			iLocal_8 = 0;
		}
	}
	else
	{
		iLocal_8++;
		if (iLocal_8 < 3)
		{
			if ((!unk_0x61D8FEAF64881CDA(Global_1581881.f_22, 8) && Global_1582048[unk_0xAF65E5A58BE87D95() /*324*/].f_235.f_55 < 0) || !unk_0x61D8FEAF64881CDA(Global_1582048[unk_0xAF65E5A58BE87D95() /*324*/].f_235.f_4, 11))
			{
				if ((unk_0x25531002BCF0D968(joaat("am_mp_property_int")) >= 0 || Global_1672070) || unk_0x61D8FEAF64881CDA(Global_1048576.f_4, 0))
				{
					Global_1581881.f_26 = 1;
					iLocal_7 = 0;
					unk_0xCD27BF29FB9012E2(&(Global_1581881.f_22), 8);
				}
				else
				{
					unk_0xCD27BF29FB9012E2(&(Global_1581881.f_22), 8);
					iLocal_7 = 0;
				}
			}
		}
		else
		{
			iLocal_7 = 0;
		}
	}
}

void func_52()
{
	unk_0x3DBE2A7AF9E71C82(&iLocal_1, 4);
	if (!func_8(&uLocal_20))
	{
		if (((((Global_1581881 >= 0 || Global_1581881.f_1 >= 0) || Global_1581881.f_2 >= 0) || Global_1581881.f_140) || unk_0x61D8FEAF64881CDA(Global_1581881.f_22, 13)) || unk_0x61D8FEAF64881CDA(Global_1581881.f_22, 10))
		{
			iLocal_19 = 0;
			func_53(&uLocal_20, 1, 0);
		}
	}
	else if (!iLocal_19)
	{
		if (((((Global_1581881 < 0 && Global_1581881.f_1 < 0) && Global_1581881.f_2 < 0) && !Global_1581881.f_140) && !unk_0x61D8FEAF64881CDA(Global_1581881.f_22, 13)) && !unk_0x61D8FEAF64881CDA(Global_1581881.f_22, 10))
		{
			func_5(&uLocal_20);
			return;
		}
		if (unk_0x61D8FEAF64881CDA(Global_1581881.f_22, 8))
		{
			iLocal_19 = 1;
			return;
		}
		if (unk_0xDAF2549B28FDF97C())
		{
			func_53(&uLocal_20, 1, 0);
		}
		if (func_6(&uLocal_20, 2000, 1))
		{
			iLocal_19 = 1;
		}
	}
	else if (!unk_0x61D8FEAF64881CDA(Global_1581881.f_22, 8))
	{
		iLocal_19 = 0;
		if ((unk_0x25531002BCF0D968(joaat("am_mp_property_int")) <= 0 && !Global_1672070) && !unk_0x61D8FEAF64881CDA(Global_1048576.f_4, 0))
		{
			if (((Global_1581881 >= 0 || Global_1581881.f_1 >= 0) || Global_1581881.f_2 >= 0) || Global_1581881.f_140)
			{
				Global_1581881 = -1;
				Global_1581881.f_1 = -1;
				Global_1581881.f_2 = -1;
				Global_1581881.f_140 = 0;
				unk_0xCD27BF29FB9012E2(&(Global_1581881.f_22), 13);
				unk_0xCD27BF29FB9012E2(&(Global_1581881.f_22), 10);
				func_5(&uLocal_20);
			}
		}
	}
}

void func_53(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0xD95428C8AA1DBBF2() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0xFACC0E85E40AD425();
		}
		else
		{
			*uParam0 = unk_0x49BD9731DF21C969();
		}
	}
	else
	{
		*uParam0 = unk_0xF976C624234A4AA8();
	}
	uParam0->f_1 = 1;
}

void func_54()
{
	unk_0x3DBE2A7AF9E71C82(&iLocal_1, 3);
	if (iLocal_23)
	{
		if (unk_0xC006FE33A775E8DF(unk_0xAF65E5A58BE87D95(), 24042015, unk_0x116C811902B474B3()))
		{
			unk_0x5626D9D6810730D5();
			iLocal_23 = 0;
		}
	}
	if ((Global_270025 == 0 && Global_262145.f_2301 == 0) && Global_262144 == 0)
	{
		if (iLocal_22 == 0)
		{
			iLocal_22 = 1;
			Global_262145 = 1f;
			Global_262145.f_139 = 1f;
			Global_262145.f_4797 = 5f;
			Global_262145.f_2384 = 1f;
			Global_262145.f_2383 = 1f;
			Global_262145.f_4393 = 500;
			Global_262145.f_141 = 50000;
			Global_262145.f_2391 = 10000f;
			Global_262145.f_143 = 2500;
			Global_262145.f_2387 = 2000f;
			Global_262145.f_2392 = 1000f;
			Global_262145.f_2397 = 1f;
			Global_262145.f_2398 = 1f;
			Global_262145.f_2399 = 1f;
			Global_262145.f_2309 = 2000;
			Global_262145.f_2310 = 4000;
			Global_262145.f_2311 = 6000;
			Global_262145.f_2312 = 8000;
			Global_262145.f_2313 = 10000;
			Global_262145.f_81 = 10000f;
			Global_262145.f_82 = 100f;
			Global_262145.f_83 = 74f;
			Global_262145.f_84 = 2.95f;
			Global_262145.f_85 = 20f;
			Global_262145.f_1 = 1f;
			Global_262145.f_4200 = 1f;
			Global_262145.f_86 = 1f;
			Global_262145.f_68 = 2000;
			Global_262145.f_6 = 0.66f;
			Global_262145.f_100 = 100;
			Global_262145.f_101 = 5;
			Global_262145.f_4810 = 0;
			Global_262145.f_4819 = 0;
			Global_262145.f_4817 = 10000;
			Global_262145.f_4907 = 2000;
			Global_262145.f_4906 = 20000;
			Global_262145.f_4824 = 0.6f;
			Global_262145.f_4825 = 0.5f;
			Global_262145.f_4826 = 10000000;
			Global_262145.f_4908 = 20000;
			Global_262145.f_4921 = 0;
			Global_262145.f_4940 = 1000000;
			Global_262145.f_4939 = 1000000;
			Global_262145.f_4938 = 1000000;
			Global_262145.f_4931 = 1;
			Global_262145.f_4956 = 5000;
			Global_262145.f_4964 = 20;
			Global_262145.f_4969 = 500;
			Global_262145.f_6097 = 0;
			Global_262145.f_6106 = 1;
			Global_262145.f_6105 = 1;
			Global_262145.f_6093 = 20;
			Global_262145.f_6094 = 200;
			Global_262145.f_6109 = 0;
			Global_262145.f_6110 = 0;
			Global_262145.f_6111 = 0;
			Global_262145.f_6378 = 3000;
			Global_262145.f_6379 = 200;
			Global_262145.f_6383 = 1000;
			Global_262145.f_6384 = 50;
			Global_262145.f_6385 = 500;
			Global_262145.f_6386 = 2000;
			Global_262145.f_7139 = 1;
			Global_262145.f_7140 = 1;
			Global_262145.f_7141 = 1;
			Global_262145.f_7142 = 1;
			Global_262145.f_7143 = 1;
			Global_262145.f_7144 = 1;
			Global_262145.f_7138 = 1;
			Global_262145.f_6933 = 0;
			Global_262145.f_4919 = 1f;
			Global_262145.f_7145 = 9;
			Global_262145.f_70 = 120000;
			Global_262145.f_71 = 300000;
			Global_262145.f_72 = 600000;
			Global_262145.f_73 = 900000;
			Global_262145.f_6134 = 0;
			Global_262145.f_6135 = 0;
			Global_262145.f_6136 = 0;
			Global_262145.f_6137 = 0;
			Global_262145.f_6138 = 0;
			Global_262145.f_6139 = 0;
			Global_262145.f_6140 = 0;
			Global_262145.f_104 = 60000f;
		}
		if (Global_262145 != 1f)
		{
			Global_262145 = 1f;
			iLocal_23 = 1;
		}
		if (Global_262145.f_139 != 1f)
		{
			Global_262145.f_139 = 1f;
			iLocal_23 = 1;
		}
		if (Global_262145.f_4797 != 5f)
		{
			Global_262145.f_4797 = 5f;
			iLocal_23 = 1;
		}
		if (Global_262145.f_2384 != 1f)
		{
			Global_262145.f_2384 = 1f;
			iLocal_23 = 1;
		}
		if (Global_262145.f_2383 != 1f)
		{
			Global_262145.f_2383 = 1f;
			iLocal_23 = 1;
		}
		if (Global_262145.f_4393 != 500)
		{
			Global_262145.f_4393 = 500;
			iLocal_23 = 1;
		}
		if (Global_262145.f_141 != 50000)
		{
			Global_262145.f_141 = 50000;
			iLocal_23 = 1;
		}
		if (Global_262145.f_2391 != 10000f)
		{
			Global_262145.f_2391 = 10000f;
			iLocal_23 = 1;
		}
		if (Global_262145.f_143 != 2500)
		{
			Global_262145.f_143 = 2500;
			iLocal_23 = 1;
		}
		if (Global_262145.f_2387 != 2000f)
		{
			Global_262145.f_2387 = 2000f;
			iLocal_23 = 1;
		}
		if (Global_262145.f_2392 != 1000f)
		{
			Global_262145.f_2392 = 1000f;
			iLocal_23 = 1;
		}
		if (Global_262145.f_2397 != 1f)
		{
			Global_262145.f_2397 = 1f;
			iLocal_23 = 1;
		}
		if (Global_262145.f_2398 != 1f)
		{
			Global_262145.f_2398 = 1f;
			iLocal_23 = 1;
		}
		if (Global_262145.f_2399 != 1f)
		{
			Global_262145.f_2399 = 1f;
			iLocal_23 = 1;
		}
		if (Global_262145.f_2309 != 2000)
		{
			Global_262145.f_2309 = 2000;
			iLocal_23 = 1;
		}
		if (Global_262145.f_2310 != 4000)
		{
			Global_262145.f_2310 = 4000;
			iLocal_23 = 1;
		}
		if (Global_262145.f_2311 != 6000)
		{
			Global_262145.f_2311 = 6000;
			iLocal_23 = 1;
		}
		if (Global_262145.f_2312 != 8000)
		{
			Global_262145.f_2312 = 8000;
			iLocal_23 = 1;
		}
		if (Global_262145.f_2313 != 10000)
		{
			Global_262145.f_2313 = 10000;
			iLocal_23 = 1;
		}
		if (Global_262145.f_81 != 10000f)
		{
			Global_262145.f_81 = 10000f;
			iLocal_23 = 1;
		}
		if (Global_262145.f_82 != 100f)
		{
			Global_262145.f_82 = 100f;
			iLocal_23 = 1;
		}
		if (Global_262145.f_83 != 74f)
		{
			Global_262145.f_83 = 74f;
			iLocal_23 = 1;
		}
		if (Global_262145.f_84 != 2.95f)
		{
			Global_262145.f_84 = 2.95f;
			iLocal_23 = 1;
		}
		if (Global_262145.f_85 != 20f)
		{
			Global_262145.f_85 = 20f;
			iLocal_23 = 1;
		}
		if (Global_262145.f_1 != 1f)
		{
			Global_262145.f_1 = 1f;
			iLocal_23 = 1;
		}
		if (Global_262145.f_4200 != 1f)
		{
			Global_262145.f_4200 = 1f;
			iLocal_23 = 1;
		}
		if (Global_262145.f_86 != 1f)
		{
			Global_262145.f_86 = 1f;
			iLocal_23 = 1;
		}
		if (Global_262145.f_68 != 2000)
		{
			Global_262145.f_68 = 2000;
			iLocal_23 = 1;
		}
		if (Global_262145.f_6 != 0.66f)
		{
			Global_262145.f_6 = 0.66f;
			iLocal_23 = 1;
		}
		if (Global_262145.f_100 != 100)
		{
			Global_262145.f_100 = 100;
			iLocal_23 = 1;
		}
		if (Global_262145.f_101 != 5)
		{
			Global_262145.f_101 = 5;
			iLocal_23 = 1;
		}
		if (Global_262145.f_4810 != 0)
		{
			Global_262145.f_4810 = 0;
			iLocal_23 = 1;
		}
		if (Global_262145.f_4819 != 0)
		{
			Global_262145.f_4819 = 0;
			iLocal_23 = 1;
		}
		if (Global_262145.f_4817 != 10000)
		{
			Global_262145.f_4817 = 10000;
			iLocal_23 = 1;
		}
		if (Global_262145.f_4907 != 2000)
		{
			Global_262145.f_4907 = 2000;
			iLocal_23 = 1;
		}
		if (Global_262145.f_4906 != 20000)
		{
			Global_262145.f_4906 = 20000;
			iLocal_23 = 1;
		}
		if (Global_262145.f_4824 != 0.6f)
		{
			Global_262145.f_4824 = 0.6f;
			iLocal_23 = 1;
		}
		if (Global_262145.f_4825 != 0.5f)
		{
			Global_262145.f_4825 = 0.5f;
			iLocal_23 = 1;
		}
		if (Global_262145.f_4826 != 10000000)
		{
			Global_262145.f_4826 = 10000000;
			iLocal_23 = 1;
		}
		if (Global_262145.f_4908 != 20000)
		{
			Global_262145.f_4908 = 20000;
			iLocal_23 = 1;
		}
		if (Global_262145.f_4921 != 0)
		{
			Global_262145.f_4921 = 0;
			iLocal_23 = 1;
		}
		if (Global_262145.f_4940 != 1000000)
		{
			Global_262145.f_4940 = 1000000;
			iLocal_23 = 1;
		}
		if (Global_262145.f_4939 != 1000000)
		{
			Global_262145.f_4939 = 1000000;
			iLocal_23 = 1;
		}
		if (Global_262145.f_4938 != 1000000)
		{
			Global_262145.f_4938 = 1000000;
			iLocal_23 = 1;
		}
		if (Global_262145.f_4931 != 1)
		{
			Global_262145.f_4931 = 1;
			iLocal_23 = 1;
		}
		if (Global_262145.f_4956 != 5000)
		{
			Global_262145.f_4956 = 5000;
			iLocal_23 = 1;
		}
		if (Global_262145.f_4964 != 20)
		{
			Global_262145.f_4964 = 20;
			iLocal_23 = 1;
		}
		if (Global_262145.f_4969 != 500)
		{
			Global_262145.f_4969 = 500;
			iLocal_23 = 1;
		}
		if (Global_262145.f_6097 != 0)
		{
			Global_262145.f_6097 = 0;
			iLocal_23 = 1;
		}
		if (Global_262145.f_6106 != 1)
		{
			Global_262145.f_6106 = 1;
			iLocal_23 = 1;
		}
		if (Global_262145.f_6105 != 1)
		{
			Global_262145.f_6105 = 1;
			iLocal_23 = 1;
		}
		if (Global_262145.f_6093 != 20)
		{
			Global_262145.f_6093 = 20;
			iLocal_23 = 1;
		}
		if (Global_262145.f_6094 != 200)
		{
			Global_262145.f_6094 = 200;
			iLocal_23 = 1;
		}
		if (Global_262145.f_6109 != 0)
		{
			Global_262145.f_6109 = 0;
			iLocal_23 = 1;
		}
		if (Global_262145.f_6110 != 0)
		{
			Global_262145.f_6110 = 0;
			iLocal_23 = 1;
		}
		if (Global_262145.f_6111 != 0)
		{
			Global_262145.f_6111 = 0;
			iLocal_23 = 1;
		}
		if (Global_262145.f_6378 != 3000)
		{
			Global_262145.f_6378 = 3000;
			iLocal_23 = 1;
		}
		if (Global_262145.f_6379 != 200)
		{
			Global_262145.f_6379 = 200;
			iLocal_23 = 1;
		}
		if (Global_262145.f_6383 != 1000)
		{
			Global_262145.f_6383 = 1000;
			iLocal_23 = 1;
		}
		if (Global_262145.f_6384 != 50)
		{
			Global_262145.f_6384 = 50;
			iLocal_23 = 1;
		}
		if (Global_262145.f_6385 != 500)
		{
			Global_262145.f_6385 = 500;
			iLocal_23 = 1;
		}
		if (Global_262145.f_6386 != 2000)
		{
			Global_262145.f_6386 = 2000;
			iLocal_23 = 1;
		}
		if (Global_262145.f_7139 != 1)
		{
			Global_262145.f_7139 = 1;
			iLocal_23 = 1;
		}
		if (Global_262145.f_7140 != 1)
		{
			Global_262145.f_7140 = 1;
			iLocal_23 = 1;
		}
		if (Global_262145.f_7141 != 1)
		{
			Global_262145.f_7141 = 1;
			iLocal_23 = 1;
		}
		if (Global_262145.f_7142 != 1)
		{
			Global_262145.f_7142 = 1;
			iLocal_23 = 1;
		}
		if (Global_262145.f_7143 != 1)
		{
			Global_262145.f_7143 = 1;
			iLocal_23 = 1;
		}
		if (Global_262145.f_7144 != 1)
		{
			Global_262145.f_7144 = 1;
			iLocal_23 = 1;
		}
		if (Global_262145.f_7138 != 1)
		{
			Global_262145.f_7138 = 1;
			iLocal_23 = 1;
		}
		if (Global_262145.f_6933 != 0)
		{
			Global_262145.f_6933 = 0;
			iLocal_23 = 1;
		}
		if (Global_262145.f_4919 != 1f)
		{
			Global_262145.f_4919 = 1f;
			iLocal_23 = 1;
		}
		if (Global_262145.f_7145 != 9)
		{
			Global_262145.f_7145 = 9;
			iLocal_23 = 1;
		}
		if (Global_262145.f_70 != 120000)
		{
			Global_262145.f_70 = 120000;
			iLocal_23 = 1;
		}
		if (Global_262145.f_71 != 300000)
		{
			Global_262145.f_71 = 300000;
			iLocal_23 = 1;
		}
		if (Global_262145.f_72 != 600000)
		{
			Global_262145.f_72 = 600000;
			iLocal_23 = 1;
		}
		if (Global_262145.f_73 != 900000)
		{
			Global_262145.f_73 = 900000;
			iLocal_23 = 1;
		}
		if (Global_262145.f_6134 != 0)
		{
			Global_262145.f_6134 = 0;
			iLocal_23 = 1;
		}
		if (Global_262145.f_6135 != 0)
		{
			Global_262145.f_6135 = 0;
			iLocal_23 = 1;
		}
		if (Global_262145.f_6136 != 0)
		{
			Global_262145.f_6136 = 0;
			iLocal_23 = 1;
		}
		if (Global_262145.f_6137 != 0)
		{
			Global_262145.f_6137 = 0;
			iLocal_23 = 1;
		}
		if (Global_262145.f_6138 != 0)
		{
			Global_262145.f_6138 = 0;
			iLocal_23 = 1;
		}
		if (Global_262145.f_6139 != 0)
		{
			Global_262145.f_6139 = 0;
			iLocal_23 = 1;
		}
		if (Global_262145.f_6140 != 0)
		{
			Global_262145.f_6140 = 0;
			iLocal_23 = 1;
		}
		if (Global_262145.f_104 != 60000f)
		{
			Global_262145.f_104 = 60000f;
			iLocal_23 = 1;
		}
	}
	else
	{
		iLocal_22 = 0;
	}
}

void func_55()
{
	var uVar0;
	
	unk_0x3DBE2A7AF9E71C82(&iLocal_1, 2);
	if (unk_0xD95428C8AA1DBBF2())
	{
		if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
		{
			uVar0 = unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 1);
			if (unk_0x26EA758C2A691D06(uVar0) == joaat("dukes2"))
			{
				if (unk_0xBA2FAB683F225FF0(uVar0) > 0f)
				{
					if (unk_0x0971F0C5992C6780() && Global_1601761 == 2)
					{
						unk_0x479E7EEEBDEE245D(uVar0, 1);
					}
					else if (!unk_0x61D8FEAF64881CDA(Global_1582048[unk_0xAF65E5A58BE87D95() /*324*/].f_235.f_4, 0))
					{
						unk_0x240BBFD908B5DA09(uVar0, -1f);
						unk_0xD9C8A48B8EE646C7(uVar0, -1f);
						unk_0x03CF71355C7CD09A(uVar0, 1, 0, 0);
					}
				}
			}
		}
	}
	else if (unk_0x61D8FEAF64881CDA(Global_2427935, 20))
	{
		if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
		{
			unk_0xCEBD1B99CF343672(unk_0x507DA4994C3D8EBD());
		}
	}
}

void func_56()
{
	int iVar0;
	
	unk_0x3DBE2A7AF9E71C82(&iLocal_1, 1);
	if (Global_1315898)
	{
		if (Global_1315830 == 23 && Global_1312751)
		{
			if (iLocal_5 == 0)
			{
				iVar0 = 0;
				while (iVar0 <= 9)
				{
					func_57(iVar0);
					iVar0++;
				}
				iLocal_5 = 1;
			}
		}
	}
	else
	{
		iLocal_5 = 0;
	}
}

void func_57(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 10)
	{
		Global_2097152[func_15() /*8053*/].f_5756.f_1149[iParam0] = 0;
		StringCopy(&(Global_2097152[func_15() /*8053*/].f_5756.f_1204[iParam0 /*8*/]), "", 32);
	}
}

void func_58()
{
	unk_0x3DBE2A7AF9E71C82(&iLocal_1, 0);
	if (!iLocal_4)
	{
		if (Global_2425239.f_1 == 2)
		{
			if (Global_2425239.f_9 == 1)
			{
				if (unk_0x61D8FEAF64881CDA(Global_2425239.f_13, 5))
				{
					unk_0xCD27BF29FB9012E2(&(Global_2425239.f_13), 1);
					Global_2425239.f_3 = 2;
					iLocal_4 = 1;
				}
			}
		}
	}
	else if (Global_2425239.f_1 != 2)
	{
		iLocal_4 = 0;
	}
}

