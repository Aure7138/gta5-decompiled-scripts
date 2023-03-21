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
	if (unk_0xD4BE58A7E3E102AC(3))
	{
		func_12();
	}
	uLocal_97 = unk_0x0FA8183DAD2B3203();
	while (true)
	{
		if (unk_0xF4B969E0807E76C7(uLocal_97, 0))
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
				if (Global_95627)
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
		if (unk_0xD4B321D9096B01FC(uLocal_49[iVar0]))
		{
			if (unk_0x7FB035B5755E076D(uLocal_49[iVar0]) || (!unk_0xF4B969E0807E76C7(uLocal_49[iVar0], 0) && !unk_0x0975E9E48EA2CC7B(uLocal_49[iVar0])))
			{
				unk_0xBD22862A2C5FD6DF(&(uLocal_49[iVar0]));
				unk_0x4F058F27442031CC(&(uLocal_55[iVar0]));
			}
			else
			{
				if (iVar0 == 0 || iVar0 == 2)
				{
					func_3(1);
				}
				func_2(&(uLocal_49[iVar0]), &(uLocal_55[iVar0]));
				unk_0xF25956700ADFD77F(&(uLocal_49[iVar0]));
				unk_0x0FFB05DA97E810B5(&(uLocal_55[iVar0]));
			}
		}
		iVar0++;
	}
	if (unk_0xD4B321D9096B01FC(uLocal_54))
	{
		if (unk_0x7FB035B5755E076D(uLocal_54))
		{
			unk_0xBD22862A2C5FD6DF(&uLocal_54);
			unk_0x4F058F27442031CC(&uLocal_60);
		}
		else
		{
			func_2(&uLocal_54, &uLocal_60);
			unk_0xF25956700ADFD77F(&uLocal_54);
			unk_0x0FFB05DA97E810B5(&uLocal_60);
		}
	}
	if (bLocal_82)
	{
		unk_0x497FAD093E19504A(101, "AirportJetTakeOff");
		unk_0x497FAD093E19504A(102, "AirportJetTakeOff");
		unk_0x497FAD093E19504A(101, "AirportNew");
		unk_0x497FAD093E19504A(102, "AirportNew");
		unk_0x497FAD093E19504A(103, "AirplaneLandingRedux");
		unk_0x497FAD093E19504A(104, "AirplaneLandingRedux");
		unk_0x497FAD093E19504A(101, "EastWestFlight");
	}
}

void func_2(var uParam0, var uParam1)
{
	if (((unk_0xD4B321D9096B01FC(*uParam0) && unk_0xD4B321D9096B01FC(*uParam1)) && !unk_0xF4B969E0807E76C7(*uParam0, 0)) && !unk_0xF4B969E0807E76C7(*uParam1, 0))
	{
		if (unk_0x916AF183F71F17C1(*uParam0))
		{
			if (unk_0x2956D94776C15770(*uParam0))
			{
				if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
				{
					unk_0x2D905813616A8B4A(*uParam1, *uParam0, 0, 0, unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1), 8, 50f, -1f, 30f, 100, 50, 1);
				}
			}
		}
	}
}

