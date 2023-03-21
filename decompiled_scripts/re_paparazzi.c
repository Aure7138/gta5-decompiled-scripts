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
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
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
	struct<3> Local_43 = { 0, 0, 0 } ;
	float fLocal_46 = 0f;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	struct<3> Local_50 = { 0, 0, 0 } ;
	struct<3> Local_53 = { 0, 0, 0 } ;
	struct<3> Local_56 = { 0, 0, 0 } ;
	float fLocal_59 = 0f;
	struct<3> Local_60 = { 0, 0, 0 } ;
	struct<3> Local_63 = { 0, 0, 0 } ;
	struct<3> Local_66 = { 0, 0, 0 } ;
	int iLocal_69 = 0;
	bool bLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	struct<6> Local_75 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	struct<3> Local_87 = { 0, 0, 0 } ;
	float fLocal_90 = 0f;
	int iLocal_91 = 0;
	struct<3> Local_92 = { 0, 0, 0 } ;
	float fLocal_95 = 0f;
	int iLocal_96 = 0;
	var uLocal_97 = 15;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 1;
	struct<18> Local_131[4];
	struct<18> Local_204[8];
	int iLocal_349 = 0;
	int iLocal_350 = 0;
	int iLocal_351 = 0;
	int iLocal_352 = 0;
	int iLocal_353 = 0;
	int iLocal_354 = 0;
	int iLocal_355 = 0;
	int iLocal_356 = 0;
	int iLocal_357 = 0;
	int iLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	bool bLocal_368 = 0;
	int iLocal_369 = 0;
	int iLocal_370 = 0;
	char* sLocal_371 = NULL;
	char[] cLocal_372[8] = 0;
	char* sLocal_373 = NULL;
	char* sLocal_374 = NULL;
	int iLocal_375[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_385 = 0;
	int iLocal_386[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<10> Local_395[16];
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	int iLocal_560[3] = { 0, 0, 0 };
	int iLocal_564 = 0;
	int iLocal_565 = 0;
	int iLocal_566 = 0;
	int iLocal_567 = 0;
	int iLocal_568 = 0;
	float fLocal_569 = 0f;
	float fLocal_570 = 0f;
	int iLocal_571[2] = { 0, 0 };
	float fLocal_574 = 0f;
	struct<3> Local_575 = { 0, 0, 0 } ;
	struct<3> Local_578 = { 0, 0, 0 } ;
	struct<3> Local_581 = { 0, 0, 0 } ;
	struct<3> Local_584 = { 0, 0, 0 } ;
	struct<3> Local_587 = { 0, 0, 0 } ;
	struct<3> Local_590 = { 0, 0, 0 } ;
	struct<3> Local_593 = { 0, 0, 0 } ;
	struct<3> Local_596[4];
	float fLocal_609[4] = { 0f, 0f, 0f, 0f };
	int iLocal_614 = 0;
	int iLocal_615 = 0;
	int iLocal_616 = 0;
	int iLocal_617 = 0;
	int iLocal_618 = 0;
	int iLocal_619 = 0;
	var uLocal_620 = 0;
	int iLocal_621 = 0;
	int iLocal_622 = 0;
	int iLocal_623 = 0;
	int iLocal_624 = 0;
	var uLocal_625 = 0;
	char* sLocal_626[3] = { NULL, NULL, NULL };
	int iLocal_630 = 0;
	char* sLocal_631 = NULL;
	struct<3> Local_632 = { 0, 0, 0 } ;
	struct<3> Local_635 = { 0, 0, 0 } ;
	float fLocal_638 = 0f;
	struct<3> Local_639 = { 0, 0, 0 } ;
	struct<3> Local_642 = { 0, 0, 0 } ;
	float fLocal_645 = 0f;
	struct<3> Local_646 = { 0, 0, 0 } ;
	struct<3> Local_649 = { 0, 0, 0 } ;
	float fLocal_652 = 0f;
	struct<3> Local_653 = { 0, 0, 0 } ;
	struct<3> Local_656 = { 0, 0, 0 } ;
	int iLocal_659 = 0;
	int iLocal_660 = 0;
	float fLocal_661 = 0f;
	int iLocal_662 = 0;
	int iLocal_663 = 0;
	int iLocal_664 = 0;
	float fLocal_665 = 0f;
	int iLocal_666 = 0;
	int iLocal_667 = 0;
	bool bLocal_668 = 0;
	bool bLocal_669 = 0;
	int iLocal_670 = 0;
	int iLocal_671 = 0;
	int iLocal_672 = 0;
	int iLocal_673 = 0;
	struct<2> ScriptParam_0 = { 0, 5 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	char cVar2[24];
	
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
	iLocal_18 = 3;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_46 = -1f;
	Local_53 = { 226.6825f, 681.0297f, 188.4987f };
	Local_56 = { 231.8002f, 672.5261f, 188.9459f };
	fLocal_59 = 32.0905f;
	StringCopy(&Local_75, "", 24);
	Local_87 = { 259.4603f, 125.8718f, 100.9754f };
	fLocal_90 = 283.0367f;
	Local_92 = { 245.1998f, 76.8231f, 90.7069f };
	fLocal_95 = -18.4743f;
	cLocal_372 = "REPAPAU";
	sLocal_373 = "random@escape_paparazzi@standing@";
	sLocal_374 = "random@escape_paparazzi@incar@";
	iLocal_565 = 4000;
	fLocal_569 = 0f;
	fLocal_570 = 0f;
	fLocal_574 = 0f;
	Local_575 = { 272.6356f, 155.5618f, 103.3306f };
	Local_578 = { 247.5795f, 88.7094f, 92.9859f };
	Local_581 = { 259.0348f, 114.0369f, 98.9984f };
	Local_584 = { 255.4971f, 116.8744f, 99.8162f };
	Local_587 = { 266.8217f, 139.7698f, 103.2269f };
	Local_590 = { 270.0174f, 139.1181f, 103.2195f };
	Local_593 = { 265.4954f, 144.6143f, 103.3326f };
	sLocal_631 = "left_";
	Local_632 = { 261.9341f, 126.2429f, 95.15405f };
	Local_635 = { 270.6759f, 152.4763f, 109.2356f };
	fLocal_638 = 16f;
	Local_639 = { 261.9341f, 126.2429f, 107.6541f };
	Local_642 = { 248.354f, 87.01792f, 92.389f };
	fLocal_645 = 16f;
	Local_646 = { 256.6779f, 126.573f, 99.54784f };
	Local_649 = { 266.4471f, 123.412f, 105.6728f };
	fLocal_652 = 5.75f;
	Local_653 = { 260.242f, 127.423f, 101.65f };
	Local_656 = { 0f, 0f, -20f };
	Local_50 = { ScriptParam_0.f_1[0 /*3*/] };
	if (unk_0x76BF814AB8D4CAB8(11))
	{
		func_274();
	}
	func_273(&uLocal_97, 3);
	if (!Global_3)
	{
		if (func_231(Local_50, -1, 0, 0, 0))
		{
			func_228(-1);
		}
		else
		{
			unk_0x810C5D6462DD69E6();
		}
	}
	uLocal_365 = unk_0x1701E0E6A11D6B65(Vector(93.3633f, 82.5239f, 276.3459f) + Vector(10f, 10f, 10f), Vector(93.3633f, 82.5239f, 276.3459f) - Vector(10f, 10f, 10f), 0, 1, 1, 1);
	uLocal_366 = unk_0x1701E0E6A11D6B65(Vector(188.5935f, 675.8706f, 227.8598f) + Vector(4f, 4f, 4f), Vector(188.5935f, 675.8706f, 227.8598f) - Vector(4f, 4f, 4f), 0, 1, 1, 1);
	uLocal_367 = unk_0x1701E0E6A11D6B65(Vector(93.8361f, 92.1704f, 246.1673f) + Vector(6f, 6f, 6f), Vector(93.8361f, 92.1704f, 246.1673f) - Vector(6f, 6f, 6f), 0, 1, 1, 1);
	if (Global_3)
	{
		unk_0x7EE425AE3317BA69(246.1673f, 92.1704f, 93.8361f, 6f, 1, 0, 0, 0);
	}
	unk_0x3B4B46A2A779D56E(Vector(93.8361f, 92.1704f, 246.1673f) + Vector(6f, 6f, 6f), Vector(93.8361f, 92.1704f, 246.1673f) - Vector(6f, 6f, 6f), 0, 1);
	unk_0x6D7801DE0E52AE2C("WORLD_VEHICLE_DRIVE_SOLO", 0);
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_225(&uLocal_97);
		if (!func_224())
		{
			if (func_223())
			{
				func_274();
			}
		}
		unk_0x89FD0BC32FAB9F88("RE_EP", 0);
		iVar0 = 0;
		while (iVar0 < Local_131.f_0)
		{
			if (unk_0x31F12808DC47A9E5(Local_131[iVar0 /*18*/]) && !unk_0x74C2FE037DFC8B4A(Local_131[iVar0 /*18*/], 0))
			{
				Local_131[iVar0 /*18*/].f_8 = { unk_0x761660F5CE986DC4(Local_131[iVar0 /*18*/], 1) };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < Local_204.f_0)
		{
			if (unk_0x31F12808DC47A9E5(Local_204[iVar0 /*18*/]) && !unk_0x74C2FE037DFC8B4A(Local_204[iVar0 /*18*/], 0))
			{
				Local_204[iVar0 /*18*/].f_6 = { unk_0x761660F5CE986DC4(Local_204[iVar0 /*18*/], 1) };
			}
			iVar0++;
		}
		if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()) && !unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
		{
			Local_60 = { unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1) };
		}
		if (!unk_0x0FAE113CE72ED842(iLocal_86))
		{
			Local_63 = { unk_0x761660F5CE986DC4(iLocal_86, 1) };
		}
		if (unk_0x31F12808DC47A9E5(iLocal_91) && !unk_0x74C2FE037DFC8B4A(iLocal_91, 0))
		{
			Local_66 = { unk_0x761660F5CE986DC4(iLocal_91, 1) };
		}
		if (!func_224())
		{
			if (unk_0x6E65FD9B611945AD())
			{
				switch (iLocal_369)
				{
					case 0:
						if (func_214())
						{
							func_204();
							iLocal_369++;
						}
						else if (func_192())
						{
							func_274();
						}
						break;
					
					case 1:
						if ((func_191() || unk_0xFF3D7D0CFD33DE47(unk_0x8CFC7D6E1DA5D304()) > 0) || !unk_0xC4B84EB67F78C1F0(iLocal_91, 0))
						{
							if (!Global_3 && !bLocal_70)
							{
								func_190();
								func_274();
							}
						}
						else if (unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), 281.0074f, 192.4805f, 58.08817f, 228.8291f, 50.88667f, 111.6104f, 82.75f, 0, 1, 0))
						{
							func_181(1);
							uLocal_360 = func_180(iLocal_86, 0, 145);
							func_179("MAG_2_ESCAPE_PAP_GET_CAR");
							func_178(0);
						}
						break;
				}
			}
			else
			{
				func_274();
			}
		}
		else
		{
			unk_0x41C542213B94067C(unk_0x8CFC7D6E1DA5D304());
			switch (iLocal_47)
			{
				case 0:
					func_175();
					break;
				
				case 1:
					func_172();
					break;
				
				case 2:
					func_150();
					break;
				
				case 3:
					func_138();
					break;
				
				case 4:
					func_105();
					break;
				
				case 10:
					func_274();
					break;
				
				case 5:
					func_104();
					break;
				
				case 6:
					func_101(sLocal_371);
					break;
				
				case 7:
					func_100();
					break;
				
				case 9:
					break;
				
				case 8:
					if (func_99())
					{
						if (unk_0x31F12808DC47A9E5(iLocal_86))
						{
							unk_0x63C116C2153FAA3C(&iLocal_86);
						}
						func_75();
					}
					break;
				
				case 11:
					func_71();
					break;
			}
			if (!unk_0x8673F2F1802ADEF7(unk_0x18F7BE9ACB7D08F4(), Local_63, 210f, 210f, 210f, 0, 1, 0))
			{
				func_190();
				func_274();
			}
			if (((iLocal_47 != 5 && iLocal_47 != 6) && iLocal_47 != 10) && iLocal_47 != 7)
			{
				if (!Global_3 && !bLocal_70)
				{
					if (func_68(iLocal_86, 1, 1) || func_67())
					{
						if (iLocal_47 > 0)
						{
							func_178(5);
						}
						else
						{
							func_190();
							func_178(10);
						}
					}
					if (((iLocal_47 != 5 && iLocal_47 != 10) && iLocal_47 != 0) && iLocal_47 != 7)
					{
						if (func_63())
						{
							func_178(6);
						}
					}
				}
			}
		}
		func_25();
		if (iLocal_47 <= 0)
		{
			iVar1 = func_24();
			if (iVar1 != -1 && (iLocal_74 || func_19() != 0))
			{
				if ((!unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), 243.6443f, 123.7193f, 97.59898f, 262.4353f, 116.8746f, 107.4762f, 32.25f, 0, 1, 0) && (unk_0x5AFB8ED811F05E4D() - iLocal_564) > 5000) && !unk_0x0FAE113CE72ED842(Local_204[iVar1 /*18*/]))
				{
					if (unk_0xB7A628320EFF8E47(unk_0x761660F5CE986DC4(Local_204[iVar1 /*18*/], 1), Local_60) < (30.5f * 30.5f) && unk_0xB7A628320EFF8E47(Local_63, Local_60) > (22.5f * 22.5f))
					{
						if (func_224())
						{
							if (Local_395[4 /*10*/] != Local_204[iVar1 /*18*/])
							{
								func_18(&Local_395, 4);
								func_17(&Local_395, 4, Local_204[iVar1 /*18*/], "PAPARAZZO", 0, 1);
							}
							else if (!iLocal_663)
							{
								if (func_5(&Local_395, cLocal_372, "REPAP_CALL1", 1, 0, 0, 0))
								{
									iLocal_564 = unk_0x5AFB8ED811F05E4D();
									iLocal_663 = 1;
								}
							}
							else if (func_5(&Local_395, cLocal_372, "REPAP_CHAT", 1, 0, 0, 0))
							{
								iLocal_564 = unk_0x5AFB8ED811F05E4D();
							}
						}
						else
						{
							StringCopy(&cVar2, "REPAP_AZAA_0", 24);
							StringIntConCat(&cVar2, unk_0x61E9B3BFA06B017B(1, 13), 24);
							func_3(Local_204[iVar1 /*18*/], &cVar2, "PAPARAZZO", 24);
							iLocal_564 = unk_0x5AFB8ED811F05E4D();
						}
					}
				}
			}
		}
		if (iLocal_47 <= 1)
		{
			func_2();
		}
		func_1();
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1))
	{
		iVar0 = unk_0x9EA0BBD07AFF816B(unk_0x18F7BE9ACB7D08F4());
		if (unk_0xC4B84EB67F78C1F0(iVar0, 0))
		{
			iVar1 = unk_0x4983F8C51A0C0AF3(iVar0, 0, 0);
			if (!unk_0x0FAE113CE72ED842(iVar1))
			{
				if (iVar1 != unk_0x18F7BE9ACB7D08F4())
				{
					if (unk_0x90D1FDC9D31B7BE1(iVar1))
					{
						if (!unk_0xEA9676A7B6531DD8(iVar1, unk_0x18F7BE9ACB7D08F4()))
						{
							unk_0x6016A20BFEAEFE11(iVar1, unk_0x18F7BE9ACB7D08F4(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_2()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_204.f_0)
	{
		if (unk_0x31F12808DC47A9E5(Local_204[iVar0 /*18*/]))
		{
			if (unk_0x0A088F357EF627CA(Local_204[iVar0 /*18*/]) < Local_204[iVar0 /*18*/].f_17)
			{
				if (unk_0x1B843A60307EECA4(Local_204[iVar0 /*18*/], unk_0x18F7BE9ACB7D08F4(), 1))
				{
					iLocal_386[iVar0] = (iLocal_386[iVar0] + (Local_204[iVar0 /*18*/].f_17 - unk_0x0A088F357EF627CA(Local_204[iVar0 /*18*/])));
					iLocal_82 = (iLocal_82 + (Local_204[iVar0 /*18*/].f_17 - unk_0x0A088F357EF627CA(Local_204[iVar0 /*18*/])));
					unk_0xA3F48AA4B6323A62(Local_204[iVar0 /*18*/]);
					if (iLocal_386[iVar0] > iLocal_385)
					{
						iLocal_385 = iLocal_386[iVar0];
					}
				}
			}
			Local_204[iVar0 /*18*/].f_17 = unk_0x0A088F357EF627CA(Local_204[iVar0 /*18*/]);
		}
		iVar0++;
	}
}

void func_3(var uParam0, char[4] cParam1, char* sParam2, int iParam3)
{
	unk_0x40033E3EAE3C63BB(uParam0, cParam1, sParam2, func_4(iParam3), 0);
}

int func_4(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

bool func_5(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_16(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15763 = 0;
	Global_15765 = 0;
	Global_15770 = 0;
	Global_16747 = 0;
	Global_16749 = 0;
	Global_16753 = 0;
	Global_2621441 = 0;
	return func_6(sParam2, iParam3, 0);
}

int func_6(char* sParam0, int iParam1, bool bParam2)
{
	Global_15757 = 0;
	if (Global_15756 == 0 || Global_15758 == 2)
	{
		if (Global_15756 != 0)
		{
			if (iParam1 > Global_15758)
			{
				if (Global_15763 == 0)
				{
					unk_0xBE97F4E2B659331B(0);
					Global_14453.f_1 = 3;
					Global_15756 = 0;
					Global_15757 = 1;
					Global_15809 = 0;
					Global_15752 = 0;
					Global_15753 = 0;
					Global_15767 = 0;
					Global_15766 = 0;
					Global_14452 = 0;
				}
				else
				{
					func_15();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x85FDEF76CDBAD589())
		{
			return 0;
		}
		if (func_14(8, -1))
		{
			return 0;
		}
		Global_15832 = { Global_15826 };
		func_13();
		Global_15045 = { Global_15210 };
		Global_15762 = Global_15763;
		Global_15769 = Global_15770;
		Global_2621442 = Global_2621441;
		Global_15771 = { Global_15787 };
		Global_15764 = Global_15765;
		Global_16746 = Global_16747;
		Global_16754 = { Global_16760 };
		Global_16748 = Global_16749;
		Global_16750 = Global_16751;
		Global_16752 = Global_16753;
		Global_15375.f_370 = Global_16745;
		Global_15375.f_368 = Global_16743;
		Global_15375.f_369 = Global_16744;
		Global_15752 = Global_15753;
		if (Global_15762)
		{
			unk_0x62148293B793073B(&Global_2323, 20);
			unk_0x62148293B793073B(&Global_2324, 17);
			unk_0x62148293B793073B(&Global_2325, 0);
			if (bParam2)
			{
				func_11();
				if (Global_3128[Global_14453 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14453.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14419 == 1)
			{
				return 0;
			}
			if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
			{
				if (unk_0x38000067CDE001D0(unk_0x18F7BE9ACB7D08F4()))
				{
					return 0;
				}
				if (func_10())
				{
					return 0;
				}
				if (unk_0xAE8B7AC0DA6122BC(unk_0x18F7BE9ACB7D08F4()))
				{
					return 0;
				}
				if (unk_0x0B90D19A63676F41(unk_0x18F7BE9ACB7D08F4()))
				{
					return 0;
				}
				if (unk_0xDDA45FDD097F5240(unk_0x18F7BE9ACB7D08F4()))
				{
					return 0;
				}
				if (unk_0x34F40618CEEAB490(unk_0x18F7BE9ACB7D08F4(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_70852)
				{
					if (unk_0xE1F715CDDC50FD7F(unk_0x18F7BE9ACB7D08F4()))
					{
						return 0;
					}
					if (unk_0x869BE9FEE7F5316B(unk_0x8CFC7D6E1DA5D304()))
					{
						return 0;
					}
					if (unk_0xEEDFFBA2DC1CCDB0(unk_0x18F7BE9ACB7D08F4()))
					{
						return 0;
					}
					if (unk_0xAC991FD3AAB0DC56(unk_0x8CFC7D6E1DA5D304()))
					{
						return 0;
					}
				}
			}
			if (func_9())
			{
				return 0;
			}
			else
			{
				switch (Global_14453.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (unk_0xB03A1684359C50A1(Global_2323, 9))
				{
					return 0;
				}
			}
			func_8();
			Global_15766 = bParam2;
		}
		Global_15758 = iParam1;
		StringCopy(&Global_15375, sParam0, 24);
		Global_14622 = 0;
		func_7();
		return 1;
	}
	if (Global_15756 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15758 || iParam1 == Global_15758)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_15();
	}
	return 0;
}

void func_7()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14624[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xBE97F4E2B659331B(0);
	Global_15756 = 1;
}

void func_8()
{
	Global_15809 = Global_15808;
	Global_15803 = Global_15804;
	Global_15850 = { Global_15838 };
	Global_15856 = { Global_15844 };
	Global_15811 = Global_15810;
	Global_15880 = { Global_15862 };
	Global_15886 = { Global_15868 };
	Global_15892 = { Global_15874 };
	Global_15898 = { Global_15904 };
	Global_1638 = Global_1639;
	Global_1640 = Global_1641;
	Global_15767 = Global_15768;
	Global_15769 = Global_15770;
	Global_15771 = { Global_15787 };
	Global_15760 = Global_15761;
	Global_16772 = 0;
	Global_15805 = 0;
	Global_15806 = 0;
	unk_0x62148293B793073B(&Global_2324, 16);
}

int func_9()
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_10()
{
	int iVar0;
	int iVar1;
	
	if (Global_70852)
	{
		iVar0 = 0;
		unk_0x75CE6F8BEC2654E3(unk_0x18F7BE9ACB7D08F4(), &iVar1, 1);
		if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x4D73A339AD1764B4() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
	{
		if (unk_0x637828192EF718F7(unk_0x18F7BE9ACB7D08F4(), 78, 1))
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

void func_11()
{
	if (func_12(14))
	{
		if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			if (unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()) == Global_104551.f_28020[0 /*29*/])
			{
				Global_14453 = 0;
			}
			else if (unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()) == Global_104551.f_28020[1 /*29*/])
			{
				Global_14453 = 1;
			}
			else if (unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()) == Global_104551.f_28020[2 /*29*/])
			{
				Global_14453 = 2;
			}
			else
			{
				Global_14453 = 0;
			}
		}
	}
	else
	{
		Global_14453 = func_19();
		if (Global_14453 == 145)
		{
			Global_14453 = 3;
		}
		if (Global_70852)
		{
			Global_14453 = 3;
		}
		if (Global_14453 > 3)
		{
			Global_14453 = 3;
		}
	}
}

bool func_12(int iParam0)
{
	return Global_35859 == iParam0;
}

void func_13()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15045[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15045[iVar0 /*10*/].f_1), "", 24);
		Global_15045[iVar0 /*10*/].f_7 = 0;
		Global_15045[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15045.f_161 = -99;
	Global_15045.f_162 = { 0f, 0f, 0f };
}

bool func_14(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1357213.f_203[iParam1];
			}
			break;
	}
	return unk_0xB03A1684359C50A1(Global_1357213.f_1048, iParam0);
}

void func_15()
{
	unk_0x815093B4702C59D8();
	Global_16767 = 0;
	if ((unk_0x36328FCBA2944E1F() || Global_14453.f_1 == 9) || Global_14452 == 1)
	{
		unk_0xBE97F4E2B659331B(0);
		Global_15756 = 6;
		Global_14453.f_1 = 3;
		return;
	}
	if (unk_0x85FDEF76CDBAD589())
	{
		unk_0xBE97F4E2B659331B(1);
		Global_15756 = 6;
		return;
	}
}

void func_16(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15210 = { *uParam0 };
	Global_1639 = iParam1;
	StringCopy(&Global_15826, sParam2, 24);
	Global_16745 = iParam5;
	if (iParam3 == 0)
	{
		Global_16743 = 1;
		Global_16741 = 0;
	}
	else
	{
		Global_16743 = 0;
		Global_16741 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16744 = 1;
		Global_16742 = 0;
	}
	else
	{
		Global_16744 = 0;
		Global_16742 = 1;
	}
}

void func_17(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_70852)
	{
		if (!unk_0x0FAE113CE72ED842(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x38ADC0C5F4F08C6D(iParam2, 0);
			}
			else
			{
				unk_0x38ADC0C5F4F08C6D(iParam2, 1);
			}
		}
		if (!unk_0x0FAE113CE72ED842(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x971E3DC2097859E3(iParam2, 0);
			}
			else
			{
				unk_0x971E3DC2097859E3(iParam2, 1);
			}
		}
	}
}

void func_18(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

int func_19()
{
	func_20();
	return Global_104551.f_2353.f_539.f_4301;
}

void func_20()
{
	int iVar0;
	
	if (unk_0x31F12808DC47A9E5(unk_0x18F7BE9ACB7D08F4()))
	{
		if (func_23(Global_104551.f_2353.f_539.f_4301) != unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()))
		{
			iVar0 = func_22(unk_0x18F7BE9ACB7D08F4());
			if (func_21(iVar0) && (!func_12(14) || Global_103502))
			{
				if (Global_104551.f_2353.f_539.f_4301 != iVar0 && func_21(Global_104551.f_2353.f_539.f_4301))
				{
					Global_104551.f_2353.f_539.f_4302 = Global_104551.f_2353.f_539.f_4301;
				}
				Global_104551.f_2353.f_539.f_4303 = iVar0;
				Global_104551.f_2353.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_104551.f_2353.f_539.f_4301 != 145)
			{
				Global_104551.f_2353.f_539.f_4303 = Global_104551.f_2353.f_539.f_4301;
			}
			return;
		}
	}
	Global_104551.f_2353.f_539.f_4301 = 145;
}

bool func_21(int iParam0)
{
	return iParam0 < 3;
}

int func_22(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x31F12808DC47A9E5(uParam0))
	{
		iVar1 = unk_0x4F69FBD64CDF125B(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_23(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_23(int iParam0)
{
	if (func_21(iParam0))
	{
		return Global_104551.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_24()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar1 = -1;
	fVar2 = 999999f;
	iVar0 = 0;
	while (iVar0 < Local_204.f_0)
	{
		if ((unk_0x31F12808DC47A9E5(Local_204[iVar0 /*18*/]) && !unk_0x0FAE113CE72ED842(Local_204[iVar0 /*18*/])) && !unk_0x0FAE113CE72ED842(iLocal_86))
		{
			if (unk_0xB7A628320EFF8E47(Local_60, Local_204[iVar0 /*18*/].f_6) < fVar2)
			{
				fVar2 = unk_0xB7A628320EFF8E47(Local_63, Local_204[iVar0 /*18*/].f_6);
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_25()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	float fVar7;
	int iVar8;
	
	switch (iLocal_49)
	{
		case 0:
			iLocal_616 = 0;
			unk_0x9016574B77A748EE(joaat("a_m_y_genstreet_02"));
			unk_0x9016574B77A748EE(joaat("prop_pap_camera_01"));
			unk_0x9016574B77A748EE(joaat("cavalcade2"));
			unk_0x9016574B77A748EE(joaat("vader"));
			unk_0x831CD0FBFB26EC7E(sLocal_373);
			unk_0x831CD0FBFB26EC7E("random@paparazzi@pap_anims");
			if (((((unk_0xEDFE27D1AEA0EA7F(joaat("a_m_y_genstreet_02")) && unk_0xEDFE27D1AEA0EA7F(joaat("prop_pap_camera_01"))) && unk_0xEDFE27D1AEA0EA7F(joaat("cavalcade2"))) && unk_0xEDFE27D1AEA0EA7F(joaat("vader"))) && unk_0x028356968FDD2DF2(sLocal_373)) && unk_0x028356968FDD2DF2("random@paparazzi@pap_anims"))
			{
				Local_596[0 /*3*/] = { 266.6049f, 157.7677f, 104.2417f };
				Local_596[1 /*3*/] = { 280.2455f, 152.1227f, 103.7096f };
				Local_596[2 /*3*/] = { 223.2588f, 50.6347f, 83.6598f };
				Local_596[3 /*3*/] = { 244.1302f, 37.4709f, 83.4804f };
				fLocal_609[0] = -111.1625f;
				fLocal_609[1] = 68.857f;
				fLocal_609[2] = -108.2056f;
				fLocal_609[3] = 50.8189f;
				iVar0 = 0;
				while (iVar0 < Local_131.f_0)
				{
					func_62(iVar0);
					func_60(func_61(iVar0));
					func_60(func_59(iVar0));
					iVar0++;
				}
				iLocal_614 = 0;
				func_58(func_61(1), 274.9306f, 147.164f, 103.3794f, 2.2109f);
				func_58(func_59(1), 275.6894f, 148.1107f, 103.3723f, 117.9416f);
				func_58(func_59(2), Local_596[1 /*3*/], fLocal_609[1]);
				func_58(func_59(3), Local_596[1 /*3*/], fLocal_609[1]);
				func_57(0, Local_596[0 /*3*/], fLocal_609[0], 1);
				func_57(1, Local_596[1 /*3*/], fLocal_609[1], 0);
				unk_0x990FFD4FB6ADD630(func_56(0, 1), 265.408f, 151.2875f, 103.5673f, 1, 0, 0, 1);
				unk_0xB88121FF8A34A66F(func_56(0, 1), 217.1033f);
				unk_0x990FFD4FB6ADD630(func_56(2, 1), 245.9477f, 72.661f, 89.1067f, 1, 0, 0, 1);
				unk_0xB88121FF8A34A66F(func_56(2, 1), 38.6283f);
				unk_0x990FFD4FB6ADD630(func_56(3, 1), 244.1872f, 73.3336f, 89.0917f, 1, 0, 0, 1);
				unk_0xB88121FF8A34A66F(func_56(3, 1), 272.9875f);
				unk_0xB5746603774C4C9D(func_56(0, 1), "random@paparazzi@pap_anims", "base_pap", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0xB5746603774C4C9D(func_56(1, 0), "random@paparazzi@pap_anims", "pap_idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0xB5746603774C4C9D(func_56(1, 1), "random@paparazzi@pap_anims", "pap_idle_b", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0xB5746603774C4C9D(func_56(2, 1), "random@paparazzi@pap_anims", "pap_idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0xB5746603774C4C9D(func_56(3, 1), "random@paparazzi@pap_anims", "pap_idle_b", 8f, -8f, -1, 1, 0, 0, 0, 0);
				iLocal_49 = 1;
			}
			break;
		
		case 1:
			func_54(func_59(0), 265.408f, 151.2875f, 103.5673f, 217.1033f, "random@paparazzi@pap_anims", "base_pap", 0);
			func_54(func_61(1), 274.9306f, 147.164f, 103.3794f, 2.2109f, "random@paparazzi@pap_anims", "pap_idle_a", "base_pap");
			func_54(func_59(1), 277.1364f, 148.4023f, 103.3493f, 104.6318f, "random@paparazzi@pap_anims", "pap_idle_b", 0);
			func_54(func_59(2), 245.9477f, 72.661f, 89.1067f, 38.6283f, "random@paparazzi@pap_anims", "pap_idle_b", 0);
			func_54(func_59(3), 244.1872f, 73.3336f, 89.0917f, 272.9875f, "random@paparazzi@pap_anims", "pap_idle_a", 0);
			break;
		
		case 2:
			if (unk_0x31F12808DC47A9E5(Local_204[2 /*18*/].f_2))
			{
				if (!unk_0xBF0517F7142EEB5B(Local_204[2 /*18*/].f_2))
				{
					unk_0xA12407EB7D7CF146(Local_204[2 /*18*/].f_2, 1, 0);
				}
			}
			switch (iLocal_616)
			{
				case 0:
					if (!unk_0x0FAE113CE72ED842(func_56(1, 0)))
					{
						unk_0x267F7A2DFDFFB077(func_56(1, 0));
					}
					if (!unk_0x0FAE113CE72ED842(func_56(1, 1)))
					{
						unk_0x267F7A2DFDFFB077(func_56(1, 1));
					}
					if (!unk_0x31F12808DC47A9E5(Local_131[2 /*18*/]))
					{
						func_57(2, Local_596[2 /*3*/], fLocal_609[2], 0);
						if (unk_0xC4B84EB67F78C1F0(Local_131[2 /*18*/], 0))
						{
							func_58(func_61(2), unk_0x761660F5CE986DC4(Local_131[2 /*18*/], 1), 0f);
							unk_0x8D77EFA08616AD64(func_56(2, 0), Local_131[2 /*18*/], -1);
						}
					}
					if (!unk_0x31F12808DC47A9E5(Local_131[3 /*18*/]))
					{
						func_57(3, Local_596[3 /*3*/], fLocal_609[3], 0);
					}
					if (!unk_0x0FAE113CE72ED842(func_56(2, 1)))
					{
						unk_0xA303A4837FBB8DDE(func_56(2, 1), Local_581, 2f, -1, 0.25f, 0, 1193033728);
					}
					if (!unk_0x0FAE113CE72ED842(func_56(3, 1)))
					{
						unk_0xA303A4837FBB8DDE(func_56(3, 1), Local_584, 2f, -1, 0.25f, 0, 1193033728);
					}
					if (!unk_0x31F12808DC47A9E5(func_56(3, 0)))
					{
						func_58(func_61(3), 253.8376f, 85.4544f, 92.8933f, 85.1702f);
					}
					if (Global_3 || bLocal_70)
					{
						if (!unk_0x0FAE113CE72ED842(func_56(1, 0)))
						{
							unk_0xA303A4837FBB8DDE(func_56(1, 0), Local_587, 2f, 20000, 0.25f, 0, 1193033728);
						}
						if (!unk_0x0FAE113CE72ED842(func_56(1, 1)))
						{
							unk_0xA303A4837FBB8DDE(func_56(1, 1), Local_590, 2f, 20000, 0.25f, 0, 1193033728);
						}
						if (!unk_0x0FAE113CE72ED842(func_56(0, 1)))
						{
							unk_0xA303A4837FBB8DDE(func_56(0, 1), Local_593, 2f, 20000, 0.25f, 0, 1193033728);
						}
					}
					unk_0x5AE11BC36633DE4E(0);
					iVar1 = 0;
					while (iVar1 < Local_204.f_0)
					{
						if (unk_0x31F12808DC47A9E5(Local_204[iVar1 /*18*/]))
						{
							unk_0x39801E786EBB5201(Local_204[iVar1 /*18*/], "MAG_2_PAPARAZZI_GROUP", 0);
						}
						iVar1++;
					}
					iVar1 = 0;
					while (iVar1 < Local_131.f_0)
					{
						if (unk_0x31F12808DC47A9E5(Local_131[iVar1 /*18*/]))
						{
							unk_0x39801E786EBB5201(Local_131[iVar1 /*18*/], "MAG_2_PAPARAZZI_GROUP", 0);
						}
						iVar1++;
					}
					iLocal_616++;
					break;
				
				case 1:
					func_49();
					if ((unk_0xC4B84EB67F78C1F0(Local_131[0 /*18*/], 0) && !unk_0x0FAE113CE72ED842(func_56(0, 0))) && !unk_0x0FAE113CE72ED842(func_56(0, 1)))
					{
						if (!iLocal_571[1])
						{
							iLocal_571[1] = 1;
							unk_0x0F36ED260B9B4408(func_56(0, 0), Local_131[0 /*18*/], Local_575, 10f, 0, joaat("cavalcade2"), 786469, 2f, 10f);
						}
					}
					if ((unk_0xC4B84EB67F78C1F0(Local_131[2 /*18*/], 0) && !unk_0x0FAE113CE72ED842(func_56(2, 0))) && !unk_0x0FAE113CE72ED842(func_56(2, 1)))
					{
						if (!iLocal_571[0])
						{
							unk_0x0F36ED260B9B4408(func_56(2, 0), Local_131[2 /*18*/], Local_578, 10f, 0, joaat("cavalcade2"), 786469, 2f, 10f);
							iLocal_571[0] = 1;
						}
					}
					if (unk_0x31F12808DC47A9E5(iLocal_86) && !unk_0x0FAE113CE72ED842(iLocal_86))
					{
						func_46(iLocal_86, 6);
						if (Global_3 || bLocal_70)
						{
							if (!unk_0x0FAE113CE72ED842(func_56(1, 0)))
							{
								if (unk_0x8673F2F1802ADEF7(func_56(1, 0), Local_587, Global_22, 0, 1, 0))
								{
									func_45(iLocal_86, func_61(1));
								}
							}
							if (!unk_0x0FAE113CE72ED842(func_56(1, 1)))
							{
								if (unk_0x8673F2F1802ADEF7(func_56(1, 1), Local_590, Global_22, 0, 1, 0))
								{
									func_45(iLocal_86, func_59(1));
								}
							}
							if (!unk_0x0FAE113CE72ED842(func_56(0, 1)))
							{
								if (unk_0x8673F2F1802ADEF7(func_56(0, 1), Local_590, Global_22, 0, 1, 0))
								{
									func_45(iLocal_86, func_59(0));
								}
							}
						}
						else
						{
							func_46(iLocal_86, func_61(1));
							func_46(iLocal_86, func_59(1));
							if (unk_0xC9D9444186B5A374() > 1000)
							{
								func_46(iLocal_86, func_61(1));
							}
						}
					}
					if (unk_0xB7A628320EFF8E47(unk_0x761660F5CE986DC4(iLocal_91, 1), Local_87) < 9f)
					{
						if (unk_0x8673F2F1802ADEF7(func_56(2, 1), Local_581, Global_22, 0, 1, 0))
						{
							func_45(iLocal_86, func_59(2));
						}
						if (unk_0x8673F2F1802ADEF7(func_56(3, 1), Local_584, Global_22, 0, 1, 0))
						{
							func_45(iLocal_86, func_59(3));
						}
						if (unk_0x8673F2F1802ADEF7(func_56(0, 1), Local_584, Global_22, 0, 1, 0))
						{
							func_45(iLocal_86, func_59(0));
						}
					}
					else
					{
						if (!unk_0xB03A1684359C50A1(iLocal_619, 3))
						{
							unk_0x267F7A2DFDFFB077(Local_204[func_59(3) /*18*/]);
							unk_0xD2A9C3F486236CC5(&iLocal_619, 3);
						}
						if (!unk_0xB03A1684359C50A1(iLocal_619, 2))
						{
							unk_0x267F7A2DFDFFB077(Local_204[func_59(2) /*18*/]);
							unk_0xD2A9C3F486236CC5(&iLocal_619, 2);
						}
						if (!unk_0xB03A1684359C50A1(iLocal_619, 0))
						{
							unk_0x267F7A2DFDFFB077(Local_204[func_59(0) /*18*/]);
							unk_0xD2A9C3F486236CC5(&iLocal_619, 0);
						}
						if (Global_3 || bLocal_70)
						{
							func_45(iLocal_86, func_59(3));
						}
						else
						{
							func_46(iLocal_86, func_59(3));
						}
						func_46(iLocal_86, func_59(2));
						func_46(iLocal_86, func_59(0));
					}
					break;
			}
			func_44();
			break;
		
		case 3:
			func_49();
			if (unk_0xC4B84EB67F78C1F0(iLocal_91, 0))
			{
				if (unk_0x2A72627520A107B5(iLocal_91) < 1f)
				{
					fLocal_574 = (fLocal_574 + unk_0x64031EF2AE5F9603());
				}
				else if (fLocal_574 > 0f)
				{
					fLocal_574 = 0f;
				}
			}
			iVar0 = 0;
			while (iVar0 < Local_131.f_0)
			{
				if (unk_0x31F12808DC47A9E5(Local_131[iVar0 /*18*/]) && iLocal_47 != 6)
				{
					if ((iVar0 < 2 && ((iVar0 != iLocal_614 || !unk_0x31F12808DC47A9E5(Local_131[0 /*18*/])) || !unk_0x31F12808DC47A9E5(Local_131[1 /*18*/]))) && (unk_0x5AFB8ED811F05E4D() - iLocal_615) > 500)
					{
						if (unk_0xB7A628320EFF8E47(Local_60, Local_87) > 400f)
						{
							if (unk_0xB7A628320EFF8E47(Local_60, Local_87) < 62500f || (unk_0x5AFB8ED811F05E4D() - iLocal_370) < 30000)
							{
								func_40(Local_131[iVar0 /*18*/], iLocal_91, &(Local_131[iVar0 /*18*/].f_5), &(Local_131[iVar0 /*18*/].f_15), &(Local_131[iVar0 /*18*/].f_11), &(Local_131[iVar0 /*18*/].f_14), &(Local_131[iVar0 /*18*/].f_16), Local_131[iVar0 /*18*/].f_2, 800, 50f);
								iLocal_614 = iVar0;
								iLocal_615 = unk_0x5AFB8ED811F05E4D();
							}
						}
					}
					iVar2 = func_61(iVar0);
					if (!unk_0x0FAE113CE72ED842(Local_204[iVar2 /*18*/]))
					{
						iVar3 = func_59(iVar0);
					}
					else
					{
						iVar3 = func_61(iVar0);
					}
					switch (Local_131[iVar0 /*18*/].f_17)
					{
						case 0:
							if (unk_0xC4B84EB67F78C1F0(Local_131[iVar0 /*18*/], 0))
							{
								if (!unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), Local_131[iVar0 /*18*/], 0))
								{
									if (!unk_0x0FAE113CE72ED842(Local_204[iVar2 /*18*/]))
									{
										if (!unk_0x88B79D32B518C327(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], 0))
										{
											if (unk_0x2BBAA45ECDE3DAE2(Local_204[iVar2 /*18*/], -1794415470) != 1 && unk_0x74B8CA477787A438(Local_131[iVar0 /*18*/], -1, 0))
											{
												unk_0xFDBDFC454E44A5BF(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], -1, -1, 2f, 1, 0);
											}
										}
									}
									if (iVar3 != -1)
									{
										if (!unk_0x0FAE113CE72ED842(Local_204[iVar3 /*18*/]))
										{
											if (!unk_0x88B79D32B518C327(Local_204[iVar3 /*18*/], Local_131[iVar0 /*18*/], 0))
											{
												if (unk_0x2BBAA45ECDE3DAE2(Local_204[iVar3 /*18*/], -1794415470) != 1 && unk_0x74B8CA477787A438(Local_131[iVar0 /*18*/], 0, 0))
												{
													unk_0xFDBDFC454E44A5BF(Local_204[iVar3 /*18*/], Local_131[iVar0 /*18*/], -1, 0, 2f, 1, 0);
												}
											}
										}
										if (!unk_0x0FAE113CE72ED842(Local_204[iVar2 /*18*/]) && (iVar3 != -1 && !unk_0x0FAE113CE72ED842(Local_204[iVar3 /*18*/])))
										{
											if ((unk_0x88B79D32B518C327(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], 0) && (iVar3 != -1 && unk_0x88B79D32B518C327(Local_204[iVar3 /*18*/], Local_131[iVar0 /*18*/], 0))) && unk_0xC4B84EB67F78C1F0(iLocal_91, 0))
											{
												if (unk_0x2BBAA45ECDE3DAE2(Local_204[iVar2 /*18*/], -1273030092) != 1 && unk_0x2BBAA45ECDE3DAE2(Local_204[iVar2 /*18*/], -1817882002) != 1)
												{
													unk_0x273FE09AE985A00A(Local_204[iVar2 /*18*/], 3, 0);
													unk_0x273FE09AE985A00A(Local_204[iVar2 /*18*/], 1, 1);
													unk_0x273FE09AE985A00A(Local_204[iVar2 /*18*/], 2, 0);
													if (iVar0 == 0)
													{
														unk_0x8A58BE5F8F3F4E69(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], iLocal_91, 10, 50f, 786471, 4f, 10f, 1);
													}
													else if (iVar0 == 1)
													{
														unk_0x8A58BE5F8F3F4E69(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], iLocal_91, 11, 50f, 786470, 4f, 10f, 1);
													}
													else if (iVar0 == 2)
													{
														unk_0x8A58BE5F8F3F4E69(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], iLocal_91, 10, 50f, 786471, 4f, 10f, 1);
													}
													else if (iVar0 == 3)
													{
														unk_0x8A58BE5F8F3F4E69(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], iLocal_91, 11, 50f, 786470, 4f, 10f, 1);
													}
												}
												unk_0x9128498462268F73(Local_204[iVar2 /*18*/], func_39((3f * unk_0x15EE504466B7BBD3(Local_66, Local_131[iVar0 /*18*/].f_8, 1)), 50f, 120f));
											}
										}
									}
									if (fLocal_574 > 3f && unk_0x2A488C176D52CCA5(Local_131[iVar0 /*18*/].f_8, Local_66) < 10f)
									{
										Local_131[iVar0 /*18*/].f_17 = 1;
									}
								}
							}
							else
							{
								if (!unk_0x0FAE113CE72ED842(Local_204[iVar2 /*18*/]))
								{
									if (!unk_0x3ECC58F70B51B88E(Local_204[iVar2 /*18*/]))
									{
										unk_0x470C9634914699C0(Local_204[iVar2 /*18*/], 2, 0);
										unk_0x9603FB72C3126396(Local_204[iVar2 /*18*/], unk_0x18F7BE9ACB7D08F4(), 300f, 100000, 0, 0);
									}
								}
								if (iVar3 != -1)
								{
									if (!unk_0x0FAE113CE72ED842(Local_204[iVar3 /*18*/]))
									{
										if (!unk_0x3ECC58F70B51B88E(Local_204[iVar3 /*18*/]))
										{
											unk_0x470C9634914699C0(Local_204[iVar3 /*18*/], 2, 0);
											unk_0x9603FB72C3126396(Local_204[iVar3 /*18*/], unk_0x18F7BE9ACB7D08F4(), 300f, 100000, 0, 0);
										}
									}
								}
							}
							break;
						
						case 1:
							if (unk_0x657B649BA2AD3582(Local_204[iVar2 /*18*/], 0))
							{
								unk_0x5941F8B2A813BBA8(Local_204[iVar2 /*18*/], 1, 256);
							}
							else
							{
								func_46(iLocal_86, iVar2);
							}
							if (iVar3 != -1)
							{
								if (!unk_0x0FAE113CE72ED842(Local_204[iVar3 /*18*/]))
								{
									if (unk_0x657B649BA2AD3582(Local_204[iVar3 /*18*/], 0))
									{
										unk_0x5941F8B2A813BBA8(Local_204[iVar3 /*18*/], 0, 256);
									}
									else
									{
										func_46(iLocal_86, iVar3);
									}
								}
							}
							if (unk_0xC4B84EB67F78C1F0(Local_131[iVar0 /*18*/], 0))
							{
								if (unk_0x2A488C176D52CCA5(Local_131[iVar0 /*18*/].f_8, Local_66) > 15f)
								{
									Local_131[iVar0 /*18*/].f_17 = 0;
								}
							}
							break;
					}
					if ((!unk_0x0FAE113CE72ED842(Local_204[iVar2 /*18*/]) && (iVar3 == -1 || !unk_0x0FAE113CE72ED842(Local_204[iVar3 /*18*/]))) && unk_0xC4B84EB67F78C1F0(Local_131[iVar0 /*18*/], 0))
					{
						iVar4 = 1;
						if (!unk_0xD76674575E7BA743(Local_204[iVar2 /*18*/]))
						{
							iVar4 = 0;
						}
						if (iVar3 != -1)
						{
							if (!unk_0xD76674575E7BA743(Local_204[iVar3 /*18*/]))
							{
								iVar4 = 0;
							}
						}
						if (!unk_0xD76674575E7BA743(Local_131[iVar0 /*18*/]))
						{
							iVar4 = 0;
						}
						if ((iVar4 && unk_0x2A488C176D52CCA5(Local_60, Local_131[iVar0 /*18*/].f_8) > 25f) && unk_0x2A488C176D52CCA5(Local_60, Local_204[iVar0 /*18*/].f_6) > 25f)
						{
							if (!unk_0x88B79D32B518C327(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], 0))
							{
								unk_0x8D77EFA08616AD64(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], -1);
							}
							if (iVar3 != -1)
							{
								if (!unk_0x88B79D32B518C327(Local_204[iVar3 /*18*/], Local_131[iVar0 /*18*/], 0))
								{
									unk_0x8D77EFA08616AD64(Local_204[iVar3 /*18*/], Local_131[iVar0 /*18*/], 0);
								}
							}
						}
					}
					if (func_38(iVar0, 1125515264))
					{
						func_37(iVar0);
					}
				}
				func_44();
				func_29();
				iVar0++;
			}
			break;
		
		case 4:
			func_49();
			if (!iLocal_618)
			{
				iVar0 = 0;
				while (iVar0 < Local_131.f_0)
				{
					iVar5 = func_61(iVar0);
					if (!unk_0x0FAE113CE72ED842(Local_204[iVar5 /*18*/]))
					{
						iVar6 = func_59(iVar0);
					}
					else
					{
						iVar6 = func_61(iVar0);
					}
					if (unk_0xC4B84EB67F78C1F0(Local_131[iVar0 /*18*/], 0))
					{
						if (!unk_0x0FAE113CE72ED842(Local_204[iVar5 /*18*/]))
						{
							if (!unk_0x88B79D32B518C327(Local_204[iVar5 /*18*/], Local_131[iVar0 /*18*/], 0))
							{
								if (unk_0x2BBAA45ECDE3DAE2(Local_204[iVar5 /*18*/], -1794415470) != 1)
								{
									unk_0xFDBDFC454E44A5BF(Local_204[iVar5 /*18*/], Local_131[iVar0 /*18*/], -1, -1, 2f, 1, 0);
								}
							}
						}
						if (iVar6 != -1)
						{
							if (!unk_0x0FAE113CE72ED842(Local_204[iVar6 /*18*/]))
							{
								if (!unk_0x88B79D32B518C327(Local_204[iVar6 /*18*/], Local_131[iVar0 /*18*/], 0))
								{
									if (unk_0x2BBAA45ECDE3DAE2(Local_204[iVar6 /*18*/], -1794415470) != 1)
									{
										unk_0xFDBDFC454E44A5BF(Local_204[iVar6 /*18*/], Local_131[iVar0 /*18*/], -1, 0, 2f, 1, 0);
									}
								}
							}
							if (!unk_0x0FAE113CE72ED842(Local_204[iVar5 /*18*/]) && (iVar6 != -1 && !unk_0x0FAE113CE72ED842(Local_204[iVar6 /*18*/])))
							{
								if ((unk_0x88B79D32B518C327(Local_204[iVar5 /*18*/], Local_131[iVar0 /*18*/], 0) && (iVar6 != -1 && unk_0x88B79D32B518C327(Local_204[iVar6 /*18*/], Local_131[iVar0 /*18*/], 0))) && unk_0xC4B84EB67F78C1F0(iLocal_91, 0))
								{
									fVar7 = func_39((70f - (unk_0xBBDA792448DB5A89((unk_0x5AFB8ED811F05E4D() - iLocal_85)) / 50f)), 0f, 70f);
									if (fVar7 <= 1f || (unk_0x5AFB8ED811F05E4D() - iLocal_85) > 4000)
									{
										unk_0x9F09946BCB706BA4(Local_204[iVar5 /*18*/], fVar7);
										iVar8 = 0;
										while (iVar8 < Local_131.f_0)
										{
											if ((unk_0xC4B84EB67F78C1F0(Local_131[iVar8 /*18*/], 0) && !unk_0x0FAE113CE72ED842(func_56(iVar8, 0))) && unk_0x88B79D32B518C327(func_56(iVar8, 0), Local_131[iVar8 /*18*/], 0))
											{
												unk_0x267F7A2DFDFFB077(func_56(iVar8, 0));
												unk_0x8A58BE5F8F3F4E69(func_56(iVar8, 0), Local_131[iVar8 /*18*/], 0, 5, 10f, 786468, 10f, 10f, 1);
											}
											iVar8++;
										}
										iLocal_618 = 1;
									}
									else if (unk_0x2BBAA45ECDE3DAE2(Local_204[iVar5 /*18*/], -1273030092) != 1 && unk_0x2BBAA45ECDE3DAE2(Local_204[iVar5 /*18*/], -1817882002) != 1)
									{
										unk_0x273FE09AE985A00A(Local_204[iVar5 /*18*/], 3, 0);
										unk_0x273FE09AE985A00A(Local_204[iVar5 /*18*/], 1, 1);
										unk_0x273FE09AE985A00A(Local_204[iVar5 /*18*/], 2, 0);
										if (iVar0 == 0)
										{
											unk_0x8A58BE5F8F3F4E69(Local_204[iVar5 /*18*/], Local_131[iVar0 /*18*/], iLocal_91, 10, fVar7, 786471, 4f, 10f, 1);
										}
										else if (iVar0 == 1)
										{
											unk_0x8A58BE5F8F3F4E69(Local_204[iVar5 /*18*/], Local_131[iVar0 /*18*/], iLocal_91, 11, fVar7, 786470, 4f, 10f, 1);
										}
										else if (iVar0 == 2)
										{
											unk_0x8A58BE5F8F3F4E69(Local_204[iVar5 /*18*/], Local_131[iVar0 /*18*/], iLocal_91, 10, fVar7, 786471, 4f, 10f, 1);
										}
										else if (iVar0 == 3)
										{
											unk_0x8A58BE5F8F3F4E69(Local_204[iVar5 /*18*/], Local_131[iVar0 /*18*/], iLocal_91, 11, fVar7, 786470, 4f, 10f, 1);
										}
									}
								}
							}
						}
					}
					else
					{
						if (!unk_0x0FAE113CE72ED842(Local_204[iVar5 /*18*/]))
						{
							if (!unk_0x3ECC58F70B51B88E(Local_204[iVar5 /*18*/]))
							{
								unk_0x470C9634914699C0(Local_204[iVar5 /*18*/], 2, 0);
								unk_0x9603FB72C3126396(Local_204[iVar5 /*18*/], unk_0x18F7BE9ACB7D08F4(), 300f, 100000, 0, 0);
							}
						}
						if (iVar6 != -1)
						{
							if (!unk_0x0FAE113CE72ED842(Local_204[iVar6 /*18*/]))
							{
								if (!unk_0x3ECC58F70B51B88E(Local_204[iVar6 /*18*/]))
								{
									unk_0x470C9634914699C0(Local_204[iVar6 /*18*/], 2, 0);
									unk_0x9603FB72C3126396(Local_204[iVar6 /*18*/], unk_0x18F7BE9ACB7D08F4(), 300f, 100000, 0, 0);
								}
							}
						}
					}
					iVar0++;
				}
			}
			else
			{
				if (func_38(iLocal_617, 10f))
				{
					func_37(iLocal_617);
				}
				iLocal_617++;
				if (iLocal_617 > 3)
				{
					iLocal_617 = 0;
				}
			}
			func_44();
			func_29();
			break;
		
		case 6:
			if (func_38(iLocal_617, 1125515264))
			{
				func_37(iLocal_617);
			}
			iLocal_617++;
			if (iLocal_617 > 3)
			{
				iLocal_617 = 0;
			}
			break;
	}
	iVar0 = 0;
	while (iVar0 < Local_204.f_0)
	{
		if (unk_0x31F12808DC47A9E5(Local_204[iVar0 /*18*/]) && !unk_0x0FAE113CE72ED842(Local_204[iVar0 /*18*/]))
		{
			if (iLocal_49 > 1)
			{
				if (!unk_0xFAFFA408239A026B(sLocal_373))
				{
					func_28(iVar0);
					if (unk_0x31F12808DC47A9E5(Local_204[iVar0 /*18*/].f_2) && unk_0x4A296E47F281D02F(Local_204[iVar0 /*18*/].f_2))
					{
						if (!unk_0x657B649BA2AD3582(Local_204[iVar0 /*18*/], 0))
						{
							if (unk_0xBF0517F7142EEB5B(Local_204[iVar0 /*18*/].f_2))
							{
								if (unk_0xE8BE423677E08365(Local_204[iVar0 /*18*/]))
								{
									unk_0xA12407EB7D7CF146(Local_204[iVar0 /*18*/].f_2, 0, 0);
								}
							}
							else if (!unk_0xE8BE423677E08365(Local_204[iVar0 /*18*/]))
							{
								unk_0xA12407EB7D7CF146(Local_204[iVar0 /*18*/].f_2, 1, 0);
							}
							if (!unk_0xD76674575E7BA743(Local_204[iVar0 /*18*/]))
							{
								if (!unk_0xDFEB6D8BCE2B43F6(Local_204[iVar0 /*18*/], sLocal_373, func_27(iVar0), 3))
								{
									if (!Local_204[iVar0 /*18*/].f_11)
									{
										if (!unk_0xDFEB6D8BCE2B43F6(Local_204[iVar0 /*18*/], sLocal_373, "grip", 3))
										{
											unk_0xB5746603774C4C9D(Local_204[iVar0 /*18*/], sLocal_373, "grip", 1000f, -1000f, -1, 57, 0, 0, 0, 0);
											Local_204[iVar0 /*18*/].f_11 = 1;
										}
									}
								}
								else if (Local_204[iVar0 /*18*/].f_11)
								{
									unk_0xB5746603774C4C9D(Local_204[iVar0 /*18*/], sLocal_373, "grip", 1000f, -1000f, -1, 48, 0.99f, 0, 0, 0);
									Local_204[iVar0 /*18*/].f_11 = 0;
								}
							}
							if (!Local_204[iVar0 /*18*/].f_10)
							{
								unk_0xAF7A6815AB6F3A4D(sLocal_373);
								if (unk_0x4293800C1E4028DC(sLocal_373))
								{
									unk_0xAF990E1D158E1C0A(Local_204[iVar0 /*18*/], sLocal_373);
									Local_204[iVar0 /*18*/].f_10 = 1;
								}
							}
						}
						else
						{
							if (Local_204[iVar0 /*18*/].f_11)
							{
								unk_0xB5746603774C4C9D(Local_204[iVar0 /*18*/], sLocal_373, "grip", 1000f, -1000f, -1, 48, 0.99f, 0, 0, 0);
								Local_204[iVar0 /*18*/].f_11 = 0;
							}
							if (Local_204[iVar0 /*18*/].f_10)
							{
								unk_0x556BC47D0F6F3390(Local_204[iVar0 /*18*/]);
								Local_204[iVar0 /*18*/].f_10 = 0;
							}
						}
						if (unk_0x1A7B277A2CBA7ADF(Local_204[iVar0 /*18*/]) && func_26(Local_204[iVar0 /*18*/], unk_0x5AD687C3474F04B4(Local_204[iVar0 /*18*/], 0)) == -1)
						{
							if (unk_0xBF0517F7142EEB5B(Local_204[iVar0 /*18*/].f_2))
							{
								unk_0xA12407EB7D7CF146(Local_204[iVar0 /*18*/].f_2, 0, 0);
							}
						}
						else if (!unk_0xBF0517F7142EEB5B(Local_204[iVar0 /*18*/].f_2))
						{
							unk_0xA12407EB7D7CF146(Local_204[iVar0 /*18*/].f_2, 1, 0);
						}
					}
					else
					{
						if (Local_204[iVar0 /*18*/].f_11)
						{
							unk_0xB5746603774C4C9D(Local_204[iVar0 /*18*/], sLocal_373, "grip", 1000f, -1000f, -1, 48, 0.99f, 0, 0, 0);
							Local_204[iVar0 /*18*/].f_11 = 0;
						}
						if (Local_204[iVar0 /*18*/].f_10)
						{
							unk_0x556BC47D0F6F3390(Local_204[iVar0 /*18*/]);
							Local_204[iVar0 /*18*/].f_10 = 0;
						}
					}
				}
			}
			if (iLocal_47 != 7)
			{
				if (unk_0x422DF8890E5A5CBB(Local_204[iVar0 /*18*/]) && unk_0x5C2D0AADFCB62886(unk_0x18F7BE9ACB7D08F4()))
				{
					func_178(7);
				}
			}
		}
		iVar0++;
	}
	if (iLocal_47 != 7)
	{
		iVar0 = 0;
		while (iVar0 < Local_131.f_0)
		{
			if (unk_0x31F12808DC47A9E5(Local_131[iVar0 /*18*/]))
			{
				if (unk_0xC4B84EB67F78C1F0(Local_131[iVar0 /*18*/], 0))
				{
					if (unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), Local_131[iVar0 /*18*/], 0))
					{
						func_178(7);
					}
				}
			}
			iVar0++;
		}
	}
}

int func_26(int iParam0, int iParam1)
{
	if (!unk_0x74C2FE037DFC8B4A(iParam0, 0) && !unk_0x74C2FE037DFC8B4A(iParam1, 0))
	{
		if (unk_0x160400EAEE246B4D(iParam0, iParam1))
		{
			if (unk_0x4983F8C51A0C0AF3(iParam1, -1, 0) == iParam0)
			{
				return -1;
			}
			if (unk_0x4983F8C51A0C0AF3(iParam1, 0, 0) == iParam0)
			{
				return 0;
			}
			if (unk_0x4983F8C51A0C0AF3(iParam1, 1, 0) == iParam0)
			{
				return 1;
			}
			if (unk_0x4983F8C51A0C0AF3(iParam1, 2, 0) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

char* func_27(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 5:
			return "idle_a";
			break;
		
		case 1:
		case 6:
			return "idle_b";
			break;
		
		case 2:
		case 7:
			return "idle_c";
			break;
		
		case 3:
			return "idle_d";
			break;
		
		case 4:
			return "idle_e";
			break;
		
		default:
			break;
	}
	return "";
}

void func_28(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xB03A1684359C50A1(Local_204[iParam0 /*18*/].f_15, iVar0))
		{
			iVar1 = 5;
			iVar2 = (iVar1 + iLocal_375);
			iVar3 = iVar0;
			if (iVar3 < iVar1)
			{
				if (unk_0xDFEB6D8BCE2B43F6(Local_204[iParam0 /*18*/], sLocal_373, func_27(iParam0), 3))
				{
					if (unk_0xE825CDE0EAED051D(Local_204[iParam0 /*18*/], sLocal_373, func_27(iParam0)) > 0.9f)
					{
						unk_0x62148293B793073B(&(Local_204[iParam0 /*18*/].f_15), iVar0);
					}
				}
			}
			else if (iVar3 < iVar2)
			{
				if (unk_0xDFEB6D8BCE2B43F6(Local_204[iParam0 /*18*/], sLocal_374, iLocal_375[(iVar3 - iVar1)], 3))
				{
					if (unk_0xE825CDE0EAED051D(Local_204[iParam0 /*18*/], sLocal_374, iLocal_375[(iVar3 - iVar1)]) > 0.9f)
					{
						unk_0x62148293B793073B(&(Local_204[iParam0 /*18*/].f_15), iVar0);
					}
				}
			}
			else if (!unk_0xDFEB6D8BCE2B43F6(Local_204[iParam0 /*18*/], sLocal_373, "grip", 3))
			{
				unk_0x62148293B793073B(&(Local_204[iParam0 /*18*/].f_15), iVar0);
			}
		}
		iVar0++;
	}
}

void func_29()
{
	int iVar0;
	
	if (!unk_0x0FAE113CE72ED842(iLocal_86))
	{
		iVar0 = func_59(iLocal_568);
		if (((unk_0x31F12808DC47A9E5(Local_131[iLocal_568 /*18*/]) && unk_0xC4B84EB67F78C1F0(Local_131[iLocal_568 /*18*/], 0)) && unk_0x31F12808DC47A9E5(Local_204[iVar0 /*18*/])) && !unk_0x0FAE113CE72ED842(Local_204[iVar0 /*18*/]))
		{
			if (unk_0x0665EB554F07889E(Local_131[iLocal_568 /*18*/], joaat("cavalcade2")))
			{
				if (unk_0xB7A628320EFF8E47(Local_204[iVar0 /*18*/].f_6, Local_63) < unk_0xE3621CC40F31FE2E(30f, 2f) && unk_0x4983F8C51A0C0AF3(Local_131[iLocal_568 /*18*/], 0, 0) == Local_204[iVar0 /*18*/])
				{
					if (!Local_204[iVar0 /*18*/].f_9)
					{
						if (!func_36(iVar0))
						{
							func_30(iVar0);
						}
					}
					else if (!func_36(iVar0) && (unk_0x5AFB8ED811F05E4D() - Local_204[iVar0 /*18*/].f_13) > 1000)
					{
						if (!unk_0xDFEB6D8BCE2B43F6(Local_204[iVar0 /*18*/], sLocal_374, "base", 3))
						{
							unk_0xB5746603774C4C9D(Local_204[iVar0 /*18*/], sLocal_374, "base", 8f, 1000f, -1, 16, 0, 0, 0, 0);
						}
					}
				}
			}
			else if (!Local_204[iVar0 /*18*/].f_9)
			{
				if (unk_0xB7A628320EFF8E47(Local_204[iVar0 /*18*/].f_6, Local_63) < unk_0xE3621CC40F31FE2E(30f, 2f) && unk_0x4983F8C51A0C0AF3(Local_131[iLocal_568 /*18*/], 0, 0) == Local_204[iVar0 /*18*/])
				{
					unk_0x3394C23916A2F7D1(Local_204[iVar0 /*18*/], "random@paparazzi@pap_anims", "sweep_low", "sweep_med", "sweep_high", -1, iLocal_86, 1070134723, 1048576000);
					Local_204[iVar0 /*18*/].f_9 = 1;
					Local_204[iVar0 /*18*/].f_13 = unk_0x5AFB8ED811F05E4D();
				}
			}
			else if (Local_204[iVar0 /*18*/].f_9)
			{
				if ((unk_0x5AFB8ED811F05E4D() - Local_204[iVar0 /*18*/].f_13) > 2000)
				{
					Local_204[iVar0 /*18*/].f_9 = 0;
				}
			}
		}
		iLocal_568++;
		if (iLocal_568 >= Local_131.f_0)
		{
			iLocal_568 = 0;
		}
	}
}

void func_30(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	float fVar7;
	
	if (!unk_0x0FAE113CE72ED842(Local_204[iParam0 /*18*/]) && !unk_0x0FAE113CE72ED842(iLocal_86))
	{
		iVar0 = 15;
		Var1 = { Local_63 - Local_204[iParam0 /*18*/].f_6 };
		Var4 = { unk_0x9B40AD9E8738972C(Local_204[iParam0 /*18*/]) };
		fVar7 = func_34(Var4, Var1);
		if (unk_0x36E1A96E1D63ED91(fVar7) < 10f)
		{
			iVar0 = 5;
		}
		else if (fVar7 >= 10f && fVar7 < 60f)
		{
			iVar0 = 7;
		}
		else if (fVar7 >= 60f && fVar7 < 100f)
		{
			iVar0 = 6;
		}
		else if (fVar7 <= -10f && fVar7 > -60f)
		{
			iVar0 = 10;
		}
		else if (fVar7 < -60f && fVar7 > -100f)
		{
			iVar0 = 9;
		}
		if (iVar0 != 15)
		{
			func_31(iParam0, iVar0);
		}
	}
}

void func_31(int iParam0, int iParam1)
{
	if (iParam1 < 15)
	{
		if (!unk_0xB03A1684359C50A1(Local_204[iParam0 /*18*/].f_15, iParam1))
		{
			if (func_33(iParam1))
			{
				unk_0xB5746603774C4C9D(Local_204[iParam0 /*18*/], sLocal_374, iLocal_375[func_32(iParam1)], 4f, -4f, -1, 16, 0, 0, 0, 0);
			}
			else if (iParam1 < 5)
			{
				unk_0xB5746603774C4C9D(Local_204[iParam0 /*18*/], sLocal_373, func_27(iParam0), 8f, -8f, -1, 0, 0, 0, 0, 0);
			}
			else
			{
				unk_0xB5746603774C4C9D(Local_204[iParam0 /*18*/], sLocal_373, "grip", 1000f, -1000f, -1, 57, 0, 0, 0, 0);
			}
			Local_204[iParam0 /*18*/].f_15 = 0;
			unk_0xD2A9C3F486236CC5(&(Local_204[iParam0 /*18*/].f_15), iParam1);
		}
	}
}

int func_32(int iParam0)
{
	return (iParam0 - 5);
}

bool func_33(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	return (iVar0 >= 5 && iVar0 < (5 + iLocal_375));
}

float func_34(struct<3> Param0, struct<3> Param3)
{
	float fVar0;
	
	Param0 = { func_35(Param0) };
	Param3 = { func_35(Param3) };
	fVar0 = (unk_0xE3269852A87D46D2(Param3.f_1, Param3.f_0) - unk_0xE3269852A87D46D2(Param0.f_1, Param0.f_0));
	if (fVar0 > 180f)
	{
		fVar0 = (fVar0 - 360f);
	}
	else if (fVar0 < -180f)
	{
		fVar0 = (fVar0 + 360f);
	}
	return fVar0;
}

Vector3 func_35(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = unk_0x652D2EEEF1D3E62C(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.f_0 = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

bool func_36(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	if (!unk_0xFAFFA408239A026B(sLocal_374))
	{
		iVar1 = 5;
		while (iVar1 <= 13)
		{
			if (!bVar0)
			{
				if (unk_0xB03A1684359C50A1(Local_204[iParam0 /*18*/].f_15, iVar1))
				{
					bVar0 = true;
				}
			}
			iVar1++;
		}
	}
	return bVar0;
}

void func_37(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x31F12808DC47A9E5(Local_131[iParam0 /*18*/]) && unk_0xD76674575E7BA743(Local_131[iParam0 /*18*/]))
	{
		unk_0xBECECD970F645217(&(Local_131[iParam0 /*18*/]));
	}
	if (unk_0xE769D9B5158D0F11(Local_131[iParam0 /*18*/].f_1))
	{
		unk_0x40D517D991458154(&(Local_131[iParam0 /*18*/].f_1));
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (iVar0 == 1)
		{
			iVar1 = func_59(iParam0);
		}
		else
		{
			iVar1 = func_61(iParam0);
		}
		if (unk_0x31F12808DC47A9E5(Local_204[iVar1 /*18*/]) && unk_0xD76674575E7BA743(Local_204[iVar1 /*18*/]))
		{
			if (unk_0x31F12808DC47A9E5(Local_204[iVar1 /*18*/]))
			{
				unk_0x5BE35A26B9097351(&(Local_204[iVar1 /*18*/].f_2));
			}
			if (unk_0xE769D9B5158D0F11(Local_204[iVar1 /*18*/].f_1))
			{
				unk_0x40D517D991458154(&(Local_204[iVar1 /*18*/].f_1));
			}
			unk_0x63C116C2153FAA3C(&(Local_204[iVar1 /*18*/]));
		}
		iVar0++;
	}
}

int func_38(int iParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = 1;
	if (unk_0x31F12808DC47A9E5(Local_131[iParam0 /*18*/]))
	{
		if (unk_0xC4B84EB67F78C1F0(Local_131[iParam0 /*18*/], 0))
		{
			if (unk_0xB7A628320EFF8E47(Local_60, Local_131[iParam0 /*18*/].f_8) < (fParam1 * fParam1) || !unk_0xD76674575E7BA743(Local_131[iParam0 /*18*/]))
			{
				iVar0 = 0;
			}
		}
	}
	if (unk_0x31F12808DC47A9E5(func_56(iParam0, 0)))
	{
		if (!unk_0x0FAE113CE72ED842(func_56(iParam0, 0)))
		{
			if (unk_0xB7A628320EFF8E47(Local_60, Local_204[func_61(iParam0) /*18*/].f_6) < (fParam1 * fParam1) || !unk_0xD76674575E7BA743(func_56(iParam0, 0)))
			{
				iVar0 = 0;
			}
		}
	}
	if (unk_0x31F12808DC47A9E5(func_56(iParam0, 1)))
	{
		if (!unk_0x0FAE113CE72ED842(func_56(iParam0, 1)))
		{
			if (unk_0xB7A628320EFF8E47(Local_60, Local_204[func_59(iParam0) /*18*/].f_6) < (fParam1 * fParam1) || !unk_0xD76674575E7BA743(func_56(iParam0, 1)))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

float func_39(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_40(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, struct<3> Param7, int iParam10, float fParam11)
{
	if (unk_0x31F12808DC47A9E5(iParam0) && unk_0xC4B84EB67F78C1F0(iParam0, 0))
	{
		if (((((unk_0x31F12808DC47A9E5(iParam1) && iParam0 != iParam1) && !unk_0x9605D2F02FA93911(unk_0x4F69FBD64CDF125B(iParam1))) && !unk_0xD8BB60C76D29E4BB(unk_0x4F69FBD64CDF125B(iParam1))) && !unk_0xB6353CAE3EBC0919(unk_0x4F69FBD64CDF125B(iParam1))) && !unk_0xA403D842C198CAFF(unk_0x4F69FBD64CDF125B(iParam1)))
		{
			if (unk_0x15EE504466B7BBD3(unk_0x761660F5CE986DC4(iParam1, 1), *uParam4, 1) > 20f)
			{
				if (func_43(iParam0, iParam1, iLocal_358, unk_0x761660F5CE986DC4(iParam1, 1), unk_0x26A3403C90A0B224(iParam1, 2)))
				{
					*uParam2 = { *uParam4 };
					*uParam3 = *uParam5;
					*uParam2 = { unk_0xA89DC5E1C1F12DBF(*uParam2, *uParam3, Param7) };
					*uParam4 = { unk_0x761660F5CE986DC4(iParam1, 1) };
					*uParam5 = unk_0x93FDA3BF59E7B77F(iParam1);
				}
			}
			if (!unk_0xD76674575E7BA743(iParam0))
			{
				*uParam6 = unk_0x5AFB8ED811F05E4D();
			}
			else if ((unk_0x5AFB8ED811F05E4D() - *uParam6) > iParam10)
			{
				if ((func_42(iParam0, iParam1, 1) > fParam11 && unk_0x15EE504466B7BBD3(unk_0x761660F5CE986DC4(iParam1, 1), *uParam2, 1) > 20f) && unk_0xB7A628320EFF8E47(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), *uParam2) > 100f)
				{
					if (!func_41(*uParam2))
					{
						if (!unk_0x6157232E032EBC56(*uParam2, 6f))
						{
							unk_0xE6B6928D4EED07B1(*uParam2, 6f, 0);
							unk_0xE54597236B7D8C63(*uParam2, 6f, 0, 0, 0, 0, 0, 0);
							unk_0x990FFD4FB6ADD630(iParam0, *uParam2, 1, 0, 0, 1);
							unk_0xB88121FF8A34A66F(iParam0, *uParam3);
							unk_0x9B53B2691E2B1F79(iParam0, 1084227584);
							unk_0xFBD899EB9A2EF7F4(iParam0, func_39((unk_0x2A72627520A107B5(iParam1) + 10f), 10f, 60f));
							unk_0x0F3F86C855582784(iParam0, 1, 1, 0);
							*uParam6 = unk_0x5AFB8ED811F05E4D();
						}
					}
				}
			}
		}
		else
		{
			*uParam6 = unk_0x5AFB8ED811F05E4D();
		}
	}
}

int func_41(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

float func_42(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x74C2FE037DFC8B4A(iParam0, 0))
	{
		Var0 = { unk_0x761660F5CE986DC4(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x761660F5CE986DC4(iParam0, 0) };
	}
	if (!unk_0x74C2FE037DFC8B4A(iParam1, 0))
	{
		Var3 = { unk_0x761660F5CE986DC4(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0x761660F5CE986DC4(iParam1, 0) };
	}
	return unk_0x15EE504466B7BBD3(Var0, Var3, iParam2);
}

int func_43(int iParam0, int iParam1, int iParam2, struct<3> Param3, struct<3> Param6)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	struct<3> Var13;
	var uVar16;
	float fVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	float fVar23;
	struct<3> Var24;
	int iVar27;
	var uVar28;
	var uVar31;
	var uVar34;
	var uVar35;
	
	if (unk_0x31F12808DC47A9E5(iParam2))
	{
		unk_0x0D8E51F437C55570(unk_0x4F69FBD64CDF125B(iParam0), &Var7, &Var10);
		unk_0x0D8E51F437C55570(unk_0x4F69FBD64CDF125B(iParam1), &Var13, &uVar16);
		fVar19 = unk_0x36E1A96E1D63ED91((Var10.f_2 - Var7.f_2));
		fVar20 = unk_0x36E1A96E1D63ED91((Var10.f_0 - Var7.f_0));
		fVar21 = unk_0x36E1A96E1D63ED91((Var10.f_1 - Var7.f_1));
		if (fVar20 > fVar19)
		{
			fVar22 = (fVar20 / 2f);
			fVar23 = (fVar22 - unk_0x36E1A96E1D63ED91(Var7.f_2));
		}
		else
		{
			fVar22 = (fVar21 / 2f);
			fVar23 = (fVar22 - unk_0x36E1A96E1D63ED91(Var7.f_0));
		}
		Var24.f_2 = (Var24.f_2 + (Var13.f_2 - Var7.f_2));
		unk_0x990FFD4FB6ADD630(iParam2, Param3, 1, 0, 0, 1);
		unk_0x58F6B49606932378(iParam2, Param6, 2, 1);
		Var1 = { unk_0x0AF3D0AB54EA2104(iParam2, Vector((fVar23 * 1.25f), ((fVar21 / 2f) - (fVar22 * 0.75f)), 0f) + Var24) };
		Var4 = { unk_0x0AF3D0AB54EA2104(iParam2, Vector((fVar23 * 1.25f), ((-fVar21 / 2f) + (fVar22 * 0.75f)), 0f) + Var24) };
		uVar35 = unk_0xD8E527CB54D2AA22(Var4, Var1, fVar22, 19, unk_0x18F7BE9ACB7D08F4(), 4);
		if (unk_0xA3F56DCC3ACBDEC5(uVar35, &iVar27, &uVar28, &uVar31, &uVar34) != 2)
		{
		}
		if (iVar27 != 0)
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_44()
{
	bool bVar0;
	
	if ((unk_0x5AFB8ED811F05E4D() - iLocal_567) > 100)
	{
		if ((unk_0x5AFB8ED811F05E4D() - Local_204[iLocal_566 /*18*/].f_12) > 500)
		{
			if (unk_0x31F12808DC47A9E5(Local_204[iLocal_566 /*18*/]) && !unk_0x0FAE113CE72ED842(Local_204[iLocal_566 /*18*/]))
			{
				bVar0 = true;
				if (!Local_204[iLocal_566 /*18*/].f_9 && unk_0x657B649BA2AD3582(Local_204[iLocal_566 /*18*/], 0))
				{
					bVar0 = false;
				}
				if (bVar0)
				{
					if (((unk_0xDFEB6D8BCE2B43F6(Local_204[iLocal_566 /*18*/], sLocal_373, func_27(iLocal_566), 3) && unk_0xE825CDE0EAED051D(Local_204[iLocal_566 /*18*/], sLocal_373, func_27(iLocal_566)) > 0.5f) && unk_0xE825CDE0EAED051D(Local_204[iLocal_566 /*18*/], sLocal_373, func_27(iLocal_566)) < 0.75f) || Local_204[iLocal_566 /*18*/].f_9)
					{
						unk_0xB168A220550FC047("scr_rcpap1_camera", Local_204[iLocal_566 /*18*/].f_2, 0.019f, -0.01f, 0.046f, 0f, 0f, -180f, 1065353216, 0, 0, 0);
						if ((iLocal_566 % 3) == 0)
						{
							unk_0xFF4225D4B94E1277(-1, "SHUTTER_FLASH", unk_0x761660F5CE986DC4(Local_204[iLocal_566 /*18*/].f_2, 1), "CAMERA_FLASH_SOUNDSET", 0, 0, 0);
						}
						else if ((iLocal_566 % 3) == 1)
						{
							unk_0xFF4225D4B94E1277(-1, "SHUTTER", unk_0x761660F5CE986DC4(Local_204[iLocal_566 /*18*/].f_2, 1), "CAMERA_FLASH_SOUNDSET", 0, 0, 0);
						}
						else
						{
							unk_0xFF4225D4B94E1277(-1, "FLASH", unk_0x761660F5CE986DC4(Local_204[iLocal_566 /*18*/].f_2, 1), "CAMERA_FLASH_SOUNDSET", 0, 0, 0);
						}
						Local_204[iLocal_566 /*18*/].f_12 = unk_0x5AFB8ED811F05E4D();
					}
					iLocal_567 = unk_0x5AFB8ED811F05E4D();
				}
			}
			iLocal_566++;
			if (iLocal_566 >= Local_204.f_0)
			{
				iLocal_566 = 0;
			}
		}
	}
}

void func_45(int iParam0, int iParam1)
{
	if (!unk_0x0FAE113CE72ED842(Local_204[iParam1 /*18*/]) && !unk_0x0FAE113CE72ED842(iParam0))
	{
		if (!unk_0x3821A75ECC8A0D5B(Local_204[iParam1 /*18*/], iParam0, 20f))
		{
			if (unk_0x2BBAA45ECDE3DAE2(Local_204[iParam1 /*18*/], -875674219) != 1)
			{
				unk_0x8F467CFC5FBBCE77(Local_204[iParam1 /*18*/], iParam0, 0);
			}
		}
		else if ((unk_0x5AFB8ED811F05E4D() - Local_204[iParam1 /*18*/].f_13) > 2000)
		{
			if (!unk_0xDFEB6D8BCE2B43F6(Local_204[iParam1 /*18*/], sLocal_373, func_27(iParam1), 3))
			{
				unk_0xB5746603774C4C9D(Local_204[iParam1 /*18*/], sLocal_373, func_27(iParam1), 4f, -4f, -1, 0, 0, 0, 0, 0);
				Local_204[iParam1 /*18*/].f_13 = unk_0x5AFB8ED811F05E4D();
			}
		}
	}
}

void func_46(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	if (!unk_0x0FAE113CE72ED842(Local_204[iParam1 /*18*/]) && !unk_0x0FAE113CE72ED842(iParam0))
	{
		Var0 = { unk_0x0AF3D0AB54EA2104(iParam0, func_48(iParam1)) };
		switch (Local_204[iParam1 /*18*/].f_16)
		{
			case 0:
				func_47(Var0, iParam1, iParam0);
				Local_204[iParam1 /*18*/].f_16++;
				break;
			
			case 1:
				if (unk_0x2BBAA45ECDE3DAE2(Local_204[iParam1 /*18*/], 713668775) != 1 || unk_0x2A488C176D52CCA5(Var0, Local_204[iParam1 /*18*/].f_6) > 5f)
				{
					Local_204[iParam1 /*18*/].f_16++;
				}
				break;
			
			case 2:
				if (unk_0x2A488C176D52CCA5(Var0, Local_204[iParam1 /*18*/].f_6) > 10f)
				{
					func_47(Var0, iParam1, iParam0);
					Local_204[iParam1 /*18*/].f_16++;
				}
				else
				{
					func_45(iParam0, iParam1);
				}
				break;
			
			case 3:
				if (unk_0xB7A628320EFF8E47(Var0, Local_204[iParam1 /*18*/].f_3) > 25f)
				{
					func_47(Var0, iParam1, iParam0);
				}
				if (unk_0x2BBAA45ECDE3DAE2(Local_204[iParam1 /*18*/], 713668775) != 1)
				{
					Local_204[iParam1 /*18*/].f_16 = (Local_204[iParam1 /*18*/].f_16 - 1);
				}
				break;
			}
	}
}

void func_47(struct<3> Param0, int iParam3, int iParam4)
{
	struct<3> Var0;
	int iVar3;
	
	Var0 = { func_35(unk_0x761660F5CE986DC4(iParam4, 1) - Param0) };
	iVar3 = unk_0x7F21F40674579303(Var0.f_0, Var0.f_1);
	Local_204[iParam3 /*18*/].f_3 = { Param0 };
	unk_0x267F7A2DFDFFB077(Local_204[iParam3 /*18*/]);
	if (unk_0x2A488C176D52CCA5(Param0, Local_204[iParam3 /*18*/].f_6) < 2f)
	{
		unk_0xA303A4837FBB8DDE(Local_204[iParam3 /*18*/], Local_204[iParam3 /*18*/].f_3, 1f, -1, 0.5f, 512, iVar3);
	}
	else
	{
		unk_0xA303A4837FBB8DDE(Local_204[iParam3 /*18*/], Local_204[iParam3 /*18*/].f_3, 2f, -1, 0.5f, 512, iVar3);
	}
}

Vector3 func_48(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -0.6578f, 3.328f, 0.2129f;
			break;
		
		case 1:
			return 0.5781f, 3.1584f, 0.2203f;
			break;
		
		case 2:
			return 1.6953f, 2.4036f, 0.1413f;
			break;
		
		case 3:
			return 2.2778f, 1.3153f, 0.1534f;
			break;
		
		case 4:
			return 2.0457f, 0.0073f, 0.2707f;
			break;
		
		case 5:
			return 2.097f, -1.2978f, 0.23f;
			break;
		
		case 6:
			return 2.0693f, -3.2216f, 0.3726f;
			break;
		
		case 7:
			return 1.0275f, -3.6726f, 0.155f;
			break;
		
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_49()
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < Local_204.f_0)
	{
		if (unk_0xE769D9B5158D0F11(Local_204[iVar0 /*18*/].f_1))
		{
			if (unk_0x0FAE113CE72ED842(Local_204[iVar0 /*18*/]))
			{
				unk_0x40D517D991458154(&(Local_204[iVar0 /*18*/].f_1));
			}
			else if (unk_0x657B649BA2AD3582(Local_204[iVar0 /*18*/], 0))
			{
				unk_0x40D517D991458154(&(Local_204[iVar0 /*18*/].f_1));
			}
		}
		else if (!unk_0x0FAE113CE72ED842(Local_204[iVar0 /*18*/]) && !unk_0x657B649BA2AD3582(Local_204[iVar0 /*18*/], 0))
		{
			Local_204[iVar0 /*18*/].f_1 = func_180(Local_204[iVar0 /*18*/], 1, 145);
			unk_0x61C2EC67C90074E5(Local_204[iVar0 /*18*/].f_1, "EP_PAPBLIP");
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_131.f_0)
	{
		if (unk_0xC4B84EB67F78C1F0(Local_131[iVar0 /*18*/], 0))
		{
			if (unk_0xE769D9B5158D0F11(Local_131[iVar0 /*18*/].f_1))
			{
				Var1 = { unk_0x85D7B5415209F462(Local_131[iVar0 /*18*/].f_1) };
				Var4 = { Local_131[iVar0 /*18*/].f_8 };
				Var1.f_0 = (Var1.f_0 + ((Var4.f_0 - Var1.f_0) / 10f));
				Var1.f_1 = (Var1.f_1 + ((Var4.f_1 - Var1.f_1) / 10f));
				Var1.f_2 = (Var1.f_2 + ((Var4.f_2 - Var1.f_2) / 10f));
				unk_0x466CCEBC4B294723(Local_131[iVar0 /*18*/].f_1, Var1);
				if (func_52(Local_131[iVar0 /*18*/], 1, 0, 0, 0, 0, 1, 0))
				{
					unk_0x40D517D991458154(&(Local_131[iVar0 /*18*/].f_1));
				}
			}
			else if (!func_52(Local_131[iVar0 /*18*/], 1, 0, 0, 0, 0, 1, 0))
			{
				Local_131[iVar0 /*18*/].f_1 = func_50(Local_131[iVar0 /*18*/].f_8, 0);
				unk_0x71925FF3194E84CE(Local_131[iVar0 /*18*/].f_1, 1);
				unk_0x61C2EC67C90074E5(Local_131[iVar0 /*18*/].f_1, "EP_PAPBLIP");
				unk_0xF60CEE5003674AF0(Local_131[iVar0 /*18*/].f_1, 9);
			}
		}
		else if (unk_0xE769D9B5158D0F11(Local_131[iVar0 /*18*/].f_1))
		{
			unk_0x40D517D991458154(&(Local_131[iVar0 /*18*/].f_1));
		}
		iVar0++;
	}
}

var func_50(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x29F0B4D7EFF08BF6(Param0);
	unk_0x0590222010A36CE4(uVar0, func_51(unk_0x44243F2E2F58B8E3(), 1f, 1f));
	unk_0x63EECA6600F1090E(uVar0, iParam3);
	return uVar0;
}

float func_51(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_52(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = unk_0xE4752B503DF3FEC0(uParam0) + 1;
	if (iParam4 || !unk_0x74C2FE037DFC8B4A(uParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = func_53(iParam0, (iVar0 - 1), bParam6, iParam7);
			if (unk_0x31F12808DC47A9E5(iVar2))
			{
				if (iParam3 && iVar2 == unk_0x18F7BE9ACB7D08F4())
				{
				}
				else if (bParam2)
				{
					if (!unk_0x0FAE113CE72ED842(iVar2))
					{
						if (unk_0xEE1E09882FA264CA(iVar2))
						{
							if (unk_0xFF3D7D0CFD33DE47(unk_0xD3287DCBDBC58316(iVar2)) == 0)
							{
								if (!bParam5)
								{
									return 0;
								}
							}
							else
							{
								return 0;
							}
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
				else if (!unk_0x0FAE113CE72ED842(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_53(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	if (!unk_0x74B8CA477787A438(uParam0, iParam1, iParam3))
	{
		iVar0 = unk_0x4983F8C51A0C0AF3(iParam0, iParam1, iParam3);
	}
	if (bParam2)
	{
		if (!unk_0x31F12808DC47A9E5(iVar0) && !unk_0x74C2FE037DFC8B4A(iParam0, 0))
		{
			iVar0 = unk_0x75FAFA6C74F1ACCD(iParam0, iParam1);
			if (!unk_0x74C2FE037DFC8B4A(iVar0, 0))
			{
				if (unk_0x2BBAA45ECDE3DAE2(iVar0, 451360105) == 1 || unk_0x2BBAA45ECDE3DAE2(iVar0, -828834893) == 1)
				{
					if (unk_0x2A488C176D52CCA5(unk_0x761660F5CE986DC4(iParam0, 0), unk_0x761660F5CE986DC4(iVar0, 0)) < 10f)
					{
						return iVar0;
					}
				}
			}
			iVar0 = -1;
		}
	}
	return iVar0;
}

void func_54(int iParam0, struct<3> Param1, float fParam4, char* sParam5, char* sParam6, char* sParam7)
{
	if (!unk_0x0FAE113CE72ED842(Local_204[iParam0 /*18*/]))
	{
		if (unk_0x2A488C176D52CCA5(unk_0x761660F5CE986DC4(Local_204[iParam0 /*18*/], 1), Param1) > 1.5f)
		{
			if (unk_0x2BBAA45ECDE3DAE2(Local_204[iParam0 /*18*/], 713668775) != 1)
			{
				unk_0xA303A4837FBB8DDE(Local_204[iParam0 /*18*/], Param1, 2f, -1, 0.25f, 0, fParam4);
			}
		}
		else if (unk_0x36E1A96E1D63ED91((func_55(unk_0x93FDA3BF59E7B77F(Local_204[iParam0 /*18*/])) - func_55(fParam4))) > 10f)
		{
			if (unk_0x2BBAA45ECDE3DAE2(Local_204[iParam0 /*18*/], 1920390111) != 1)
			{
				unk_0x8A32C8BCE5987E9B(Local_204[iParam0 /*18*/], fParam4, 0);
			}
		}
		else
		{
			switch (Local_204[iParam0 /*18*/].f_16)
			{
				case 0:
					if (unk_0xFAFFA408239A026B(sParam7))
					{
						if (!unk_0xDFEB6D8BCE2B43F6(Local_204[iParam0 /*18*/], sParam5, sParam6, 3))
						{
							unk_0xB5746603774C4C9D(Local_204[iParam0 /*18*/], sParam5, sParam6, 4f, -4f, -1, 1, 0, 0, 0, 0);
						}
					}
					else if (!unk_0xDFEB6D8BCE2B43F6(Local_204[iParam0 /*18*/], sParam5, sParam6, 3))
					{
						unk_0xB5746603774C4C9D(Local_204[iParam0 /*18*/], sParam5, sParam6, 4f, -4f, -1, 0, 0, 0, 0, 0);
					}
					else if (unk_0xE825CDE0EAED051D(Local_204[iParam0 /*18*/], sParam5, sParam6) > 0.99f)
					{
						unk_0xB5746603774C4C9D(Local_204[iParam0 /*18*/], sParam5, sParam7, 4f, -4f, -1, 0, 0, 0, 0, 0);
						Local_204[iParam0 /*18*/].f_16++;
					}
					break;
				
				case 1:
					if (!unk_0xDFEB6D8BCE2B43F6(Local_204[iParam0 /*18*/], sParam5, sParam7, 3))
					{
						unk_0xB5746603774C4C9D(Local_204[iParam0 /*18*/], sParam5, sParam7, 4f, -4f, -1, 0, 0, 0, 0, 0);
					}
					else if (unk_0xE825CDE0EAED051D(Local_204[iParam0 /*18*/], sParam5, sParam7) > 0.99f)
					{
						unk_0xB5746603774C4C9D(Local_204[iParam0 /*18*/], sParam5, sParam6, 4f, -4f, -1, 0, 0, 0, 0, 0);
						Local_204[iParam0 /*18*/].f_16 = 0;
					}
					break;
				}
			}
	}
}

float func_55(float fParam0)
{
	if (fParam0 >= 180f)
	{
		fParam0 = (fParam0 - 360f);
	}
	if (fParam0 < -180f)
	{
		fParam0 = (fParam0 + 360f);
	}
	return fParam0;
}

var func_56(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return Local_204[func_61(iParam0) /*18*/];
	}
	return Local_204[func_59(iParam0) /*18*/];
}

void func_57(int iParam0, struct<3> Param1, float fParam4, bool bParam5)
{
	if ((iParam0 % 2) == 1)
	{
		Local_131[iParam0 /*18*/] = unk_0x3064CCF56C6C32BC(joaat("vader"), Param1, fParam4, 1, 1, 0);
	}
	else
	{
		Local_131[iParam0 /*18*/] = unk_0x3064CCF56C6C32BC(joaat("cavalcade2"), Param1, fParam4, 1, 1, 0);
		unk_0xB447DBA72E281B1B(Local_131[iParam0 /*18*/], 0);
	}
	unk_0x9B53B2691E2B1F79(Local_131[iParam0 /*18*/], 1084227584);
	unk_0xF321DFA4C895508B(Local_131[iParam0 /*18*/], 1);
	if (bParam5)
	{
		if (!unk_0x31F12808DC47A9E5(func_56(iParam0, 0)))
		{
			func_58(func_61(iParam0), Param1, fParam4);
		}
		if (!unk_0x31F12808DC47A9E5(func_56(iParam0, 1)))
		{
			func_58(func_59(iParam0), Param1, fParam4);
		}
		if (!unk_0x0FAE113CE72ED842(func_56(iParam0, 0)) && unk_0xC4B84EB67F78C1F0(Local_131[iParam0 /*18*/], 0))
		{
			unk_0x8D77EFA08616AD64(func_56(iParam0, 0), Local_131[iParam0 /*18*/], -1);
		}
		if (!unk_0x0FAE113CE72ED842(func_56(iParam0, 1)) && unk_0xC4B84EB67F78C1F0(Local_131[iParam0 /*18*/], 0))
		{
			unk_0x8D77EFA08616AD64(func_56(iParam0, 1), Local_131[iParam0 /*18*/], 0);
		}
		unk_0x0F3F86C855582784(Local_131[iParam0 /*18*/], 1, 1, 0);
	}
}

void func_58(int iParam0, struct<3> Param1, float fParam4)
{
	Local_204[iParam0 /*18*/] = unk_0x364B87C5C64BD100(26, joaat("a_m_y_genstreet_02"), Param1, fParam4, 1, 1);
	unk_0x273FE09AE985A00A(Local_204[iParam0 /*18*/], 1, 0);
	unk_0x40E2910BAF39B1C7(Local_204[iParam0 /*18*/], 1);
	unk_0x273FE09AE985A00A(Local_204[iParam0 /*18*/], 0, 1);
	unk_0xF5E25BA5F2D728A9(Local_204[iParam0 /*18*/], 3);
	unk_0xDC633118188196B0(Local_204[iParam0 /*18*/], 1);
	unk_0x273FE09AE985A00A(Local_204[iParam0 /*18*/], 17, 1);
	unk_0x470C9634914699C0(Local_204[iParam0 /*18*/], 2, 0);
	unk_0xB05881241072FEE6(Local_204[iParam0 /*18*/], 0);
	unk_0x10F31830C95ED2E5(Local_204[iParam0 /*18*/], 1);
	unk_0xE54D36F901A54378(Local_204[iParam0 /*18*/], 100);
	unk_0x3854056F5409CB9E(Local_204[iParam0 /*18*/], joaat("FIRING_PATTERN_FULL_AUTO"));
	unk_0x764AFC5A3A16C2B0(Local_204[iParam0 /*18*/], 101, 1);
	unk_0x764AFC5A3A16C2B0(Local_204[iParam0 /*18*/], 185, 0);
	unk_0x874004759C4BE8DC(Local_204[iParam0 /*18*/], 300);
	unk_0xDEA702F2138E0B35(Local_204[iParam0 /*18*/], 3, (iParam0 % 2), unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam0) / 2f)), 0);
	if (Global_3 || bLocal_70)
	{
		unk_0xF74B493CCF90C997(Local_204[iParam0 /*18*/], 1);
		unk_0x874004759C4BE8DC(Local_204[iParam0 /*18*/], 500);
	}
	unk_0x1070F6BBC5E06444(Local_204[iParam0 /*18*/], 1);
	unk_0x273FE09AE985A00A(Local_204[iParam0 /*18*/], 2, 1);
	unk_0x33A2A1DBDDF863E7(Local_204[iParam0 /*18*/], 2f);
	unk_0xB05881241072FEE6(Local_204[iParam0 /*18*/], 0);
	unk_0xC741149CBDE5831B(Local_204[iParam0 /*18*/], 0);
	Local_204[iParam0 /*18*/].f_2 = unk_0x7082ECB3731CD86C(joaat("prop_pap_camera_01"), unk_0x433176BD83D09D7E(Local_204[iParam0 /*18*/], 28422, 0f, 0f, 0f), 1, 1, 0);
	unk_0x947CE5CCDDBA0651(Local_204[iParam0 /*18*/].f_2, Local_204[iParam0 /*18*/], unk_0xCA57A734FF47CDF5(Local_204[iParam0 /*18*/], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	if (unk_0x31F12808DC47A9E5(Local_204[0 /*18*/].f_2))
	{
		unk_0xA12407EB7D7CF146(Local_204[0 /*18*/].f_2, 0, 0);
	}
	Local_204[iParam0 /*18*/].f_17 = unk_0x0A088F357EF627CA(Local_204[iParam0 /*18*/]);
}

int func_59(int iParam0)
{
	return iParam0 * 2 + 1;
}

void func_60(int iParam0)
{
	if ((iParam0 % 2) == 1)
	{
		Local_204[iParam0 /*18*/].f_14 = ((iParam0 - 1) / 2);
	}
	else
	{
		Local_204[iParam0 /*18*/].f_14 = (iParam0 / 2);
	}
}

int func_61(int iParam0)
{
	return iParam0 * 2;
}

void func_62(int iParam0)
{
	Local_131[iParam0 /*18*/].f_17 = 0;
}

int func_63()
{
	bool bVar0;
	bool bVar1;
	
	if (!unk_0x0FAE113CE72ED842(iLocal_86))
	{
		bVar0 = false;
		if (func_66())
		{
			if (unk_0x31F12808DC47A9E5(func_65()))
			{
				if (unk_0x2A488C176D52CCA5(unk_0x761660F5CE986DC4(func_65(), 1), Local_63) < 5f && unk_0x2A72627520A107B5(iLocal_91) < 1f)
				{
					bVar0 = true;
				}
			}
		}
		else if (unk_0xC4B84EB67F78C1F0(iLocal_91, 0))
		{
			if (!unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), iLocal_91, 0) && unk_0x88B79D32B518C327(iLocal_86, iLocal_91, 0))
			{
				fLocal_570 = (fLocal_570 + unk_0x64031EF2AE5F9603());
			}
			else if (fLocal_570 > 0f)
			{
				fLocal_570 = 0f;
			}
		}
		if (bVar0)
		{
			fLocal_569 = (fLocal_569 + unk_0x64031EF2AE5F9603());
		}
		else if (fLocal_569 > 0f)
		{
			fLocal_569 = 0f;
		}
		if (fLocal_569 > 30f)
		{
			bVar1 = true;
		}
		if (iLocal_71)
		{
			if (!unk_0x160400EAEE246B4D(iLocal_86, iLocal_91))
			{
				if (unk_0x0B90D19A63676F41(iLocal_86))
				{
					bVar1 = true;
				}
				iLocal_71 = 0;
			}
		}
		if (!iLocal_71)
		{
			if (unk_0x160400EAEE246B4D(iLocal_86, iLocal_91))
			{
				iLocal_71 = 1;
			}
		}
		if (fLocal_570 > 30f)
		{
			bVar1 = true;
		}
		if (!unk_0xC4B84EB67F78C1F0(iLocal_91, 0) && (!bLocal_368 || iLocal_47 == 1))
		{
			bVar1 = true;
		}
		if (unk_0x2A488C176D52CCA5(Local_63, Local_60) > 30f)
		{
			bVar1 = true;
		}
		if (((unk_0xC4B84EB67F78C1F0(iLocal_91, 0) && func_64(iLocal_91)) && (!bLocal_368 || iLocal_47 == 1)) && unk_0x2A488C176D52CCA5(unk_0x761660F5CE986DC4(iLocal_86, 1), Local_56) > 15f)
		{
			bVar1 = true;
		}
		if (unk_0xC4B84EB67F78C1F0(iLocal_91, 0) && unk_0xE1F715CDDC50FD7F(iLocal_91))
		{
			bVar1 = true;
		}
		if (bVar1)
		{
			if (unk_0x61E9B3BFA06B017B(0, 2) == 1)
			{
				sLocal_371 = "REPAP_GUP";
			}
			else
			{
				sLocal_371 = "REPAP_GUP2";
			}
			return 1;
		}
	}
	return 0;
}

int func_64(int iParam0)
{
	if (unk_0x31F12808DC47A9E5(iParam0))
	{
		if (unk_0xC4B84EB67F78C1F0(iParam0, 0))
		{
			if (((unk_0x08438F954B83E80B(iParam0, 0, 7000) || unk_0x08438F954B83E80B(iParam0, 3, 30000)) || unk_0x08438F954B83E80B(iParam0, 2, 30000)) || unk_0x08438F954B83E80B(iParam0, 1, 40000))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_65()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar1 = -1;
	fVar2 = 999999f;
	iVar0 = 0;
	while (iVar0 < Local_204.f_0)
	{
		if ((unk_0x31F12808DC47A9E5(Local_204[iVar0 /*18*/]) && !unk_0x0FAE113CE72ED842(Local_204[iVar0 /*18*/])) && !unk_0x0FAE113CE72ED842(iLocal_86))
		{
			if (unk_0xB7A628320EFF8E47(Local_63, Local_204[iVar0 /*18*/].f_6) < fVar2)
			{
				fVar2 = unk_0xB7A628320EFF8E47(Local_63, Local_204[iVar0 /*18*/].f_6);
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 != -1)
	{
		return Local_204[iVar1 /*18*/];
	}
	return 0;
}

int func_66()
{
	if (unk_0xC4B84EB67F78C1F0(iLocal_91, 0))
	{
		if (!unk_0x0FAE113CE72ED842(iLocal_86))
		{
			if (unk_0x88B79D32B518C327(iLocal_86, iLocal_91, 0) && unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), iLocal_91, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_67()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_204.f_0)
	{
		if (func_68(Local_204[iVar0 /*18*/], 0, 0))
		{
			return 1;
		}
		if (unk_0x31F12808DC47A9E5(Local_204[iVar0 /*18*/]))
		{
			if (unk_0x0FAE113CE72ED842(Local_204[iVar0 /*18*/]) || unk_0x74C2FE037DFC8B4A(Local_204[iVar0 /*18*/], 0))
			{
				if (iLocal_386[iVar0] > 50)
				{
					iLocal_349++;
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_68(int iParam0, int iParam1, bool bParam2)
{
	struct<3> Var0;
	int iVar3;
	
	if (!unk_0x0FAE113CE72ED842(iParam0))
	{
		Var0 = { unk_0x761660F5CE986DC4(iParam0, 1) };
		if (unk_0x9381BBF272130ED6(unk_0x18F7BE9ACB7D08F4(), 7))
		{
			unk_0x75CE6F8BEC2654E3(unk_0x18F7BE9ACB7D08F4(), &iVar3, 1);
		}
		if (!bParam2)
		{
			if (unk_0x70832328F090DD95(Var0, 5f, 1))
			{
				return 1;
			}
		}
		if (unk_0xB7A628320EFF8E47(Var0, Local_60) < 400f)
		{
			if (!bParam2)
			{
				if ((unk_0x9381BBF272130ED6(unk_0x18F7BE9ACB7D08F4(), 6) && !unk_0x11879DABC3CC8D46(unk_0x18F7BE9ACB7D08F4())) && unk_0xAADA5865C8BFAE94(unk_0x18F7BE9ACB7D08F4()))
				{
					return 1;
				}
			}
			if ((iVar3 == joaat("weapon_petrolcan") && unk_0xAADA5865C8BFAE94(unk_0x18F7BE9ACB7D08F4())) && unk_0xB7A628320EFF8E47(Local_60, Var0) < 9f)
			{
				return 1;
			}
			if (((unk_0x6703CD13741C39C5(unk_0x8CFC7D6E1DA5D304(), iParam0) || unk_0xF905401F186A9803(unk_0x8CFC7D6E1DA5D304(), iParam0)) && (func_69(Local_60, iParam0) && unk_0xB7A628320EFF8E47(Local_60, unk_0x761660F5CE986DC4(iParam0, 1)) < 100f)) && unk_0x9381BBF272130ED6(unk_0x18F7BE9ACB7D08F4(), 6))
			{
				return 1;
			}
			if (iLocal_385 > 150)
			{
				return 1;
			}
		}
		if (unk_0xAA9990446E1C425B(unk_0x433176BD83D09D7E(iParam0, 31086, 0f, 0f, 0f), 6f))
		{
			return 1;
		}
	}
	else if (unk_0x31F12808DC47A9E5(iParam0) && iParam1)
	{
		return 1;
	}
	return 0;
}

int func_69(struct<3> Param0, int iParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	Var0 = { unk_0x761660F5CE986DC4(iParam3, 1) };
	Var3 = { unk_0x0AF3D0AB54EA2104(iParam3, 0f, 1f, 0f) - Var0 };
	Var6 = { Param0 - Var0 };
	fVar9 = func_70(Var3, Var6);
	if (fVar9 > 0.5f)
	{
		return 1;
	}
	return 0;
}

float func_70(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

void func_71()
{
	if (iLocal_47 != 11)
	{
		if (unk_0xE769D9B5158D0F11(uLocal_362))
		{
			unk_0x40D517D991458154(&uLocal_362);
		}
		if (unk_0xE769D9B5158D0F11(uLocal_363))
		{
			unk_0x40D517D991458154(&uLocal_363);
		}
		if (unk_0xE769D9B5158D0F11(uLocal_360))
		{
			unk_0x40D517D991458154(&uLocal_360);
		}
		iLocal_48 = iLocal_47;
		iLocal_47 = 11;
	}
	else if (unk_0xFF3D7D0CFD33DE47(unk_0x8CFC7D6E1DA5D304()) > 0)
	{
		if (unk_0xFF3D7D0CFD33DE47(unk_0x8CFC7D6E1DA5D304()) < 3)
		{
			if (!func_74())
			{
				func_72("REPAP_COP1");
			}
		}
		else
		{
			func_178(5);
		}
	}
	else if (func_5(&Local_395, cLocal_372, "REPAP_COP2", 4, 0, 0, 0))
	{
		iLocal_47 = iLocal_48;
	}
}

void func_72(char* sParam0)
{
	if ((unk_0x5AFB8ED811F05E4D() - iLocal_667) > 5000)
	{
		if (!func_73())
		{
			if (func_5(&Local_395, cLocal_372, sParam0, 4, 0, 0, 0))
			{
				iLocal_667 = unk_0x5AFB8ED811F05E4D();
			}
		}
	}
}

int func_73()
{
	if (Global_15756 != 0 || unk_0x85FDEF76CDBAD589())
	{
		return 1;
	}
	return 0;
}

bool func_74()
{
	if (!unk_0x0FAE113CE72ED842(iLocal_86) && unk_0xB7A628320EFF8E47(Local_60, Local_63) < 400f)
	{
		if (!iLocal_350 && (unk_0x5AFB8ED811F05E4D() - iLocal_352) > 5000)
		{
			if (iLocal_82 > 10)
			{
				iLocal_350 = 1;
				iLocal_82 = 0;
			}
		}
		if ((!iLocal_355 && !iLocal_350) && (unk_0x5AFB8ED811F05E4D() - iLocal_356) > 4000)
		{
			if (unk_0x9381BBF272130ED6(unk_0x18F7BE9ACB7D08F4(), 6) && unk_0xAADA5865C8BFAE94(unk_0x18F7BE9ACB7D08F4()))
			{
				if (iLocal_357 > 2)
				{
					if (!Global_3 && !bLocal_70)
					{
						func_178(5);
					}
				}
				else
				{
					iLocal_355 = 1;
					iLocal_357++;
				}
			}
		}
		if (((!iLocal_353 && !iLocal_350) && !iLocal_355) && (unk_0x5AFB8ED811F05E4D() - iLocal_354) > 15000)
		{
			if (unk_0x9381BBF272130ED6(unk_0x18F7BE9ACB7D08F4(), 6) && !unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
			{
				iLocal_353 = 1;
			}
		}
		if (iLocal_350)
		{
			if (iLocal_351)
			{
				if (func_5(&Local_395, cLocal_372, "REPAP_HIT", 4, 0, 0, 0))
				{
					iLocal_352 = unk_0x5AFB8ED811F05E4D();
					iLocal_350 = 0;
				}
			}
			else if (func_5(&Local_395, cLocal_372, "REPAP_HUR", 4, 0, 0, 0))
			{
				iLocal_352 = unk_0x5AFB8ED811F05E4D();
				iLocal_350 = 0;
				iLocal_351 = 1;
			}
		}
		if (iLocal_355)
		{
			if (func_5(&Local_395, cLocal_372, "REPAP_SHOOT", 4, 0, 0, 0))
			{
				iLocal_356 = unk_0x5AFB8ED811F05E4D();
				iLocal_355 = 0;
			}
		}
		if (iLocal_353)
		{
			if (func_5(&Local_395, cLocal_372, "REPAP_GUN", 4, 0, 0, 0))
			{
				iLocal_354 = unk_0x5AFB8ED811F05E4D();
				iLocal_353 = 0;
			}
		}
	}
	return ((iLocal_353 || iLocal_355) || iLocal_350);
}

void func_75()
{
	if (!unk_0x0FAE113CE72ED842(iLocal_86))
	{
		unk_0x10F31830C95ED2E5(iLocal_86, 1);
		unk_0xFB5F4D76105A21B5(255, uLocal_69, joaat("player"));
		if (!Global_3 && !bLocal_70)
		{
			unk_0x764AFC5A3A16C2B0(iLocal_86, 317, 1);
			unk_0x40E2910BAF39B1C7(iLocal_86, 0);
		}
	}
	func_79(-1, 0);
	func_76();
	unk_0xC60DA08985E74751(62);
	func_274();
}

void func_76()
{
	func_77();
}

int func_77()
{
	if (func_78(0))
	{
		return 0;
	}
	if (Global_92868.f_8)
	{
		if (Global_92868.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_92868.f_10 > 1)
	{
		return 0;
	}
	Global_92868.f_10++;
	return 1;
}

bool func_78(bool bParam0)
{
	if (!bParam0 && unk_0xE7FAF8E78F7D3A73(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xB03A1684359C50A1(Global_71100, 0);
}

void func_79(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_97();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_96(iParam0))
	{
		func_95(iParam0, iParam1);
		if (!func_94(51))
		{
			func_90("RE_REWARD", 1, 0, 4000, 10000, func_93(), 0, 138, 0);
			func_89(51);
		}
		if (func_88(iParam0))
		{
			Global_104551.f_24965.f_2 = 3;
		}
		if (func_87(iParam0, iParam1) != 322)
		{
			func_81(func_87(iParam0, iParam1), Local_43.f_0, Local_43.f_1);
		}
		Global_104539 = iParam1;
		if (Global_104537 == 0)
		{
			if (((Global_104540 == 1 || Global_104540 == 5) || Global_104540 == 11) || Global_104540 == 25)
			{
				func_80(2);
			}
			else if ((Global_104540 == 26 || Global_104540 == 8) || Global_104540 == 17)
			{
				func_80(7);
			}
			else
			{
				func_80(1);
			}
		}
	}
}

void func_80(int iParam0)
{
	Global_104537 = iParam0;
}

void func_81(int iParam0, var uParam1, var uParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_85((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_104551.f_10164[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_104551.f_10164[iParam0 /*12*/].f_6 == 11 || Global_104551.f_10164[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_104551.f_10164[iParam0 /*12*/].f_5 = 1;
		Global_104551.f_10164[iParam0 /*12*/].f_10 = uParam1;
		Global_104551.f_10164[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0x251A50BCC815FD98(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x251A50BCC815FD98(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x251A50BCC815FD98(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_82();
	}
}

void func_82()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_104287 = 0;
	Global_104288 = 0;
	Global_104289 = 0;
	Global_104290 = 0;
	Global_104291 = 0;
	Global_104292 = 0;
	Global_104293 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_104551.f_10164.f_3853;
	Global_104551.f_10164.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_104551.f_10164[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_104551.f_10164[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_104287++;
					fVar1 = (fVar1 + Global_104551.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_104288++;
					fVar2 = (fVar2 + Global_104551.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_104289++;
					fVar3 = (fVar3 + Global_104551.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_104290++;
					fVar4 = (fVar4 + Global_104551.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_104291++;
					fVar5 = (fVar5 + (Global_104551.f_10164[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_104292++;
					fVar6 = (fVar6 + Global_104551.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_104293++;
					fVar7 = (fVar7 + Global_104551.f_10164[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_104270 > 0)
	{
		if (Global_104287 == Global_104270)
		{
			fVar1 = 55f;
		}
	}
	if (Global_104271 > 0)
	{
		if (Global_104288 == Global_104271)
		{
			fVar2 = 10f;
		}
	}
	if (Global_104272 > 0)
	{
		if (Global_104289 == Global_104272)
		{
			fVar3 = 0f;
		}
	}
	if (Global_104273 > 0)
	{
		if (Global_104290 == Global_104273)
		{
			fVar4 = 10f;
		}
	}
	if (Global_104274 > 0)
	{
		if (((Global_104291 == Global_104274 || (Global_104274 * 10 / Global_104291) < 41) || Global_104291 > Global_104277) || Global_104291 == Global_104277)
		{
			if (!unk_0xB03A1684359C50A1(Global_104551.f_10164.f_3856, 14))
			{
				if (Global_104291 == Global_104274)
				{
					unk_0x251A50BCC815FD98(joaat("num_rndevents_completed"), Global_104274, 0);
					unk_0xD2A9C3F486236CC5(&(Global_104551.f_10164.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_104275 > 0)
	{
		if (Global_104292 == Global_104275)
		{
			fVar6 = 15f;
		}
	}
	if (Global_104276 > 0)
	{
		if (Global_104293 == Global_104276)
		{
			fVar7 = 5f;
		}
	}
	Global_104551.f_10164.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_104291 > Global_104277 || Global_104291 == Global_104277)
	{
		iVar9 = Global_104277;
	}
	else
	{
		iVar9 = Global_104291;
	}
	unk_0xD92C8D8AF3C67820(joaat("num_missions_completed"), Global_104287, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_missions_available"), Global_104270, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_minigames_completed"), Global_104288, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_minigames_available"), Global_104271, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_oddjobs_completed"), Global_104289, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_oddjobs_available"), Global_104272, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_rndpeople_completed"), Global_104290, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_rndpeople_available"), Global_104273, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_rndevents_available"), Global_104277, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_misc_completed"), (Global_104293 + Global_104292), 1);
	unk_0xD92C8D8AF3C67820(joaat("num_misc_available"), (Global_104276 + Global_104275), 1);
	Global_104294 = (Global_104287 * 100 / Global_104270);
	Global_104296 = ((Global_104289 + Global_104288) * 100 / (Global_104272 + Global_104271));
	Global_104295 = ((Global_104290 + iVar9) * 100 / (Global_104273 + Global_104277));
	Global_104297 = ((Global_104292 + Global_104293) * 100 / (Global_104275 + Global_104276));
	unk_0xEB08A76786EAA075(joaat("total_progress_made"), Global_104551.f_10164.f_3853, 1);
	unk_0xD92C8D8AF3C67820(joaat("percent_story_missions"), Global_104294, 1);
	unk_0xD92C8D8AF3C67820(joaat("percent_ambient_missions"), Global_104295, 1);
	unk_0xD92C8D8AF3C67820(joaat("percent_oddjobs"), Global_104296, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_104551.f_10164.f_3853))
	{
		func_84(13, unk_0xF34EE736CF047844(Global_104551.f_10164.f_3853));
	}
	if (!unk_0x24BDFF94FAF6CE49())
	{
		if (!Global_70852)
		{
			if (func_83() == 2 == 0 && !unk_0x44243F2E2F58B8E3())
			{
				if (unk_0x9D67C2091DFDB507())
				{
					Global_104285 = 0;
				}
				if (!Global_55901)
				{
					func_77();
				}
			}
		}
	}
}

int func_83()
{
	return Global_25233;
}

int func_84(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0x5D740A70A96E81DD(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x1CAB2C92E22EBFB2(iParam0, iParam1);
	}
	return 0;
}

int func_85(int iParam0, int iParam1, int iParam2, int iParam3)
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
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	
	if (iParam2 == -1)
	{
		iParam2 = func_86();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0x88E3F30217D2CB3E((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xC83BD3A121E79D9F((iParam0 - 0)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0x88E3F30217D2CB3E((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xC83BD3A121E79D9F((iParam0 - 192)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0x88E3F30217D2CB3E((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xC83BD3A121E79D9F((iParam0 - 513)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0x88E3F30217D2CB3E((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xC83BD3A121E79D9F((iParam0 - 705)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0xBAF51F55DF57C4B2((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xC83BD3A121E79D9F((iParam0 - 3111)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0xBAF51F55DF57C4B2((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xC83BD3A121E79D9F((iParam0 - 2919)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0x45DE926FA3E8434A((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xC83BD3A121E79D9F((iParam0 - 4207)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0x45DE926FA3E8434A((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xC83BD3A121E79D9F((iParam0 - 4335)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = unk_0x45DE926FA3E8434A((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xC83BD3A121E79D9F((iParam0 - 6029)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = unk_0x45DE926FA3E8434A((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0xC83BD3A121E79D9F((iParam0 - 7385)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = unk_0x45DE926FA3E8434A((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0xC83BD3A121E79D9F((iParam0 - 7321)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = unk_0x45DE926FA3E8434A((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0xC83BD3A121E79D9F((iParam0 - 9361)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = unk_0x45DE926FA3E8434A((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0xC83BD3A121E79D9F((iParam0 - 15369)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = unk_0x45DE926FA3E8434A((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0xC83BD3A121E79D9F((iParam0 - 15562)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = unk_0x45DE926FA3E8434A((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0xC83BD3A121E79D9F((iParam0 - 15946)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = unk_0x45DE926FA3E8434A((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0xC83BD3A121E79D9F((iParam0 - 18098)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar17, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_86()
{
	return Global_1312736;
}

int func_87(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

int func_88(int iParam0)
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

void func_89(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		unk_0xD2A9C3F486236CC5(&(Global_104551.f_20380.f_150[iVar1]), iVar0);
	}
}

void func_90(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_91(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_91(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x9D39145AD645E383(sParam0, ""))
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
	while (iVar0 < Global_104551.f_20380.f_145)
	{
		if (unk_0x9D39145AD645E383(&(Global_104551.f_20380[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_104551.f_20380.f_145 < 9)
	{
		StringCopy(&(Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/].f_4), sParam1, 16);
		Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/].f_8 = (unk_0x5AFB8ED811F05E4D() + iParam3);
		Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/].f_9 = iParam5;
		Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/].f_11 = iParam6;
		Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/].f_12 = uParam2;
		Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/].f_13 = iParam7;
		Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/].f_14 = iParam8;
		Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/].f_10 = ((unk_0x5AFB8ED811F05E4D() + iParam3) + iParam4);
		}
		else
		{
			Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/].f_10 = -1;
		}
		Global_104551.f_20380.f_145++;
		func_92();
	}
}

void func_92()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_104551.f_20380.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_104551.f_20380.f_145)
	{
		if (unk_0xB03A1684359C50A1(Global_104551.f_20380[iVar0 /*16*/].f_11, 0))
		{
			if (Global_104551.f_20380[iVar0 /*16*/].f_12 > Global_104551.f_20380.f_146[0])
			{
				Global_104551.f_20380.f_146[0] = Global_104551.f_20380[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xB03A1684359C50A1(Global_104551.f_20380[iVar0 /*16*/].f_11, 1))
		{
			if (Global_104551.f_20380[iVar0 /*16*/].f_12 > Global_104551.f_20380.f_146[1])
			{
				Global_104551.f_20380.f_146[1] = Global_104551.f_20380[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xB03A1684359C50A1(Global_104551.f_20380[iVar0 /*16*/].f_11, 2))
		{
			if (Global_104551.f_20380[iVar0 /*16*/].f_12 > Global_104551.f_20380.f_146[2])
			{
				Global_104551.f_20380.f_146[2] = Global_104551.f_20380[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_93()
{
	func_20();
	switch (Global_104551.f_2353.f_539.f_4301)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

int func_94(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return unk_0xB03A1684359C50A1(Global_104551.f_20380.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_95(int iParam0, int iParam1)
{
	unk_0xD2A9C3F486236CC5(&(Global_104551.f_24965.f_8[iParam0]), iParam1);
}

int func_96(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

int func_97()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0xFCA64981FEF7C913(), 64);
	uVar16 = func_98(Var0);
	return uVar16;
}

int func_98(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x6E987D62C8535B6E(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		
		case joaat("re_accident"):
			return 0;
			break;
		
		case joaat("re_arrests"):
			return 15;
			break;
		
		case joaat("re_atmrobbery"):
			return 1;
			break;
		
		case joaat("re_bikethief"):
			return 26;
			break;
		
		case joaat("re_border"):
			return 29;
			break;
		
		case joaat("re_burials"):
			return 24;
			break;
		
		case joaat("re_bus_tours"):
			return 2;
			break;
		
		case joaat("re_cartheft"):
			return 17;
			break;
		
		case joaat("re_chasethieves"):
			return 11;
			break;
		
		case joaat("re_crashrescue"):
			return 16;
			break;
		
		case joaat("re_cultshootout"):
			return 18;
			break;
		
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		
		case joaat("re_domestic"):
			return 3;
			break;
		
		case joaat("re_drunkdriver"):
			return 27;
			break;
		
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		
		case joaat("re_gangfight"):
			return 19;
			break;
		
		case joaat("re_getaway_driver"):
			return 4;
			break;
		
		case joaat("re_hitch_lift"):
			return 13;
			break;
		
		case joaat("re_homeland_security"):
			return 28;
			break;
		
		case joaat("re_lured"):
			return 7;
			break;
		
		case joaat("re_muggings"):
			return 25;
			break;
		
		case joaat("re_paparazzi"):
			return 10;
			break;
		
		case joaat("re_prisonerlift"):
			return 22;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		
		case joaat("re_securityvan"):
			return 9;
			break;
		
		case joaat("re_shoprobbery"):
			return 5;
			break;
		
		case joaat("re_snatched"):
			return 6;
			break;
		
		case joaat("re_stag_do"):
			return 14;
			break;
		
		case joaat("re_yetarian"):
			return 30;
			break;
		
		case joaat("re_duel"):
			return 31;
			break;
		
		case joaat("re_seaplane"):
			return 32;
			break;
		
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return -1;
}

int func_99()
{
	if (Global_25468)
	{
		func_80(4);
		return 1;
	}
	return 0;
}

void func_100()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iLocal_49 != 5)
	{
		iLocal_49 = 5;
	}
	if (unk_0xE769D9B5158D0F11(uLocal_360))
	{
		unk_0x40D517D991458154(&uLocal_360);
	}
	switch (iLocal_369)
	{
		case 0:
			if (!unk_0x0FAE113CE72ED842(iLocal_86))
			{
				unk_0x9603FB72C3126396(iLocal_86, unk_0x18F7BE9ACB7D08F4(), 300f, -1, 0, 0);
			}
			iVar0 = 0;
			while (iVar0 < Local_204.f_0)
			{
				if (unk_0x31F12808DC47A9E5(Local_204[iVar0 /*18*/]))
				{
					if (unk_0xD76674575E7BA743(Local_204[iVar0 /*18*/]) && unk_0xB7A628320EFF8E47(unk_0x761660F5CE986DC4(Local_204[iVar0 /*18*/], 1), unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1)) > 900f)
					{
						if (unk_0x31F12808DC47A9E5(Local_204[iVar0 /*18*/].f_2))
						{
							unk_0x5BE35A26B9097351(&(Local_204[iVar0 /*18*/].f_2));
						}
						unk_0x63C116C2153FAA3C(&(Local_204[iVar0 /*18*/]));
					}
				}
				if (unk_0xE769D9B5158D0F11(Local_204[iVar0 /*18*/].f_1))
				{
					unk_0x40D517D991458154(&(Local_204[iVar0 /*18*/].f_1));
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < Local_131.f_0)
			{
				if (unk_0x31F12808DC47A9E5(Local_131[iVar0 /*18*/]))
				{
					if (unk_0xD76674575E7BA743(Local_131[iVar0 /*18*/]) && unk_0xB7A628320EFF8E47(unk_0x761660F5CE986DC4(Local_131[iVar0 /*18*/], 1), unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1)) > 900f)
					{
						unk_0xBECECD970F645217(&(Local_131[iVar0 /*18*/]));
					}
				}
				if (unk_0xE769D9B5158D0F11(Local_131[iVar0 /*18*/].f_1))
				{
					unk_0x40D517D991458154(&(Local_131[iVar0 /*18*/].f_1));
				}
				iVar0++;
			}
			unk_0xC1B1E9A034A63A62(0);
			iLocal_673 = 0;
			iLocal_369++;
			break;
		
		case 1:
			iVar1 = 0;
			iVar0 = 0;
			while (iVar0 < Local_204.f_0)
			{
				if ((unk_0x31F12808DC47A9E5(Local_204[iVar0 /*18*/]) && !unk_0x0FAE113CE72ED842(Local_204[iVar0 /*18*/])) && !unk_0x74C2FE037DFC8B4A(Local_204[iVar0 /*18*/], 0))
				{
					iVar1++;
					func_46(unk_0x18F7BE9ACB7D08F4(), iVar0);
					if (unk_0xD76674575E7BA743(Local_204[iVar0 /*18*/]) && unk_0xB7A628320EFF8E47(unk_0x761660F5CE986DC4(Local_204[iVar0 /*18*/], 1), unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1)) > 2500f)
					{
						if (unk_0x31F12808DC47A9E5(Local_204[iVar0 /*18*/].f_2))
						{
							unk_0x5BE35A26B9097351(&(Local_204[iVar0 /*18*/].f_2));
						}
						unk_0x63C116C2153FAA3C(&(Local_204[iVar0 /*18*/]));
					}
				}
				iVar0++;
			}
			if (!iLocal_673)
			{
				if (unk_0xB7A628320EFF8E47(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), unk_0x761660F5CE986DC4(func_65(), 1)) < 100f)
				{
					iVar2 = unk_0x61E9B3BFA06B017B(0, 3);
					if (func_19() == 1)
					{
						func_18(&Local_395, 6);
						func_18(&Local_395, 7);
						func_18(&Local_395, 8);
						switch (iVar2)
						{
							case 0:
								func_17(&Local_395, 6, func_65(), "PAP1ESCAPE", 0, 1);
								if (unk_0x31F12808DC47A9E5(Local_395[6 /*10*/]) && !unk_0x0FAE113CE72ED842(Local_395[6 /*10*/]))
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_PAP1", 4, 0, 0, 0))
									{
										iLocal_673 = 1;
									}
								}
								break;
							
							case 1:
								func_17(&Local_395, 7, func_65(), "PAP2ESCAPE", 0, 1);
								if (unk_0x31F12808DC47A9E5(Local_395[7 /*10*/]) && !unk_0x0FAE113CE72ED842(Local_395[7 /*10*/]))
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_PAP2", 4, 0, 0, 0))
									{
										iLocal_673 = 1;
									}
								}
								break;
							
							case 2:
								func_17(&Local_395, 8, func_65(), "PAP3ESCAPE", 0, 1);
								if (unk_0x31F12808DC47A9E5(Local_395[8 /*10*/]) && !unk_0x0FAE113CE72ED842(Local_395[8 /*10*/]))
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_PAP3", 4, 0, 0, 0))
									{
										iLocal_673 = 1;
									}
								}
								break;
						}
					}
					else if (func_19() == 2)
					{
						func_18(&Local_395, 6);
						func_18(&Local_395, 5);
						iVar2 = unk_0x61E9B3BFA06B017B(0, 3);
						switch (iVar2)
						{
							case 0:
								func_17(&Local_395, 6, func_65(), "PAP1ESCAPE", 0, 1);
								if (unk_0x31F12808DC47A9E5(Local_395[iVar2 /*10*/]) && !unk_0x0FAE113CE72ED842(Local_395[iVar2 /*10*/]))
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_TAKE1T", 4, 0, 0, 0))
									{
										iLocal_673 = 1;
									}
								}
								break;
							
							case 1:
								func_17(&Local_395, 5, func_65(), "PAP2ESCAPE", 0, 1);
								if (unk_0x31F12808DC47A9E5(Local_395[iVar2 /*10*/]) && !unk_0x0FAE113CE72ED842(Local_395[iVar2 /*10*/]))
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_TAKE2T", 4, 0, 0, 0))
									{
										iLocal_673 = 1;
									}
								}
								break;
							
							case 2:
								func_17(&Local_395, 5, func_65(), "PAP2ESCAPE", 0, 1);
								if (unk_0x31F12808DC47A9E5(Local_395[iVar2 /*10*/]) && !unk_0x0FAE113CE72ED842(Local_395[iVar2 /*10*/]))
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_TAKE2T", 4, 0, 0, 0))
									{
										iLocal_673 = 1;
									}
								}
								break;
						}
					}
					else
					{
						func_18(&Local_395, 6);
						func_18(&Local_395, 5);
						iVar2 = unk_0x61E9B3BFA06B017B(0, 3);
						switch (iVar2)
						{
							case 0:
								func_17(&Local_395, 6, func_65(), "PAP1ESCAPE", 0, 1);
								if (unk_0x31F12808DC47A9E5(Local_395[iVar2 /*10*/]) && !unk_0x0FAE113CE72ED842(Local_395[iVar2 /*10*/]))
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_TAKE1M", 4, 0, 0, 0))
									{
										iLocal_673 = 1;
									}
								}
								break;
							
							case 1:
								func_17(&Local_395, 5, func_65(), "PAP2ESCAPE", 0, 1);
								if (unk_0x31F12808DC47A9E5(Local_395[iVar2 /*10*/]) && !unk_0x0FAE113CE72ED842(Local_395[iVar2 /*10*/]))
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_TAKE2M", 4, 0, 0, 0))
									{
										iLocal_673 = 1;
									}
								}
								break;
							
							case 2:
								func_17(&Local_395, 5, func_65(), "PAP2ESCAPE", 0, 1);
								if (unk_0x31F12808DC47A9E5(Local_395[iVar2 /*10*/]) && !unk_0x0FAE113CE72ED842(Local_395[iVar2 /*10*/]))
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_TAKE2M", 4, 0, 0, 0))
									{
										iLocal_673 = 1;
									}
								}
								break;
							}
						}
					}
			}
			if (func_67())
			{
				func_190();
				func_274();
			}
			if (iVar1 == 0)
			{
				func_274();
			}
			break;
	}
}

void func_101(char* sParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	
	if (iLocal_49 != 5)
	{
		iLocal_49 = 5;
	}
	if (!iLocal_672)
	{
		iVar0 = 0;
		while (iVar0 < Local_204.f_0)
		{
			if (unk_0x31F12808DC47A9E5(Local_204[iVar0 /*18*/]) && !unk_0x0FAE113CE72ED842(Local_204[iVar0 /*18*/]))
			{
				unk_0x267F7A2DFDFFB077(Local_204[iVar0 /*18*/]);
				Local_204[iVar0 /*18*/].f_16 = 2;
			}
			iVar0++;
		}
		iLocal_672 = 1;
	}
	iVar0 = 0;
	while (iVar0 < Local_204.f_0)
	{
		if (unk_0xE769D9B5158D0F11(Local_204[iVar0 /*18*/].f_1))
		{
			unk_0x40D517D991458154(&(Local_204[iVar0 /*18*/].f_1));
		}
		if (unk_0x31F12808DC47A9E5(Local_204[iVar0 /*18*/]))
		{
			if (!unk_0x0FAE113CE72ED842(Local_204[iVar0 /*18*/]))
			{
				iVar1++;
				if (!unk_0x0FAE113CE72ED842(iLocal_86))
				{
					if (unk_0x657B649BA2AD3582(Local_204[iVar0 /*18*/], 0))
					{
						unk_0x5941F8B2A813BBA8(Local_204[iVar0 /*18*/], 0, 0);
					}
					else
					{
						func_46(iLocal_86, iVar0);
					}
				}
				else if (unk_0x2BBAA45ECDE3DAE2(Local_204[iVar0 /*18*/], -1146898486) != 1)
				{
					unk_0x1A564F5D3F5B4476(Local_204[iVar0 /*18*/], 1193033728, 0);
				}
			}
			if ((unk_0xD76674575E7BA743(Local_204[iVar0 /*18*/]) && unk_0xB7A628320EFF8E47(unk_0x761660F5CE986DC4(Local_204[iVar0 /*18*/], 1), unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1)) > 400f) && unk_0xB7A628320EFF8E47(unk_0x761660F5CE986DC4(Local_204[iVar0 /*18*/], 1), unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1)) > 400f)
			{
				unk_0x63C116C2153FAA3C(&(Local_204[iVar0 /*18*/]));
				if (unk_0x31F12808DC47A9E5(Local_204[iVar0 /*18*/].f_2))
				{
					unk_0x5BE35A26B9097351(&(Local_204[iVar0 /*18*/].f_2));
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_131.f_0)
	{
		if (unk_0x31F12808DC47A9E5(Local_131[iVar0 /*18*/]))
		{
			if ((unk_0xD76674575E7BA743(Local_131[iVar0 /*18*/]) && unk_0xB7A628320EFF8E47(unk_0x761660F5CE986DC4(Local_131[iVar0 /*18*/], 1), unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1)) > 2500f) && func_52(Local_131[iVar0 /*18*/], 0, 0, 0, 0, 0, 1, 0))
			{
				unk_0x4F5FF3F3FDCAB15D(&(Local_131[iVar0 /*18*/]));
			}
		}
		if (unk_0xE769D9B5158D0F11(Local_131[iVar0 /*18*/].f_1))
		{
			unk_0x40D517D991458154(&(Local_131[iVar0 /*18*/].f_1));
		}
		iVar0++;
	}
	if (unk_0x31F12808DC47A9E5(iLocal_86))
	{
		if (unk_0xD76674575E7BA743(iLocal_86) && unk_0xB7A628320EFF8E47(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), Local_63) > 2500f)
		{
			unk_0xDBE64C5761554FBF(&iLocal_86);
			func_274();
		}
	}
	if (func_67() || func_68(iLocal_86, 1, 1))
	{
		func_178(5);
	}
	iVar0 = 0;
	while (iVar0 < Local_204.f_0)
	{
		if (unk_0x31F12808DC47A9E5(Local_204[iVar0 /*18*/]))
		{
			if (!unk_0x0FAE113CE72ED842(Local_204[iVar0 /*18*/]))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	switch (iLocal_369)
	{
		case 0:
			if (unk_0xE769D9B5158D0F11(uLocal_360))
			{
				unk_0x40D517D991458154(&uLocal_360);
			}
			if (unk_0xE769D9B5158D0F11(uLocal_361))
			{
				unk_0x40D517D991458154(&uLocal_361);
			}
			if (!unk_0x0FAE113CE72ED842(iLocal_86))
			{
				unk_0x267F7A2DFDFFB077(iLocal_86);
				unk_0x33A2A1DBDDF863E7(iLocal_86, 3f);
			}
			func_102();
			if (unk_0x2A488C176D52CCA5(Local_60, Local_63) < 30f)
			{
				if (func_5(&Local_395, cLocal_372, sParam0, 4, 0, 0, 0))
				{
					iVar0 = 0;
					while (iVar0 < Local_204.f_0)
					{
						if (unk_0x31F12808DC47A9E5(Local_204[iVar0 /*18*/]))
						{
							if (!unk_0x0FAE113CE72ED842(Local_204[iVar0 /*18*/]))
							{
								unk_0x267F7A2DFDFFB077(Local_204[iVar0 /*18*/]);
							}
						}
						iVar0++;
					}
					iLocal_369++;
				}
			}
			else
			{
				iVar0 = 0;
				while (iVar0 < Local_204.f_0)
				{
					if (unk_0x31F12808DC47A9E5(Local_204[iVar0 /*18*/]))
					{
						if (!unk_0x0FAE113CE72ED842(Local_204[iVar0 /*18*/]))
						{
							unk_0x267F7A2DFDFFB077(Local_204[iVar0 /*18*/]);
						}
					}
					iVar0++;
				}
				iLocal_369++;
			}
			break;
		
		case 1:
			if (((unk_0xC4B84EB67F78C1F0(iLocal_91, 0) && unk_0x88B79D32B518C327(iLocal_86, iLocal_91, 0)) && !bLocal_368) && unk_0x74B8CA477787A438(iLocal_91, -1, 0))
			{
				if (unk_0x2A488C176D52CCA5(Local_63, Local_53) < 100f)
				{
					unk_0xC8BEB049F3BFC0AB(&uVar2);
					unk_0x5C5C969498EE7548(0, iLocal_91, 0);
					unk_0x0F36ED260B9B4408(0, iLocal_91, Local_53, 20f, 0, joaat("serrano"), 786599, 10f, 10f);
					unk_0xDEB2FA447DC90B82(0, iLocal_91, Local_53, 288.7089f, 1, 50f, 0);
					unk_0xA0C0358B9D284C3C(0, iLocal_91, unk_0x761660F5CE986DC4(iLocal_91, 1), 5, 10f, 262144, 2f, 2f, 1);
					unk_0xD7A975DB04C06BA4(0, iLocal_91, 0);
					unk_0xA303A4837FBB8DDE(0, Local_56, 1f, -1, 0.25f, 512, fLocal_59);
					unk_0x277F581982E2DD7D(0, "WORLD_HUMAN_SMOKING", 0, 1);
					unk_0xAFDA7B8F83B2CA58(uVar2);
					unk_0x73F69DD57B7E92A9(iLocal_86, uVar2);
					unk_0x56C7B20E11B37066(&uVar2);
				}
				else
				{
					unk_0xC8BEB049F3BFC0AB(&uVar3);
					unk_0x5C5C969498EE7548(0, iLocal_91, 0);
					unk_0x21D24CE144A81296(0, iLocal_91, 15f, 786468);
					unk_0xAFDA7B8F83B2CA58(uVar3);
					unk_0x73F69DD57B7E92A9(iLocal_86, uVar3);
					unk_0x56C7B20E11B37066(&uVar3);
				}
				iLocal_369 = 1000;
			}
			else
			{
				if (unk_0x657B649BA2AD3582(iLocal_86, 0))
				{
					unk_0x5941F8B2A813BBA8(iLocal_86, 0, 0);
				}
				iLocal_369++;
			}
			break;
		
		case 2:
			if (iVar1 > 0)
			{
				unk_0x9603FB72C3126396(iLocal_86, unk_0x18F7BE9ACB7D08F4(), 3000f, -1, 1, 0);
				iLocal_369 = 1000;
			}
			else
			{
				if (unk_0x2A488C176D52CCA5(Local_63, Local_53) < 100f)
				{
					unk_0xC8BEB049F3BFC0AB(&uVar4);
					unk_0xA303A4837FBB8DDE(0, Local_56, 1f, -1, 0.25f, 512, fLocal_59);
					unk_0x277F581982E2DD7D(0, "WORLD_HUMAN_SMOKING", 0, 1);
					unk_0xAFDA7B8F83B2CA58(uVar4);
					unk_0x73F69DD57B7E92A9(iLocal_86, uVar4);
					unk_0x56C7B20E11B37066(&uVar4);
				}
				else
				{
					unk_0x1A564F5D3F5B4476(iLocal_86, 1193033728, 0);
				}
				iLocal_369 = 1000;
			}
			break;
		
		case 1000:
			if (iVar1 == 0)
			{
				func_274();
			}
			break;
	}
}

void func_102()
{
	Global_14622 = 0;
	func_103();
}

void func_103()
{
	unk_0x815093B4702C59D8();
	Global_16767 = 0;
	if (unk_0x85FDEF76CDBAD589())
	{
		unk_0xBE97F4E2B659331B(0);
		Global_15756 = 6;
	}
}

void func_104()
{
	func_102();
	if (!unk_0x0FAE113CE72ED842(iLocal_86) && unk_0xB7A628320EFF8E47(Local_60, Local_63) < 900f)
	{
		unk_0x267F7A2DFDFFB077(iLocal_86);
		if (func_5(&Local_395, cLocal_372, "REPAP_CRZY", 4, 0, 0, 0))
		{
			func_190();
			func_178(10);
		}
		unk_0x641E77554763EF06(iLocal_86, -2065892691);
	}
	else
	{
		func_190();
		func_178(10);
	}
}

void func_105()
{
	var uVar0;
	
	switch (iLocal_369)
	{
		case 0:
			func_137();
			if (!unk_0x0FAE113CE72ED842(iLocal_86))
			{
				if (!unk_0xE769D9B5158D0F11(uLocal_360))
				{
					uLocal_360 = func_180(iLocal_86, 0, 145);
				}
				if (unk_0xE769D9B5158D0F11(uLocal_363))
				{
					unk_0x40D517D991458154(&uLocal_363);
				}
				if (unk_0xE769D9B5158D0F11(uLocal_362))
				{
					unk_0x40D517D991458154(&uLocal_362);
				}
				unk_0x267F7A2DFDFFB077(iLocal_86);
				unk_0xC8BEB049F3BFC0AB(&uVar0);
				unk_0xD7A975DB04C06BA4(0, iLocal_91, 0);
				unk_0xA303A4837FBB8DDE(0, Local_56, 1f, 30000, 0.25f, 512, fLocal_59);
				unk_0x277F581982E2DD7D(0, "WORLD_HUMAN_SMOKING", 0, 1);
				unk_0xAFDA7B8F83B2CA58(uVar0);
				unk_0x73F69DD57B7E92A9(iLocal_86, uVar0);
				unk_0x56C7B20E11B37066(&uVar0);
				if (unk_0x4732F444CD45A256(iLocal_86))
				{
					unk_0x95B1A64E8455A478(iLocal_86);
				}
				func_102();
				iLocal_369++;
			}
			break;
		
		case 1:
			if (!func_73() && !unk_0x0FAE113CE72ED842(iLocal_86))
			{
				if (unk_0x8673F2F1802ADEF7(iLocal_86, Local_56, 3f, 3f, 3f, 0, 1, 0) && unk_0x8673F2F1802ADEF7(unk_0x18F7BE9ACB7D08F4(), Local_56, 5f, 5f, 5f, 0, 1, 0))
				{
					iLocal_369++;
				}
			}
			break;
		
		case 2:
			if (!unk_0x0FAE113CE72ED842(iLocal_86))
			{
				func_136(0);
				if (func_5(&Local_395, cLocal_372, "REPAP_THK", 4, 0, 0, 0))
				{
					func_107(func_19(), 1, 150, 0, 1);
					iLocal_369++;
				}
			}
			break;
		
		case 3:
			if (!func_73() && !unk_0x0FAE113CE72ED842(iLocal_86))
			{
				unk_0xC1B1E9A034A63A62(0);
				iLocal_369++;
			}
			break;
		
		case 4:
			if (unk_0x83666F9FB8FEBD4B() > 2000)
			{
				if (func_106())
				{
					func_75();
				}
			}
			break;
	}
}

int func_106()
{
	return 1;
}

void func_107(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (Global_104551.f_28020[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_104551.f_28020[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_108(Global_104551.f_28020[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_random_peds");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_random_peds");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_random_peds");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_missions");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_missions");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_missions");
					break;
				
				default:
					return;
				}
		}
		unk_0xD194C635833AC189(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0xD92C8D8AF3C67820(iVar1, iVar0, 1);
	}
}

int func_108(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_135();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_134(99, 1);
					func_133(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_133(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_133(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_119(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_115(5))
					{
						fVar0 = 0.9f;
						iVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_133(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_133(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_133(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_115(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_133(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_133(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_133(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_133(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_133(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_133(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 98:
				case 99:
				case 100:
				case 101:
				case 103:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
					switch (iParam0)
					{
						case 0:
							func_133(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_133(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_133(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x088BDDE9EE449CE6())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_133(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_133(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_133(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_133(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_133(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_133(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_115(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_133(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_133(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_133(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_133(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_133(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_133(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_114(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_134(95, iParam3);
					break;
				
				case 1:
					func_134(97, iParam3);
					break;
				
				case 2:
					func_134(96, iParam3);
					break;
			}
			func_134(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_111(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_111(iVar1);
	}
	iVar5 = (Global_53075[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_53075[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_53075[iVar2] = 2147483647;
				}
				else
				{
					Global_53075[iVar2] = (Global_53075[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_133(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_133(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_133(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_53075[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_53075[iVar2];
			Global_53075[iVar2] = (Global_53075[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_104551.f_20534.f_233[iVar2 /*69*/].f_2[Global_104551.f_20534.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_104551.f_20534.f_233[iVar2 /*69*/].f_2[Global_104551.f_20534.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_104551.f_20534.f_233[iVar2 /*69*/].f_2[Global_104551.f_20534.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_104551.f_20534.f_233[iVar2 /*69*/]++;
		Global_104551.f_20534.f_233[iVar2 /*69*/].f_1++;
		if (Global_104551.f_20534.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_104551.f_20534.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_110(iParam0);
	if (Global_35859 == 15)
	{
		func_109(0);
	}
	return 1;
}

void func_109(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_104551.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_104551.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_104551.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_104551.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_104551.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_104551.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_53083[iVar0 /*3*/][0] = Global_104551.f_20534[iVar0];
		Global_53083.f_31[iVar0 /*3*/][0] = Global_104551.f_20534.f_11[iVar0];
		Global_53083.f_62[iVar0 /*3*/][0] = Global_104551.f_20534.f_22[iVar0];
		Global_53083.f_93[iVar0 /*3*/][0] = Global_104551.f_20534.f_33[iVar0];
		Global_53083.f_124[iVar0 /*3*/][0] = Global_104551.f_20534.f_44[iVar0];
		Global_53083.f_155[iVar0 /*3*/][0] = Global_104551.f_20534.f_55[iVar0];
		Global_53083.f_186[iVar0 /*3*/][0] = Global_104551.f_20534.f_66[iVar0];
		Global_53083.f_217[iVar0 /*3*/][0] = Global_104551.f_20534.f_77[iVar0];
		Global_53083.f_248[iVar0 /*3*/][0] = Global_104551.f_20534.f_88[iVar0];
		if (!bParam0)
		{
			Global_53083[iVar0 /*3*/][1] = Global_104551.f_20534[iVar0];
			Global_53083.f_31[iVar0 /*3*/][1] = Global_104551.f_20534.f_11[iVar0];
			Global_53083.f_62[iVar0 /*3*/][1] = Global_104551.f_20534.f_22[iVar0];
			Global_53083.f_93[iVar0 /*3*/][1] = Global_104551.f_20534.f_33[iVar0];
			Global_53083.f_124[iVar0 /*3*/][1] = Global_104551.f_20534.f_44[iVar0];
			Global_53083.f_155[iVar0 /*3*/][1] = Global_104551.f_20534.f_55[iVar0];
			Global_53083.f_186[iVar0 /*3*/][1] = Global_104551.f_20534.f_66[iVar0];
			Global_53083.f_217[iVar0 /*3*/][1] = Global_104551.f_20534.f_77[iVar0];
			Global_53083.f_248[iVar0 /*3*/][1] = Global_104551.f_20534.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_110(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_53075[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0xD92C8D8AF3C67820(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0xD92C8D8AF3C67820(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0xD92C8D8AF3C67820(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_111(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_85(129, 0, -1, 1);
		return;
	}
	bVar0 = false;
	if (!unk_0x44243F2E2F58B8E3())
	{
		if (unk_0xB03A1684359C50A1(Global_104551.f_20534.f_471, iParam0))
		{
			bVar0 = true;
			unk_0x62148293B793073B(&(Global_104551.f_20534.f_471), iParam0);
		}
	}
	else if (unk_0xB03A1684359C50A1(Global_104551.f_20534.f_471, iParam0) || unk_0xB03A1684359C50A1(Global_2097152[func_113() /*12062*/].f_7637.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x62148293B793073B(&(Global_104551.f_20534.f_471), iParam0);
		unk_0x62148293B793073B(&(Global_2097152[func_113() /*12062*/].f_7637.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x55E6536147AC42E6("COUP_RED");
		unk_0xBEFD1ED9B6BE5127(func_112(iParam0));
		unk_0xB317125F2A5746EB(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_112(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		case 8:
			return "COUP_XMAS2017";
		
		default:
	}
	return "";
}

int func_113()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_114(int iParam0)
{
	func_134(93, iParam0);
	func_134(29, iParam0);
	func_134(30, iParam0);
}

bool func_115(int iParam0)
{
	if (iParam0 == 8)
	{
		return func_116(129, -1, -1);
	}
	if (!unk_0x44243F2E2F58B8E3())
	{
		return unk_0xB03A1684359C50A1(Global_104551.f_20534.f_471, iParam0);
	}
	return unk_0xB03A1684359C50A1(Global_2097152[func_113() /*12062*/].f_7637.f_10, iParam0);
}

int func_116(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_86();
	}
	iVar1 = func_118(iParam0, iParam1);
	uVar2 = func_117(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x4E4286C35FED641E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_117(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0xC83BD3A121E79D9F((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0xC83BD3A121E79D9F((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0xC83BD3A121E79D9F((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0xC83BD3A121E79D9F((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0xC83BD3A121E79D9F((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0xC83BD3A121E79D9F((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0xC83BD3A121E79D9F((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0xC83BD3A121E79D9F((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0xC83BD3A121E79D9F((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0xC83BD3A121E79D9F((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0xC83BD3A121E79D9F((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0xC83BD3A121E79D9F((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0xC83BD3A121E79D9F((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0xC83BD3A121E79D9F((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0xC83BD3A121E79D9F((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0xC83BD3A121E79D9F((iParam0 - 18098)) * 64);
	}
	return iVar0;
}

int func_118(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_86();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0x88E3F30217D2CB3E((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0x88E3F30217D2CB3E((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0x88E3F30217D2CB3E((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0x88E3F30217D2CB3E((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0xBAF51F55DF57C4B2((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0xBAF51F55DF57C4B2((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	return iVar0;
}

int func_119(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x391A4DC2CC8A9143(27))
	{
		return 0;
	}
	if (unk_0xD194C635833AC189(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xD194C635833AC189(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xD194C635833AC189(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0xD194C635833AC189(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0xD92C8D8AF3C67820(joaat("num_cash_spent"), iVar1, 1);
		func_84(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_120(27, 1);
	return 1;
}

int func_120(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_121(iParam0, iParam1);
}

int func_121(int iParam0, int iParam1)
{
	if (func_12(14) && !func_132(iParam0))
	{
		return 0;
	}
	if (unk_0x391A4DC2CC8A9143(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25479 != 0 && !Global_70852)
	{
		return 0;
	}
	if (func_131(&Global_4267379))
	{
		if (func_129(&Global_4267379, iParam0))
		{
			return 0;
		}
		if (func_122(&Global_4267379, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x4815E9FF4A7078A5(iParam0))
		{
			return 0;
		}
		if (unk_0x391A4DC2CC8A9143(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_122(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x391A4DC2CC8A9143(iParam1))
	{
		return 0;
	}
	if (func_12(14) && !func_132(iParam1))
	{
		return 0;
	}
	if (func_129(uParam0, iParam1))
	{
		return 0;
	}
	if (func_128(uParam0) < 0f)
	{
		func_127(uParam0, 0);
	}
	func_125(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_123(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_123(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x391A4DC2CC8A9143(iParam1))
	{
		return 0;
	}
	if (func_12(14) && !func_132(iParam1))
	{
		return 0;
	}
	if (func_129(uParam0, iParam1))
	{
		return 0;
	}
	if (func_128(uParam0) < 0f)
	{
		func_127(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_124(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_124(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_125(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_126(uParam0, iVar0);
		iVar0++;
	}
	func_127(uParam0, (Global_4267378 - 0.5f));
}

void func_126(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_127(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_128(var uParam0)
{
	return uParam0->f_80;
}

bool func_129(var uParam0, int iParam1)
{
	return func_130(uParam0, iParam1) != -1;
}

int func_130(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_131(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_132(int iParam0)
{
	switch (iParam0)
	{
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
		
		default:
	}
	return 0;
}

void func_133(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xD194C635833AC189(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xD92C8D8AF3C67820(iParam0, iVar0, 1);
}

void func_134(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51643[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x44243F2E2F58B8E3())
	{
		return;
	}
	if (Global_51643[iParam0 /*7*/])
	{
		unk_0xD194C635833AC189(Global_51643[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0xD92C8D8AF3C67820(Global_51643[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_135()
{
	int iVar0;
	
	if (unk_0x1F30842E4146CE70())
	{
		unk_0xD194C635833AC189(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_53075[0] == iVar0)
		{
			Global_53075[0] = iVar0;
		}
		unk_0xD194C635833AC189(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_53075[1] == iVar0)
		{
			Global_53075[1] = iVar0;
		}
		unk_0xD194C635833AC189(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_53075[2] == iVar0)
		{
			Global_53075[2] = iVar0;
		}
	}
}

void func_136(bool bParam0)
{
	if (!unk_0x0FAE113CE72ED842(iLocal_86))
	{
		if (iLocal_621 > 1)
		{
			if (!unk_0x3821A75ECC8A0D5B(iLocal_86, unk_0x18F7BE9ACB7D08F4(), 60f))
			{
				iLocal_621 = 0;
				iLocal_622 = 0;
			}
		}
		switch (iLocal_621)
		{
			case 0:
				unk_0x267F7A2DFDFFB077(iLocal_86);
				unk_0x6016A20BFEAEFE11(iLocal_86, unk_0x18F7BE9ACB7D08F4(), -1, 16, 2);
				unk_0xC8BEB049F3BFC0AB(&uLocal_620);
				unk_0x8F467CFC5FBBCE77(0, unk_0x18F7BE9ACB7D08F4(), 0);
				unk_0x6016A20BFEAEFE11(0, unk_0x18F7BE9ACB7D08F4(), -1, 16, 2);
				unk_0xAFDA7B8F83B2CA58(uLocal_620);
				unk_0x73F69DD57B7E92A9(iLocal_86, uLocal_620);
				unk_0x56C7B20E11B37066(&uLocal_620);
				iLocal_621++;
				break;
			
			case 1:
				if (unk_0x2BBAA45ECDE3DAE2(iLocal_86, 242628503) != 1)
				{
					iLocal_621++;
				}
				break;
			
			case 2:
				if (bParam0)
				{
					switch (iLocal_622)
					{
						case 0:
							if (!unk_0xDFEB6D8BCE2B43F6(iLocal_86, "random@paparazzi@wait", "wait_a", 3))
							{
								unk_0xB5746603774C4C9D(iLocal_86, "random@paparazzi@wait", "wait_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
							}
							else if (unk_0xE825CDE0EAED051D(iLocal_86, "random@paparazzi@wait", "wait_a") > 0.95f)
							{
								unk_0xB5746603774C4C9D(iLocal_86, "random@paparazzi@wait", "wait_b", 4f, -4f, -1, 0, 0, 0, 0, 0);
								iLocal_622++;
							}
							break;
						
						case 1:
							if (!unk_0xDFEB6D8BCE2B43F6(iLocal_86, "random@paparazzi@wait", "wait_b", 3))
							{
								unk_0xB5746603774C4C9D(iLocal_86, "random@paparazzi@wait", "wait_b", 4f, -4f, -1, 0, 0, 0, 0, 0);
							}
							else if (unk_0xE825CDE0EAED051D(iLocal_86, "random@paparazzi@wait", "wait_b") > 0.95f)
							{
								unk_0xB5746603774C4C9D(iLocal_86, "random@paparazzi@wait", "wait_c", 4f, -4f, -1, 0, 0, 0, 0, 0);
								iLocal_622++;
							}
							break;
						
						case 2:
							if (!unk_0xDFEB6D8BCE2B43F6(iLocal_86, "random@paparazzi@wait", "wait_c", 3))
							{
								unk_0xB5746603774C4C9D(iLocal_86, "random@paparazzi@wait", "wait_c", 4f, -4f, -1, 0, 0, 0, 0, 0);
							}
							else if (unk_0xE825CDE0EAED051D(iLocal_86, "random@paparazzi@wait", "wait_c") > 0.95f)
							{
								unk_0xB5746603774C4C9D(iLocal_86, "random@paparazzi@wait", "wait_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
								iLocal_622 = 0;
							}
							break;
						}
				}
				break;
			}
	}
}

void func_137()
{
	if (unk_0xE769D9B5158D0F11(uLocal_364))
	{
		unk_0x40D517D991458154(&uLocal_364);
	}
}

void func_138()
{
	var uVar0;
	
	if (unk_0xC4B84EB67F78C1F0(iLocal_91, 0))
	{
		switch (iLocal_369)
		{
			case 0:
				if (!unk_0x0FAE113CE72ED842(iLocal_86) && unk_0xC4B84EB67F78C1F0(iLocal_91, 0))
				{
					func_137();
					func_142(1, 1, 0, 0);
					if (unk_0xE769D9B5158D0F11(uLocal_362))
					{
						unk_0x40D517D991458154(&uLocal_362);
					}
					if (unk_0xE769D9B5158D0F11(uLocal_360))
					{
						unk_0x40D517D991458154(&uLocal_360);
					}
					if (unk_0xE769D9B5158D0F11(uLocal_361))
					{
						unk_0x40D517D991458154(&uLocal_361);
					}
					if (unk_0x4732F444CD45A256(iLocal_86))
					{
						unk_0x95B1A64E8455A478(iLocal_86);
					}
					func_140();
					if (!unk_0x0FAE113CE72ED842(iLocal_86))
					{
						unk_0x13C89D4679DD9966(iLocal_86, unk_0x0AF3D0AB54EA2104(iLocal_91, -10f, 5f, 0f), -1, 16, 4);
					}
					unk_0x13C89D4679DD9966(unk_0x18F7BE9ACB7D08F4(), unk_0x0AF3D0AB54EA2104(iLocal_91, 10f, 5f, 0f), 15000, 16, 4);
					unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 0, 1280);
					if ((bLocal_368 || Global_3) || bLocal_70)
					{
						while (!func_139(&Local_395, cLocal_372, "REPAP_THK", "REPAP_THK_1", 4, 0, 0))
						{
							unk_0x4EDE34FBADD967A6(0);
						}
					}
					else
					{
						while (!func_5(&Local_395, cLocal_372, "REPAP_THK", 4, 0, 0, 0))
						{
							unk_0x4EDE34FBADD967A6(0);
						}
					}
					func_107(func_19(), 1, 750, 0, 1);
					if (!unk_0x0FAE113CE72ED842(iLocal_86))
					{
						unk_0x13C89D4679DD9966(iLocal_86, unk_0x0AF3D0AB54EA2104(iLocal_91, -10f, 5f, 0f), -1, 16, 4);
						unk_0x8F2E6C470A0005D4(iLocal_86, 0, 0);
					}
					unk_0x13C89D4679DD9966(unk_0x18F7BE9ACB7D08F4(), unk_0x0AF3D0AB54EA2104(iLocal_91, 10f, 5f, 0f), 15000, 16, 4);
					iLocal_369++;
				}
				break;
			
			case 1:
				if (!func_73() && !unk_0x0FAE113CE72ED842(iLocal_86))
				{
					unk_0xC8BEB049F3BFC0AB(&uVar0);
					unk_0xD7A975DB04C06BA4(0, iLocal_91, 0);
					unk_0xA303A4837FBB8DDE(0, Local_56, 1f, 30000, 0.25f, 512, fLocal_59);
					unk_0x277F581982E2DD7D(0, "WORLD_HUMAN_SMOKING", 0, 1);
					unk_0xAFDA7B8F83B2CA58(uVar0);
					unk_0x73F69DD57B7E92A9(iLocal_86, uVar0);
					unk_0x56C7B20E11B37066(&uVar0);
					iLocal_369++;
					unk_0xC1B1E9A034A63A62(0);
				}
				break;
			
			case 2:
				if (!unk_0x0FAE113CE72ED842(iLocal_86) && unk_0xC4B84EB67F78C1F0(iLocal_91, 0))
				{
					if (!unk_0x88B79D32B518C327(iLocal_86, iLocal_91, 0))
					{
						unk_0xC1B1E9A034A63A62(0);
						if (bLocal_368)
						{
							unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 1, 0);
							func_142(0, 1, 0, 0);
							iLocal_369 = 5;
						}
						else
						{
							iLocal_369++;
						}
					}
				}
				break;
			
			case 3:
				if ((!unk_0x0FAE113CE72ED842(iLocal_86) && unk_0xC4B84EB67F78C1F0(iLocal_91, 0)) && unk_0x83666F9FB8FEBD4B() > 1000)
				{
					unk_0xD7A975DB04C06BA4(unk_0x18F7BE9ACB7D08F4(), iLocal_91, 0);
					unk_0x6016A20BFEAEFE11(unk_0x18F7BE9ACB7D08F4(), iLocal_91, 10000, 0, 3);
					iLocal_369++;
				}
				break;
			
			case 4:
				if (unk_0xC4B84EB67F78C1F0(iLocal_91, 0) && !unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), iLocal_91, 0))
				{
					unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 1, 0);
					func_142(0, 1, 0, 0);
					unk_0xA2B45B1D3EE42178(iLocal_91, 2);
					unk_0xC1B1E9A034A63A62(0);
					iLocal_369++;
				}
				break;
			
			case 5:
				if (unk_0x83666F9FB8FEBD4B() > 1000)
				{
					if (func_106())
					{
						if (!bLocal_368)
						{
							if (!func_94(19))
							{
								func_90("AM_H_CALLTX", 1, 0, -1, 10000, 7, 0, 0, 0);
								func_89(19);
							}
						}
						func_75();
					}
				}
				break;
			}
	}
}

bool func_139(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_16(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15763 = 0;
	Global_15770 = 0;
	Global_15765 = 0;
	Global_16747 = 1;
	Global_16749 = 0;
	Global_16753 = 0;
	StringCopy(&Global_16760, sParam3, 24);
	Global_2621441 = 0;
	return func_6(sParam2, iParam4, 0);
}

void func_140()
{
	Global_14622 = 0;
	func_141();
}

void func_141()
{
	if (unk_0x85FDEF76CDBAD589())
	{
		unk_0x815093B4702C59D8();
		Global_16767 = 0;
		unk_0xBE97F4E2B659331B(1);
		Global_15756 = 6;
		return;
	}
}

void func_142(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0x23E72737746790F6(unk_0x8CFC7D6E1DA5D304());
		unk_0x9A63F1CF5AD1028E(unk_0x8CFC7D6E1DA5D304(), 1);
		unk_0x10196728B08EFD0D(unk_0x8CFC7D6E1DA5D304(), 1);
		func_149(1);
		unk_0x11E17A11B13AC43A();
		unk_0x6F202559EF4E43CE();
		if (Global_14453.f_1 > 3)
		{
			if (unk_0x36328FCBA2944E1F())
			{
				unk_0xBE97F4E2B659331B(0);
			}
			if (!func_9())
			{
				Global_14453.f_1 = 3;
			}
			Global_15756 = 5;
		}
		func_148(1, iParam3, iParam2, 0);
		Global_55907 = 1;
		Global_68216 = 1;
		Global_70850 = 1;
	}
	else
	{
		func_149(0);
		unk_0x100AF4FA3B247263();
		Global_55907 = 0;
		if (bParam1)
		{
			unk_0x5D7F2DFCC7EFF8A1();
		}
		unk_0x9A63F1CF5AD1028E(unk_0x8CFC7D6E1DA5D304(), 0);
		unk_0x10196728B08EFD0D(unk_0x8CFC7D6E1DA5D304(), 0);
		func_148(0, iParam3, iParam2, 0);
		if (unk_0x44243F2E2F58B8E3())
		{
			if (((!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()) && !func_146(unk_0x8CFC7D6E1DA5D304())) && !func_144(unk_0x8CFC7D6E1DA5D304(), 0)) && !func_143())
			{
				unk_0xF74B493CCF90C997(unk_0x18F7BE9ACB7D08F4(), 0);
			}
		}
		else if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()) && !func_146(unk_0x8CFC7D6E1DA5D304()))
		{
			unk_0xF74B493CCF90C997(unk_0x18F7BE9ACB7D08F4(), 0);
		}
		Global_70850 = 0;
	}
}

bool func_143()
{
	return unk_0xB03A1684359C50A1(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_39.f_18, 14);
}

bool func_144(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x8CFC7D6E1DA5D304())
	{
		bVar0 = func_145(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1595681[iParam0 /*678*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x4AF13BCD120BCDBC(iParam0))
		{
			bVar0 = unk_0x1BE7B010C9B9841E(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_145(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_86();
	}
	if (Global_1312834[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312730[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_146(int iParam0)
{
	if (func_144(iParam0, 0))
	{
		return 1;
	}
	if (func_147())
	{
		if (iParam0 == unk_0x8CFC7D6E1DA5D304())
		{
			return 1;
		}
	}
	if (unk_0xB03A1684359C50A1(Global_2422724[iParam0 /*420*/].f_210, 2))
	{
		return 1;
	}
	return 0;
}

bool func_147()
{
	return unk_0xB03A1684359C50A1(Global_2359302, 3);
}

int func_148(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xC339C5C5B5E8BC5B())
	{
		if (unk_0x511092EDBCB2F66B() != iParam0 && uParam2)
		{
			unk_0x0602616B0914EF8A(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_149(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xD2A9C3F486236CC5(&Global_2323, 13);
	}
	else
	{
		unk_0x62148293B793073B(&Global_2323, 13);
	}
}

void func_150()
{
	if (Global_3 || bLocal_70)
	{
		unk_0x3FA15AFD13DBAD3E(0.7f);
	}
	if (bLocal_368 && !unk_0x0FAE113CE72ED842(iLocal_86))
	{
		if (!func_171(iLocal_86))
		{
			if (!unk_0xE769D9B5158D0F11(uLocal_360))
			{
				uLocal_360 = func_180(iLocal_86, 0, 145);
			}
		}
		else
		{
			if (func_66())
			{
				if (!unk_0xE769D9B5158D0F11(uLocal_362))
				{
					uLocal_362 = func_50(Local_53, 1);
				}
				if (unk_0xE769D9B5158D0F11(uLocal_363))
				{
					unk_0x40D517D991458154(&uLocal_363);
				}
			}
			else
			{
				if (!unk_0xE769D9B5158D0F11(uLocal_363))
				{
					uLocal_363 = func_50(Local_56, 1);
				}
				if (unk_0xE769D9B5158D0F11(uLocal_362))
				{
					unk_0x40D517D991458154(&uLocal_362);
				}
			}
			if (unk_0xE769D9B5158D0F11(uLocal_360))
			{
				unk_0x40D517D991458154(&uLocal_360);
			}
		}
		if (!unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), iLocal_91, 0))
		{
			if ((unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0) && unk_0xC4B84EB67F78C1F0(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0), 0)) && func_170(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0)))
			{
				iLocal_91 = 0;
				iLocal_91 = unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0);
				unk_0x337F2213526139E0(iLocal_91, 1, 1);
				unk_0xA2B45B1D3EE42178(iLocal_91, 1);
				unk_0x6780B033CB86560E(iLocal_91, 0, 0);
			}
		}
		if (unk_0xE769D9B5158D0F11(uLocal_363) && !unk_0x657B649BA2AD3582(iLocal_86, 0))
		{
			if (unk_0x8673F2F1802ADEF7(unk_0x18F7BE9ACB7D08F4(), Local_56, 15f, 15f, 15f, 0, 1, 0) || unk_0x8673F2F1802ADEF7(unk_0x18F7BE9ACB7D08F4(), 231.7982f, 672.7683f, 189.2f, 1f, 1f, 2.5f, 1, 1, 0))
			{
				func_178(4);
			}
		}
		else if (iLocal_369 != 100)
		{
			if (func_66() && func_169(1, 1, 1))
			{
				if (unk_0x11BBEE2752B9D0C8(iLocal_91, 225.5938f, 681.1489f, 188.4262f, 232.02f, 681.3113f, 191.9843f, 8.75f, 0, 1, 0) || unk_0x8673F2F1802ADEF7(unk_0x18F7BE9ACB7D08F4(), 226.6788f, 681.0637f, 189f, 1f, 1f, 2.5f, 1, 1, 0))
				{
					unk_0xC1B1E9A034A63A62(0);
					iLocal_369 = 100;
				}
			}
			else if (!unk_0x88B79D32B518C327(iLocal_86, iLocal_91, 0))
			{
				if (unk_0x2BBAA45ECDE3DAE2(iLocal_86, -1794415470) != 1)
				{
					unk_0xFDBDFC454E44A5BF(iLocal_86, iLocal_91, -1, func_168(iLocal_91), 2f, 8388608, 0);
				}
			}
		}
	}
	else
	{
		if (iLocal_369 != 100)
		{
			if (func_66() && func_169(1, 1, 1))
			{
				if (unk_0x11BBEE2752B9D0C8(iLocal_91, 225.5938f, 681.1489f, 188.4262f, 232.02f, 681.3113f, 191.9843f, 8.75f, 0, 1, 0) || unk_0x8673F2F1802ADEF7(unk_0x18F7BE9ACB7D08F4(), 226.6788f, 681.0637f, 189f, 1f, 1f, 2.5f, 1, 1, 0))
				{
					unk_0xC1B1E9A034A63A62(0);
					iLocal_369 = 100;
				}
			}
		}
		func_165(1);
	}
	switch (iLocal_369)
	{
		case 0:
			if (func_66())
			{
				if (unk_0xDFEB6D8BCE2B43F6(iLocal_86, "VEH@STD@PS@IDLE_PANIC", "sit", 3) || unk_0xDFEB6D8BCE2B43F6(iLocal_86, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 3))
				{
					unk_0x267F7A2DFDFFB077(iLocal_86);
				}
				if (func_5(&Local_395, cLocal_372, "REPAP_HM", 4, 0, 0, 0))
				{
					unk_0x8BB3FA32294185BB(0.5f);
					iLocal_369++;
				}
				if (!func_164())
				{
					func_159();
				}
			}
			break;
		
		case 1:
			if (!func_74())
			{
				if (func_66())
				{
					if (!func_73())
					{
						if (func_19() == 0)
						{
							if (func_5(&Local_395, cLocal_372, "REPAP_LIFTM", 4, 0, 0, 0))
							{
								iLocal_369++;
							}
						}
						else if (func_19() == 1)
						{
							if (func_5(&Local_395, cLocal_372, "REPAP_LIFTF", 4, 0, 0, 0))
							{
								iLocal_369++;
							}
						}
						else if (func_5(&Local_395, cLocal_372, "REPAP_LIFTT", 4, 0, 0, 0))
						{
							iLocal_369++;
						}
					}
				}
			}
			break;
		
		case 2:
			if (!func_74())
			{
				if (func_66())
				{
					if (func_5(&Local_395, cLocal_372, "REPAP_PLEAD", 4, 0, 0, 0))
					{
						unk_0xC1B1E9A034A63A62(0);
						if (Global_3 || bLocal_70)
						{
							iLocal_369 = 99;
						}
						else
						{
							iLocal_369++;
						}
					}
				}
			}
			break;
		
		case 3:
			if (unk_0x83666F9FB8FEBD4B() > 7000)
			{
				if (func_155("REPAP_HOME1", (func_158() && !func_74())))
				{
					iLocal_369++;
				}
			}
			break;
		
		case 4:
			if (func_19() == 0)
			{
				if (func_155("REPAP_HOME1M", (func_158() && !func_74())))
				{
					iLocal_369++;
				}
			}
			else if (func_19() == 1)
			{
				if (func_155("REPAP_HOME1F", (func_158() && !func_74())))
				{
					iLocal_369++;
				}
			}
			else if (func_155("REPAP_HOME1T", (func_158() && !func_74())))
			{
				iLocal_369++;
			}
			break;
		
		case 5:
			if (func_155("REPAP_HOME1L", (func_158() && !func_74())))
			{
				unk_0xC1B1E9A034A63A62(0);
				iLocal_369++;
			}
			break;
		
		case 6:
			if (!func_74())
			{
				if (unk_0x83666F9FB8FEBD4B() > 7000)
				{
					if (func_158())
					{
						if (func_5(&Local_395, cLocal_372, "REPAP_HOME2", 4, 0, 0, 0))
						{
							iLocal_369++;
						}
					}
				}
			}
			break;
		
		case 7:
			if (!func_74())
			{
				if (func_158() && !func_73())
				{
					if (func_154("REPAP_HOME2"))
					{
						iLocal_369++;
					}
				}
			}
			break;
		
		case 8:
			if (func_155("REPAP_HOME2L", (func_158() && !func_74())))
			{
				iLocal_369++;
			}
			break;
		
		case 9:
			if (!func_74())
			{
				if (func_158() && !func_73())
				{
					if (func_154("REPAP_RESP2"))
					{
						unk_0xC1B1E9A034A63A62(0);
						iLocal_369++;
					}
				}
			}
			break;
		
		case 10:
			if (unk_0x83666F9FB8FEBD4B() > 7000)
			{
				if (func_155("REPAP_HOME3", (func_158() && !func_74())))
				{
					iLocal_369++;
				}
			}
			break;
		
		case 11:
			if (!func_74())
			{
				if (func_158() && !func_73())
				{
					if (func_154("REPAP_HOME3"))
					{
						unk_0xC1B1E9A034A63A62(0);
						iLocal_369++;
					}
				}
			}
			break;
		
		case 12:
			if (unk_0x83666F9FB8FEBD4B() > 7000)
			{
				if (func_155("REPAP_HOME4", (func_158() && !func_74())))
				{
					iLocal_369++;
				}
			}
			break;
		
		case 13:
			if (!func_74())
			{
				if (func_158() && !func_73())
				{
					if (func_154("REPAP_HOME4"))
					{
						unk_0xC1B1E9A034A63A62(0);
						iLocal_369++;
					}
				}
			}
			break;
		
		case 14:
			if (unk_0x83666F9FB8FEBD4B() > 7000)
			{
				if (func_155("REPAP_NOBAN", (func_158() && !func_74())))
				{
					iLocal_369++;
				}
			}
			break;
		
		case 15:
			if (!func_74())
			{
				if (func_158() && !func_73())
				{
					if (func_154("REPAP_NOBAN"))
					{
						iLocal_369++;
					}
				}
			}
			break;
		
		case 16:
			if (!func_74())
			{
				if (func_158() && !func_73())
				{
					if (func_5(&Local_395, cLocal_372, "REPAP_NOBANL", 4, 0, 0, 0))
					{
						iLocal_369++;
					}
				}
			}
			break;
		
		case 17:
			func_74();
			break;
		
		case 100:
			if (func_152(iLocal_91, 5f, 5, 1056964608, 0, 1, 0))
			{
				func_179("");
				func_178(3);
			}
			break;
	}
	if (unk_0xFF3D7D0CFD33DE47(unk_0x8CFC7D6E1DA5D304()) > 0)
	{
		func_71();
	}
	if (func_19() == 2)
	{
		if ((func_151() && !func_164()) && iLocal_47 != 8)
		{
			if (!unk_0x0FAE113CE72ED842(iLocal_86))
			{
				if (unk_0x8673F2F1802ADEF7(iLocal_86, -1034.6f, 4918.6f, 205.9f, 5f, 5f, 5f, 0, 1, 0))
				{
					if (!unk_0x3F34AC735B9567E3(iLocal_86, unk_0x7C9C05CA6A57A7E1(unk_0x8CFC7D6E1DA5D304())))
					{
						unk_0xE186B0FBC086038E(iLocal_86, unk_0x7C9C05CA6A57A7E1(unk_0x8CFC7D6E1DA5D304()));
					}
					func_102();
					iLocal_47 = 8;
				}
			}
		}
	}
}

var func_151()
{
	return Global_25467;
}

int func_152(int iParam0, int iParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0x9C7EE7DE7041A3F4(0, 71, 1);
	unk_0x9C7EE7DE7041A3F4(0, 72, 1);
	unk_0x9C7EE7DE7041A3F4(0, 76, 1);
	unk_0x9C7EE7DE7041A3F4(0, 73, 1);
	unk_0x9C7EE7DE7041A3F4(0, 59, 1);
	unk_0x9C7EE7DE7041A3F4(0, 60, 1);
	if (bParam5)
	{
		unk_0x9C7EE7DE7041A3F4(0, 75, 1);
	}
	unk_0x9C7EE7DE7041A3F4(0, 80, 1);
	if (!bParam6)
	{
		unk_0x9C7EE7DE7041A3F4(0, 69, 1);
		unk_0x9C7EE7DE7041A3F4(0, 70, 1);
		unk_0x9C7EE7DE7041A3F4(0, 68, 1);
	}
	unk_0x9C7EE7DE7041A3F4(0, 74, 1);
	unk_0x9C7EE7DE7041A3F4(0, 86, 1);
	unk_0x9C7EE7DE7041A3F4(0, 81, 1);
	unk_0x9C7EE7DE7041A3F4(0, 82, 1);
	unk_0x9C7EE7DE7041A3F4(0, 138, 1);
	unk_0x9C7EE7DE7041A3F4(0, 136, 1);
	unk_0x9C7EE7DE7041A3F4(0, 114, 1);
	unk_0x9C7EE7DE7041A3F4(0, 107, 1);
	unk_0x9C7EE7DE7041A3F4(0, 110, 1);
	unk_0x9C7EE7DE7041A3F4(0, 89, 1);
	unk_0x9C7EE7DE7041A3F4(0, 89, 1);
	unk_0x9C7EE7DE7041A3F4(0, 87, 1);
	unk_0x9C7EE7DE7041A3F4(0, 88, 1);
	unk_0x9C7EE7DE7041A3F4(0, 113, 1);
	unk_0x9C7EE7DE7041A3F4(0, 115, 1);
	unk_0x9C7EE7DE7041A3F4(0, 116, 1);
	unk_0x9C7EE7DE7041A3F4(0, 117, 1);
	unk_0x9C7EE7DE7041A3F4(0, 118, 1);
	unk_0x9C7EE7DE7041A3F4(0, 119, 1);
	unk_0x9C7EE7DE7041A3F4(0, 131, 1);
	unk_0x9C7EE7DE7041A3F4(0, 132, 1);
	unk_0x9C7EE7DE7041A3F4(0, 123, 1);
	unk_0x9C7EE7DE7041A3F4(0, 126, 1);
	unk_0x9C7EE7DE7041A3F4(0, 129, 1);
	unk_0x9C7EE7DE7041A3F4(0, 130, 1);
	unk_0x9C7EE7DE7041A3F4(0, 133, 1);
	unk_0x9C7EE7DE7041A3F4(0, 134, 1);
	unk_0x95C6D943AF847EEC();
	func_153(iParam0);
	if ((unk_0x5AFB8ED811F05E4D() - Global_29) > 500)
	{
		unk_0x7F8DAED41E5794FC(iParam0, iParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x5AFB8ED811F05E4D();
	if (!unk_0x74C2FE037DFC8B4A(iParam0, 0))
	{
		if (unk_0x36E1A96E1D63ED91(unk_0x2A72627520A107B5(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_153(int iParam0)
{
	if (!unk_0x74C2FE037DFC8B4A(uParam0, 0))
	{
		if (unk_0x15E3947C9B9DDEC8(iParam0))
		{
			if (unk_0x1F8B50D0C3034AAE(iParam0))
			{
				unk_0xFE5D726DE23CEFF5(iParam0, 0);
			}
		}
	}
}

int func_154(char* sParam0)
{
	struct<3> Var0;
	
	StringConCat(&Var0, sParam0, 24);
	if (func_19() == 0)
	{
		StringConCat(&Var0, "M", 24);
	}
	else if (func_19() == 1)
	{
		StringConCat(&Var0, "F", 24);
	}
	else
	{
		StringConCat(&Var0, "T", 24);
	}
	if (func_5(&Local_395, cLocal_372, &Var0, 4, 0, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_155(char* sParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!iLocal_72)
		{
			if (func_5(&Local_395, cLocal_372, sParam0, 4, 0, 0, 0))
			{
				iLocal_72 = 1;
				iLocal_73 = 0;
			}
		}
		else if (iLocal_73)
		{
			if (func_157(&Local_395, cLocal_372, sParam0, &Local_75, 4, 0, 0))
			{
				iLocal_73 = 0;
			}
		}
		if ((iLocal_72 && !iLocal_73) && bParam1)
		{
			if (iLocal_81 == -1)
			{
				if (!func_73())
				{
					iLocal_81 = unk_0x5AFB8ED811F05E4D();
				}
			}
			else if ((unk_0x5AFB8ED811F05E4D() - iLocal_81) > 500)
			{
				iLocal_81 = -1;
				iLocal_72 = 0;
				iLocal_73 = 0;
				return 1;
			}
		}
	}
	else if (iLocal_72 && !iLocal_73)
	{
		Local_75 = { func_156() };
		func_140();
		iLocal_73 = 1;
	}
	return 0;
}

struct<6> func_156()
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15756 == 4)
	{
		iVar6 = unk_0x1382C02314443068();
		iVar6 = (iVar6 + Global_16766);
		iVar7 = iVar6 + 1;
		if (iVar7 > -1 && iVar6 > -1)
		{
			if (unk_0xD76CFACBF6A6F21E(&(Global_14624[iVar7 /*6*/])))
			{
				return Global_14624[iVar7 /*6*/];
			}
			else
			{
				iVar8 = iVar7;
				while (iVar8 < 70)
				{
					if (unk_0xD76CFACBF6A6F21E(&(Global_14624[iVar8 /*6*/])))
					{
						return Global_14624[iVar8 /*6*/];
						iVar8 = 70;
					}
					iVar8++;
				}
				return Var0;
			}
			return Global_14624[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

bool func_157(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_16(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15763 = 0;
	Global_15770 = 0;
	Global_15765 = 0;
	Global_16747 = 0;
	Global_16749 = 0;
	Global_16753 = 1;
	StringCopy(&Global_16760, sParam3, 24);
	Global_2621441 = 0;
	return func_6(sParam2, iParam4, 0);
}

int func_158()
{
	if (bLocal_368)
	{
		if (unk_0xC4B84EB67F78C1F0(iLocal_91, 0))
		{
			if (func_66())
			{
				return 1;
			}
		}
		if (!unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0) && !unk_0x657B649BA2AD3582(iLocal_86, 0))
		{
			if (unk_0xB7A628320EFF8E47(Local_60, Local_63) < 400f)
			{
				return 1;
			}
		}
	}
	else
	{
		return func_66();
	}
	return 0;
}

void func_159()
{
	if (func_19() == 2)
	{
		if (!unk_0xE769D9B5158D0F11(uLocal_364))
		{
			func_162();
			uLocal_364 = func_161(-1034.6f, 4918.6f, 205.9f, 0);
			unk_0xDC0EBFC7730AA226(uLocal_364, 269);
			func_160();
		}
	}
}

void func_160()
{
	if (!func_164())
	{
		if (func_19() == 2)
		{
			Global_25467 = 1;
		}
	}
}

var func_161(struct<3> Param0, int iParam3)
{
	return func_50(Param0, iParam3);
}

void func_162()
{
	if (func_19() == 2)
	{
		if (!Global_25469)
		{
			func_163("CULT_BLIP_HELP", -1);
			Global_25469 = 1;
		}
	}
}

void func_163(char* sParam0, int iParam1)
{
	unk_0x2202872EA73499C3(sParam0);
	unk_0xF764171B43EBA5E4(0, 0, 1, iParam1);
}

int func_164()
{
	if (Global_104551.f_24965.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

void func_165(bool bParam0)
{
	if (unk_0xC4B84EB67F78C1F0(iLocal_91, 0) && !unk_0x0FAE113CE72ED842(iLocal_86))
	{
		if (func_66())
		{
			if (bParam0)
			{
				if (!unk_0xE769D9B5158D0F11(uLocal_362))
				{
					uLocal_362 = func_50(Local_53, 1);
				}
			}
			if (unk_0xE769D9B5158D0F11(uLocal_360))
			{
				unk_0x40D517D991458154(&uLocal_360);
			}
			if (unk_0xE769D9B5158D0F11(uLocal_361))
			{
				unk_0x40D517D991458154(&uLocal_361);
			}
		}
		else
		{
			if (unk_0xE769D9B5158D0F11(uLocal_362))
			{
				unk_0x40D517D991458154(&uLocal_362);
			}
			if (!unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), iLocal_91, 0))
			{
				if (!unk_0xE769D9B5158D0F11(uLocal_361))
				{
					uLocal_361 = func_166(iLocal_91, 0, 0);
				}
			}
			if (!unk_0x88B79D32B518C327(iLocal_86, iLocal_91, 0))
			{
				if (!unk_0xE769D9B5158D0F11(uLocal_360))
				{
					uLocal_360 = func_180(iLocal_86, 0, 145);
				}
			}
			else if (unk_0xE769D9B5158D0F11(uLocal_360))
			{
				unk_0x40D517D991458154(&uLocal_360);
			}
		}
	}
}

int func_166(int iParam0, bool bParam1, bool bParam2)
{
	return func_167(iParam0, !bParam1, bParam2);
}

int func_167(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x31F12808DC47A9E5(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xA8EDC17CEEA40DFA(iParam0);
	if (unk_0x978B4E1292EBBE41(iParam0))
	{
		unk_0x0590222010A36CE4(uVar0, func_51(unk_0x44243F2E2F58B8E3(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x1DF6703E5077ABE1(uVar0, bParam1);
		}
		else
		{
			unk_0x71925FF3194E84CE(uVar0, 2);
		}
	}
	else if (unk_0xB6C2454233C8F532(iParam0))
	{
		unk_0x0590222010A36CE4(uVar0, func_51(unk_0x44243F2E2F58B8E3(), 0.7f, 0.7f));
		unk_0x1DF6703E5077ABE1(uVar0, bParam1);
	}
	else if (unk_0x2E4A20D66F5AD135(iParam0))
	{
		unk_0x0590222010A36CE4(uVar0, func_51(unk_0x44243F2E2F58B8E3(), 0.7f, 0.7f));
	}
	return uVar0;
}

int func_168(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	if (unk_0xC4B84EB67F78C1F0(iParam0, 0))
	{
		iVar1 = 0;
		while (iVar1 <= (unk_0xE4752B503DF3FEC0(iParam0) - 1))
		{
			if (iVar0 == -1)
			{
				iVar2 = iVar1;
				if (unk_0x74B8CA477787A438(iParam0, iVar2, 0))
				{
					iVar0 = iVar2;
				}
			}
			iVar1++;
		}
	}
	return iVar0;
}

int func_169(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0xED304DF0BE5BEBDD())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		if (!unk_0x1A7B277A2CBA7ADF(unk_0x18F7BE9ACB7D08F4()))
		{
			return 0;
		}
		iVar0 = unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0);
		if (bParam0)
		{
			if (unk_0x74C2FE037DFC8B4A(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x74C2FE037DFC8B4A(iVar0, 0))
			{
				if (unk_0x4983F8C51A0C0AF3(iVar0, -1, 0) != unk_0x18F7BE9ACB7D08F4())
				{
					return 0;
				}
			}
		}
		if (!unk_0x74C2FE037DFC8B4A(iVar0, 0))
		{
			if (unk_0x39B21DBADBAFCF25(iVar0) < 0.95f || unk_0x39B21DBADBAFCF25(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x16034CA8E32730C9(unk_0x8CFC7D6E1DA5D304()))
	{
		return 0;
	}
	if (!unk_0x91FFC4C24A972415(unk_0x8CFC7D6E1DA5D304()))
	{
		return 0;
	}
	return 1;
}

int func_170(int iParam0)
{
	if (!unk_0x74C2FE037DFC8B4A(uParam0, 0))
	{
		if (unk_0x74B8CA477787A438(iParam0, -1, 0))
		{
			return 1;
		}
		if (unk_0x74B8CA477787A438(iParam0, 0, 0))
		{
			return 1;
		}
		if (unk_0x74B8CA477787A438(iParam0, 1, 0))
		{
			return 1;
		}
		if (unk_0x74B8CA477787A438(iParam0, 2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_171(int iParam0)
{
	if (unk_0x3F34AC735B9567E3(iParam0, unk_0x7C9C05CA6A57A7E1(unk_0x8CFC7D6E1DA5D304())))
	{
		if (!unk_0xEA07F07380ABC460(unk_0x18F7BE9ACB7D08F4(), iParam0, 25f, 25f, 25f, 0, 1, 0))
		{
			unk_0x95B1A64E8455A478(iParam0);
		}
		return 1;
	}
	else if (unk_0xEA07F07380ABC460(unk_0x18F7BE9ACB7D08F4(), iParam0, Global_19, 0, 1, 0))
	{
		unk_0xE186B0FBC086038E(iParam0, unk_0x7C9C05CA6A57A7E1(unk_0x8CFC7D6E1DA5D304()));
	}
	return 0;
}

void func_172()
{
	if (!unk_0x0FAE113CE72ED842(iLocal_86) && unk_0xC4B84EB67F78C1F0(iLocal_91, 0))
	{
		if (!unk_0x88B79D32B518C327(iLocal_86, iLocal_91, 1))
		{
			if (unk_0x2BBAA45ECDE3DAE2(iLocal_86, -1794415470) != 1)
			{
				unk_0xFDBDFC454E44A5BF(iLocal_86, iLocal_91, -1, func_168(iLocal_91), 2f, 8388608, 0);
			}
		}
		if ((unk_0x31F12808DC47A9E5(func_65()) && unk_0xB7A628320EFF8E47(unk_0x761660F5CE986DC4(iLocal_86, 1), unk_0x761660F5CE986DC4(func_65(), 1)) < 100f) && (unk_0x2A72627520A107B5(iLocal_91) < 5f || !unk_0x422717A3330EA45D(unk_0x4F69FBD64CDF125B(iLocal_91))))
		{
			if (bLocal_368)
			{
				if (!unk_0xDFEB6D8BCE2B43F6(iLocal_86, "VEH@STD@PS@IDLE_PANIC", "sit", 3) && unk_0x160400EAEE246B4D(iLocal_86, iLocal_91))
				{
					unk_0xB5746603774C4C9D(iLocal_86, "VEH@STD@PS@IDLE_PANIC", "sit", 4f, -4f, -1, 48, 0, 0, 0, 0);
				}
			}
			else if (!unk_0xDFEB6D8BCE2B43F6(iLocal_86, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 3) && unk_0x160400EAEE246B4D(iLocal_86, iLocal_91))
			{
				unk_0xB5746603774C4C9D(iLocal_86, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 4f, -4f, -1, 48, 0, 0, 0, 0);
			}
		}
		else if ((unk_0xDFEB6D8BCE2B43F6(iLocal_86, "VEH@STD@PS@IDLE_PANIC", "sit", 3) || unk_0xDFEB6D8BCE2B43F6(iLocal_86, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 3)) && unk_0x160400EAEE246B4D(iLocal_86, iLocal_91))
		{
			unk_0x267F7A2DFDFFB077(iLocal_86);
		}
		switch (iLocal_369)
		{
			case 0:
				if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					if (unk_0x31F12808DC47A9E5(func_65()) && !unk_0x0FAE113CE72ED842(func_65()))
					{
						func_18(&Local_395, 4);
						func_17(&Local_395, 4, func_65(), "PAPARAZZO", 0, 1);
					}
					iLocal_49 = 2;
					func_102();
					if (func_5(&Local_395, cLocal_372, "REPAP_GO", 4, 0, 0, 0))
					{
						unk_0x8BB3FA32294185BB(0.2f);
						unk_0x40E2910BAF39B1C7(iLocal_86, 1);
						unk_0xFB5F4D76105A21B5(1, uLocal_69, joaat("player"));
						iLocal_358 = unk_0x7082ECB3731CD86C(joaat("prop_ld_test_01"), Local_87, 1, 1, 0);
						unk_0xF342BF6A7A4C7A8F(iLocal_358, 0, 0);
						unk_0xA12407EB7D7CF146(iLocal_358, 0, 0);
						unk_0x73D7E57BF0ED7FEB(iLocal_358, 1);
						iLocal_369++;
					}
				}
				break;
			
			case 1:
				func_174();
				if (!unk_0x11BBEE2752B9D0C8(iLocal_86, 243.5571f, 77.51265f, 90.08002f, 268.2083f, 144.2189f, 109.853f, 23.25f, 0, 1, 0))
				{
					iLocal_369++;
					iLocal_370 = unk_0x5AFB8ED811F05E4D();
					iLocal_49 = 3;
				}
				break;
			
			case 2:
				if (!bLocal_668)
				{
					if (((((iLocal_670 != 1 && iLocal_670 != 3) && iLocal_670 != 6) && iLocal_670 != 9) && iLocal_670 != 11) && iLocal_670 != 13)
					{
						bLocal_669 = false;
						if (unk_0x31F12808DC47A9E5(func_65()) && unk_0xEA07F07380ABC460(func_65(), iLocal_91, 5f, 5f, 3f, 0, 1, 0))
						{
							bLocal_668 = true;
						}
					}
				}
				else
				{
					if (!func_73())
					{
						bLocal_669 = true;
					}
					if (unk_0x31F12808DC47A9E5(func_65()))
					{
						if (!unk_0xEA07F07380ABC460(func_65(), iLocal_91, 5f, 5f, 3f, 0, 1, 0))
						{
							bLocal_668 = false;
						}
					}
				}
				if (bLocal_669)
				{
					if (!func_74())
					{
						if (!func_173())
						{
							func_174();
						}
					}
				}
				else
				{
					switch (iLocal_670)
					{
						case 0:
							if (((!bLocal_668 && func_158()) && !func_74()) && !func_73())
							{
								if (func_5(&Local_395, cLocal_372, "REPAP_CHT", 4, 0, 0, 0))
								{
									iLocal_670++;
								}
							}
							break;
						
						case 1:
							if (((!bLocal_668 && func_158()) && !func_74()) && !func_73())
							{
								if (func_154("REPAP_RES1"))
								{
									iLocal_671 = unk_0x5AFB8ED811F05E4D();
									iLocal_670++;
								}
							}
							break;
						
						case 2:
							if ((unk_0x5AFB8ED811F05E4D() - iLocal_671) > 8000)
							{
								if (((!bLocal_668 && func_158()) && !func_74()) && !func_73())
								{
									if (func_154("REPAP_CHT2"))
									{
										iLocal_670++;
									}
								}
							}
							break;
						
						case 3:
							if (((!bLocal_668 && func_158()) && !func_74()) && !func_73())
							{
								if (func_5(&Local_395, cLocal_372, "REPAP_RESP2L", 4, 0, 0, 0))
								{
									iLocal_671 = unk_0x5AFB8ED811F05E4D();
									iLocal_670++;
								}
							}
							break;
						
						case 4:
							if ((unk_0x5AFB8ED811F05E4D() - iLocal_671) > 6000)
							{
								if (func_19() == 0)
								{
									if (func_155("REPAP_CHT3M", ((func_158() && !func_74()) && !bLocal_668)))
									{
										iLocal_670++;
									}
								}
								else if (func_19() == 1)
								{
									if (func_155("REPAP_CHT3F", ((func_158() && !func_74()) && !bLocal_668)))
									{
										iLocal_670++;
									}
								}
								else if (func_155("REPAP_CHT3T", ((func_158() && !func_74()) && !bLocal_668)))
								{
									iLocal_670++;
								}
								if (iLocal_670 > 4)
								{
									iLocal_671 = unk_0x5AFB8ED811F05E4D();
								}
							}
							break;
						
						case 5:
							if ((unk_0x5AFB8ED811F05E4D() - iLocal_671) > 8000)
							{
								if (func_19() == 0)
								{
									if (func_155("REPAP_CHT4M", ((func_158() && !func_74()) && !bLocal_668)))
									{
										iLocal_670++;
									}
								}
								else if (func_19() == 1)
								{
									if (func_155("REPAP_CHT4F", ((func_158() && !func_74()) && !bLocal_668)))
									{
										iLocal_670++;
									}
								}
								else if (func_155("REPAP_CHT4T", ((func_158() && !func_74()) && !bLocal_668)))
								{
									iLocal_670++;
								}
								if (iLocal_670 > 5)
								{
									iLocal_671 = unk_0x5AFB8ED811F05E4D();
								}
							}
							break;
						
						case 6:
							if ((unk_0x5AFB8ED811F05E4D() - iLocal_671) > 8000)
							{
								if (func_19() == 0)
								{
									if (func_155("REPAP_CHT5M", ((func_158() && !func_74()) && !bLocal_668)))
									{
										iLocal_670++;
									}
								}
								else if (func_19() == 1)
								{
									if (func_155("REPAP_CHT5F", ((func_158() && !func_74()) && !bLocal_668)))
									{
										iLocal_670++;
									}
								}
								else if (func_155("REPAP_CHT5T", ((func_158() && !func_74()) && !bLocal_668)))
								{
									iLocal_670++;
								}
								if (iLocal_670 > 6)
								{
									iLocal_671 = unk_0x5AFB8ED811F05E4D();
								}
							}
							break;
						
						case 7:
							if ((unk_0x5AFB8ED811F05E4D() - iLocal_671) > 8000)
							{
								if (((!bLocal_668 && func_158()) && !func_74()) && !func_73())
								{
									if (func_154("REPAP_CHT6"))
									{
										iLocal_670++;
									}
								}
							}
							break;
						
						case 8:
							if (((!bLocal_668 && func_158()) && !func_74()) && !func_73())
							{
								if (func_5(&Local_395, cLocal_372, "REPAP_RESP6L", 4, 0, 0, 0))
								{
									iLocal_671 = unk_0x5AFB8ED811F05E4D();
									iLocal_670++;
								}
							}
							break;
						
						case 9:
							if ((unk_0x5AFB8ED811F05E4D() - iLocal_671) > 8000)
							{
								if (((!bLocal_668 && func_158()) && !func_74()) && !func_73())
								{
									if (func_154("REPAP_CHT7"))
									{
										iLocal_670++;
									}
								}
							}
							break;
						
						case 10:
							if (((!bLocal_668 && func_158()) && !func_74()) && !func_73())
							{
								if (func_5(&Local_395, cLocal_372, "REPAP_RESP7L", 4, 0, 0, 0))
								{
									iLocal_671 = unk_0x5AFB8ED811F05E4D();
									iLocal_670++;
								}
							}
							break;
						
						case 11:
							if ((unk_0x5AFB8ED811F05E4D() - iLocal_671) > 8000)
							{
								if (((!bLocal_668 && func_158()) && !func_74()) && !func_73())
								{
									if (func_154("REPAP_CHT8"))
									{
										iLocal_670++;
									}
								}
							}
							break;
						
						case 12:
							if (((!bLocal_668 && func_158()) && !func_74()) && !func_73())
							{
								if (func_5(&Local_395, cLocal_372, "REPAP_RESP8L", 4, 0, 0, 0))
								{
									iLocal_670++;
								}
							}
							break;
						}
				}
				if (!unk_0x31F12808DC47A9E5(func_65()))
				{
					unk_0xC1B1E9A034A63A62(0);
					iLocal_369++;
					func_140();
					if (!Global_3 && !bLocal_70)
					{
						iLocal_49 = 6;
					}
				}
				if (Global_3 || bLocal_70)
				{
					if (unk_0x8673F2F1802ADEF7(unk_0x18F7BE9ACB7D08F4(), 244.2175f, 441.0128f, 126.2767f, 33.5f, 40f, 14.75f, 0, 1, 0) && func_66())
					{
						iLocal_49 = 4;
						iLocal_85 = unk_0x5AFB8ED811F05E4D();
					}
				}
				break;
			
			case 3:
				if (unk_0x83666F9FB8FEBD4B() > 3000 && func_66())
				{
					func_179("MAG_2_ESCAPE_PAP_TAKE_ACTRESS_HOME");
					if (func_5(&Local_395, cLocal_372, "REPAP_LOS", 4, 0, 0, 0))
					{
						func_178(2);
					}
				}
				break;
			
			case 4:
				break;
			
			case 5:
				break;
		}
		func_165(0);
	}
}

int func_173()
{
	int iVar0;
	
	iVar0 = func_24();
	if ((unk_0x5AFB8ED811F05E4D() - iLocal_666) > 5000)
	{
		if (unk_0x31F12808DC47A9E5(iLocal_91) && unk_0x88B79D32B518C327(iLocal_86, iLocal_91, 0))
		{
			if (unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), iLocal_91, 1))
			{
				if (iVar0 != -1 && (unk_0x5AFB8ED811F05E4D() - Local_204[iVar0 /*18*/].f_12) < 3000)
				{
					if (func_5(&Local_395, cLocal_372, "REPAP_WHINE", 4, 0, 0, 0))
					{
						iLocal_666 = unk_0x5AFB8ED811F05E4D();
						return 1;
					}
				}
			}
			else if (func_5(&Local_395, cLocal_372, "REPAP_EXIT", 4, 0, 0, 0))
			{
				iLocal_666 = unk_0x5AFB8ED811F05E4D();
				return 1;
			}
		}
	}
	return 0;
}

void func_174()
{
	int iVar0;
	
	if ((unk_0x5AFB8ED811F05E4D() - iLocal_564) > iLocal_565)
	{
		if ((!unk_0x0FAE113CE72ED842(iLocal_86) && unk_0x31F12808DC47A9E5(func_65())) && !unk_0x0FAE113CE72ED842(func_65()))
		{
			if (unk_0x15EE504466B7BBD3(Local_63, unk_0x761660F5CE986DC4(func_65(), 1), 1) < 8f)
			{
				iVar0 = unk_0x61E9B3BFA06B017B(0, 5);
				func_18(&Local_395, 4);
				func_18(&Local_395, 5);
				func_18(&Local_395, 6);
				func_18(&Local_395, 7);
				switch (iVar0)
				{
					case 0:
						func_17(&Local_395, 4, func_65(), "PAPARAZZO", 0, 1);
						if (unk_0x31F12808DC47A9E5(Local_395[4 /*10*/]) && !unk_0x0FAE113CE72ED842(Local_395[4 /*10*/]))
						{
							if (func_5(&Local_395, cLocal_372, "REPAP_PP", 4, 0, 0, 0))
							{
								iLocal_564 = unk_0x5AFB8ED811F05E4D();
								iLocal_565 = unk_0x61E9B3BFA06B017B(2000, 3000);
							}
						}
						break;
					
					case 1:
						func_17(&Local_395, 4, func_65(), "PAPARAZZO", 0, 1);
						if (unk_0x31F12808DC47A9E5(Local_395[4 /*10*/]) && !unk_0x0FAE113CE72ED842(Local_395[4 /*10*/]))
						{
							if (func_5(&Local_395, cLocal_372, "REPAP_CALL1", 4, 0, 0, 0))
							{
								iLocal_564 = unk_0x5AFB8ED811F05E4D();
								iLocal_565 = unk_0x61E9B3BFA06B017B(2000, 3000);
							}
						}
						break;
					
					case 2:
						func_17(&Local_395, 5, func_65(), "PAP2", 0, 1);
						if (unk_0x31F12808DC47A9E5(Local_395[5 /*10*/]) && !unk_0x0FAE113CE72ED842(Local_395[5 /*10*/]))
						{
							if (func_5(&Local_395, cLocal_372, "REPAP_CALL2", 4, 0, 0, 0))
							{
								iLocal_564 = unk_0x5AFB8ED811F05E4D();
								iLocal_565 = unk_0x61E9B3BFA06B017B(2000, 3000);
							}
						}
						break;
					
					case 3:
						func_17(&Local_395, 6, func_65(), "PAP3", 0, 1);
						if (unk_0x31F12808DC47A9E5(Local_395[6 /*10*/]) && !unk_0x0FAE113CE72ED842(Local_395[6 /*10*/]))
						{
							if (func_5(&Local_395, cLocal_372, "REPAP_CALL3", 4, 0, 0, 0))
							{
								iLocal_564 = unk_0x5AFB8ED811F05E4D();
								iLocal_565 = unk_0x61E9B3BFA06B017B(2000, 3000);
							}
						}
						break;
					
					case 4:
						func_17(&Local_395, 7, func_65(), "PAP4", 0, 1);
						if (unk_0x31F12808DC47A9E5(Local_395[7 /*10*/]) && !unk_0x0FAE113CE72ED842(Local_395[7 /*10*/]))
						{
							if (func_5(&Local_395, cLocal_372, "REPAP_CALL4", 4, 0, 0, 0))
							{
								iLocal_564 = unk_0x5AFB8ED811F05E4D();
								iLocal_565 = unk_0x61E9B3BFA06B017B(2000, 3000);
							}
						}
						break;
					}
				}
			}
	}
}

void func_175()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	char cVar3[24];
	char* sVar9;
	char cVar10[24];
	var uVar16;
	
	if (!unk_0x0FAE113CE72ED842(iLocal_86))
	{
		if (unk_0xE769D9B5158D0F11(uLocal_360))
		{
			unk_0x2E9500102925D891(uLocal_360, iLocal_664);
		}
		switch (iLocal_369)
		{
			case 0:
				unk_0x831CD0FBFB26EC7E("random@paparazzi@peek");
				unk_0x831CD0FBFB26EC7E("random@paparazzi@trans");
				unk_0x831CD0FBFB26EC7E("random@paparazzi@wait");
				if ((unk_0x028356968FDD2DF2("random@paparazzi@peek") && unk_0x028356968FDD2DF2("random@paparazzi@trans")) && unk_0x028356968FDD2DF2("random@paparazzi@wait"))
				{
					uLocal_625 = unk_0x3C3438327FFEB224(Local_653, Local_656, 2);
					unk_0x4DD2EB945B4192FD(iLocal_86, uLocal_625, "random@paparazzi@peek", "left_peek_a", 1000f, -8f, 1, 0, 1148846080, 0);
					unk_0x6016A20BFEAEFE11(iLocal_86, unk_0x18F7BE9ACB7D08F4(), -1, 4, 4);
					sLocal_626[0] = "peek_a";
					sLocal_626[1] = "peek_b";
					sLocal_626[2] = "peek_c";
					unk_0x8BB3FA32294185BB(0.2f);
					iLocal_623 = 0;
					iLocal_659 = 0;
					iLocal_664 = 0;
					iLocal_74 = 1;
					iLocal_660 = 0;
					iLocal_71 = 0;
					fLocal_661 = 0f;
					iLocal_369++;
				}
				break;
			
			case 1:
				if (unk_0xB03A1684359C50A1(iLocal_660, 0))
				{
					if (!unk_0xB03A1684359C50A1(iLocal_660, 1))
					{
						unk_0xD2A9C3F486236CC5(&iLocal_660, 1);
					}
					else
					{
						iLocal_660 = 0;
					}
				}
				iVar2 = 0;
				bVar0 = unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), Local_639, Local_642, fLocal_645, 0, 1, 0);
				bVar1 = unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), Local_632, Local_635, fLocal_638, 0, 1, 0);
				if (unk_0x9D39145AD645E383(sLocal_631, "right_"))
				{
					if (bVar1)
					{
						sLocal_631 = "left_";
						iVar2 = 1;
					}
				}
				else if (bVar0)
				{
					sLocal_631 = "right_";
					iVar2 = 1;
				}
				if ((unk_0xCF0FA6AB02EA68F7(uLocal_625) && unk_0x74CE979B042A1253(uLocal_625) > 0.9f) || iVar2)
				{
					if (iLocal_660 == 0)
					{
						unk_0x267F7A2DFDFFB077(iLocal_86);
						iLocal_630++;
						if (iLocal_630 >= 3)
						{
							iLocal_630 = 0;
						}
						StringCopy(&cVar3, sLocal_631, 24);
						StringConCat(&cVar3, sLocal_626[iLocal_630], 24);
						uLocal_625 = unk_0x3C3438327FFEB224(Local_653, Local_656, 2);
						unk_0x4DD2EB945B4192FD(iLocal_86, uLocal_625, "random@paparazzi@peek", &cVar3, 4f, -4f, 1, 0, 1148846080, 0);
						unk_0xD2A9C3F486236CC5(&iLocal_660, 0);
					}
				}
				if (bVar0 || bVar1)
				{
					if (fLocal_661 <= 20f)
					{
						fLocal_661 = (fLocal_661 + unk_0x64031EF2AE5F9603());
					}
					if ((unk_0x5AFB8ED811F05E4D() - iLocal_624) > 5000 && iLocal_660 == 0)
					{
						if (unk_0xB7A628320EFF8E47(Local_60, Local_63) < (22.2f * 22.2f))
						{
							if (fLocal_661 < 10f)
							{
								if (iLocal_662)
								{
									sVar9 = "REPAP_SHT1";
								}
								else
								{
									sVar9 = "REPAP_SHT2";
								}
							}
							else
							{
								sVar9 = "REPAP_PRT";
							}
							if (func_19() == 1)
							{
								func_17(&Local_395, 1, unk_0x18F7BE9ACB7D08F4(), "FRANKLIN", 0, 1);
							}
							else if (func_19() == 0)
							{
								func_17(&Local_395, 1, unk_0x18F7BE9ACB7D08F4(), "MICHAEL", 0, 1);
							}
							else
							{
								func_17(&Local_395, 1, unk_0x18F7BE9ACB7D08F4(), "TREVOR", 0, 1);
							}
							if (func_5(&Local_395, cLocal_372, sVar9, 4, 0, 0, 0))
							{
								iLocal_662 = 1;
								if (!unk_0xEA07F07380ABC460(unk_0x18F7BE9ACB7D08F4(), iLocal_86, 7f, 7f, 7f, 0, 1, 0))
								{
									unk_0x267F7A2DFDFFB077(iLocal_86);
									StringCopy(&cVar10, sLocal_631, 24);
									StringConCat(&cVar10, "come_here", 24);
									uLocal_625 = unk_0x3C3438327FFEB224(Local_653, Local_656, 2);
									unk_0x4DD2EB945B4192FD(iLocal_86, uLocal_625, "random@paparazzi@peek", &cVar10, 4f, -4f, 1, 0, 1148846080, 0);
									unk_0xD2A9C3F486236CC5(&iLocal_660, 0);
								}
								iLocal_624 = unk_0x5AFB8ED811F05E4D();
							}
						}
					}
				}
				if (unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), Local_646, Local_649, fLocal_652, 0, 1, 0) && iLocal_660 == 0)
				{
					if (unk_0xE769D9B5158D0F11(uLocal_359))
					{
						unk_0x40D517D991458154(&uLocal_359);
						if (!unk_0xE769D9B5158D0F11(uLocal_360))
						{
							uLocal_360 = func_180(iLocal_86, 0, 145);
						}
					}
					unk_0x267F7A2DFDFFB077(iLocal_86);
					uLocal_625 = unk_0x3C3438327FFEB224(Local_653, Local_656, 2);
					if (bVar1)
					{
						unk_0x4DD2EB945B4192FD(iLocal_86, uLocal_625, "random@paparazzi@trans", "trans_left_to_wait", 8f, -4f, 1, 0, 1148846080, 0);
					}
					else
					{
						unk_0x4DD2EB945B4192FD(iLocal_86, uLocal_625, "random@paparazzi@trans", "trans_right_to_wait", 8f, -4f, 1, 0, 1148846080, 0);
					}
					unk_0xD2A9C3F486236CC5(&iLocal_660, 0);
					iLocal_369++;
				}
				break;
			
			case 2:
				if (unk_0xCF0FA6AB02EA68F7(uLocal_625) && unk_0x74CE979B042A1253(uLocal_625) > 0.9f)
				{
					if (unk_0x2BBAA45ECDE3DAE2(iLocal_86, 242628503) != 1)
					{
						unk_0x267F7A2DFDFFB077(iLocal_86);
						unk_0xB5746603774C4C9D(iLocal_86, "random@paparazzi@wait", "wait_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
						iLocal_621 = 2;
						unk_0xC1B1E9A034A63A62(0);
					}
					iLocal_369++;
				}
				break;
			
			case 3:
				if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
				{
					if (func_177())
					{
						unk_0x4F5FF3F3FDCAB15D(&iLocal_91);
						iLocal_91 = unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0);
						unk_0x337F2213526139E0(iLocal_91, 1, 1);
						unk_0x6780B033CB86560E(iLocal_91, 0, 0);
						unk_0xA2B45B1D3EE42178(iLocal_91, 1);
						bLocal_368 = true;
					}
				}
				if (!bLocal_368)
				{
					unk_0xA2B45B1D3EE42178(iLocal_91, 1);
					if (func_139(&Local_395, cLocal_372, "REPAP_EXP", "REPAP_EXP_2", 4, 0, 0))
					{
						unk_0xC1B1E9A034A63A62(0);
						iLocal_664 = 1;
						iLocal_369 = 100;
					}
				}
				else if (func_139(&Local_395, cLocal_372, "REPAP_EXPB", "REPAP_EXPB_2", 4, 0, 0))
				{
					unk_0xC1B1E9A034A63A62(0);
					iLocal_664 = 1;
					iLocal_369++;
				}
				if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					func_176(Local_87, 1);
				}
				break;
			
			case 4:
				func_49();
				if (unk_0xC4B84EB67F78C1F0(iLocal_91, 0))
				{
					if (unk_0xEA07F07380ABC460(iLocal_91, iLocal_86, Global_19 + Vector(2f, 12f, 12f), 0, 1, 0) && !bLocal_368)
					{
						if (unk_0x2BBAA45ECDE3DAE2(iLocal_86, 242628503) != 1 && !iLocal_659)
						{
							unk_0xC8BEB049F3BFC0AB(&uVar16);
							unk_0xA303A4837FBB8DDE(0, 259.2552f, 122.2986f, 100.441f, 1f, 20000, 0.25f, 0, 1193033728);
							unk_0x8F467CFC5FBBCE77(0, unk_0x18F7BE9ACB7D08F4(), 0);
							unk_0xAFDA7B8F83B2CA58(uVar16);
							unk_0x73F69DD57B7E92A9(iLocal_86, uVar16);
							unk_0x8F2E6C470A0005D4(iLocal_86, 0, 0);
							unk_0x56C7B20E11B37066(&uVar16);
							iLocal_659 = 1;
						}
						else
						{
							unk_0x33A2A1DBDDF863E7(iLocal_86, 1f);
							func_176(259.2552f, 122.2986f, 100.441f, 0);
						}
					}
					else
					{
						func_176(Local_87, 1);
					}
					if (!bLocal_368)
					{
						if (unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), iLocal_91, 0))
						{
							if (unk_0xE769D9B5158D0F11(uLocal_361))
							{
								unk_0x40D517D991458154(&uLocal_361);
							}
							if (!unk_0xE769D9B5158D0F11(uLocal_360))
							{
								uLocal_360 = func_180(iLocal_86, 0, 145);
							}
						}
					}
					if ((unk_0xEA07F07380ABC460(iLocal_91, iLocal_86, Global_19, 0, 1, 0) && func_170(iLocal_91)) && (unk_0x83666F9FB8FEBD4B() > 6000 || !bLocal_368))
					{
						if (!iLocal_623)
						{
							func_102();
							if (unk_0xB160CAD76325B7F1(unk_0x18F7BE9ACB7D08F4()))
							{
								if (func_19() == 1)
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_ONF", 4, 0, 0, 0))
									{
										iLocal_623 = 1;
									}
								}
								else if (func_19() == 0)
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_ONM", 4, 0, 0, 0))
									{
										iLocal_623 = 1;
									}
								}
								else if (func_5(&Local_395, cLocal_372, "REPAP_ONT", 4, 0, 0, 0))
								{
									iLocal_623 = 1;
								}
							}
							else if (func_19() == 1)
							{
								if (func_5(&Local_395, cLocal_372, "REPAP_INF", 4, 0, 0, 0))
								{
									iLocal_623 = 1;
								}
							}
							else if (func_19() == 0)
							{
								if (func_5(&Local_395, cLocal_372, "REPAP_INM", 4, 0, 0, 0))
								{
									iLocal_623 = 1;
								}
							}
							else if (func_5(&Local_395, cLocal_372, "REPAP_INT", 4, 0, 0, 0))
							{
								iLocal_623 = 1;
							}
						}
						else
						{
							if (!bLocal_368)
							{
								iLocal_369 = -5;
							}
							else
							{
								iLocal_369++;
							}
							unk_0x267F7A2DFDFFB077(iLocal_86);
							unk_0xFDBDFC454E44A5BF(iLocal_86, iLocal_91, -1, func_168(iLocal_91), 1f, 8388608, 0);
						}
					}
				}
				break;
			
			case -5:
				if (bLocal_368)
				{
					func_176(Local_87, 1);
				}
				else
				{
					func_176(259.2552f, 122.2986f, 100.441f, 0);
				}
				if (unk_0xC4B84EB67F78C1F0(iLocal_91, 0))
				{
					if (func_152(iLocal_91, 1093140480, 1, 1056964608, 0, 1, 0))
					{
						iLocal_369 = 5;
					}
				}
				break;
			
			case 5:
				if (unk_0xC4B84EB67F78C1F0(iLocal_91, 0))
				{
					if (!unk_0x0FAE113CE72ED842(iLocal_86) && unk_0x88B79D32B518C327(iLocal_86, iLocal_91, 0))
					{
						if (unk_0xE769D9B5158D0F11(uLocal_360))
						{
							unk_0x40D517D991458154(&uLocal_360);
						}
						unk_0x81D9C52E2A8DA464(unk_0x18F7BE9ACB7D08F4());
						func_178(1);
					}
					else
					{
						if (!Global_3 && !bLocal_70)
						{
							if ((unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), iLocal_91, 0) && !unk_0x88B79D32B518C327(iLocal_86, iLocal_91, 1)) && !unk_0x11BBEE2752B9D0C8(iLocal_91, 225.1779f, 125.6632f, 113.6647f, 262.3032f, 111.8771f, 97.16339f, 37f, 0, 1, 0))
							{
								if (bLocal_368)
								{
									unk_0x470C9634914699C0(iLocal_86, 2, 1);
									sLocal_371 = "REPAP_GUP";
									func_178(6);
								}
								else
								{
									unk_0x7A7F48A495EAC394(unk_0x8CFC7D6E1DA5D304(), 1, 0);
									unk_0x470C9634914699C0(iLocal_86, 2, 1);
									sLocal_371 = "REPAP_CP";
									func_178(6);
								}
							}
						}
						if (!unk_0x88B79D32B518C327(iLocal_86, iLocal_91, 0))
						{
							if (unk_0x2BBAA45ECDE3DAE2(iLocal_86, -1794415470) != 1)
							{
								unk_0x267F7A2DFDFFB077(iLocal_86);
								unk_0xFDBDFC454E44A5BF(iLocal_86, iLocal_91, -1, func_168(iLocal_91), 1f, 8388608, 0);
							}
							else if (unk_0x2A488C176D52CCA5(Local_63, unk_0x0AF3D0AB54EA2104(iLocal_91, 1f, 0f, 0f)) < 1f)
							{
								unk_0x33A2A1DBDDF863E7(iLocal_86, 1f);
							}
						}
					}
				}
				break;
			
			case 100:
				if (unk_0xC4B84EB67F78C1F0(iLocal_91, 0))
				{
					if (!func_73())
					{
						func_102();
						if (func_19() == 1)
						{
							if (func_5(&Local_395, cLocal_372, "REPAP_YSF", 4, 0, 0, 0))
							{
								iLocal_369++;
							}
						}
						else if (func_19() == 0)
						{
							func_102();
							if (func_5(&Local_395, cLocal_372, "REPAP_YSM", 4, 0, 0, 0))
							{
								iLocal_369++;
							}
							iLocal_74 = 0;
						}
						else if (func_5(&Local_395, cLocal_372, "REPAP_YST", 4, 0, 0, 0))
						{
							iLocal_369++;
						}
					}
				}
				if (iLocal_369 == 101)
				{
					fLocal_665 = 0f;
				}
				func_176(Local_87, 1);
				break;
			
			case 101:
				if (unk_0xB7A628320EFF8E47(Local_60, Local_63) < 49f && !unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
				{
					if (unk_0x2A72627520A107B5(unk_0x18F7BE9ACB7D08F4()) < 3f)
					{
						fLocal_665 = (fLocal_665 + unk_0x64031EF2AE5F9603());
					}
					else
					{
						fLocal_665 = (fLocal_665 - (unk_0x64031EF2AE5F9603() * 2f));
					}
					if (fLocal_665 > 10f)
					{
						if (func_5(&Local_395, cLocal_372, "REPAP_PRT", 4, 0, 0, 0))
						{
							fLocal_665 = 0f;
						}
					}
				}
				if (unk_0xC4B84EB67F78C1F0(iLocal_91, 0))
				{
					if (!unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), iLocal_91, 0) && func_177())
					{
						bLocal_368 = true;
						iLocal_74 = 1;
						iLocal_91 = unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0);
						unk_0x337F2213526139E0(iLocal_91, 1, 1);
					}
					if (unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), iLocal_91, 0))
					{
						if (unk_0xE769D9B5158D0F11(uLocal_361))
						{
							unk_0x40D517D991458154(&uLocal_361);
						}
						if (!unk_0xE769D9B5158D0F11(uLocal_360))
						{
							uLocal_360 = func_180(iLocal_86, 0, 145);
						}
					}
					else
					{
						if (unk_0xE769D9B5158D0F11(uLocal_360))
						{
							unk_0x40D517D991458154(&uLocal_360);
						}
						if (!unk_0xE769D9B5158D0F11(uLocal_361))
						{
							uLocal_361 = func_166(iLocal_91, 0, 0);
						}
					}
					if (unk_0x160400EAEE246B4D(unk_0x18F7BE9ACB7D08F4(), iLocal_91))
					{
						if (unk_0xE769D9B5158D0F11(uLocal_361))
						{
							unk_0x40D517D991458154(&uLocal_361);
						}
						if (!unk_0xE769D9B5158D0F11(uLocal_360))
						{
							uLocal_360 = func_180(iLocal_86, 0, 145);
						}
						func_179("MAG_2_ESCAPE_PAP_CHASE");
						iLocal_369 = 4;
					}
					if (!iLocal_74)
					{
						if (unk_0xB7A628320EFF8E47(Local_60, Local_66) < 9f && func_19() == 0)
						{
							if (func_5(&Local_395, cLocal_372, "REPAP_MIKE", 4, 0, 0, 0))
							{
								iLocal_74 = 1;
							}
						}
					}
				}
				func_176(Local_87, 1);
				break;
		}
		if (!Global_3 && !bLocal_70)
		{
			if (unk_0xC4B84EB67F78C1F0(iLocal_91, 0))
			{
				if (unk_0x2A488C176D52CCA5(Local_60, Local_87) > 75f)
				{
					func_178(6);
				}
				if (func_191())
				{
					func_178(5);
				}
			}
		}
		if (!bLocal_368)
		{
			if (!unk_0xC4B84EB67F78C1F0(iLocal_91, 0))
			{
				if (!Global_3 && !bLocal_70)
				{
					func_178(5);
				}
			}
			else
			{
				if (!bLocal_368)
				{
					if (!Global_3 && !bLocal_70)
					{
						if (unk_0x0A088F357EF627CA(iLocal_91) < iLocal_83)
						{
							if (unk_0x1B843A60307EECA4(iLocal_91, unk_0x18F7BE9ACB7D08F4(), 1))
							{
								iLocal_84 = (iLocal_84 + (iLocal_83 - unk_0x0A088F357EF627CA(iLocal_91)));
							}
							unk_0xA3F48AA4B6323A62(iLocal_91);
						}
						if (iLocal_84 > 250)
						{
							if (unk_0x4CA763CF04749B94(iLocal_86, iLocal_91) && unk_0x2A488C176D52CCA5(Local_63, Local_66) < 25f)
							{
								func_178(5);
							}
						}
					}
				}
				iLocal_83 = unk_0x0A088F357EF627CA(iLocal_91);
			}
		}
		if (!unk_0x0FAE113CE72ED842(iLocal_86))
		{
			if (unk_0x3ECC58F70B51B88E(iLocal_86))
			{
				if (!Global_3 && !bLocal_70)
				{
					func_178(5);
				}
			}
		}
	}
}

void func_176(struct<3> Param0, bool bParam3)
{
	if (unk_0x2A488C176D52CCA5(Local_63, Param0) > 2.5f)
	{
		if (unk_0x2BBAA45ECDE3DAE2(iLocal_86, 713668775) != 1)
		{
			unk_0xA303A4837FBB8DDE(iLocal_86, Param0, 1f, -1, 0.25f, 0, 1193033728);
		}
	}
	else if (unk_0x2BBAA45ECDE3DAE2(iLocal_86, 713668775) != 1)
	{
		func_136(bParam3);
		unk_0x6016A20BFEAEFE11(iLocal_86, unk_0x18F7BE9ACB7D08F4(), -1, 16, 2);
	}
}

bool func_177()
{
	return (((((unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0) && unk_0xC4B84EB67F78C1F0(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0), 0)) && (unk_0x881022B41FD53CD6(unk_0x4F69FBD64CDF125B(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0))) || unk_0x422717A3330EA45D(unk_0x4F69FBD64CDF125B(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0))))) && unk_0xE4752B503DF3FEC0(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0)) > 0) && func_170(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0))) && !Global_103598);
}

void func_178(int iParam0)
{
	iLocal_47 = iParam0;
	iLocal_369 = 0;
}

void func_179(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_560)
	{
		if (!unk_0x9D39145AD645E383(iLocal_560[iVar0], sParam0))
		{
			if (unk_0x36CC410474001FBC(iLocal_560[iVar0]))
			{
				unk_0xA11D9B06B99FE786(iLocal_560[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_560)
	{
		if (unk_0x9D39145AD645E383(iLocal_560[iVar0], sParam0))
		{
			if (!unk_0x36CC410474001FBC(iLocal_560[iVar0]))
			{
				unk_0x64D773F3BE6DC50A(iLocal_560[iVar0]);
			}
		}
		iVar0++;
	}
}

var func_180(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_167(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xE769D9B5158D0F11(uVar0)) && unk_0xD76CFACBF6A6F21E(&(Global_104551.f_28020[iParam2 /*29*/].f_3)))
	{
		unk_0x61C2EC67C90074E5(uVar0, &(Global_104551.f_28020[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_181(int iParam0)
{
	if (func_184())
	{
		Global_104541 = 1;
		Global_104538 = unk_0x5AFB8ED811F05E4D();
		if (func_88(Global_104540))
		{
			func_182(0);
		}
		unk_0xC5FD44365E5AB875(1, "RE_TITLE");
		if (iParam0 && func_88(Global_104540))
		{
			unk_0x27F308A2D49D3A49();
		}
		return 1;
	}
	return 0;
}

void func_182(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_104551.f_24965.f_2 < 3)
			{
				if (!unk_0x5AB5DEF5DD2227D4())
				{
					func_163(func_183(iParam0), -1);
					Global_104551.f_24965.f_2++;
					unk_0xD2A9C3F486236CC5(&Global_104547, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0xB03A1684359C50A1(Global_104547, 1))
			{
				if (!unk_0x5AB5DEF5DD2227D4())
				{
					func_163(func_183(iParam0), -1);
					Global_104551.f_24965.f_3++;
					unk_0xD2A9C3F486236CC5(&Global_104547, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0xB03A1684359C50A1(Global_104547, 2))
			{
				if (!unk_0x5AB5DEF5DD2227D4())
				{
					func_163(func_183(iParam0), -1);
					Global_104551.f_24965.f_4++;
					unk_0xD2A9C3F486236CC5(&Global_104547, 2);
				}
			}
			break;
	}
}

char* func_183(int iParam0)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_184()
{
	switch (func_185(&Global_25292, 0, 5, 0, unk_0xBCF9D020FA9C313D()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_185(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_90452.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_189(0))
		{
			return 0;
		}
		Global_35823++;
		*uParam0 = Global_35823;
		unk_0x36643EAE6212D16F(unk_0x0A91D180DDC7A1B8(), 0);
		Global_17162.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x9BEC17E13AB1F07F(8);
		}
		Global_35859 = iParam2;
		Global_35821 = *uParam0;
		Global_35822 = iParam4;
		Global_35820 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_35820 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35820)
			{
				if (Global_35826[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35821 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_187(iParam2))
		{
			return 0;
		}
		if (Global_35820 == 8)
		{
			return 0;
		}
		Global_35823++;
		*uParam0 = Global_35823;
		Global_35826[Global_35820 /*4*/] = Global_35823;
		Global_35826[Global_35820 /*4*/].f_1 = iParam1;
		Global_35826[Global_35820 /*4*/].f_2 = iParam2;
		Global_35826[Global_35820 /*4*/].f_3 = 0;
		Global_35820++;
		if (iParam4 != 0)
		{
			func_186(uParam0, iParam4);
		}
	}
	return 2;
}

void func_186(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_35820 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35820)
	{
		if (Global_35826[iVar0 /*4*/] == *uParam0)
		{
			Global_35826[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_187(int iParam0)
{
	return func_188(iParam0, Global_35859);
}

int func_188(int iParam0, int iParam1)
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

int func_189(int iParam0)
{
	if (Global_35859 == 15)
	{
		return 0;
	}
	if (func_187(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_190()
{
	int iVar0;
	
	if (!unk_0x0FAE113CE72ED842(iLocal_86))
	{
		unk_0x470C9634914699C0(iLocal_86, 2, 0);
		unk_0x9603FB72C3126396(iLocal_86, unk_0x18F7BE9ACB7D08F4(), 300f, -1, 0, 0);
	}
	iVar0 = 0;
	while (iVar0 < Local_204.f_0)
	{
		if (!unk_0x0FAE113CE72ED842(Local_204[iVar0 /*18*/]))
		{
			unk_0x9603FB72C3126396(Local_204[iVar0 /*18*/], unk_0x18F7BE9ACB7D08F4(), 300f, -1, 0, 0);
			unk_0x641E77554763EF06(Local_204[iVar0 /*18*/], -2065892691);
			unk_0x40E2910BAF39B1C7(Local_204[iVar0 /*18*/], 0);
		}
		iVar0++;
	}
}

int func_191()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < Local_204.f_0)
	{
		if (unk_0x31F12808DC47A9E5(Local_204[iVar1 /*18*/]) && !unk_0x0FAE113CE72ED842(Local_204[iVar1 /*18*/]))
		{
			if (unk_0xBF0517F7142EEB5B(Local_204[iVar1 /*18*/]))
			{
				if (((unk_0x70832328F090DD95(Local_204[iVar1 /*18*/].f_6, 5f, 1) || unk_0x7824A0A217B1F7A8(-1, Local_204[iVar1 /*18*/].f_6, 10f)) || unk_0x3ECC58F70B51B88E(Local_204[iVar1 /*18*/])) || (iLocal_386[iVar1] > 10 && iLocal_47 == 0))
				{
					iVar0 = 1;
				}
			}
		}
		iVar1++;
	}
	if (iLocal_349 > 1)
	{
		iVar0 = 1;
	}
	iVar1 = 0;
	while (iVar1 < Local_131.f_0)
	{
		if (unk_0x31F12808DC47A9E5(Local_131[iVar1 /*18*/]))
		{
			if (unk_0xC4B84EB67F78C1F0(Local_131[iVar1 /*18*/], 0) && unk_0xBF0517F7142EEB5B(Local_131[iVar1 /*18*/]))
			{
				if (unk_0x25A40FAC128F45B0(Local_131[iVar1 /*18*/]))
				{
					iVar0 = 1;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_192()
{
	if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()) && !unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), Local_43) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0xEF288D764F53C90C(unk_0x18F7BE9ACB7D08F4())) > 1369f && !func_203())
		{
			return 0;
		}
	}
	if (func_199())
	{
		return 1;
	}
	if (func_193(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_193(float fParam0, bool bParam1)
{
	struct<27> Var0;
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	int iVar36;
	int iVar37;
	bool bVar38;
	
	iVar33 = -1;
	fVar34 = fParam0;
	if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
	{
		if (func_21(func_19()))
		{
			iVar36 = func_93();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0xB03A1684359C50A1(Global_104551.f_18544[iVar32 /*6*/], 2) && !unk_0xB03A1684359C50A1(Global_104551.f_18544[iVar32 /*6*/], 3))
				{
					func_194(iVar32, &Var0);
					fVar35 = unk_0x15EE504466B7BBD3(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 0), Var0.f_6, 1);
					if (fVar35 < fVar34)
					{
						bVar38 = true;
						if (bParam1)
						{
							if (iVar36 != Var0.f_26)
							{
								bVar38 = false;
							}
						}
						if (bVar38)
						{
							iVar33 = iVar32;
							fVar34 = fVar35;
						}
					}
				}
				iVar37++;
			}
		}
	}
	return iVar33;
}

void func_194(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_195(uParam1, "Abigail1", func_197(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_196(iParam0), 1, 0);
			break;
		
		case 1:
			func_195(uParam1, "Abigail2", func_197(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_196(iParam0), 1, 0);
			break;
		
		case 2:
			func_195(uParam1, "Barry1", func_197(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_196(iParam0), 1, 0);
			break;
		
		case 3:
			func_195(uParam1, "Barry2", func_197(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_196(iParam0), 1, 1);
			break;
		
		case 4:
			func_195(uParam1, "Barry3", func_197(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_196(iParam0), 0, 0);
			break;
		
		case 5:
			func_195(uParam1, "Barry3A", func_197(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 6:
			func_195(uParam1, "Barry3C", func_197(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 7:
			func_195(uParam1, "Barry4", func_197(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_196(iParam0), 0, 0);
			break;
		
		case 8:
			func_195(uParam1, "Dreyfuss1", func_197(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_196(iParam0), 0, 0);
			break;
		
		case 9:
			func_195(uParam1, "Epsilon1", func_197(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_196(iParam0), 0, 0);
			break;
		
		case 10:
			func_195(uParam1, "Epsilon2", func_197(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_196(iParam0), 1, 0);
			break;
		
		case 11:
			func_195(uParam1, "Epsilon3", func_197(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_196(iParam0), 0, 0);
			break;
		
		case 12:
			func_195(uParam1, "Epsilon4", func_197(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_196(iParam0), 0, 0);
			break;
		
		case 13:
			func_195(uParam1, "Epsilon5", func_197(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_196(iParam0), 1, 0);
			break;
		
		case 14:
			func_195(uParam1, "Epsilon6", func_197(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 15:
			func_195(uParam1, "Epsilon7", func_197(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_196(iParam0), 0, 0);
			break;
		
		case 16:
			func_195(uParam1, "Epsilon8", func_197(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_196(iParam0), 1, 0);
			break;
		
		case 17:
			func_195(uParam1, "Extreme1", func_197(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 18:
			func_195(uParam1, "Extreme2", func_197(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 19:
			func_195(uParam1, "Extreme3", func_197(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 20:
			func_195(uParam1, "Extreme4", func_197(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_196(iParam0), 0, 0);
			break;
		
		case 21:
			func_195(uParam1, "Fanatic1", func_197(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_196(iParam0), 1, 0);
			break;
		
		case 22:
			func_195(uParam1, "Fanatic2", func_197(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_196(iParam0), 1, 0);
			break;
		
		case 23:
			func_195(uParam1, "Fanatic3", func_197(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_196(iParam0), 0, 1);
			break;
		
		case 24:
			func_195(uParam1, "Hao1", func_197(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_196(iParam0), 0, 1);
			break;
		
		case 25:
			func_195(uParam1, "Hunting1", func_197(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 26:
			func_195(uParam1, "Hunting2", func_197(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 27:
			func_195(uParam1, "Josh1", func_197(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_196(iParam0), 1, 0);
			break;
		
		case 28:
			func_195(uParam1, "Josh2", func_197(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_196(iParam0), 1, 1);
			break;
		
		case 29:
			func_195(uParam1, "Josh3", func_197(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_196(iParam0), 1, 1);
			break;
		
		case 30:
			func_195(uParam1, "Josh4", func_197(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_196(iParam0), 1, 0);
			break;
		
		case 31:
			func_195(uParam1, "Maude1", func_197(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 32:
			func_195(uParam1, "Minute1", func_197(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 33:
			func_195(uParam1, "Minute2", func_197(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 34:
			func_195(uParam1, "Minute3", func_197(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 35:
			func_195(uParam1, "MrsPhilips1", func_197(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_196(iParam0), 0, 0);
			break;
		
		case 36:
			func_195(uParam1, "MrsPhilips2", func_197(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_196(iParam0), 0, 0);
			break;
		
		case 37:
			func_195(uParam1, "Nigel1", func_197(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_196(iParam0), 1, 0);
			break;
		
		case 38:
			func_195(uParam1, "Nigel1A", func_197(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_196(iParam0), 1, 1);
			break;
		
		case 39:
			func_195(uParam1, "Nigel1B", func_197(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_196(iParam0), 1, 1);
			break;
		
		case 40:
			func_195(uParam1, "Nigel1C", func_197(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_196(iParam0), 1, 1);
			break;
		
		case 41:
			func_195(uParam1, "Nigel1D", func_197(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_196(iParam0), 1, 1);
			break;
		
		case 42:
			func_195(uParam1, "Nigel2", func_197(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_196(iParam0), 1, 1);
			break;
		
		case 43:
			func_195(uParam1, "Nigel3", func_197(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_196(iParam0), 1, 1);
			break;
		
		case 44:
			func_195(uParam1, "Omega1", func_197(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_196(iParam0), 0, 0);
			break;
		
		case 45:
			func_195(uParam1, "Omega2", func_197(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_196(iParam0), 0, 0);
			break;
		
		case 46:
			func_195(uParam1, "Paparazzo1", func_197(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 47:
			func_195(uParam1, "Paparazzo2", func_197(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 48:
			func_195(uParam1, "Paparazzo3", func_197(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_196(iParam0), 0, 0);
			break;
		
		case 49:
			func_195(uParam1, "Paparazzo3A", func_197(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 50:
			func_195(uParam1, "Paparazzo3B", func_197(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 51:
			func_195(uParam1, "Paparazzo4", func_197(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_196(iParam0), 0, 0);
			break;
		
		case 52:
			func_195(uParam1, "Rampage1", func_197(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_196(iParam0), 0, 0);
			break;
		
		case 54:
			func_195(uParam1, "Rampage3", func_197(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_196(iParam0), 1, 0);
			break;
		
		case 55:
			func_195(uParam1, "Rampage4", func_197(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_196(iParam0), 1, 0);
			break;
		
		case 56:
			func_195(uParam1, "Rampage5", func_197(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_196(iParam0), 0, 0);
			break;
		
		case 53:
			func_195(uParam1, "Rampage2", func_197(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_196(iParam0), 1, 0);
			break;
		
		case 57:
			func_195(uParam1, "TheLastOne", func_197(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 58:
			func_195(uParam1, "Tonya1", func_197(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 59:
			func_195(uParam1, "Tonya2", func_197(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 60:
			func_195(uParam1, "Tonya3", func_197(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 61:
			func_195(uParam1, "Tonya4", func_197(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		case 62:
			func_195(uParam1, "Tonya5", func_197(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_196(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_195(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { Param7 };
	uParam0->f_9 = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	StringCopy(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = uParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
}

int func_196(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
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
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_197(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_198(iParam0) };
	if (unk_0xFAFFA408239A026B(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_198(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_199()
{
	if (func_202() && !func_203())
	{
		return 1;
	}
	if (func_201() && func_200())
	{
		return 1;
	}
	return 0;
}

bool func_200()
{
	return Global_104269 > 0;
}

int func_201()
{
	if (Global_89896 != -1)
	{
		return 1;
	}
	return 0;
}

int func_202()
{
	if (Global_89896 != -1)
	{
		return unk_0xB03A1684359C50A1(Global_83762[Global_89896 /*34*/].f_15, 20);
	}
	return 0;
}

int func_203()
{
	if (unk_0xC339C5C5B5E8BC5B())
	{
		if (unk_0x05C1AD623B6C5E86() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

void func_204()
{
	func_206(39, 1);
	func_206(40, 1);
	func_206(41, 1);
	func_206(42, 1);
	func_206(43, 1);
	func_206(44, 1);
	uLocal_359 = func_205(Local_87);
	iLocal_86 = unk_0x364B87C5C64BD100(26, joaat("a_f_y_bevhills_03"), Local_87, fLocal_90, 1, 1);
	unk_0x273FE09AE985A00A(iLocal_86, 1, 1);
	unk_0x273FE09AE985A00A(iLocal_86, 17, 1);
	unk_0x470C9634914699C0(iLocal_86, 128, 1);
	unk_0x10F31830C95ED2E5(iLocal_86, 1);
	unk_0x343E01BBD8361D5F(iLocal_86, 0);
	unk_0xDEA702F2138E0B35(iLocal_86, 0, 0, 1, 0);
	unk_0xDEA702F2138E0B35(iLocal_86, 2, 0, 0, 0);
	unk_0xDEA702F2138E0B35(iLocal_86, 3, 0, 0, 0);
	unk_0xDEA702F2138E0B35(iLocal_86, 4, 0, 0, 0);
	unk_0xDEA702F2138E0B35(iLocal_86, 7, 1, 0, 0);
	unk_0xDEA702F2138E0B35(iLocal_86, 8, 0, 0, 0);
	unk_0x5C68B61BD92B96D1(iLocal_86, 1);
	unk_0x40E2910BAF39B1C7(iLocal_86, 1);
	unk_0x44EB7E24C5D75087(iLocal_86, 0);
	unk_0x2F51E4FCC3B20959(iLocal_86, "LACEY");
	if (Global_3 || bLocal_70)
	{
		unk_0xF74B493CCF90C997(iLocal_86, 1);
	}
	if (unk_0x48E76A4B7B58B77A("CELEBRITY", &uLocal_69))
	{
		unk_0x641E77554763EF06(iLocal_86, uLocal_69);
	}
	iLocal_91 = unk_0x3064CCF56C6C32BC(joaat("surano"), Local_92, fLocal_95, 1, 1, 0);
	unk_0x3FF1EE7D5FD7094C(iLocal_91, Local_92, 0, 0, 1);
	unk_0xABEBC003B88D5144(iLocal_91, 0.1293f, -0.0323f, -0.1606f, 0.978f);
	unk_0x6780B033CB86560E(iLocal_91, 0, 0);
	unk_0xB447DBA72E281B1B(iLocal_91, 10);
	unk_0x9B53B2691E2B1F79(iLocal_91, 1084227584);
	unk_0xA2B45B1D3EE42178(iLocal_91, 3);
	unk_0x4D8AAF889D588F4D(iLocal_91, 1);
	unk_0x45DD2A11584F4EC4(iLocal_91, 1);
	unk_0x0C479E1994DA8B57(iLocal_91, unk_0xCE57E1A0D0E093AA(1));
	if (func_19() == 1)
	{
		func_17(&Local_395, 1, unk_0x18F7BE9ACB7D08F4(), "FRANKLIN", 0, 1);
	}
	else if (func_19() == 0)
	{
		func_17(&Local_395, 1, unk_0x18F7BE9ACB7D08F4(), "MICHAEL", 0, 1);
	}
	else
	{
		func_17(&Local_395, 1, unk_0x18F7BE9ACB7D08F4(), "TREVOR", 0, 1);
	}
	func_17(&Local_395, 3, iLocal_86, "LACEY", 0, 1);
	iLocal_375[0] = "idle_a";
	iLocal_375[1] = "idle_b";
	iLocal_375[2] = "idle_c";
	iLocal_375[3] = "idle_d";
	iLocal_375[4] = "idle_e";
	iLocal_375[5] = "idle_f";
	iLocal_375[6] = "idle_g";
	iLocal_375[7] = "idle_h";
	iLocal_375[8] = "idle_i";
	iLocal_560[0] = "MAG_2_ESCAPE_PAP_GET_CAR";
	iLocal_560[1] = "MAG_2_ESCAPE_PAP_CHASE";
	iLocal_560[2] = "MAG_2_ESCAPE_PAP_TAKE_ACTRESS_HOME";
	unk_0x116D235ABEF5CE46(joaat("vader"), 1);
	unk_0x116D235ABEF5CE46(joaat("surano"), 1);
	unk_0x116D235ABEF5CE46(joaat("cavalcade2"), 1);
}

var func_205(struct<3> Param0)
{
	var uVar0;
	
	uVar0 = unk_0x29F0B4D7EFF08BF6(Param0);
	unk_0x1DB03C7D3DC49006(uVar0, 0);
	unk_0x4925D19C5D509CE1(uVar0, 0);
	return uVar0;
}

void func_206(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_213(iParam0, 2, 1))
		{
			func_212(iParam0, 2, 1);
		}
	}
	else if (func_213(iParam0, 2, 1))
	{
		func_207(iParam0, 2, 1);
	}
}

void func_207(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0x62148293B793073B(&(Global_92881.f_1322[iParam0]), iParam1);
	}
	else if (unk_0x44243F2E2F58B8E3())
	{
		if (func_83() == 0)
		{
			uVar0 = func_210(func_211(iParam0), -1, 0);
			unk_0x62148293B793073B(&uVar0, iParam1);
			func_208(func_211(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x62148293B793073B(&(Global_104551.f_668[iParam0]), iParam1);
	}
}

void func_208(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2522855[iParam0 /*3*/][func_209(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xD92C8D8AF3C67820(iVar0, uParam1, iParam3);
	}
}

int func_209(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_86();
		if (iVar1 > -1)
		{
			Global_2522568 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2522568 = 1;
		}
	}
	return iVar0;
}

int func_210(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2522855[iParam0 /*3*/][func_209(iParam1)];
	if (unk_0xD194C635833AC189(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_211(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 824;
			break;
		
		case 1:
			return 825;
			break;
		
		case 2:
			return 826;
			break;
		
		case 3:
			return 827;
			break;
		
		case 4:
			return 828;
			break;
		
		case 5:
			return 829;
			break;
		
		case 6:
			return 830;
			break;
		
		case 7:
			return 831;
			break;
		
		case 8:
			return 832;
			break;
		
		case 9:
			return 833;
			break;
		
		case 10:
			return 834;
			break;
		
		case 11:
			return 835;
			break;
		
		case 12:
			return 836;
			break;
		
		case 13:
			return 837;
			break;
		
		case 14:
			return 838;
			break;
		
		case 15:
			return 840;
			break;
		
		case 16:
			return 841;
			break;
		
		case 17:
			return 842;
			break;
		
		case 18:
			return 843;
			break;
		
		case 19:
			return 844;
			break;
		
		case 20:
			return 845;
			break;
		
		case 21:
			return 846;
			break;
		
		case 22:
			return 847;
			break;
		
		case 23:
			return 848;
			break;
		
		case 24:
			return 849;
			break;
		
		case 25:
			return 850;
			break;
		
		case 26:
			return 851;
			break;
		
		case 27:
			return 852;
			break;
		
		case 28:
			return 853;
			break;
		
		case 29:
			return 854;
			break;
		
		case 30:
			return 855;
			break;
		
		case 31:
			return 856;
			break;
		
		case 32:
			return 857;
			break;
		
		case 33:
			return 858;
			break;
		
		case 34:
			return 859;
			break;
		
		case 35:
			return 860;
			break;
		
		case 36:
			return 861;
			break;
		
		case 37:
			return 862;
			break;
		
		case 38:
			return 863;
			break;
		
		case 39:
			return 864;
			break;
		
		case 40:
			return 868;
			break;
		
		case 41:
			return 869;
			break;
		
		case 42:
			return 870;
			break;
		
		case 43:
			return 871;
			break;
		
		case 44:
			return 7011;
			break;
		
		case 45:
			return 3791;
			break;
		
		case 46:
			return 5366;
			break;
		
		case 47:
			return 6138;
			break;
		
		default:
			break;
	}
	return 7870;
}

void func_212(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0xD2A9C3F486236CC5(&(Global_92881.f_1322[iParam0]), iParam1);
	}
	else if (unk_0x44243F2E2F58B8E3())
	{
		if (func_83() == 0)
		{
			uVar0 = func_210(func_211(iParam0), -1, 0);
			unk_0xD2A9C3F486236CC5(&uVar0, iParam1);
			func_208(func_211(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xD2A9C3F486236CC5(&(Global_104551.f_668[iParam0]), iParam1);
	}
}

int func_213(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0xB03A1684359C50A1(Global_92881.f_1322[iParam0], iParam1);
	}
	else if (unk_0x44243F2E2F58B8E3())
	{
		if (func_83() == 0)
		{
			return unk_0xB03A1684359C50A1(func_210(func_211(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xB03A1684359C50A1(Global_104551.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_214()
{
	if (!iLocal_96)
	{
		func_222(&uLocal_97, joaat("surano"));
		func_222(&uLocal_97, joaat("prop_ld_test_01"));
		func_222(&uLocal_97, joaat("a_f_y_bevhills_03"));
		func_222(&uLocal_97, joaat("a_m_y_genstreet_02"));
		func_222(&uLocal_97, joaat("vader"));
		func_222(&uLocal_97, joaat("cavalcade2"));
		func_222(&uLocal_97, joaat("prop_pap_camera_01"));
		func_219(&uLocal_97);
		iLocal_96 = 1;
	}
	if (!func_215(&uLocal_97))
	{
		return 0;
	}
	unk_0x831CD0FBFB26EC7E("random@escape_paparazzi@standing@");
	unk_0x831CD0FBFB26EC7E("random@paparazzi@pap_anims");
	unk_0x831CD0FBFB26EC7E("random@paparazzi@peek");
	unk_0x831CD0FBFB26EC7E("random@paparazzi@trans");
	unk_0x831CD0FBFB26EC7E("random@paparazzi@wait");
	unk_0x831CD0FBFB26EC7E("veh@std@ps@idle_panic");
	unk_0x831CD0FBFB26EC7E("veh@low@front_ps@idle_panic");
	unk_0x831CD0FBFB26EC7E(sLocal_374);
	unk_0x8E058779F430F4D7("ESCPAP", 0);
	if (((((((((unk_0x028356968FDD2DF2("random@escape_paparazzi@standing@") && unk_0x028356968FDD2DF2("random@paparazzi@pap_anims")) && unk_0x028356968FDD2DF2("random@paparazzi@peek")) && unk_0x028356968FDD2DF2("random@paparazzi@trans")) && unk_0x028356968FDD2DF2("random@paparazzi@wait")) && unk_0x028356968FDD2DF2("veh@std@ps@idle_panic")) && unk_0x028356968FDD2DF2("veh@low@front_ps@idle_panic")) && unk_0x028356968FDD2DF2(sLocal_374)) && unk_0x9F22E45F3CF7EACA(0)) && unk_0xFF22FE9205F44FB6("Distant_Camera_Flash", false, -1))
	{
		return 1;
	}
	return 0;
}

int func_215(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_31)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xB03A1684359C50A1((*uParam0)[iVar0 /*2*/], 30))
		{
			if (!unk_0xB03A1684359C50A1((*uParam0)[iVar0 /*2*/], 29))
			{
				return 0;
			}
			if (!func_216(uParam0[iVar0 /*2*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_31 = 0;
	return 1;
}

bool func_216(var uParam0)
{
	return func_217(*uParam0, "NULL", uParam0->f_1);
}

int func_217(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0xB03A1684359C50A1(iParam0, 30))
	{
		if (unk_0xB03A1684359C50A1(iParam0, 29))
		{
			switch (func_218(iParam0))
			{
				case 0:
					return unk_0xEDFE27D1AEA0EA7F(uParam2);
					break;
				
				case 1:
					return unk_0x028356968FDD2DF2(sParam1);
					break;
				
				case 2:
					return unk_0x302010EE1D40EBC3(sParam1);
					break;
				
				case 3:
					return unk_0x1865CC0DAB5F6A86(sParam1);
					break;
				
				case 4:
					return unk_0x53500A7D168BF5F6(iParam2, sParam1);
					break;
				
				case 5:
					return unk_0x9BE1DFFE71D3D3DA(sParam1);
					break;
				
				case 6:
					return unk_0xFF22FE9205F44FB6(sParam1, unk_0xB03A1684359C50A1(iParam0, 27), -1);
					break;
				
				case 7:
					return unk_0x943750A69922D35E(iParam2);
					break;
				
				case 8:
					return unk_0x9F22E45F3CF7EACA(iParam2);
					break;
				
				case 9:
					return unk_0x8851E7053F291F92();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_218(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0xB03A1684359C50A1(iParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_219(var uParam0)
{
	func_220(uParam0, 9, -1, 0);
}

void func_220(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (!func_221(iParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xB03A1684359C50A1((*uParam0)[iVar0 /*2*/], 30))
		{
			if (unk_0xB03A1684359C50A1((*uParam0)[iVar0 /*2*/], iParam1))
			{
				if (iParam2 != -1)
				{
					if ((uParam0[iVar0 /*2*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (iParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_31)
	{
		uParam0->f_31 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!unk_0xB03A1684359C50A1((*uParam0)[iVar0 /*2*/], 30))
		{
			(uParam0[iVar0 /*2*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*2*/] = iParam3;
			unk_0xD2A9C3F486236CC5(uParam0[iVar0 /*2*/], iParam1);
			unk_0xD2A9C3F486236CC5(uParam0[iVar0 /*2*/], 30);
			return;
		}
		iVar0++;
	}
}

int func_221(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 0;
			break;
		
		case 0:
			return 1;
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
			return 0;
			break;
		
		case 9:
			return 1;
			break;
	}
	return 0;
}

void func_222(var uParam0, int iParam1)
{
	func_220(uParam0, 0, iParam1, 0);
}

int func_223()
{
	if (!func_187(5))
	{
		return 1;
	}
	if (func_199())
	{
		return 1;
	}
	if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0xEF288D764F53C90C(unk_0x18F7BE9ACB7D08F4())) > 1369f && !func_203())
		{
			return 0;
		}
	}
	if (func_193(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_224()
{
	if ((Global_104540 == func_97() && unk_0xD436A6CEB14BAC66()) && Global_104541)
	{
		return 1;
	}
	return 0;
}

void func_225(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_31)
	{
		if ((unk_0x756DE011CEDBBD7E() >= (uParam0->f_32 + uParam0->f_33) || unk_0xB03A1684359C50A1(Global_92829.f_20, 2)) || unk_0xB03A1684359C50A1(Global_92829.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (unk_0xB03A1684359C50A1((*uParam0)[iVar0 /*2*/], 30))
				{
					if (!unk_0xB03A1684359C50A1((*uParam0)[iVar0 /*2*/], 29))
					{
						func_226(uParam0[iVar0 /*2*/]);
						uParam0->f_32 = unk_0x756DE011CEDBBD7E();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_226(var uParam0)
{
	func_227(uParam0, "NULL", uParam0->f_1);
}

void func_227(var uParam0, char* sParam1, int iParam2)
{
	if (unk_0xB03A1684359C50A1(*uParam0, 30))
	{
		switch (func_218(*uParam0))
		{
			case 0:
				unk_0x9016574B77A748EE(uParam2);
				break;
			
			case 1:
				unk_0x831CD0FBFB26EC7E(sParam1);
				break;
			
			case 2:
				unk_0x385AB5B1656B03B3(sParam1);
				break;
			
			case 3:
				unk_0x1E7BE791ACBDDC05(sParam1, unk_0xB03A1684359C50A1(*uParam0, 28));
				break;
			
			case 4:
				unk_0xAE5F484E08487A0F(iParam2, sParam1);
				break;
			
			case 5:
				unk_0x556D5BBBB0AC3BCB(sParam1);
				break;
			
			case 6:
				unk_0xFF22FE9205F44FB6(sParam1, unk_0xB03A1684359C50A1(*uParam0, 27), -1);
				break;
			
			case 7:
				unk_0xEB608F49F9230874(iParam2);
				break;
			
			case 8:
				unk_0x8E058779F430F4D7(sParam1, iParam2);
				break;
			
			case 9:
				unk_0xF43D99776B580DA7();
				break;
			
			default:
				break;
		}
		unk_0xD2A9C3F486236CC5(uParam0, 29);
	}
}

void func_228(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_97();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_230(iParam0);
	unk_0x0A022B047163ACAE(0);
	unk_0xD42F50467E7AD46D(1);
	Global_104537 = 0;
	func_229();
}

void func_229()
{
	if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			unk_0x116D235ABEF5CE46(unk_0x4F69FBD64CDF125B(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0)), 1);
		}
		unk_0x764AFC5A3A16C2B0(unk_0x18F7BE9ACB7D08F4(), 32, 0);
	}
}

void func_230(int iParam0)
{
	Global_104540 = iParam0;
}

int func_231(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_142815)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_97();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_272())
		{
			return 0;
		}
	}
	Local_43 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()) && !unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
		{
			Var1 = { unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0xEF288D764F53C90C(unk_0x18F7BE9ACB7D08F4())) > 1369f && !func_203())
			{
				return 0;
			}
		}
		if (!Global_104551.f_9055)
		{
			return 0;
		}
		if (func_78(0))
		{
			return 0;
		}
		if (func_199())
		{
			return 0;
		}
		if (func_271())
		{
			return 0;
		}
		if (Global_104540 != -1)
		{
			return 0;
		}
		if (func_21(func_19()))
		{
			if (func_193(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()) && !bParam6)
		{
			if ((Var1.f_2 - Local_43.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_270(iParam3))
		{
			return 0;
		}
		if (func_21(func_19()))
		{
			if (func_269(func_19()) == 4 || func_269(func_19()) == 5)
			{
				return 0;
			}
		}
		if (func_21(func_19()))
		{
			if (!func_268(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_267(Global_104551.f_24965.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x5AFB8ED811F05E4D() - Global_104542) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_266())
		{
			return 0;
		}
		if (unk_0xEFD3E4A202A0D9DA())
		{
			return 0;
		}
		if (unk_0xD436A6CEB14BAC66())
		{
			return 0;
		}
		if (!func_257(4))
		{
			return 0;
		}
		if (!func_187(5))
		{
			return 0;
		}
		if (func_256(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (unk_0xB79050CDE709F080(unk_0x338C4427806FEB6D(unk_0x18F7BE9ACB7D08F4())))
		{
			if ((unk_0x338C4427806FEB6D(unk_0x18F7BE9ACB7D08F4()) == unk_0x8EFD19513210F032(377.153f, -717.567f, 10.0536f) || unk_0x338C4427806FEB6D(unk_0x18F7BE9ACB7D08F4()) == unk_0x8EFD19513210F032(320.9934f, 265.2515f, 82.1221f)) || unk_0x338C4427806FEB6D(unk_0x18F7BE9ACB7D08F4()) == unk_0x8EFD19513210F032(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_256(0, 0))
		{
			return 0;
		}
		if (Global_25379)
		{
			return 0;
		}
		if (func_270(30) && !func_256(30, 0))
		{
			if (iParam3 != 30)
			{
				if (unk_0xB7A628320EFF8E47(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_21(func_19()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_104551.f_2353.f_539.f_2280[iVar4 /*3*/] };
				iVar8 = Global_104551.f_2353.f_539.f_2276[iVar4];
				if (func_255(iVar8))
				{
					if (func_233(iVar4))
					{
						if (!func_232(Var5, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 0), Var5) < (210f * 210f))
							{
								if (func_19() != iVar4)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar4++;
			}
		}
	}
	return 1;
}

bool func_232(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_233(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_104551.f_2353.f_539.f_2276[iParam0];
	return func_234(iVar0);
}

int func_234(int iParam0)
{
	return func_235(iParam0, 1);
}

int func_235(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_255(iParam0))
	{
		return 0;
	}
	func_236(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_236(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_237(func_248(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_237(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_247(iParam0, iParam1))
	{
		iVar0 = func_246(iParam1);
		iVar1 = func_244(iParam0);
		iVar2 = (func_244(iParam0) - func_244(iParam1));
		iVar3 = (func_246(iParam0) - func_246(iParam1));
		iVar4 = (func_243(iParam0) - func_243(iParam1));
		iVar5 = (func_242(iParam0) - func_242(iParam1));
		iVar6 = (func_241(iParam0) - func_241(iParam1));
		iVar7 = (func_240(iParam0) - func_240(iParam1));
	}
	else
	{
		iVar0 = func_246(iParam0);
		iVar1 = func_244(iParam1);
		iVar2 = (func_244(iParam1) - func_244(iParam0));
		iVar3 = (func_246(iParam1) - func_246(iParam0));
		iVar4 = (func_243(iParam1) - func_243(iParam0));
		iVar5 = (func_242(iParam1) - func_242(iParam0));
		iVar6 = (func_241(iParam1) - func_241(iParam0));
		iVar7 = (func_240(iParam1) - func_240(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_239(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_238(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_238(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(unk_0xF2DB717A73826179(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_239(int iParam0, int iParam1)
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

int func_240(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_241(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_242(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_243(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_244(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_245(unk_0xB03A1684359C50A1(iParam0, 31), -1, 1)) + 2011;
}

int func_245(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_246(int iParam0)
{
	return iParam0 & 15;
}

int func_247(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_255(iParam1) || !func_255(iParam0))
	{
		return 1;
	}
	iVar0 = func_244(iParam0);
	iVar1 = func_244(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_246(iParam0);
	iVar1 = func_246(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_243(iParam0);
	iVar1 = func_243(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_242(iParam0);
	iVar1 = func_242(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_241(iParam0);
	iVar1 = func_241(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_240(iParam0);
	iVar1 = func_240(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_248()
{
	var uVar0;
	
	func_254(&uVar0, unk_0xB093145A4ED05C87());
	func_253(&uVar0, unk_0x4BF279EB036481A0());
	func_252(&uVar0, unk_0xF0B96EE16BA9FBE8());
	func_251(&uVar0, unk_0x518720E0DE404FFC());
	func_250(&uVar0, unk_0x5E3E9A684A609866());
	func_249(&uVar0, unk_0xFBE778F13510E585());
	return uVar0;
}

void func_249(var uParam0, int iParam1)
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

void func_250(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_251(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_246(*uParam0);
	iVar1 = func_244(*uParam0);
	if (iParam1 < 1 || iParam1 > func_239(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_252(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_253(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_254(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_255(int iParam0)
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
	iVar0 = func_240(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_241(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_242(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_244(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_246(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_243(iParam0);
	if (iVar5 < 1 || iVar5 > func_239(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_256(int iParam0, int iParam1)
{
	if (unk_0xB03A1684359C50A1(Global_104551.f_24965.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_257(int iParam0)
{
	int iVar0;
	
	if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
	{
		if (unk_0x31F12808DC47A9E5(unk_0x18F7BE9ACB7D08F4()))
		{
			if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
			{
				iVar0 = func_19();
				if (!func_21(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x16034CA8E32730C9(unk_0x8CFC7D6E1DA5D304()) || unk_0x2409C4B1759B2661(unk_0x18F7BE9ACB7D08F4())) || unk_0xDB5E52F2078862CA(unk_0x18F7BE9ACB7D08F4())) || unk_0x0B90D19A63676F41(unk_0x18F7BE9ACB7D08F4())) || unk_0x5D063CF6A2578E13(unk_0x18F7BE9ACB7D08F4())) || unk_0xCED3310F81788C52(unk_0x8CFC7D6E1DA5D304(), 1)) || unk_0x869BE9FEE7F5316B(unk_0x8CFC7D6E1DA5D304())) || unk_0x8E6B1A41766B5731(unk_0x18F7BE9ACB7D08F4(), 0)) || func_265()) || Global_103598) || Global_25235) || func_264()) || func_14(8, -1)) || func_263()) || func_262()) || func_261()) || func_260()) || Global_104551.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xCED3310F81788C52(unk_0x8CFC7D6E1DA5D304(), 1) || func_265()) || Global_25235) || func_264()) || func_14(8, -1)) || func_261()) || func_263()) || func_262()) || func_260()) || Global_104551.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x16034CA8E32730C9(unk_0x8CFC7D6E1DA5D304()) || unk_0x2409C4B1759B2661(unk_0x18F7BE9ACB7D08F4())) || unk_0xDB5E52F2078862CA(unk_0x18F7BE9ACB7D08F4())) || unk_0x0B90D19A63676F41(unk_0x18F7BE9ACB7D08F4())) || unk_0x5D063CF6A2578E13(unk_0x18F7BE9ACB7D08F4())) || unk_0xCED3310F81788C52(unk_0x8CFC7D6E1DA5D304(), 1)) || unk_0x869BE9FEE7F5316B(unk_0x8CFC7D6E1DA5D304())) || unk_0x8E6B1A41766B5731(unk_0x18F7BE9ACB7D08F4(), 0)) || func_265()) || Global_103598) || Global_25235) || func_264()) || func_14(8, -1)) || func_261()) || func_263()) || func_262()) || func_260()) || Global_104551.f_7658.f_919[iVar0] == 5) || Global_36406 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x0B90D19A63676F41(unk_0x18F7BE9ACB7D08F4()) || unk_0x5D063CF6A2578E13(unk_0x18F7BE9ACB7D08F4())) || unk_0xCED3310F81788C52(unk_0x8CFC7D6E1DA5D304(), 1)) || unk_0x8E6B1A41766B5731(unk_0x18F7BE9ACB7D08F4(), 0)) || func_265()) || Global_103598) || Global_25235) || func_264()) || func_14(8, -1)) || func_263()) || func_262()) || func_260()) || Global_104551.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_265() || unk_0xFF3D7D0CFD33DE47(unk_0x8CFC7D6E1DA5D304()) > 0) || func_14(8, -1)) || func_260()) || func_259()) || Global_104551.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_14(8, -1) || func_263()) || func_262()) || func_259()) || func_258())
						{
							return 0;
						}
						if ((unk_0x51CFE20A158947F4() && unk_0x32C5C8379484CA74() != 3) && unk_0xCAC20ED19D675C6E() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x31F12808DC47A9E5(unk_0x18F7BE9ACB7D08F4()))
						{
							if ((((((((((((((unk_0x8E6B1A41766B5731(unk_0x18F7BE9ACB7D08F4(), 0) || unk_0xFF3D7D0CFD33DE47(unk_0x8CFC7D6E1DA5D304()) > 0) || unk_0x2409C4B1759B2661(unk_0x18F7BE9ACB7D08F4())) || unk_0x0B90D19A63676F41(unk_0x18F7BE9ACB7D08F4())) || unk_0x5D063CF6A2578E13(unk_0x18F7BE9ACB7D08F4())) || unk_0xCED3310F81788C52(unk_0x8CFC7D6E1DA5D304(), 1)) || unk_0x869BE9FEE7F5316B(unk_0x8CFC7D6E1DA5D304())) || func_265()) || Global_25235) || func_264()) || func_14(8, -1)) || func_262()) || func_261()) || func_260()) || Global_104551.f_7658.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x8E6B1A41766B5731(unk_0x18F7BE9ACB7D08F4(), 0) || !unk_0xA126D857D0E10968(unk_0x8CFC7D6E1DA5D304())) || !unk_0x16034CA8E32730C9(unk_0x8CFC7D6E1DA5D304())) || !unk_0xC8AB6A5E6C1E6613()) || unk_0x2409C4B1759B2661(unk_0x18F7BE9ACB7D08F4())) || unk_0x0B90D19A63676F41(unk_0x18F7BE9ACB7D08F4())) || unk_0x5D063CF6A2578E13(unk_0x18F7BE9ACB7D08F4())) || unk_0xCED3310F81788C52(unk_0x8CFC7D6E1DA5D304(), 1)) || func_265()) || func_262()) || Global_103598) || Global_25235) || func_264()) || Global_36991) || func_14(8, -1)) || func_261()) || func_259()) || func_260()) || Global_104551.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x8E6B1A41766B5731(unk_0x18F7BE9ACB7D08F4(), 0) || !unk_0xA126D857D0E10968(unk_0x8CFC7D6E1DA5D304())) || !unk_0x16034CA8E32730C9(unk_0x8CFC7D6E1DA5D304())) || !unk_0xC8AB6A5E6C1E6613()) || unk_0xAAC7941A7E0EE97A(unk_0x8CFC7D6E1DA5D304(), 0)) || unk_0x2409C4B1759B2661(unk_0x18F7BE9ACB7D08F4())) || unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1)) || unk_0x0B90D19A63676F41(unk_0x18F7BE9ACB7D08F4())) || unk_0x5D063CF6A2578E13(unk_0x18F7BE9ACB7D08F4())) || unk_0x00C9F17EF169BFC9(unk_0x18F7BE9ACB7D08F4())) || unk_0xCED3310F81788C52(unk_0x8CFC7D6E1DA5D304(), 1)) || unk_0x869BE9FEE7F5316B(unk_0x8CFC7D6E1DA5D304())) || func_265()) || Global_103598) || Global_25235) || func_264()) || func_14(8, -1)) || func_261()) || func_259()) || func_263()) || func_262()) || func_260())
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

var func_258()
{
	return Global_92868.f_1;
}

int func_259()
{
	if (Global_89896 != -1)
	{
		return unk_0xB03A1684359C50A1(Global_83762[Global_89896 /*34*/].f_15, 13);
	}
	return 0;
}

int func_260()
{
	if (unk_0xE7FAF8E78F7D3A73(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_261()
{
	if (Global_71112)
	{
		return 1;
	}
	else if (Global_55895 && !Global_55901)
	{
		return 1;
	}
	return 0;
}

bool func_262()
{
	return Global_92881.f_316 > 0;
}

bool func_263()
{
	return Global_92881.f_315 > 0;
}

var func_264()
{
	return Global_1312854;
}

int func_265()
{
	if (!unk_0x44243F2E2F58B8E3())
	{
		return Global_90452.f_44 == 1;
	}
	return 0;
}

int func_266()
{
	func_11();
	if (Global_3128[Global_14453 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_267(int iParam0)
{
	return func_247(func_248(), iParam0);
}

int func_268(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_19();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_269(int iParam0)
{
	if (!func_21(iParam0))
	{
		return 7;
	}
	return Global_104551.f_7658.f_919[iParam0];
}

bool func_270(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_272())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0xB03A1684359C50A1(Global_104551.f_24965, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0xB03A1684359C50A1(Global_104551.f_24965.f_1, iVar0);
	}
	return bVar1;
}

int func_271()
{
	var uVar0;
	
	if (Global_25383)
	{
		if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			uVar0 = unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0);
			if (unk_0xC4B84EB67F78C1F0(uVar0, 0))
			{
				if (!unk_0x0FAE113CE72ED842(unk_0x4983F8C51A0C0AF3(iVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_272()
{
	var uVar0;
	
	if (unk_0x1F30842E4146CE70())
	{
		if (unk_0xABC550EBCFE96BBC())
		{
			if (unk_0xD51AEB3E72C71D1B())
			{
				unk_0xD194C635833AC189(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xD2A9C3F486236CC5(&uVar0, 2);
				unk_0xD2A9C3F486236CC5(&uVar0, 4);
				unk_0xD2A9C3F486236CC5(&uVar0, 6);
				unk_0xD2A9C3F486236CC5(&Global_25, 2);
				unk_0xD2A9C3F486236CC5(&Global_25, 4);
				unk_0xD2A9C3F486236CC5(&Global_25, 6);
				unk_0xD92C8D8AF3C67820(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x16DC46A28107A94A())
				{
					iVar0 = unk_0x3A75EA627A024B7A(866);
					unk_0xD2A9C3F486236CC5(&iVar0, 0);
					unk_0x167AC4B8CEEB1F11(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_143070 == 2)
	{
		return 1;
	}
	else if (Global_143070 == 3)
	{
		return 0;
	}
	if (unk_0x16DC46A28107A94A())
	{
		if (unk_0xB03A1684359C50A1(unk_0x3A75EA627A024B7A(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_273(var uParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		uParam0->f_33 = iParam1;
	}
}

void func_274()
{
	func_292(0);
	unk_0x52756EBA46F4FA41(-90f, -1488f, -50f, 55f, -1470f, 50f, 1);
	unk_0x6D7801DE0E52AE2C("WORLD_VEHICLE_DRIVE_SOLO", 1);
	func_287(&uLocal_97, 0);
	unk_0x334F1DD67B2EC86A("random@escape_paparazzi@standing@");
	unk_0x334F1DD67B2EC86A("random@paparazzi@pap_anims");
	unk_0x334F1DD67B2EC86A("random@paparazzi@peek");
	unk_0x334F1DD67B2EC86A("random@paparazzi@trans");
	unk_0x334F1DD67B2EC86A("random@paparazzi@wait");
	unk_0x334F1DD67B2EC86A("veh@std@ps@idle_panic");
	unk_0x334F1DD67B2EC86A("veh@low@front_ps@idle_panic");
	unk_0x334F1DD67B2EC86A(sLocal_374);
	unk_0x6279F6030B6B0475();
	if (func_224())
	{
		unk_0x8BB3FA32294185BB(1f);
	}
	if (unk_0x31F12808DC47A9E5(iLocal_86) && !unk_0x0FAE113CE72ED842(iLocal_86))
	{
		if (unk_0x4732F444CD45A256(iLocal_86))
		{
			unk_0x95B1A64E8455A478(iLocal_86);
		}
		if (unk_0x657B649BA2AD3582(iLocal_86, 1))
		{
			if (!unk_0x3ECC58F70B51B88E(iLocal_86))
			{
				unk_0x5941F8B2A813BBA8(iLocal_86, 0, 0);
			}
		}
	}
	func_276(-1);
	unk_0x4815E4A5C2A8DB62();
	unk_0x3159F4BB8902C226(0);
	unk_0x116D235ABEF5CE46(joaat("vader"), 0);
	unk_0x116D235ABEF5CE46(joaat("surano"), 0);
	unk_0x116D235ABEF5CE46(joaat("cavalcade2"), 0);
	unk_0x7E1D02126DA8A751(uLocal_365, 0);
	unk_0x7E1D02126DA8A751(uLocal_366, 0);
	unk_0x7E1D02126DA8A751(uLocal_367, 0);
	unk_0x3B4B46A2A779D56E(Vector(93.8361f, 92.1704f, 246.1673f) + Vector(6f, 6f, 6f), Vector(93.8361f, 92.1704f, 246.1673f) - Vector(6f, 6f, 6f), 1, 1);
	if (Global_25471)
	{
		unk_0x9BEA833CAF67289C("AC_STOP");
	}
	func_275();
	unk_0x810C5D6462DD69E6();
}

void func_275()
{
	Global_25467 = 0;
	Global_25468 = 0;
	Global_25470 = 0;
	Global_25471 = 0;
	Global_25472 = 0;
}

void func_276(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_97();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_224())
	{
		func_280(iParam0);
		unk_0xC5FD44365E5AB875(0, 0);
		Global_104542 = unk_0x5AFB8ED811F05E4D();
		func_279(30000);
		StringCopy(&cVar0, func_278(Global_104540, 1), 64);
		if (func_96(Global_104540) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_104539, 64);
		}
		unk_0x50686B0B250B8042(&cVar0, Global_104537, (unk_0x5AFB8ED811F05E4D() - Global_104538), 0);
	}
	else if (unk_0xB03A1684359C50A1(Global_104547, 0) && Global_104551.f_24965.f_2 < 3)
	{
		unk_0x62148293B793073B(&Global_104547, 0);
	}
	func_277(&Global_25292);
	Global_104541 = 0;
	func_230(-1);
}

void func_277(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_35821)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_35820 = 0;
	Global_35822 = 0;
	Global_35859 = 15;
	Global_55898 = 0;
	Global_55899 = 0;
}

char* func_278(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_279(int iParam0)
{
	Global_36410 = (unk_0x5AFB8ED811F05E4D() + iParam0);
}

void func_280(int iParam0)
{
	func_281(iParam0, 0, func_286(iParam0));
}

void func_281(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_248();
	func_284(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_283(iParam0, &uVar0);
	Var1 = { func_282(&uVar0) };
}

struct<16> func_282(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_242(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_241(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_240(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_243(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_246(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_244(*uParam0), 64);
	return Var0;
}

void func_283(int iParam0, var uParam1)
{
	Global_104551.f_24965.f_43[iParam0] = *uParam1;
}

void func_284(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_244(*uParam0);
	iVar1 = func_246(*uParam0);
	iVar2 = func_243(*uParam0);
	iVar3 = func_242(*uParam0);
	iVar4 = func_241(*uParam0);
	iVar5 = func_240(*uParam0);
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
	iVar6 = func_239(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_239(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_285(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_285(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_254(uParam0, iParam1);
	func_253(uParam0, iParam2);
	func_252(uParam0, iParam3);
	func_250(uParam0, iParam5);
	func_251(uParam0, iParam4);
	func_249(uParam0, iParam6);
}

int func_286(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

void func_287(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_289(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_288(uParam0[iVar0 /*2*/]);
		iVar0++;
	}
	uParam0->f_31 = 0;
	uParam0->f_32 = -1;
	uParam0->f_33 = 1;
}

void func_288(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
}

void func_289(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xB03A1684359C50A1((*uParam0)[iVar0 /*2*/], 30))
		{
			func_290(uParam0[iVar0 /*2*/]);
		}
		iVar0++;
	}
	uParam0->f_31 = 1;
}

void func_290(var uParam0)
{
	func_291(*uParam0, "NULL", uParam0->f_1);
}

void func_291(int iParam0, char* sParam1, var uParam2)
{
	if (unk_0xB03A1684359C50A1(uParam0, 30))
	{
		switch (func_218(iParam0))
		{
			case 0:
				unk_0x419C9117019F2E5A(uParam2);
				break;
			
			case 1:
				unk_0x334F1DD67B2EC86A(sParam1);
				break;
			
			case 2:
				unk_0xB7B15F3C9DD17B22(sParam1);
				break;
			
			case 3:
				unk_0x1D492DC0B64A955F(sParam1);
				break;
			
			case 4:
				unk_0xFD32699B58C2E7EF(uParam2, sParam1);
				break;
			
			case 5:
				unk_0x8E7D27D1F47D1D08(sParam1);
				break;
			
			case 6:
				unk_0x6279F6030B6B0475();
				break;
			
			case 7:
				unk_0x2009DF0140702794(uParam2);
				break;
			
			case 8:
				unk_0x000ED7BEBF44F5EA(uParam2, unk_0xB03A1684359C50A1(iParam0, 26));
				break;
			
			case 9:
				unk_0xDB38C3D40ACF4B3D();
				break;
			
			default:
				break;
		}
	}
}

void func_292(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 48)
	{
		func_206(iVar0, bParam0);
		iVar0++;
	}
}

