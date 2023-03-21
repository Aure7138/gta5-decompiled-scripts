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
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49[4] = { 0, 0, 0, 0 };
	var uLocal_54 = 0;
	var uLocal_55[4] = { 0, 0, 0, 0 };
	var uLocal_60 = 0;
	struct<3> Local_61[4];
	struct<3> Local_74 = { 0, 0, 0 } ;
	int iLocal_77 = 0;
	bool bLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	bool bLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	float fLocal_85 = 0f;
	float fLocal_86 = 0f;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	bool bLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	bLocal_78 = true;
	iLocal_84 = joaat("s_m_m_pilot_01");
	iLocal_99 = 500;
	if (unk_0x7D9C4B359376D38A(3))
	{
		func_12();
	}
	uLocal_97 = unk_0xFC1458A37D98B502();
	while (true)
	{
		if (unk_0x191BE1BC8F26F3C1(uLocal_97, 0))
		{
			iLocal_98 = 5;
		}
		switch (iLocal_98)
		{
			case 0:
				iLocal_98 = 1;
				break;
			
			case 1:
				func_11();
				iLocal_98 = 2;
				break;
			
			case 2:
				if (func_10())
				{
					iLocal_98 = 3;
				}
				break;
			
			case 3:
				func_9();
				iLocal_98 = 4;
				break;
			
			case 4:
				if (Global_89906)
				{
					iLocal_98 = 5;
				}
				func_4();
				break;
			
			case 5:
				func_1();
				func_12();
				break;
		}
		unk_0x4EDE34FBADD967A6(iLocal_99);
	}
}

void func_1()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x6ADD12BF4D6D2587(uLocal_49[iVar0]))
		{
			if (unk_0xEC211A86AB3726B6(uLocal_49[iVar0]) || (!unk_0x191BE1BC8F26F3C1(uLocal_49[iVar0], 0) && !unk_0xDE3C98B57A41E603(uLocal_49[iVar0])))
			{
				unk_0xC91FE17AD7353B70(&(uLocal_49[iVar0]));
				unk_0x68433819717660CF(&(uLocal_55[iVar0]));
			}
			else
			{
				if (iVar0 == 0 || iVar0 == 2)
				{
					func_3(1);
				}
				func_2(&(uLocal_49[iVar0]), &(uLocal_55[iVar0]));
				unk_0x5380482A432E314E(&(uLocal_49[iVar0]));
				unk_0x486F346ADFE56674(&(uLocal_55[iVar0]));
			}
		}
		iVar0++;
	}
	if (unk_0x6ADD12BF4D6D2587(uLocal_54))
	{
		if (unk_0xEC211A86AB3726B6(uLocal_54))
		{
			unk_0xC91FE17AD7353B70(&uLocal_54);
			unk_0x68433819717660CF(&uLocal_60);
		}
		else
		{
			func_2(&uLocal_54, &uLocal_60);
			unk_0x5380482A432E314E(&uLocal_54);
			unk_0x486F346ADFE56674(&uLocal_60);
		}
	}
	if (bLocal_82)
	{
		unk_0x9E6ACDF1473CD846(101, "AirportJetTakeOff");
		unk_0x9E6ACDF1473CD846(102, "AirportJetTakeOff");
		unk_0x9E6ACDF1473CD846(101, "AirportNew");
		unk_0x9E6ACDF1473CD846(102, "AirportNew");
		unk_0x9E6ACDF1473CD846(103, "AirplaneLandingRedux");
		unk_0x9E6ACDF1473CD846(104, "AirplaneLandingRedux");
		unk_0x9E6ACDF1473CD846(101, "EastWestFlight");
	}
}