void func_3(bool bParam0)
{
	if (bLocal_78)
	{
		if (unk_0xD4B321D9096B01FC(uLocal_49[0]) && !unk_0xF4B969E0807E76C7(uLocal_49[0], 0))
		{
			if (unk_0x916AF183F71F17C1(uLocal_49[0]))
			{
				if (!unk_0x2956D94776C15770(uLocal_49[0]))
				{
					if ((!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()) && !unk_0xF4B969E0807E76C7(uLocal_55[0], 0)) && !unk_0xF4B969E0807E76C7(uLocal_49[0], 0))
					{
						unk_0x2D905813616A8B4A(uLocal_55[0], uLocal_49[0], 0, 0, unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1), 8, 50f, -1f, 90f, 100, 50, 1);
					}
				}
				else if (bParam0)
				{
					if ((!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()) && !unk_0xF4B969E0807E76C7(uLocal_55[0], 0)) && !unk_0xF4B969E0807E76C7(uLocal_49[0], 0))
					{
						unk_0x2D905813616A8B4A(uLocal_55[0], uLocal_49[0], 0, 0, unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1), 8, 50f, -1f, 90f, 100, 50, 1);
					}
				}
			}
		}
		if (unk_0xD4B321D9096B01FC(uLocal_49[2]) && !unk_0xF4B969E0807E76C7(uLocal_49[2], 0))
		{
			if (unk_0x916AF183F71F17C1(uLocal_49[2]))
			{
				if (!unk_0x2956D94776C15770(uLocal_49[2]))
				{
					if ((!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()) && !unk_0xF4B969E0807E76C7(uLocal_55[2], 0)) && !unk_0xF4B969E0807E76C7(uLocal_49[2], 0))
					{
						unk_0x2D905813616A8B4A(uLocal_55[2], uLocal_49[2], 0, 0, unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1), 8, 50f, -1f, 90f, 100, 50, 1);
					}
				}
				else if (bParam0)
				{
					if ((!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()) && !unk_0xF4B969E0807E76C7(uLocal_55[2], 0)) && !unk_0xF4B969E0807E76C7(uLocal_49[2], 0))
					{
						unk_0x2D905813616A8B4A(uLocal_55[2], uLocal_49[2], 0, 0, unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1), 8, 50f, -1f, 90f, 100, 50, 1);
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
			if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
			{
				if ((unk_0xCE4D7B70DA8B0C86(unk_0x0FA8183DAD2B3203()) || unk_0x0B8262712AD6841C(unk_0x0FA8183DAD2B3203())) || unk_0x586E95A1CE46FC21(unk_0x7C7787D2D7139A85(), 0))
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
			unk_0x6BB2B1818CAE531E(joaat("jet"));
			unk_0x6BB2B1818CAE531E(iLocal_84);
			unk_0x798362387B375EB6(101, "AirportJetTakeOff");
			unk_0x798362387B375EB6(103, "AirplaneLandingRedux");
			unk_0x798362387B375EB6(101, "EastWestFlight");
			unk_0x798362387B375EB6(101, "AirportNew");
			unk_0x798362387B375EB6(104, "AirplaneLandingRedux");
			iLocal_88 = 2;
			break;
		
		case 2:
			if (!bLocal_82)
			{
				if ((((((unk_0x6DF9C43E3CC645BC(joaat("jet")) && unk_0x6DF9C43E3CC645BC(iLocal_84)) && unk_0xDA28050D0A4CAB3A(101, "AirportJetTakeOff")) && unk_0xDA28050D0A4CAB3A(103, "AirplaneLandingRedux")) && unk_0xDA28050D0A4CAB3A(101, "AirportNew")) && unk_0xDA28050D0A4CAB3A(104, "AirplaneLandingRedux")) && unk_0xDA28050D0A4CAB3A(101, "EastWestFlight"))
				{
					bLocal_82 = true;
				}
				else
				{
					unk_0x6BB2B1818CAE531E(joaat("jet"));
					unk_0x6BB2B1818CAE531E(iLocal_84);
					unk_0x798362387B375EB6(101, "AirportJetTakeOff");
					unk_0x798362387B375EB6(102, "AirportJetTakeOff");
					unk_0x798362387B375EB6(101, "AirportNew");
					unk_0x798362387B375EB6(102, "AirportNew");
					unk_0x798362387B375EB6(101, "EastWestFlight");
				}
			}
			if (bLocal_82)
			{
				if (!unk_0x93086679C0E859D8(Local_61[0 /*3*/], 50f) && !unk_0x93086679C0E859D8(Local_74, 50f))
				{
					iLocal_88 = 3;
				}
				else
				{
					if (unk_0x93086679C0E859D8(Local_61[0 /*3*/], 50f))
					{
					}
					if (unk_0x93086679C0E859D8(Local_74, 50f))
					{
					}
				}
			}
			break;
		
		case 3:
			uLocal_49[0] = unk_0x847817A65E16621A(joaat("jet"), Local_61[0 /*3*/], 0, 1, 1, 0);
			unk_0x5A2B7C446C0CF087(uLocal_49[0], 240.3179f);
			unk_0xAC50FA1E397B624F(uLocal_49[0], 0);
			uLocal_49[1] = unk_0x847817A65E16621A(joaat("jet"), Local_61[1 /*3*/], 0, 1, 1, 0);
			unk_0xAC50FA1E397B624F(uLocal_49[1], 0);
			uLocal_49[2] = unk_0x847817A65E16621A(joaat("jet"), Local_61[2 /*3*/], 0, 1, 1, 0);
			unk_0xAC50FA1E397B624F(uLocal_49[2], 0);
			uLocal_49[3] = unk_0x847817A65E16621A(joaat("jet"), Local_61[3 /*3*/], 0, 1, 1, 0);
			unk_0xAC50FA1E397B624F(uLocal_49[3], 0);
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (unk_0xD4B321D9096B01FC(uLocal_49[iVar0]))
				{
					uLocal_55[iVar0] = unk_0x81024A420EDCE2B5(uLocal_49[iVar0], 4, iLocal_84, -1, 1, 1);
					unk_0x5C566093AEF7FD18(uLocal_49[iVar0], 1000);
					unk_0xB90231068DCFFBA1(uLocal_49[iVar0], 1, 1, 0);
					unk_0xCC94EE23853F38E4(uLocal_55[iVar0], 1);
				}
				iVar0++;
			}
			func_8(&(uLocal_49[1]), &(uLocal_55[1]));
			func_8(&(uLocal_49[2]), &(uLocal_55[2]));
			func_8(&(uLocal_49[3]), &(uLocal_55[3]));
			if (bLocal_78)
			{
				if (unk_0xD4B321D9096B01FC(uLocal_49[0]))
				{
					if (unk_0xDA28050D0A4CAB3A(101, "AirportJetTakeOff"))
					{
						unk_0xCECB3C39CDD8CE22(uLocal_49[0], 101, "AirportJetTakeOff", 2, 5, 786603);
						iLocal_77 = 1;
					}
					else
					{
						unk_0x798362387B375EB6(101, "AirportJetTakeOff");
					}
				}
			}
			iLocal_88 = 4;
			break;
		
		case 4:
			if (iLocal_81)
			{
				if (unk_0xD4B321D9096B01FC(uLocal_49[3]) && !unk_0xF4B969E0807E76C7(uLocal_49[3], 0))
				{
					if (unk_0x7FB035B5755E076D(uLocal_49[3]))
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
							if (unk_0xD4B321D9096B01FC(uLocal_49[0]) && !unk_0xF4B969E0807E76C7(uLocal_49[0], 0))
							{
								if (unk_0x7FB035B5755E076D(uLocal_49[0]) && !unk_0x93086679C0E859D8(Local_61[0 /*3*/], 50f))
								{
									if (unk_0xDA28050D0A4CAB3A(101, "AirportJetTakeOff"))
									{
										unk_0xCECB3C39CDD8CE22(uLocal_49[0], 101, "AirportJetTakeOff", 2, 5, 786603);
										iLocal_77 = 1;
									}
									else
									{
										unk_0x798362387B375EB6(101, "AirportJetTakeOff");
									}
								}
							}
						}
					}
					if (iLocal_77)
					{
						if (unk_0xD4B321D9096B01FC(uLocal_49[0]) && !unk_0xF4B969E0807E76C7(uLocal_49[0], 0))
						{
							if (unk_0x2956D94776C15770(uLocal_49[0]))
							{
								fLocal_85 = unk_0xC26A915A15EC8E50(uLocal_49[0]);
							}
						}
						if (fLocal_85 > 1100f)
						{
							iLocal_87 = 1;
						}
					}
					break;
				
				case 1:
					if (unk_0xD4B321D9096B01FC(uLocal_49[1]) && !unk_0xF4B969E0807E76C7(uLocal_49[1], 0))
					{
						if (bLocal_78)
						{
							if (unk_0x7FB035B5755E076D(uLocal_49[1]))
							{
								if (iLocal_81)
								{
									if (iLocal_79)
									{
										func_6(&(uLocal_49[1]), &(uLocal_55[1]));
										if (unk_0xDA28050D0A4CAB3A(103, "AirplaneLandingRedux"))
										{
											unk_0xCECB3C39CDD8CE22(uLocal_49[1], 103, "AirplaneLandingRedux", 2, 5, 786603);
											iLocal_80 = 0;
											iLocal_87 = 2;
										}
										else
										{
											unk_0x798362387B375EB6(103, "AirplaneLandingRedux");
										}
									}
								}
								else
								{
									func_6(&(uLocal_49[1]), &(uLocal_55[1]));
									if (unk_0xDA28050D0A4CAB3A(103, "AirplaneLandingRedux"))
									{
										unk_0xCECB3C39CDD8CE22(uLocal_49[1], 103, "AirplaneLandingRedux", 2, 5, 786603);
										iLocal_80 = 0;
										iLocal_87 = 2;
									}
									else
									{
										unk_0x798362387B375EB6(103, "AirplaneLandingRedux");
									}
								}
							}
						}
					}
					break;
				
				case 2:
					if (unk_0xD4B321D9096B01FC(uLocal_49[1]) && !unk_0xF4B969E0807E76C7(uLocal_49[1], 0))
					{
						if (!unk_0x2956D94776C15770(uLocal_49[1]))
						{
							iLocal_87 = 3;
						}
					}
					break;
				
				case 3:
					if (unk_0xD4B321D9096B01FC(uLocal_49[2]) && !unk_0xF4B969E0807E76C7(uLocal_49[2], 0))
					{
						if (unk_0xDA28050D0A4CAB3A(101, "AirportNew"))
						{
							if (!unk_0x93086679C0E859D8(Local_61[2 /*3*/], 50f))
							{
								if (!unk_0x2956D94776C15770(uLocal_49[2]))
								{
									func_6(&(uLocal_49[2]), &(uLocal_55[2]));
									unk_0x10DFCD426DB9FAB3(uLocal_49[2], 101, "AirportNew", 1);
									iLocal_87 = 4;
								}
							}
						}
					}
					break;
				
				case 4:
					if (unk_0xD4B321D9096B01FC(uLocal_49[2]) && !unk_0xF4B969E0807E76C7(uLocal_49[2], 0))
					{
						if (unk_0x2956D94776C15770(uLocal_49[2]))
						{
							fLocal_86 = unk_0xC26A915A15EC8E50(uLocal_49[2]);
						}
					}
					if (unk_0xD4B321D9096B01FC(uLocal_49[1]) && !unk_0xF4B969E0807E76C7(uLocal_49[1], 0))
					{
						if (!unk_0x2956D94776C15770(uLocal_49[1]))
						{
							if (unk_0x7FB035B5755E076D(uLocal_49[1]))
							{
								func_8(&(uLocal_49[1]), &(uLocal_55[1]));
								iLocal_80 = 1;
							}
						}
					}
					if (fLocal_86 > 1100f)
					{
						if (unk_0xD4B321D9096B01FC(uLocal_49[3]) && !unk_0xF4B969E0807E76C7(uLocal_49[3], 0))
						{
							if (unk_0xDA28050D0A4CAB3A(104, "AirplaneLandingRedux"))
							{
								if (!unk_0x93086679C0E859D8(Local_61[3 /*3*/], 50f))
								{
									if (!unk_0x2956D94776C15770(uLocal_49[3]) && iLocal_80)
									{
										func_6(&(uLocal_49[3]), &(uLocal_55[3]));
										unk_0x10DFCD426DB9FAB3(uLocal_49[3], 104, "AirplaneLandingRedux", 1);
										iLocal_87 = 5;
									}
								}
							}
						}
					}
					break;
				
				case 5:
					if (unk_0xD4B321D9096B01FC(uLocal_49[3]) && !unk_0xF4B969E0807E76C7(uLocal_49[3], 0))
					{
						if (!unk_0x2956D94776C15770(uLocal_49[3]))
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
	unk_0x2BBEC4B37B923F4B(*uParam0, 1, 0);
	unk_0x2BBEC4B37B923F4B(*uParam1, 1, 0);
	unk_0x8C85E8C71AD74415(*uParam0, 1, 0);
	unk_0x860A5CC30A0EF207(*uParam0, 0);
}

