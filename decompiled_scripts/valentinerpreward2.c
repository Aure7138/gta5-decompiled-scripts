#region Local Var
	char* sLocal_0 = NULL;
	bool bLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
	sLocal_0 = "BG_PC 1.0.02";
	unk_0xAA391C728106F7AF(false);
	unk_0x9243BAC96D64C050();
	if (iScriptParam_0 == iScriptParam_0)
	{
	}
	iVar0 = unk_0x9CD27B0045628463() + 10000;
	while (unk_0x9CD27B0045628463() < iVar0)
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (true)
	{
		if (func_19())
		{
			func_18();
			if (bLocal_1)
			{
				unk_0x07C837F9A01C34C9(0f, 0.23f);
				unk_0xBE6B23FFA53FB442(255, 255, 255, 255);
				func_17(0.69f, 0.06f, "STRING", sLocal_0);
			}
		}
		func_16();
		func_13();
		func_12();
		if (unk_0x10FAB35428CCC9D7())
		{
			func_11();
			func_6();
			func_3();
			func_1();
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0x1090044AD1DA76FA();
}

void func_1()
{
	var uVar0[32];
	int iVar33;
	int iVar34;
	var uVar35;
	
	if (!iLocal_11)
	{
		iLocal_12 = unk_0x7A5487FE9FAA6B48();
		iLocal_11 = 1;
	}
	if (unk_0xF0D31AD191A74F87(unk_0xA2C6FC031D46FFF0(iLocal_12, unk_0x7A5487FE9FAA6B48())) < 1000)
	{
		return;
	}
	else
	{
		iLocal_12 = unk_0x7A5487FE9FAA6B48();
	}
	iVar34 = unk_0xCFF869CBFA210D82(unk_0xD80958FC74E988A6(), &uVar0);
	if (iVar34 > 32)
	{
		iVar34 = 32;
	}
	if (Global_1581881.f_23 == -1)
	{
		iVar33 = 0;
		while (iVar33 < iVar34)
		{
			if (unk_0x7239B21A38F536BA(uVar0[iVar33]) && unk_0x4C241E39B23DF959(uVar0[iVar33], false))
			{
				if (Global_1581881.f_23 == -1 && unk_0x0C515FAB3FF9EA92(unk_0xA6E9C38DB51D7748(uVar0[iVar33], &uVar35), "AM_MP_PROPERTY_EXT"))
				{
					if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), uVar0[iVar33], true))
					{
						unk_0xAAA34F8A7CB32098(unk_0xD80958FC74E988A6());
					}
					if (func_2(uVar0[iVar33], 1, 1, 0))
					{
						if (unk_0x01BF60A500E28887(uVar0[iVar33]))
						{
							unk_0xAD738C3085FE7E11(uVar0[iVar33], false, true);
							unk_0xEA386986E786A54F(&(uVar0[iVar33]));
						}
					}
				}
			}
			iVar33++;
		}
	}
}