void func_2(var uParam0, var uParam1)
{
	if (((unk_0x6ADD12BF4D6D2587(*uParam0) && unk_0x6ADD12BF4D6D2587(*uParam1)) && !unk_0x191BE1BC8F26F3C1(*uParam0, 0)) && !unk_0x191BE1BC8F26F3C1(*uParam1, 0))
	{
		if (unk_0x0ACC2116170FA204(*uParam0))
		{
			if (unk_0x8DDE799D31A3D099(*uParam0))
			{
				if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
				{
					unk_0x1A7A03CE00E217F2(*uParam1, *uParam0, 0, 0, unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 8, 50f, -1f, 30f, 100, 50, 1);
				}
			}
		}
	}
}

void func_3(bool bParam0)
{
	if (bLocal_78)
	{
		if (unk_0x6ADD12BF4D6D2587(uLocal_49[0]) && !unk_0x191BE1BC8F26F3C1(uLocal_49[0], 0))
		{
			if (unk_0x0ACC2116170FA204(uLocal_49[0]))
			{
				if (!unk_0x8DDE799D31A3D099(uLocal_49[0]))
				{
					if ((!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && !unk_0x191BE1BC8F26F3C1(uLocal_55[0], 0)) && !unk_0x191BE1BC8F26F3C1(uLocal_49[0], 0))
					{
						unk_0x1A7A03CE00E217F2(uLocal_55[0], uLocal_49[0], 0, 0, unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 8, 50f, -1f, 90f, 100, 50, 1);
					}
				}
				else if (bParam0)
				{
					if ((!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && !unk_0x191BE1BC8F26F3C1(uLocal_55[0], 0)) && !unk_0x191BE1BC8F26F3C1(uLocal_49[0], 0))
					{
						unk_0x1A7A03CE00E217F2(uLocal_55[0], uLocal_49[0], 0, 0, unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 8, 50f, -1f, 90f, 100, 50, 1);
					}
				}
			}
		}
		if (unk_0x6ADD12BF4D6D2587(uLocal_49[2]) && !unk_0x191BE1BC8F26F3C1(uLocal_49[2], 0))
		{
			if (unk_0x0ACC2116170FA204(uLocal_49[2]))
			{
				if (!unk_0x8DDE799D31A3D099(uLocal_49[2]))
				{
					if ((!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && !unk_0x191BE1BC8F26F3C1(uLocal_55[2], 0)) && !unk_0x191BE1BC8F26F3C1(uLocal_49[2], 0))
					{
						unk_0x1A7A03CE00E217F2(uLocal_55[2], uLocal_49[2], 0, 0, unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 8, 50f, -1f, 90f, 100, 50, 1);
					}
				}
				else if (bParam0)
				{
					if ((!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && !unk_0x191BE1BC8F26F3C1(uLocal_55[2], 0)) && !unk_0x191BE1BC8F26F3C1(uLocal_49[2], 0))
					{
						unk_0x1A7A03CE00E217F2(uLocal_55[2], uLocal_49[2], 0, 0, unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 8, 50f, -1f, 90f, 100, 50, 1);
					}
				}
			}
		}
	}
}