void func_7()
{
	struct<3> Var0;
	
	switch (iLocal_83)
	{
		case 0:
			if (!unk_0xD4B321D9096B01FC(uLocal_54))
			{
				uLocal_54 = unk_0x847817A65E16621A(joaat("jet"), -65.3177f, 15.4603f, 703.106f, 0, 1, 1, 0);
				unk_0x5C566093AEF7FD18(uLocal_54, 1000);
				unk_0xB90231068DCFFBA1(uLocal_54, 1, 1, 0);
				unk_0xAC50FA1E397B624F(uLocal_54, 0);
				uLocal_60 = unk_0x81024A420EDCE2B5(uLocal_54, 4, iLocal_84, -1, 1, 1);
				unk_0xCC94EE23853F38E4(uLocal_60, 1);
				iLocal_83 = 1;
			}
			break;
		
		case 1:
			if (unk_0xD4B321D9096B01FC(uLocal_54) && !unk_0xF4B969E0807E76C7(uLocal_54, 0))
			{
				if (unk_0xDA28050D0A4CAB3A(101, "EastWestFlight"))
				{
					if (!unk_0x2956D94776C15770(uLocal_54))
					{
						unk_0xCECB3C39CDD8CE22(uLocal_54, 101, "EastWestFlight", 2, 5, 786603);
						iLocal_83 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
			{
				Var0 = { unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1) };
			}
			if (unk_0xD4B321D9096B01FC(uLocal_54) && !unk_0xF4B969E0807E76C7(uLocal_54, 0))
			{
				if (!unk_0x2956D94776C15770(uLocal_54))
				{
					if ((unk_0x7FB035B5755E076D(uLocal_54) && !unk_0x93086679C0E859D8(-1602.086f, -2674.039f, 12.9444f, 50f)) && unk_0xB7A628320EFF8E47(Var0, unk_0xACE5E491FC1B0D37(uLocal_54, 1)) > 62500f)
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
	unk_0x2BBEC4B37B923F4B(*uParam0, 0, 0);
	unk_0x2BBEC4B37B923F4B(*uParam1, 0, 0);
	unk_0x8C85E8C71AD74415(*uParam0, 0, 0);
	unk_0x860A5CC30A0EF207(*uParam0, 1);
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
	unk_0x9C9E32388A7886A2();
}

void func_13()
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	var uVar9;
	
	if (unk_0xD4B321D9096B01FC(uLocal_89))
	{
		if (unk_0x7FB035B5755E076D(uLocal_89))
		{
			unk_0xBD22862A2C5FD6DF(&uLocal_89);
		}
		else if (!unk_0xF4B969E0807E76C7(uLocal_89, 0) && !unk_0x2BF5E63466422C38(uLocal_90))
		{
			unk_0x82F9D7FF967D63BE(uLocal_89);
			unk_0x7D81B41B134BD6F2(uLocal_90, 1);
			Var0 = { unk_0xACE5E491FC1B0D37(uLocal_89, 1) };
			uVar9 = unk_0xD2809C7F7FD79247(uLocal_89);
			Var3 = { 0f, 500f, 50f };
			Var6 = { unk_0x16DECC52D9360F1E(Var0, uVar9, Var3) };
			unk_0x2042881C1FE6D05A(uLocal_90, uLocal_89, 0, 0, Var6, 4, 50f, -1f, 0f, 100, 50, -1082130432, 0);
		}
	}
	if (bLocal_95)
	{
		unk_0x497FAD093E19504A(102, "HelicopterTakeOff");
	}
}