int func_2(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = unk_0xA7C4F2C6E744A550(iParam0) + 1;
	if (!unk_0x5F9532F3B5CC2551(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (!unk_0x22AC59A870E6A669(iParam0, (iVar0 - 1)))
			{
				iVar2 = unk_0xBB40DD2270B65366(iParam0, (iVar0 - 1));
				if (iParam3 && iVar2 == unk_0xD80958FC74E988A6())
				{
				}
				else if (bParam2)
				{
					if (!unk_0x84A2DD9AC37C35C1(iVar2))
					{
						if (unk_0x12534C348C6CB68B(iVar2))
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
					iVar3 = unk_0xBB40DD2270B65366(iParam0, (iVar0 - 1));
					if (!unk_0x84A2DD9AC37C35C1(iVar3))
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

void func_3()
{
	if (func_5(unk_0x4F8644AF03D0E0D6(), 1, 1))
	{
		if (Global_2446207.f_733 && !func_4())
		{
			if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false) && !Global_2446207.f_734)
			{
				if (!Global_1681085)
				{
					if (unk_0x77F1BEB8863288D5(unk_0xD80958FC74E988A6(), -828834893) == 1 || unk_0x77F1BEB8863288D5(unk_0xD80958FC74E988A6(), -828834893) == 0)
					{
						if (!iLocal_9)
						{
							iLocal_9 = 1;
							iLocal_10 = unk_0x7A5487FE9FAA6B48();
						}
						else if (unk_0xF0D31AD191A74F87(unk_0xA2C6FC031D46FFF0(unk_0x7A5487FE9FAA6B48(), iLocal_10)) > 7000)
						{
							unk_0xAAA34F8A7CB32098(unk_0xD80958FC74E988A6());
						}
						return;
					}
				}
			}
		}
	}
	iLocal_9 = 0;
}

int func_4()
{
	if (((((((((unk_0xA921AA820C25702F(Global_89836.f_1267[39], 6) || unk_0xA921AA820C25702F(Global_89836.f_1267[40], 6)) || unk_0xA921AA820C25702F(Global_89836.f_1267[41], 6)) || unk_0xA921AA820C25702F(Global_89836.f_1267[42], 6)) || unk_0xA921AA820C25702F(Global_89836.f_1267[43], 6)) || unk_0xA921AA820C25702F(Global_89836.f_1267[39], 25)) || unk_0xA921AA820C25702F(Global_89836.f_1267[40], 25)) || unk_0xA921AA820C25702F(Global_89836.f_1267[41], 25)) || unk_0xA921AA820C25702F(Global_89836.f_1267[42], 25)) || unk_0xA921AA820C25702F(Global_89836.f_1267[43], 25))
	{
		return 1;
	}
	return 0;
}

int func_5(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0xB8DFD30D6973E135(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x5E9564D8246B909A(iParam0))
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

void func_6()
{
	if (unk_0x02B15662D7F8886F() || Global_1672071)
	{
		unk_0xFE99B66D079CF6BC(0, 23, true);
	}
	if (Global_2421967.f_499.f_7)
	{
		if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			if (!func_10(&uLocal_7))
			{
				func_9(&uLocal_7, 1, 0);
			}
			else if (func_8(&uLocal_7, 2000, 1))
			{
				func_7(&uLocal_7);
				Global_2421967.f_499.f_7 = 0;
			}
		}
		else
		{
			func_7(&uLocal_7);
		}
	}
	else
	{
		func_7(&uLocal_7);
	}
}

void func_7(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_8(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_9(uParam0, bParam2, 0);
	if (unk_0x10FAB35428CCC9D7() && !bParam2)
	{
		if (unk_0xF0D31AD191A74F87(unk_0xA2C6FC031D46FFF0(unk_0x7A5487FE9FAA6B48(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xF0D31AD191A74F87(unk_0xA2C6FC031D46FFF0(unk_0x9CD27B0045628463(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_9(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x10FAB35428CCC9D7() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x7A5487FE9FAA6B48();
			}
			else
			{
				*uParam0 = unk_0x89023FBBF9200E9F();
			}
		}
		else
		{
			*uParam0 = unk_0x9CD27B0045628463();
		}
		uParam0->f_1 = 1;
	}
}

bool func_10(var uParam0)
{
	return uParam0->f_1;
}

void func_11()
{
	if (unk_0xA921AA820C25702F(Global_1581881.f_22, 8))
	{
		if (!unk_0xA921AA820C25702F(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_235.f_4, 11))
		{
			if (unk_0x2C83A9DA6BFFC4F9(joaat("am_mp_property_int")) <= 0 && !Global_1672070)
			{
				unk_0xE80492A9AC099A93(&(Global_1581881.f_22), 8);
			}
		}
	}
	if (!iLocal_5)
	{
		if (unk_0xA921AA820C25702F(Global_1581881.f_22, 8) && unk_0xA921AA820C25702F(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_235.f_4, 11))
		{
			iLocal_5 = 1;
			iLocal_6 = 0;
		}
	}
	else
	{
		iLocal_6++;
		if (iLocal_6 < 3)
		{
			if ((!unk_0xA921AA820C25702F(Global_1581881.f_22, 8) && Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_235.f_55 < 0) || !unk_0xA921AA820C25702F(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_235.f_4, 11))
			{
				if ((unk_0x2C83A9DA6BFFC4F9(joaat("am_mp_property_int")) >= 0 || Global_1672070) || unk_0xA921AA820C25702F(Global_1048576.f_4, 0))
				{
					Global_1581881.f_26 = 1;
					iLocal_5 = 0;
					unk_0xE80492A9AC099A93(&(Global_1581881.f_22), 8);
				}
				else
				{
					unk_0xE80492A9AC099A93(&(Global_1581881.f_22), 8);
					iLocal_5 = 0;
				}
			}
		}
		else
		{
			iLocal_5 = 0;
		}
	}
}

void func_12()
{
	int iVar0;
	
	if (unk_0x10FAB35428CCC9D7())
	{
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			iVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), true);
			if (unk_0x9F47B058362C84B5(iVar0) == joaat("dukes2"))
			{
				if (unk_0xC45D23BAF168AAB8(iVar0) > 0f)
				{
					if (unk_0x05095437424397FA() && Global_1601761 == 2)
					{
						unk_0x428CA6DBD1094446(iVar0, true);
					}
					else if (!unk_0xA921AA820C25702F(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_235.f_4, 0))
					{
						unk_0x45F6D8EEF34ABEF1(iVar0, -1f);
						unk_0x70DB57649FA8D0D8(iVar0, -1f);
						unk_0x301A42153C9AD707(iVar0, true, false, 0);
					}
				}
			}
		}
	}
	else if (unk_0xA921AA820C25702F(Global_2427935, 20))
	{
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			unk_0xAAA34F8A7CB32098(unk_0xD80958FC74E988A6());
		}
	}
}

void func_13()
{
	int iVar0;
	
	if (Global_1315898)
	{
		if (Global_1315830 == 23 && Global_1312751)
		{
			if (iLocal_4 == 0)
			{
				iVar0 = 0;
				while (iVar0 <= 9)
				{
					func_14(iVar0);
					iVar0++;
				}
				iLocal_4 = 1;
			}
		}
	}
	else
	{
		iLocal_4 = 0;
	}
}

void func_14(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 10)
	{
		Global_2097152[func_15() /*8053*/].f_5756.f_1149[iParam0] = 0;
		StringCopy(&(Global_2097152[func_15() /*8053*/].f_5756.f_1204[iParam0 /*8*/]), "", 32);
	}
}

int func_15()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_16()
{
	if (!iLocal_3)
	{
		if (Global_2425239.f_1 == 2)
		{
			if (Global_2425239.f_9 == 1)
			{
				if (unk_0xA921AA820C25702F(Global_2425239.f_13, 5))
				{
					unk_0xE80492A9AC099A93(&(Global_2425239.f_13), 1);
					Global_2425239.f_3 = 2;
					iLocal_3 = 1;
				}
			}
		}
	}
	else if (Global_2425239.f_1 != 2)
	{
		iLocal_3 = 0;
	}
}

void func_17(float fParam0, float fParam1, char* sParam2, char* sParam3)
{
	unk_0x25FBB336DF1804CB(sParam2);
	unk_0x5F68520888E69014(sParam3);
	unk_0xCD015E5BB0D96A57(fParam0, fParam1, 0);
}

void func_18()
{
	if (!bLocal_1)
	{
		if (unk_0xB0034A223497FFCB())
		{
			switch (iLocal_2)
			{
				case 0:
					if (unk_0x580417101DDB492F(2, 189))
					{
						iLocal_2++;
						unk_0xC1B1E9A034A63A62(0);
					}
					break;
				
				case 1:
					if (unk_0x580417101DDB492F(2, 190))
					{
						iLocal_2++;
						unk_0xC1B1E9A034A63A62(0);
					}
					else if (unk_0x83666F9FB8FEBD4B() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
				
				case 2:
					if (unk_0x580417101DDB492F(2, 189))
					{
						iLocal_2++;
						unk_0xC1B1E9A034A63A62(0);
					}
					else if (unk_0x83666F9FB8FEBD4B() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
				
				case 3:
					if (unk_0x580417101DDB492F(2, 190))
					{
						iLocal_2++;
						unk_0xC1B1E9A034A63A62(0);
					}
					else if (unk_0x83666F9FB8FEBD4B() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
				
				case 4:
					if (unk_0x580417101DDB492F(2, 188))
					{
						bLocal_1 = true;
						unk_0xC1B1E9A034A63A62(0);
					}
					else if (unk_0x83666F9FB8FEBD4B() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
				}
		}
	}
	else if (unk_0xB0034A223497FFCB())
	{
		switch (iLocal_2)
		{
			case 0:
				if (unk_0x580417101DDB492F(2, 188))
				{
					iLocal_2++;
					unk_0xC1B1E9A034A63A62(0);
				}
				break;
			
			case 1:
				if (unk_0x580417101DDB492F(2, 190))
				{
					iLocal_2++;
					unk_0xC1B1E9A034A63A62(0);
				}
				else if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
			
			case 2:
				if (unk_0x580417101DDB492F(2, 189))
				{
					iLocal_2++;
					unk_0xC1B1E9A034A63A62(0);
				}
				else if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
			
			case 3:
				if (unk_0x580417101DDB492F(2, 190))
				{
					iLocal_2++;
					unk_0xC1B1E9A034A63A62(0);
				}
				else if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
			
			case 4:
				if (unk_0x580417101DDB492F(2, 189))
				{
					bLocal_1 = false;
					unk_0xC1B1E9A034A63A62(0);
				}
				else if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
			}
	}
}

bool func_19()
{
	return unk_0x812595A0644CE1DE(-1762644250);
}