void func_4()
{
	int iVar0;
	
	switch (iLocal_88)
	{
		case 0:
			Local_61[0 /*3*/] = { -1542.113f, -3023.802f, 23.2538f };
			Local_61[1 /*3*/] = { -3089.888f, -1960.075f, 313.559f };
			Local_61[2 /*3*/] = { -1037.638f, -3316.12f, 23.2475f };
			Local_61[3 /*3*/] = { 451.174f, -4009.46f, 135.1171f };
			Local_74 = { -1612.174f, -2688.442f, 12.9444f };
			if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				if ((unk_0xFCB32314B66A3503(unk_0xFC1458A37D98B502()) || unk_0x47DEC7699C60F07E(unk_0xFC1458A37D98B502())) || unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0))
				{
					bLocal_78 = false;
				}
				else
				{
					bLocal_78 = true;
				}
			}
			iLocal_88 = 1;
			break;
		
		case 1:
			unk_0x6FF834D85E2DD4C6(joaat("jet"));
			unk_0x6FF834D85E2DD4C6(iLocal_84);
			unk_0x0D9525F20FB71C52(101, "AirportJetTakeOff");
			unk_0x0D9525F20FB71C52(103, "AirplaneLandingRedux");
			unk_0x0D9525F20FB71C52(101, "EastWestFlight");
			unk_0x0D9525F20FB71C52(101, "AirportNew");
			unk_0x0D9525F20FB71C52(104, "AirplaneLandingRedux");
			iLocal_88 = 2;
			break;
		
		case 2:
			if (!bLocal_82)
			{
				if ((((((unk_0x9A0B2ED5055D3F0B(joaat("jet")) && unk_0x9A0B2ED5055D3F0B(iLocal_84)) && unk_0x0840F461D7BD8859(101, "AirportJetTakeOff")) && unk_0x0840F461D7BD8859(103, "AirplaneLandingRedux")) && unk_0x0840F461D7BD8859(101, "AirportNew")) && unk_0x0840F461D7BD8859(104, "AirplaneLandingRedux")) && unk_0x0840F461D7BD8859(101, "EastWestFlight"))
				{
					bLocal_82 = true;
				}
				else
				{
					unk_0x6FF834D85E2DD4C6(joaat("jet"));
					unk_0x6FF834D85E2DD4C6(iLocal_84);
					unk_0x0D9525F20FB71C52(101, "AirportJetTakeOff");
					unk_0x0D9525F20FB71C52(102, "AirportJetTakeOff");
					unk_0x0D9525F20FB71C52(101, "AirportNew");
					unk_0x0D9525F20FB71C52(102, "AirportNew");
					unk_0x0D9525F20FB71C52(101, "EastWestFlight");
				}
			}
			if (bLocal_82)
			{
				if (!unk_0x9E06F0EE20F58CED(Local_61[0 /*3*/], 50f) && !unk_0x9E06F0EE20F58CED(Local_74, 50f))
				{
					iLocal_88 = 3;
				}
				else
				{
					if (unk_0x9E06F0EE20F58CED(Local_61[0 /*3*/], 50f))
					{
					}
					if (unk_0x9E06F0EE20F58CED(Local_74, 50f))
					{
					}
				}
			}
			break;
		
		case 3:
			uLocal_49[0] = unk_0xEA60F3B426BB095B(joaat("jet"), Local_61[0 /*3*/], 0, 1, 1, 0);
			unk_0x48ED7B2293A96722(uLocal_49[0], 240.3179f);
			unk_0x80DC7591DDD6B90E(uLocal_49[0], 0);
			uLocal_49[1] = unk_0xEA60F3B426BB095B(joaat("jet"), Local_61[1 /*3*/], 0, 1, 1, 0);
			unk_0x80DC7591DDD6B90E(uLocal_49[1], 0);
			uLocal_49[2] = unk_0xEA60F3B426BB095B(joaat("jet"), Local_61[2 /*3*/], 0, 1, 1, 0);
			unk_0x80DC7591DDD6B90E(uLocal_49[2], 0);
			uLocal_49[3] = unk_0xEA60F3B426BB095B(joaat("jet"), Local_61[3 /*3*/], 0, 1, 1, 0);
			unk_0x80DC7591DDD6B90E(uLocal_49[3], 0);
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (unk_0x6ADD12BF4D6D2587(uLocal_49[iVar0]))
				{
					uLocal_55[iVar0] = unk_0x00D1A9572426E8DD(uLocal_49[iVar0], 4, iLocal_84, -1, 1, 1);
					unk_0xCFB385D0FF082808(uLocal_49[iVar0], 1000);
					unk_0xA15269351F50F113(uLocal_49[iVar0], 1, 1, 0);
					unk_0x771A86309E0CA47B(uLocal_55[iVar0], 1);
				}
				iVar0++;
			}
			func_8(&(uLocal_49[1]), &(uLocal_55[1]));
			func_8(&(uLocal_49[2]), &(uLocal_55[2]));
			func_8(&(uLocal_49[3]), &(uLocal_55[3]));
			if (bLocal_78)
			{
				if (unk_0x6ADD12BF4D6D2587(uLocal_49[0]))
				{
					if (unk_0x0840F461D7BD8859(101, "AirportJetTakeOff"))
					{
						unk_0xEBACB44A11FA743B(uLocal_49[0], 101, "AirportJetTakeOff", 2, 5, 786603);
						iLocal_77 = 1;
					}
					else
					{
						unk_0x0D9525F20FB71C52(101, "AirportJetTakeOff");
					}
				}
			}
			iLocal_88 = 4;
			break;
		
		case 4:
			if (iLocal_81)
			{
				if (unk_0x6ADD12BF4D6D2587(uLocal_49[3]) && !unk_0x191BE1BC8F26F3C1(uLocal_49[3], 0))
				{
					if (unk_0xEC211A86AB3726B6(uLocal_49[3]))
					{
						if (!iLocal_79)
						{
							func_8(&(uLocal_49[3]), &(uLocal_55[3]));
							iLocal_79 = 1;
						}
					}
				}
			}
			func_3(0);
			func_7();
			switch (iLocal_87)
			{
				case 0:
					if (!iLocal_77)
					{
						if (bLocal_78)
						{
							if (unk_0x6ADD12BF4D6D2587(uLocal_49[0]) && !unk_0x191BE1BC8F26F3C1(uLocal_49[0], 0))
							{
								if (unk_0xEC211A86AB3726B6(uLocal_49[0]) && !unk_0x9E06F0EE20F58CED(Local_61[0 /*3*/], 50f))
								{
									if (unk_0x0840F461D7BD8859(101, "AirportJetTakeOff"))
									{
										unk_0xEBACB44A11FA743B(uLocal_49[0], 101, "AirportJetTakeOff", 2, 5, 786603);
										iLocal_77 = 1;
									}
									else
									{
										unk_0x0D9525F20FB71C52(101, "AirportJetTakeOff");
									}
								}
							}
						}
					}
					if (iLocal_77)
					{
						if (unk_0x6ADD12BF4D6D2587(uLocal_49[0]) && !unk_0x191BE1BC8F26F3C1(uLocal_49[0], 0))
						{
							if (unk_0x8DDE799D31A3D099(uLocal_49[0]))
							{
								fLocal_85 = unk_0xE0FE995E410707DE(uLocal_49[0]);
							}
						}
						if (fLocal_85 > 1100f)
						{
							iLocal_87 = 1;
						}
					}
					break;
				
				case 1:
					if (unk_0x6ADD12BF4D6D2587(uLocal_49[1]) && !unk_0x191BE1BC8F26F3C1(uLocal_49[1], 0))
					{
						if (bLocal_78)
						{
							if (unk_0xEC211A86AB3726B6(uLocal_49[1]))
							{
								if (iLocal_81)
								{
									if (iLocal_79)
									{
										func_6(&(uLocal_49[1]), &(uLocal_55[1]));
										if (unk_0x0840F461D7BD8859(103, "AirplaneLandingRedux"))
										{
											unk_0xEBACB44A11FA743B(uLocal_49[1], 103, "AirplaneLandingRedux", 2, 5, 786603);
											iLocal_80 = 0;
											iLocal_87 = 2;
										}
										else
										{
											unk_0x0D9525F20FB71C52(103, "AirplaneLandingRedux");
										}
									}
								}
								else
								{
									func_6(&(uLocal_49[1]), &(uLocal_55[1]));
									if (unk_0x0840F461D7BD8859(103, "AirplaneLandingRedux"))
									{
										unk_0xEBACB44A11FA743B(uLocal_49[1], 103, "AirplaneLandingRedux", 2, 5, 786603);
										iLocal_80 = 0;
										iLocal_87 = 2;
									}
									else
									{
										unk_0x0D9525F20FB71C52(103, "AirplaneLandingRedux");
									}
								}
							}
						}
					}
					break;
				
				case 2:
					if (unk_0x6ADD12BF4D6D2587(uLocal_49[1]) && !unk_0x191BE1BC8F26F3C1(uLocal_49[1], 0))
					{
						if (!unk_0x8DDE799D31A3D099(uLocal_49[1]))
						{
							iLocal_87 = 3;
						}
					}
					break;
				
				case 3:
					if (unk_0x6ADD12BF4D6D2587(uLocal_49[2]) && !unk_0x191BE1BC8F26F3C1(uLocal_49[2], 0))
					{
						if (unk_0x0840F461D7BD8859(101, "AirportNew"))
						{
							if (!unk_0x9E06F0EE20F58CED(Local_61[2 /*3*/], 50f))
							{
								if (!unk_0x8DDE799D31A3D099(uLocal_49[2]))
								{
									func_6(&(uLocal_49[2]), &(uLocal_55[2]));
									unk_0x8D7ABC97ED508270(uLocal_49[2], 101, "AirportNew", 1);
									iLocal_87 = 4;
								}
							}
						}
					}
					break;
				
				case 4:
					if (unk_0x6ADD12BF4D6D2587(uLocal_49[2]) && !unk_0x191BE1BC8F26F3C1(uLocal_49[2], 0))
					{
						if (unk_0x8DDE799D31A3D099(uLocal_49[2]))
						{
							fLocal_86 = unk_0xE0FE995E410707DE(uLocal_49[2]);
						}
					}
					if (unk_0x6ADD12BF4D6D2587(uLocal_49[1]) && !unk_0x191BE1BC8F26F3C1(uLocal_49[1], 0))
					{
						if (!unk_0x8DDE799D31A3D099(uLocal_49[1]))
						{
							if (unk_0xEC211A86AB3726B6(uLocal_49[1]))
							{
								func_8(&(uLocal_49[1]), &(uLocal_55[1]));
								iLocal_80 = 1;
							}
						}
					}
					if (fLocal_86 > 1100f)
					{
						if (unk_0x6ADD12BF4D6D2587(uLocal_49[3]) && !unk_0x191BE1BC8F26F3C1(uLocal_49[3], 0))
						{
							if (unk_0x0840F461D7BD8859(104, "AirplaneLandingRedux"))
							{
								if (!unk_0x9E06F0EE20F58CED(Local_61[3 /*3*/], 50f))
								{
									if (!unk_0x8DDE799D31A3D099(uLocal_49[3]) && iLocal_80)
									{
										func_6(&(uLocal_49[3]), &(uLocal_55[3]));
										unk_0x8D7ABC97ED508270(uLocal_49[3], 104, "AirplaneLandingRedux", 1);
										iLocal_87 = 5;
									}
								}
							}
						}
					}
					break;
				
				case 5:
					if (unk_0x6ADD12BF4D6D2587(uLocal_49[3]) && !unk_0x191BE1BC8F26F3C1(uLocal_49[3], 0))
					{
						if (!unk_0x8DDE799D31A3D099(uLocal_49[3]))
						{
							func_5();
							iLocal_87 = 0;
						}
					}
					break;
			}
			break;
	}
}

void func_5()
{
	fLocal_85 = 0f;
	iLocal_77 = 0;
	iLocal_81 = 1;
	iLocal_79 = 0;
}

void func_6(var uParam0, var uParam1)
{
	unk_0xB3A8974D2C811672(*uParam0, 1, 0);
	unk_0xB3A8974D2C811672(*uParam1, 1, 0);
	unk_0xB18E1DBC397238E1(*uParam0, 1, 0);
	unk_0xEDC33A771FAEB393(*uParam0, 0);
}

void func_7()
{
	struct<3> Var0;
	
	switch (iLocal_83)
	{
		case 0:
			if (!unk_0x6ADD12BF4D6D2587(uLocal_54))
			{
				uLocal_54 = unk_0xEA60F3B426BB095B(joaat("jet"), -65.3177f, 15.4603f, 703.106f, 0, 1, 1, 0);
				unk_0xCFB385D0FF082808(uLocal_54, 1000);
				unk_0xA15269351F50F113(uLocal_54, 1, 1, 0);
				unk_0x80DC7591DDD6B90E(uLocal_54, 0);
				uLocal_60 = unk_0x00D1A9572426E8DD(uLocal_54, 4, iLocal_84, -1, 1, 1);
				unk_0x771A86309E0CA47B(uLocal_60, 1);
				iLocal_83 = 1;
			}
			break;
		
		case 1:
			if (unk_0x6ADD12BF4D6D2587(uLocal_54) && !unk_0x191BE1BC8F26F3C1(uLocal_54, 0))
			{
				if (unk_0x0840F461D7BD8859(101, "EastWestFlight"))
				{
					if (!unk_0x8DDE799D31A3D099(uLocal_54))
					{
						unk_0xEBACB44A11FA743B(uLocal_54, 101, "EastWestFlight", 2, 5, 786603);
						iLocal_83 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
			{
				Var0 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
			}
			if (unk_0x6ADD12BF4D6D2587(uLocal_54) && !unk_0x191BE1BC8F26F3C1(uLocal_54, 0))
			{
				if (!unk_0x8DDE799D31A3D099(uLocal_54))
				{
					if ((unk_0xEC211A86AB3726B6(uLocal_54) && !unk_0x9E06F0EE20F58CED(-1602.086f, -2674.039f, 12.9444f, 50f)) && unk_0xB7A628320EFF8E47(Var0, unk_0xB3328BA8976B416C(uLocal_54, 1)) > 62500f)
					{
						iLocal_83 = 1;
					}
				}
			}
			break;
	}
}

void func_8(var uParam0, var uParam1)
{
	unk_0xB3A8974D2C811672(*uParam0, 0, 0);
	unk_0xB3A8974D2C811672(*uParam1, 0, 0);
	unk_0xB18E1DBC397238E1(*uParam0, 0, 0);
	unk_0xEDC33A771FAEB393(*uParam0, 1);
}

void func_9()
{
}

int func_10()
{
	return 1;
}

void func_11()
{
}

void func_12()
{
	func_1();
	func_13();
	unk_0x96A3D9A8A4C7AFD4();
}

void func_13()
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	var uVar9;
	
	if (unk_0x6ADD12BF4D6D2587(uLocal_89))
	{
		if (unk_0xEC211A86AB3726B6(uLocal_89))
		{
			unk_0xC91FE17AD7353B70(&uLocal_89);
		}
		else if (!unk_0x191BE1BC8F26F3C1(uLocal_89, 0) && !unk_0x3AB6A1A9084FB0A4(uLocal_90))
		{
			unk_0x7674774BB9279265(uLocal_89);
			unk_0xE9B3D12A64CC7C1A(uLocal_90, 1);
			Var0 = { unk_0xB3328BA8976B416C(uLocal_89, 1) };
			uVar9 = unk_0xF0371FE6E2BF9599(uLocal_89);
			Var3 = { 0f, 500f, 50f };
			Var6 = { unk_0x9EA50C5EC175E58E(Var0, uVar9, Var3) };
			unk_0x8F7859DFA5ECF628(uLocal_90, uLocal_89, 0, 0, Var6, 4, 50f, -1f, 0f, 100, 50, -1082130432, 0);
		}
	}
	if (bLocal_95)
	{
		unk_0x9E6ACDF1473CD846(102, "HelicopterTakeOff");
	}
}

