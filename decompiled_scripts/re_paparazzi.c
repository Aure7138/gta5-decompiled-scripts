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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	struct<3> Local_42 = { 0, 0, 0 } ;
	float fLocal_45 = 0f;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	struct<3> Local_49 = { 0, 0, 0 } ;
	struct<3> Local_52 = { 0, 0, 0 } ;
	struct<3> Local_55 = { 0, 0, 0 } ;
	float fLocal_58 = 0f;
	struct<3> Local_59 = { 0, 0, 0 } ;
	struct<3> Local_62 = { 0, 0, 0 } ;
	struct<3> Local_65 = { 0, 0, 0 } ;
	int iLocal_68 = 0;
	bool bLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	struct<6> Local_74 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	struct<3> Local_86 = { 0, 0, 0 } ;
	float fLocal_89 = 0f;
	int iLocal_90 = 0;
	struct<3> Local_91 = { 0, 0, 0 } ;
	float fLocal_94 = 0f;
	int iLocal_95 = 0;
	var uLocal_96 = 15;
	var uLocal_97 = 0;
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
	var uLocal_129 = 1;
	struct<18> Local_130[4];
	struct<18> Local_203[8];
	int iLocal_348 = 0;
	int iLocal_349 = 0;
	int iLocal_350 = 0;
	int iLocal_351 = 0;
	int iLocal_352 = 0;
	int iLocal_353 = 0;
	int iLocal_354 = 0;
	int iLocal_355 = 0;
	int iLocal_356 = 0;
	int iLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	bool bLocal_367 = 0;
	int iLocal_368 = 0;
	int iLocal_369 = 0;
	char* sLocal_370 = NULL;
	char[] cLocal_371[8] = 0;
	char* sLocal_372 = NULL;
	char* sLocal_373 = NULL;
	int iLocal_374[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_384 = 0;
	int iLocal_385[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<10> Local_394[16];
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	int iLocal_559[3] = { 0, 0, 0 };
	int iLocal_563 = 0;
	int iLocal_564 = 0;
	int iLocal_565 = 0;
	int iLocal_566 = 0;
	int iLocal_567 = 0;
	float fLocal_568 = 0f;
	float fLocal_569 = 0f;
	int iLocal_570[2] = { 0, 0 };
	float fLocal_573 = 0f;
	struct<3> Local_574 = { 0, 0, 0 } ;
	struct<3> Local_577 = { 0, 0, 0 } ;
	struct<3> Local_580 = { 0, 0, 0 } ;
	struct<3> Local_583 = { 0, 0, 0 } ;
	struct<3> Local_586 = { 0, 0, 0 } ;
	struct<3> Local_589 = { 0, 0, 0 } ;
	struct<3> Local_592 = { 0, 0, 0 } ;
	struct<3> Local_595[4];
	float fLocal_608[4] = { 0f, 0f, 0f, 0f };
	int iLocal_613 = 0;
	int iLocal_614 = 0;
	int iLocal_615 = 0;
	int iLocal_616 = 0;
	int iLocal_617 = 0;
	int iLocal_618 = 0;
	var uLocal_619 = 0;
	int iLocal_620 = 0;
	int iLocal_621 = 0;
	int iLocal_622 = 0;
	int iLocal_623 = 0;
	var uLocal_624 = 0;
	char* sLocal_625[3] = { NULL, NULL, NULL };
	int iLocal_629 = 0;
	char* sLocal_630 = NULL;
	struct<3> Local_631 = { 0, 0, 0 } ;
	struct<3> Local_634 = { 0, 0, 0 } ;
	float fLocal_637 = 0f;
	struct<3> Local_638 = { 0, 0, 0 } ;
	struct<3> Local_641 = { 0, 0, 0 } ;
	float fLocal_644 = 0f;
	struct<3> Local_645 = { 0, 0, 0 } ;
	struct<3> Local_648 = { 0, 0, 0 } ;
	float fLocal_651 = 0f;
	struct<3> Local_652 = { 0, 0, 0 } ;
	struct<3> Local_655 = { 0, 0, 0 } ;
	int iLocal_658 = 0;
	int iLocal_659 = 0;
	float fLocal_660 = 0f;
	int iLocal_661 = 0;
	int iLocal_662 = 0;
	int iLocal_663 = 0;
	float fLocal_664 = 0f;
	int iLocal_665 = 0;
	int iLocal_666 = 0;
	bool bLocal_667 = 0;
	bool bLocal_668 = 0;
	int iLocal_669 = 0;
	int iLocal_670 = 0;
	int iLocal_671 = 0;
	int iLocal_672 = 0;
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
	iLocal_17 = 3;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	fLocal_45 = -1f;
	Local_52 = { 226.6825f, 681.0297f, 188.4987f };
	Local_55 = { 231.8002f, 672.5261f, 188.9459f };
	fLocal_58 = 32.0905f;
	StringCopy(&Local_74, "", 24);
	Local_86 = { 259.4603f, 125.8718f, 100.9754f };
	fLocal_89 = 283.0367f;
	Local_91 = { 245.1998f, 76.8231f, 90.7069f };
	fLocal_94 = -18.4743f;
	cLocal_371 = "REPAPAU";
	sLocal_372 = "random@escape_paparazzi@standing@";
	sLocal_373 = "random@escape_paparazzi@incar@";
	iLocal_564 = 4000;
	fLocal_568 = 0f;
	fLocal_569 = 0f;
	fLocal_573 = 0f;
	Local_574 = { 272.6356f, 155.5618f, 103.3306f };
	Local_577 = { 247.5795f, 88.7094f, 92.9859f };
	Local_580 = { 259.0348f, 114.0369f, 98.9984f };
	Local_583 = { 255.4971f, 116.8744f, 99.8162f };
	Local_586 = { 266.8217f, 139.7698f, 103.2269f };
	Local_589 = { 270.0174f, 139.1181f, 103.2195f };
	Local_592 = { 265.4954f, 144.6143f, 103.3326f };
	sLocal_630 = "left_";
	Local_631 = { 261.9341f, 126.2429f, 95.15405f };
	Local_634 = { 270.6759f, 152.4763f, 109.2356f };
	fLocal_637 = 16f;
	Local_638 = { 261.9341f, 126.2429f, 107.6541f };
	Local_641 = { 248.354f, 87.01792f, 92.389f };
	fLocal_644 = 16f;
	Local_645 = { 256.6779f, 126.573f, 99.54784f };
	Local_648 = { 266.4471f, 123.412f, 105.6728f };
	fLocal_651 = 5.75f;
	Local_652 = { 260.242f, 127.423f, 101.65f };
	Local_655 = { 0f, 0f, -20f };
	Local_49 = { ScriptParam_0.f_1[0 /*3*/] };
	if (unk_0x7547D7CF93115D6D(11))
	{
		func_267();
	}
	func_266(&uLocal_96, 3);
	if (!Global_3)
	{
		if (func_224(Local_49, -1, 0, 0, 0))
		{
			func_221(-1);
		}
		else
		{
			unk_0x883793591E631A3B();
		}
	}
	uLocal_364 = unk_0x92832F671263F8E0(Vector(93.3633f, 82.5239f, 276.3459f) + Vector(10f, 10f, 10f), Vector(93.3633f, 82.5239f, 276.3459f) - Vector(10f, 10f, 10f), 0, 1, 1, 1);
	uLocal_365 = unk_0x92832F671263F8E0(Vector(188.5935f, 675.8706f, 227.8598f) + Vector(4f, 4f, 4f), Vector(188.5935f, 675.8706f, 227.8598f) - Vector(4f, 4f, 4f), 0, 1, 1, 1);
	uLocal_366 = unk_0x92832F671263F8E0(Vector(93.8361f, 92.1704f, 246.1673f) + Vector(6f, 6f, 6f), Vector(93.8361f, 92.1704f, 246.1673f) - Vector(6f, 6f, 6f), 0, 1, 1, 1);
	if (Global_3)
	{
		unk_0x4BCBC9058A5CECE1(246.1673f, 92.1704f, 93.8361f, 6f, 1, 0, 0, 0);
	}
	unk_0xC198E0954F22A27D(Vector(93.8361f, 92.1704f, 246.1673f) + Vector(6f, 6f, 6f), Vector(93.8361f, 92.1704f, 246.1673f) - Vector(6f, 6f, 6f), 0, 1);
	unk_0xF81DFFDCEDAA4951("WORLD_VEHICLE_DRIVE_SOLO", 0);
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_218(&uLocal_96);
		if (!func_217())
		{
			if (func_216())
			{
				func_267();
			}
		}
		unk_0xC0B91B09CAEBF5AE("RE_EP", 0);
		iVar0 = 0;
		while (iVar0 < Local_130.f_0)
		{
			if (unk_0xFD68187442384158(Local_130[iVar0 /*18*/]) && !unk_0xE5D56342B0FF1D0D(Local_130[iVar0 /*18*/]))
			{
				Local_130[iVar0 /*18*/].f_8 = { unk_0xBF1B13057E5119A4(Local_130[iVar0 /*18*/], 1) };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < Local_203.f_0)
		{
			if (unk_0xFD68187442384158(Local_203[iVar0 /*18*/]) && !unk_0xE5D56342B0FF1D0D(Local_203[iVar0 /*18*/]))
			{
				Local_203[iVar0 /*18*/].f_6 = { unk_0xBF1B13057E5119A4(Local_203[iVar0 /*18*/], 1) };
			}
			iVar0++;
		}
		if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()) && !unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
		{
			Local_59 = { unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1) };
		}
		if (!unk_0x9F94F2CFDCA78C55(iLocal_85))
		{
			Local_62 = { unk_0xBF1B13057E5119A4(iLocal_85, 1) };
		}
		if (unk_0xFD68187442384158(iLocal_90) && !unk_0xE5D56342B0FF1D0D(iLocal_90))
		{
			Local_65 = { unk_0xBF1B13057E5119A4(iLocal_90, 1) };
		}
		if (!func_217())
		{
			if (unk_0x3BCCCFB165E15A65())
			{
				switch (iLocal_368)
				{
					case 0:
						if (func_207())
						{
							func_197();
							iLocal_368++;
						}
						else if (func_185())
						{
							func_267();
						}
						break;
					
					case 1:
						if ((func_184() || unk_0x89D8D467C3C356CB(unk_0xAF65E5A58BE87D95()) > 0) || !unk_0xCA8794CE207FC6D5(iLocal_90, 0))
						{
							if (!Global_3 && !bLocal_69)
							{
								func_183();
								func_267();
							}
						}
						else if (unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), 281.0074f, 192.4805f, 58.08817f, 228.8291f, 50.88667f, 111.6104f, 82.75f, 0, 1, 0))
						{
							func_174(1);
							uLocal_359 = func_173(iLocal_85, 0, 145);
							func_172("MAG_2_ESCAPE_PAP_GET_CAR");
							func_171(0);
						}
						break;
				}
			}
			else
			{
				func_267();
			}
		}
		else
		{
			unk_0x34D399ACBC6AA213(unk_0xAF65E5A58BE87D95());
			switch (iLocal_46)
			{
				case 0:
					func_168();
					break;
				
				case 1:
					func_165();
					break;
				
				case 2:
					func_144();
					break;
				
				case 3:
					func_133();
					break;
				
				case 4:
					func_104();
					break;
				
				case 10:
					func_267();
					break;
				
				case 5:
					func_103();
					break;
				
				case 6:
					func_100(sLocal_370);
					break;
				
				case 7:
					func_99();
					break;
				
				case 9:
					break;
				
				case 8:
					if (func_98())
					{
						if (unk_0xFD68187442384158(iLocal_85))
						{
							unk_0x8019BB3BA236A900(&iLocal_85);
						}
						func_74();
					}
					break;
				
				case 11:
					func_70();
					break;
			}
			if (!unk_0x594EB70937EC1486(unk_0x507DA4994C3D8EBD(), Local_62, 210f, 210f, 210f, 0, 1, 0))
			{
				func_183();
				func_267();
			}
			if (((iLocal_46 != 5 && iLocal_46 != 6) && iLocal_46 != 10) && iLocal_46 != 7)
			{
				if (!Global_3 && !bLocal_69)
				{
					if (func_67(iLocal_85, 1, 1) || func_66())
					{
						if (iLocal_46 > 0)
						{
							func_171(5);
						}
						else
						{
							func_183();
							func_171(10);
						}
					}
					if (((iLocal_46 != 5 && iLocal_46 != 10) && iLocal_46 != 0) && iLocal_46 != 7)
					{
						if (func_62())
						{
							func_171(6);
						}
					}
				}
			}
		}
		func_25();
		if (iLocal_46 <= 0)
		{
			iVar1 = func_24();
			if (iVar1 != -1 && (iLocal_73 || func_19() != 0))
			{
				if ((!unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), 243.6443f, 123.7193f, 97.59898f, 262.4353f, 116.8746f, 107.4762f, 32.25f, 0, 1, 0) && (unk_0xF976C624234A4AA8() - iLocal_563) > 5000) && !unk_0x9F94F2CFDCA78C55(Local_203[iVar1 /*18*/]))
				{
					if (unk_0xB7A628320EFF8E47(unk_0xBF1B13057E5119A4(Local_203[iVar1 /*18*/], 1), Local_59) < (30.5f * 30.5f) && unk_0xB7A628320EFF8E47(Local_62, Local_59) > (22.5f * 22.5f))
					{
						if (func_217())
						{
							if (Local_394[4 /*10*/] != Local_203[iVar1 /*18*/])
							{
								func_18(&Local_394, 4);
								func_17(&Local_394, 4, Local_203[iVar1 /*18*/], "PAPARAZZO", 0, 1);
							}
							else if (!iLocal_662)
							{
								if (func_5(&Local_394, cLocal_371, "REPAP_CALL1", 1, 0, 0, 0))
								{
									iLocal_563 = unk_0xF976C624234A4AA8();
									iLocal_662 = 1;
								}
							}
							else if (func_5(&Local_394, cLocal_371, "REPAP_CHAT", 1, 0, 0, 0))
							{
								iLocal_563 = unk_0xF976C624234A4AA8();
							}
						}
						else
						{
							StringCopy(&cVar2, "REPAP_AZAA_0", 24);
							StringIntConCat(&cVar2, unk_0x4D3E68F73B727E49(1, 13), 24);
							func_3(Local_203[iVar1 /*18*/], &cVar2, "PAPARAZZO", 24);
							iLocal_563 = unk_0xF976C624234A4AA8();
						}
					}
				}
			}
		}
		if (iLocal_46 <= 1)
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
	
	if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 1))
	{
		iVar0 = unk_0x96FD444E235E7EFB(unk_0x507DA4994C3D8EBD());
		if (unk_0xCA8794CE207FC6D5(iVar0, 0))
		{
			iVar1 = unk_0xE634CB9EE7094537(iVar0, 0);
			if (!unk_0x9F94F2CFDCA78C55(iVar1))
			{
				if (iVar1 != unk_0x507DA4994C3D8EBD())
				{
					if (unk_0x73E2404DC70203CD(iVar1))
					{
						if (!unk_0x6E7B0D66F3838319(iVar1, unk_0x507DA4994C3D8EBD()))
						{
							unk_0x8E759206778E571F(iVar1, unk_0x507DA4994C3D8EBD(), 2000, 2048, 2);
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
	while (iVar0 < Local_203.f_0)
	{
		if (unk_0xFD68187442384158(Local_203[iVar0 /*18*/]))
		{
			if (unk_0x5D422B4764FA2ACA(Local_203[iVar0 /*18*/]) < Local_203[iVar0 /*18*/].f_17)
			{
				if (unk_0x6255AE2591FE7603(Local_203[iVar0 /*18*/], unk_0x507DA4994C3D8EBD(), 1))
				{
					iLocal_385[iVar0] = (iLocal_385[iVar0] + (Local_203[iVar0 /*18*/].f_17 - unk_0x5D422B4764FA2ACA(Local_203[iVar0 /*18*/])));
					iLocal_81 = (iLocal_81 + (Local_203[iVar0 /*18*/].f_17 - unk_0x5D422B4764FA2ACA(Local_203[iVar0 /*18*/])));
					unk_0x7CEA616AE5D86DF7(Local_203[iVar0 /*18*/]);
					if (iLocal_385[iVar0] > iLocal_384)
					{
						iLocal_384 = iLocal_385[iVar0];
					}
				}
			}
			Local_203[iVar0 /*18*/].f_17 = unk_0x5D422B4764FA2ACA(Local_203[iVar0 /*18*/]);
		}
		iVar0++;
	}
}

void func_3(var uParam0, char[4] cParam1, char* sParam2, int iParam3)
{
	unk_0xD5197208E9370D3D(uParam0, cParam1, sParam2, func_4(iParam3), 0);
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
	Global_15699 = 0;
	Global_15701 = 0;
	Global_15706 = 0;
	Global_16683 = 0;
	Global_16685 = 0;
	Global_16689 = 0;
	Global_2621441 = 0;
	return func_6(sParam2, iParam3, 0);
}

int func_6(char* sParam0, int iParam1, bool bParam2)
{
	Global_15693 = 0;
	if (Global_15692 == 0 || Global_15694 == 2)
	{
		if (Global_15692 != 0)
		{
			if (iParam1 > Global_15694)
			{
				if (Global_15699 == 0)
				{
					unk_0xD858EC6FECDB4B3F(0);
					Global_14393.f_1 = 3;
					Global_15692 = 0;
					Global_15693 = 1;
					Global_15745 = 0;
					Global_15688 = 0;
					Global_15689 = 0;
					Global_15703 = 0;
					Global_15702 = 0;
					Global_14392 = 0;
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
		if (unk_0xF611D1BB58990143())
		{
			return 0;
		}
		if (func_14(8, -1))
		{
			return 0;
		}
		Global_15768 = { Global_15762 };
		func_13();
		Global_14981 = { Global_15146 };
		Global_15698 = Global_15699;
		Global_15705 = Global_15706;
		Global_2621442 = Global_2621441;
		Global_15707 = { Global_15723 };
		Global_15700 = Global_15701;
		Global_16682 = Global_16683;
		Global_16690 = { Global_16696 };
		Global_16684 = Global_16685;
		Global_16686 = Global_16687;
		Global_16688 = Global_16689;
		Global_15311.f_370 = Global_16681;
		Global_15311.f_368 = Global_16679;
		Global_15311.f_369 = Global_16680;
		Global_15688 = Global_15689;
		if (Global_15698)
		{
			unk_0xCD27BF29FB9012E2(&Global_2263, 20);
			unk_0xCD27BF29FB9012E2(&Global_2264, 17);
			unk_0xCD27BF29FB9012E2(&Global_2265, 0);
			if (bParam2)
			{
				func_11();
				if (Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14393.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14359 == 1)
			{
				return 0;
			}
			if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
			{
				if (unk_0x6A5400407F3E1292(unk_0x507DA4994C3D8EBD()))
				{
					return 0;
				}
				if (func_10())
				{
					return 0;
				}
				if (unk_0x485BBA43A75711BE(unk_0x507DA4994C3D8EBD()))
				{
					return 0;
				}
				if (unk_0x1983DA3C921BB046(unk_0x507DA4994C3D8EBD()))
				{
					return 0;
				}
				if (unk_0xB42AA529845BA2A3(unk_0x507DA4994C3D8EBD()))
				{
					return 0;
				}
				if (unk_0xCB79AB67F7DF0E8F(unk_0x507DA4994C3D8EBD(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68067)
				{
					if (unk_0x26FE3F0A2045AA7E(unk_0x507DA4994C3D8EBD()))
					{
						return 0;
					}
					if (unk_0x3AA78AB1897C2B94(unk_0xAF65E5A58BE87D95()))
					{
						return 0;
					}
					if (unk_0xA43F7819FA056045(unk_0x507DA4994C3D8EBD()))
					{
						return 0;
					}
					if (unk_0x5636DF02874259EA(unk_0xAF65E5A58BE87D95()))
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
				switch (Global_14393.f_1)
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
				if (unk_0x61D8FEAF64881CDA(Global_2263, 9))
				{
					return 0;
				}
			}
			func_8();
			Global_15702 = bParam2;
		}
		Global_15694 = iParam1;
		StringCopy(&Global_15311, sParam0, 24);
		Global_14558 = 0;
		func_7();
		return 1;
	}
	if (Global_15692 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15694 || iParam1 == Global_15694)
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
		StringCopy(&(Global_14560[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xD858EC6FECDB4B3F(0);
	Global_15692 = 1;
}

void func_8()
{
	Global_15745 = Global_15744;
	Global_15739 = Global_15740;
	Global_15786 = { Global_15774 };
	Global_15792 = { Global_15780 };
	Global_15747 = Global_15746;
	Global_15816 = { Global_15798 };
	Global_15822 = { Global_15804 };
	Global_15828 = { Global_15810 };
	Global_15834 = { Global_15840 };
	Global_1578 = Global_1579;
	Global_1580 = Global_1581;
	Global_15703 = Global_15704;
	Global_15705 = Global_15706;
	Global_15707 = { Global_15723 };
	Global_15696 = Global_15697;
	Global_16708 = 0;
	Global_15741 = 0;
	Global_15742 = 0;
	unk_0xCD27BF29FB9012E2(&Global_2264, 16);
}

int func_9()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_10()
{
	int iVar0;
	int iVar1;
	
	if (Global_68067)
	{
		iVar0 = 0;
		unk_0xAE0CD3052D6ED1ED(unk_0x507DA4994C3D8EBD(), &iVar1, 1);
		if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0xC0C709777CCE070F() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
	{
		if (unk_0xA7C37587D6D77CA4(unk_0x507DA4994C3D8EBD(), 78, 1))
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
		if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
		{
			if (unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()) == Global_97173.f_29699[0 /*29*/])
			{
				Global_14393 = 0;
			}
			else if (unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()) == Global_97173.f_29699[1 /*29*/])
			{
				Global_14393 = 1;
			}
			else if (unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()) == Global_97173.f_29699[2 /*29*/])
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
		Global_14393 = func_19();
		if (Global_14393 == 145)
		{
			Global_14393 = 3;
		}
		if (Global_68067)
		{
			Global_14393 = 3;
		}
		if (Global_14393 > 3)
		{
			Global_14393 = 3;
		}
	}
}

bool func_12(int iParam0)
{
	return Global_34909 == iParam0;
}

void func_13()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_14981[iVar0 /*10*/] = 0;
		StringCopy(&(Global_14981[iVar0 /*10*/].f_1), "", 24);
		Global_14981[iVar0 /*10*/].f_7 = 0;
		Global_14981[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_14981.f_161 = -99;
	Global_14981.f_162 = { 0f, 0f, 0f };
}

bool func_14(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1327591.f_203[iParam1];
			}
			break;
	}
	return unk_0x61D8FEAF64881CDA(Global_1327591.f_949, iParam0);
}

void func_15()
{
	unk_0xA2A4AD85BA2F7ADD();
	Global_16703 = 0;
	if ((unk_0x49BDC46D7CAD9C63() || Global_14393.f_1 == 9) || Global_14392 == 1)
	{
		unk_0xD858EC6FECDB4B3F(0);
		Global_15692 = 6;
		Global_14393.f_1 = 3;
		return;
	}
	if (unk_0xF611D1BB58990143())
	{
		unk_0xD858EC6FECDB4B3F(1);
		Global_15692 = 6;
		return;
	}
}

void func_16(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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
	if (!Global_68067)
	{
		if (!unk_0x9F94F2CFDCA78C55(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xC9CD9F3D2675F791(iParam2, 0);
			}
			else
			{
				unk_0xC9CD9F3D2675F791(iParam2, 1);
			}
		}
		if (!unk_0x9F94F2CFDCA78C55(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xABDE52C59BE3C61A(iParam2, 0);
			}
			else
			{
				unk_0xABDE52C59BE3C61A(iParam2, 1);
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
	return Global_97173.f_1729.f_539.f_3213;
}

void func_20()
{
	int iVar0;
	
	if (unk_0xFD68187442384158(unk_0x507DA4994C3D8EBD()))
	{
		if (func_23(Global_97173.f_1729.f_539.f_3213) != unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()))
		{
			iVar0 = func_22(unk_0x507DA4994C3D8EBD());
			if (func_21(iVar0) && (!func_12(14) || Global_96126))
			{
				if (Global_97173.f_1729.f_539.f_3213 != iVar0 && func_21(Global_97173.f_1729.f_539.f_3213))
				{
					Global_97173.f_1729.f_539.f_3214 = Global_97173.f_1729.f_539.f_3213;
				}
				Global_97173.f_1729.f_539.f_3215 = iVar0;
				Global_97173.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97173.f_1729.f_539.f_3213 != 145)
			{
				Global_97173.f_1729.f_539.f_3215 = Global_97173.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97173.f_1729.f_539.f_3213 = 145;
}

bool func_21(int iParam0)
{
	return iParam0 < 3;
}

int func_22(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFD68187442384158(uParam0))
	{
		iVar1 = unk_0x26EA758C2A691D06(iParam0);
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
		return Global_97173.f_29699[iParam0 /*29*/];
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
	while (iVar0 < Local_203.f_0)
	{
		if ((unk_0xFD68187442384158(Local_203[iVar0 /*18*/]) && !unk_0x9F94F2CFDCA78C55(Local_203[iVar0 /*18*/])) && !unk_0x9F94F2CFDCA78C55(iLocal_85))
		{
			if (unk_0xB7A628320EFF8E47(Local_59, Local_203[iVar0 /*18*/].f_6) < fVar2)
			{
				fVar2 = unk_0xB7A628320EFF8E47(Local_62, Local_203[iVar0 /*18*/].f_6);
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
	
	switch (iLocal_48)
	{
		case 0:
			iLocal_615 = 0;
			unk_0xCBE6AC5010E5CE5C(joaat("a_m_y_genstreet_02"));
			unk_0xCBE6AC5010E5CE5C(joaat("prop_pap_camera_01"));
			unk_0xCBE6AC5010E5CE5C(joaat("cavalcade2"));
			unk_0xCBE6AC5010E5CE5C(joaat("vader"));
			unk_0x395C5D98343F0040(sLocal_372);
			unk_0x395C5D98343F0040("random@paparazzi@pap_anims");
			if (((((unk_0xD291857D0C9C7FEC(joaat("a_m_y_genstreet_02")) && unk_0xD291857D0C9C7FEC(joaat("prop_pap_camera_01"))) && unk_0xD291857D0C9C7FEC(joaat("cavalcade2"))) && unk_0xD291857D0C9C7FEC(joaat("vader"))) && unk_0xCE40391AB65FE305(sLocal_372)) && unk_0xCE40391AB65FE305("random@paparazzi@pap_anims"))
			{
				Local_595[0 /*3*/] = { 266.6049f, 157.7677f, 104.2417f };
				Local_595[1 /*3*/] = { 280.2455f, 152.1227f, 103.7096f };
				Local_595[2 /*3*/] = { 223.2588f, 50.6347f, 83.6598f };
				Local_595[3 /*3*/] = { 244.1302f, 37.4709f, 83.4804f };
				fLocal_608[0] = -111.1625f;
				fLocal_608[1] = 68.857f;
				fLocal_608[2] = -108.2056f;
				fLocal_608[3] = 50.8189f;
				iVar0 = 0;
				while (iVar0 < Local_130.f_0)
				{
					func_61(iVar0);
					func_59(func_60(iVar0));
					func_59(func_58(iVar0));
					iVar0++;
				}
				iLocal_613 = 0;
				func_57(func_60(1), 274.9306f, 147.164f, 103.3794f, 2.2109f);
				func_57(func_58(1), 275.6894f, 148.1107f, 103.3723f, 117.9416f);
				func_57(func_58(2), Local_595[1 /*3*/], fLocal_608[1]);
				func_57(func_58(3), Local_595[1 /*3*/], fLocal_608[1]);
				func_56(0, Local_595[0 /*3*/], fLocal_608[0], 1);
				func_56(1, Local_595[1 /*3*/], fLocal_608[1], 0);
				unk_0xF85858E5CBF4D9F0(func_55(0, 1), 265.408f, 151.2875f, 103.5673f, 1, 0, 0, 1);
				unk_0x248DC16118AE5035(func_55(0, 1), 217.1033f);
				unk_0xF85858E5CBF4D9F0(func_55(2, 1), 245.9477f, 72.661f, 89.1067f, 1, 0, 0, 1);
				unk_0x248DC16118AE5035(func_55(2, 1), 38.6283f);
				unk_0xF85858E5CBF4D9F0(func_55(3, 1), 244.1872f, 73.3336f, 89.0917f, 1, 0, 0, 1);
				unk_0x248DC16118AE5035(func_55(3, 1), 272.9875f);
				unk_0xEC0A546609840086(func_55(0, 1), "random@paparazzi@pap_anims", "base_pap", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0xEC0A546609840086(func_55(1, 0), "random@paparazzi@pap_anims", "pap_idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0xEC0A546609840086(func_55(1, 1), "random@paparazzi@pap_anims", "pap_idle_b", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0xEC0A546609840086(func_55(2, 1), "random@paparazzi@pap_anims", "pap_idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0xEC0A546609840086(func_55(3, 1), "random@paparazzi@pap_anims", "pap_idle_b", 8f, -8f, -1, 1, 0, 0, 0, 0);
				iLocal_48 = 1;
			}
			break;
		
		case 1:
			func_53(func_58(0), 265.408f, 151.2875f, 103.5673f, 217.1033f, "random@paparazzi@pap_anims", "base_pap", 0);
			func_53(func_60(1), 274.9306f, 147.164f, 103.3794f, 2.2109f, "random@paparazzi@pap_anims", "pap_idle_a", "base_pap");
			func_53(func_58(1), 277.1364f, 148.4023f, 103.3493f, 104.6318f, "random@paparazzi@pap_anims", "pap_idle_b", 0);
			func_53(func_58(2), 245.9477f, 72.661f, 89.1067f, 38.6283f, "random@paparazzi@pap_anims", "pap_idle_b", 0);
			func_53(func_58(3), 244.1872f, 73.3336f, 89.0917f, 272.9875f, "random@paparazzi@pap_anims", "pap_idle_a", 0);
			break;
		
		case 2:
			if (unk_0xFD68187442384158(Local_203[2 /*18*/].f_2))
			{
				if (!unk_0xDAB2315B565377E3(Local_203[2 /*18*/].f_2))
				{
					unk_0x07E0AE075425AA06(Local_203[2 /*18*/].f_2, 1);
				}
			}
			switch (iLocal_615)
			{
				case 0:
					if (!unk_0x9F94F2CFDCA78C55(func_55(1, 0)))
					{
						unk_0xAC57FBF981AB03F4(func_55(1, 0));
					}
					if (!unk_0x9F94F2CFDCA78C55(func_55(1, 1)))
					{
						unk_0xAC57FBF981AB03F4(func_55(1, 1));
					}
					if (!unk_0xFD68187442384158(Local_130[2 /*18*/]))
					{
						func_56(2, Local_595[2 /*3*/], fLocal_608[2], 0);
						if (unk_0xCA8794CE207FC6D5(Local_130[2 /*18*/], 0))
						{
							func_57(func_60(2), unk_0xBF1B13057E5119A4(Local_130[2 /*18*/], 1), 0f);
							unk_0x11460EBE0487B44F(func_55(2, 0), Local_130[2 /*18*/], -1);
						}
					}
					if (!unk_0xFD68187442384158(Local_130[3 /*18*/]))
					{
						func_56(3, Local_595[3 /*3*/], fLocal_608[3], 0);
					}
					if (!unk_0x9F94F2CFDCA78C55(func_55(2, 1)))
					{
						unk_0x3F07E364A21EBC20(func_55(2, 1), Local_580, 2f, -1, 0.25f, 0, 1193033728);
					}
					if (!unk_0x9F94F2CFDCA78C55(func_55(3, 1)))
					{
						unk_0x3F07E364A21EBC20(func_55(3, 1), Local_583, 2f, -1, 0.25f, 0, 1193033728);
					}
					if (!unk_0xFD68187442384158(func_55(3, 0)))
					{
						func_57(func_60(3), 253.8376f, 85.4544f, 92.8933f, 85.1702f);
					}
					if (Global_3 || bLocal_69)
					{
						if (!unk_0x9F94F2CFDCA78C55(func_55(1, 0)))
						{
							unk_0x3F07E364A21EBC20(func_55(1, 0), Local_586, 2f, 20000, 0.25f, 0, 1193033728);
						}
						if (!unk_0x9F94F2CFDCA78C55(func_55(1, 1)))
						{
							unk_0x3F07E364A21EBC20(func_55(1, 1), Local_589, 2f, 20000, 0.25f, 0, 1193033728);
						}
						if (!unk_0x9F94F2CFDCA78C55(func_55(0, 1)))
						{
							unk_0x3F07E364A21EBC20(func_55(0, 1), Local_592, 2f, 20000, 0.25f, 0, 1193033728);
						}
					}
					unk_0x5AE11BC36633DE4E(0);
					iVar1 = 0;
					while (iVar1 < Local_203.f_0)
					{
						if (unk_0xFD68187442384158(Local_203[iVar1 /*18*/]))
						{
							unk_0x182B7266FFDC76F3(Local_203[iVar1 /*18*/], "MAG_2_PAPARAZZI_GROUP", 0);
						}
						iVar1++;
					}
					iVar1 = 0;
					while (iVar1 < Local_130.f_0)
					{
						if (unk_0xFD68187442384158(Local_130[iVar1 /*18*/]))
						{
							unk_0x182B7266FFDC76F3(Local_130[iVar1 /*18*/], "MAG_2_PAPARAZZI_GROUP", 0);
						}
						iVar1++;
					}
					iLocal_615++;
					break;
				
				case 1:
					func_49();
					if ((unk_0xCA8794CE207FC6D5(Local_130[0 /*18*/], 0) && !unk_0x9F94F2CFDCA78C55(func_55(0, 0))) && !unk_0x9F94F2CFDCA78C55(func_55(0, 1)))
					{
						if (!iLocal_570[1])
						{
							iLocal_570[1] = 1;
							unk_0x5E44C1186E137E21(func_55(0, 0), Local_130[0 /*18*/], Local_574, 10f, 0, joaat("cavalcade2"), 786469, 2f, 10f);
						}
					}
					if ((unk_0xCA8794CE207FC6D5(Local_130[2 /*18*/], 0) && !unk_0x9F94F2CFDCA78C55(func_55(2, 0))) && !unk_0x9F94F2CFDCA78C55(func_55(2, 1)))
					{
						if (!iLocal_570[0])
						{
							unk_0x5E44C1186E137E21(func_55(2, 0), Local_130[2 /*18*/], Local_577, 10f, 0, joaat("cavalcade2"), 786469, 2f, 10f);
							iLocal_570[0] = 1;
						}
					}
					if (unk_0xFD68187442384158(iLocal_85) && !unk_0x9F94F2CFDCA78C55(iLocal_85))
					{
						func_46(iLocal_85, 6);
						if (Global_3 || bLocal_69)
						{
							if (!unk_0x9F94F2CFDCA78C55(func_55(1, 0)))
							{
								if (unk_0x594EB70937EC1486(func_55(1, 0), Local_586, Global_21, 0, 1, 0))
								{
									func_45(iLocal_85, func_60(1));
								}
							}
							if (!unk_0x9F94F2CFDCA78C55(func_55(1, 1)))
							{
								if (unk_0x594EB70937EC1486(func_55(1, 1), Local_589, Global_21, 0, 1, 0))
								{
									func_45(iLocal_85, func_58(1));
								}
							}
							if (!unk_0x9F94F2CFDCA78C55(func_55(0, 1)))
							{
								if (unk_0x594EB70937EC1486(func_55(0, 1), Local_589, Global_21, 0, 1, 0))
								{
									func_45(iLocal_85, func_58(0));
								}
							}
						}
						else
						{
							func_46(iLocal_85, func_60(1));
							func_46(iLocal_85, func_58(1));
							if (unk_0xC9D9444186B5A374() > 1000)
							{
								func_46(iLocal_85, func_60(1));
							}
						}
					}
					if (unk_0xB7A628320EFF8E47(unk_0xBF1B13057E5119A4(iLocal_90, 1), Local_86) < 9f)
					{
						if (unk_0x594EB70937EC1486(func_55(2, 1), Local_580, Global_21, 0, 1, 0))
						{
							func_45(iLocal_85, func_58(2));
						}
						if (unk_0x594EB70937EC1486(func_55(3, 1), Local_583, Global_21, 0, 1, 0))
						{
							func_45(iLocal_85, func_58(3));
						}
						if (unk_0x594EB70937EC1486(func_55(0, 1), Local_583, Global_21, 0, 1, 0))
						{
							func_45(iLocal_85, func_58(0));
						}
					}
					else
					{
						if (!unk_0x61D8FEAF64881CDA(iLocal_618, 3))
						{
							unk_0xAC57FBF981AB03F4(Local_203[func_58(3) /*18*/]);
							unk_0x3DBE2A7AF9E71C82(&iLocal_618, 3);
						}
						if (!unk_0x61D8FEAF64881CDA(iLocal_618, 2))
						{
							unk_0xAC57FBF981AB03F4(Local_203[func_58(2) /*18*/]);
							unk_0x3DBE2A7AF9E71C82(&iLocal_618, 2);
						}
						if (!unk_0x61D8FEAF64881CDA(iLocal_618, 0))
						{
							unk_0xAC57FBF981AB03F4(Local_203[func_58(0) /*18*/]);
							unk_0x3DBE2A7AF9E71C82(&iLocal_618, 0);
						}
						if (Global_3 || bLocal_69)
						{
							func_45(iLocal_85, func_58(3));
						}
						else
						{
							func_46(iLocal_85, func_58(3));
						}
						func_46(iLocal_85, func_58(2));
						func_46(iLocal_85, func_58(0));
					}
					break;
			}
			func_44();
			break;
		
		case 3:
			func_49();
			if (unk_0xCA8794CE207FC6D5(iLocal_90, 0))
			{
				if (unk_0x11F6A4A45943670E(iLocal_90) < 1f)
				{
					fLocal_573 = (fLocal_573 + unk_0x94B2D2AEAA1D886E());
				}
				else if (fLocal_573 > 0f)
				{
					fLocal_573 = 0f;
				}
			}
			iVar0 = 0;
			while (iVar0 < Local_130.f_0)
			{
				if (unk_0xFD68187442384158(Local_130[iVar0 /*18*/]) && iLocal_46 != 6)
				{
					if ((iVar0 < 2 && ((iVar0 != iLocal_613 || !unk_0xFD68187442384158(Local_130[0 /*18*/])) || !unk_0xFD68187442384158(Local_130[1 /*18*/]))) && (unk_0xF976C624234A4AA8() - iLocal_614) > 500)
					{
						if (unk_0xB7A628320EFF8E47(Local_59, Local_86) > 400f)
						{
							if (unk_0xB7A628320EFF8E47(Local_59, Local_86) < 62500f || (unk_0xF976C624234A4AA8() - iLocal_369) < 30000)
							{
								func_40(Local_130[iVar0 /*18*/], iLocal_90, &(Local_130[iVar0 /*18*/].f_5), &(Local_130[iVar0 /*18*/].f_15), &(Local_130[iVar0 /*18*/].f_11), &(Local_130[iVar0 /*18*/].f_14), &(Local_130[iVar0 /*18*/].f_16), Local_130[iVar0 /*18*/].f_2, 800, 50f);
								iLocal_613 = iVar0;
								iLocal_614 = unk_0xF976C624234A4AA8();
							}
						}
					}
					iVar2 = func_60(iVar0);
					if (!unk_0x9F94F2CFDCA78C55(Local_203[iVar2 /*18*/]))
					{
						iVar3 = func_58(iVar0);
					}
					else
					{
						iVar3 = func_60(iVar0);
					}
					switch (Local_130[iVar0 /*18*/].f_17)
					{
						case 0:
							if (unk_0xCA8794CE207FC6D5(Local_130[iVar0 /*18*/], 0))
							{
								if (!unk_0x53170344050F2301(unk_0x507DA4994C3D8EBD(), Local_130[iVar0 /*18*/], 0))
								{
									if (!unk_0x9F94F2CFDCA78C55(Local_203[iVar2 /*18*/]))
									{
										if (!unk_0x53170344050F2301(Local_203[iVar2 /*18*/], Local_130[iVar0 /*18*/], 0))
										{
											if (unk_0xEC043AB2FEE0E94F(Local_203[iVar2 /*18*/], -1794415470) != 1 && unk_0xC51FBEBD87CFD69C(Local_130[iVar0 /*18*/], -1))
											{
												unk_0x36B42DB2912118E2(Local_203[iVar2 /*18*/], Local_130[iVar0 /*18*/], -1, -1, 2f, 1, 0);
											}
										}
									}
									if (iVar3 != -1)
									{
										if (!unk_0x9F94F2CFDCA78C55(Local_203[iVar3 /*18*/]))
										{
											if (!unk_0x53170344050F2301(Local_203[iVar3 /*18*/], Local_130[iVar0 /*18*/], 0))
											{
												if (unk_0xEC043AB2FEE0E94F(Local_203[iVar3 /*18*/], -1794415470) != 1 && unk_0xC51FBEBD87CFD69C(Local_130[iVar0 /*18*/], 0))
												{
													unk_0x36B42DB2912118E2(Local_203[iVar3 /*18*/], Local_130[iVar0 /*18*/], -1, 0, 2f, 1, 0);
												}
											}
										}
										if (!unk_0x9F94F2CFDCA78C55(Local_203[iVar2 /*18*/]) && (iVar3 != -1 && !unk_0x9F94F2CFDCA78C55(Local_203[iVar3 /*18*/])))
										{
											if ((unk_0x53170344050F2301(Local_203[iVar2 /*18*/], Local_130[iVar0 /*18*/], 0) && (iVar3 != -1 && unk_0x53170344050F2301(Local_203[iVar3 /*18*/], Local_130[iVar0 /*18*/], 0))) && unk_0xCA8794CE207FC6D5(iLocal_90, 0))
											{
												if (unk_0xEC043AB2FEE0E94F(Local_203[iVar2 /*18*/], -1273030092) != 1 && unk_0xEC043AB2FEE0E94F(Local_203[iVar2 /*18*/], -1817882002) != 1)
												{
													unk_0x3A1E687904400847(Local_203[iVar2 /*18*/], 3, 0);
													unk_0x3A1E687904400847(Local_203[iVar2 /*18*/], 1, 1);
													unk_0x3A1E687904400847(Local_203[iVar2 /*18*/], 2, 0);
													if (iVar0 == 0)
													{
														unk_0xD09813BDAA102212(Local_203[iVar2 /*18*/], Local_130[iVar0 /*18*/], iLocal_90, 10, 50f, 786471, 4f, 10f, 1);
													}
													else if (iVar0 == 1)
													{
														unk_0xD09813BDAA102212(Local_203[iVar2 /*18*/], Local_130[iVar0 /*18*/], iLocal_90, 11, 50f, 786470, 4f, 10f, 1);
													}
													else if (iVar0 == 2)
													{
														unk_0xD09813BDAA102212(Local_203[iVar2 /*18*/], Local_130[iVar0 /*18*/], iLocal_90, 10, 50f, 786471, 4f, 10f, 1);
													}
													else if (iVar0 == 3)
													{
														unk_0xD09813BDAA102212(Local_203[iVar2 /*18*/], Local_130[iVar0 /*18*/], iLocal_90, 11, 50f, 786470, 4f, 10f, 1);
													}
												}
												unk_0x4369A55DCA9625D1(Local_203[iVar2 /*18*/], func_39((3f * unk_0x8FE221761D524CFE(Local_65, Local_130[iVar0 /*18*/].f_8, 1)), 50f, 120f));
											}
										}
									}
									if (fLocal_573 > 3f && unk_0x2A488C176D52CCA5(Local_130[iVar0 /*18*/].f_8, Local_65) < 10f)
									{
										Local_130[iVar0 /*18*/].f_17 = 1;
									}
								}
							}
							else
							{
								if (!unk_0x9F94F2CFDCA78C55(Local_203[iVar2 /*18*/]))
								{
									if (!unk_0x1BA961C8CF14F399(Local_203[iVar2 /*18*/]))
									{
										unk_0xB2B080B88A4144B7(Local_203[iVar2 /*18*/], 2, 0);
										unk_0xA859D289EEB2D72A(Local_203[iVar2 /*18*/], unk_0x507DA4994C3D8EBD(), 300f, 100000, 0, 0);
									}
								}
								if (iVar3 != -1)
								{
									if (!unk_0x9F94F2CFDCA78C55(Local_203[iVar3 /*18*/]))
									{
										if (!unk_0x1BA961C8CF14F399(Local_203[iVar3 /*18*/]))
										{
											unk_0xB2B080B88A4144B7(Local_203[iVar3 /*18*/], 2, 0);
											unk_0xA859D289EEB2D72A(Local_203[iVar3 /*18*/], unk_0x507DA4994C3D8EBD(), 300f, 100000, 0, 0);
										}
									}
								}
							}
							break;
						
						case 1:
							if (unk_0x2A24448FF232F834(Local_203[iVar2 /*18*/], 0))
							{
								unk_0x48367A1F7C9A1041(Local_203[iVar2 /*18*/], 1, 256);
							}
							else
							{
								func_46(iLocal_85, iVar2);
							}
							if (iVar3 != -1)
							{
								if (!unk_0x9F94F2CFDCA78C55(Local_203[iVar3 /*18*/]))
								{
									if (unk_0x2A24448FF232F834(Local_203[iVar3 /*18*/], 0))
									{
										unk_0x48367A1F7C9A1041(Local_203[iVar3 /*18*/], 0, 256);
									}
									else
									{
										func_46(iLocal_85, iVar3);
									}
								}
							}
							if (unk_0xCA8794CE207FC6D5(Local_130[iVar0 /*18*/], 0))
							{
								if (unk_0x2A488C176D52CCA5(Local_130[iVar0 /*18*/].f_8, Local_65) > 15f)
								{
									Local_130[iVar0 /*18*/].f_17 = 0;
								}
							}
							break;
					}
					if ((!unk_0x9F94F2CFDCA78C55(Local_203[iVar2 /*18*/]) && (iVar3 == -1 || !unk_0x9F94F2CFDCA78C55(Local_203[iVar3 /*18*/]))) && unk_0xCA8794CE207FC6D5(Local_130[iVar0 /*18*/], 0))
					{
						iVar4 = 1;
						if (!unk_0x19F2D2C58150C825(Local_203[iVar2 /*18*/]))
						{
							iVar4 = 0;
						}
						if (iVar3 != -1)
						{
							if (!unk_0x19F2D2C58150C825(Local_203[iVar3 /*18*/]))
							{
								iVar4 = 0;
							}
						}
						if (!unk_0x19F2D2C58150C825(Local_130[iVar0 /*18*/]))
						{
							iVar4 = 0;
						}
						if ((iVar4 && unk_0x2A488C176D52CCA5(Local_59, Local_130[iVar0 /*18*/].f_8) > 25f) && unk_0x2A488C176D52CCA5(Local_59, Local_203[iVar0 /*18*/].f_6) > 25f)
						{
							if (!unk_0x53170344050F2301(Local_203[iVar2 /*18*/], Local_130[iVar0 /*18*/], 0))
							{
								unk_0x11460EBE0487B44F(Local_203[iVar2 /*18*/], Local_130[iVar0 /*18*/], -1);
							}
							if (iVar3 != -1)
							{
								if (!unk_0x53170344050F2301(Local_203[iVar3 /*18*/], Local_130[iVar0 /*18*/], 0))
								{
									unk_0x11460EBE0487B44F(Local_203[iVar3 /*18*/], Local_130[iVar0 /*18*/], 0);
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
			if (!iLocal_617)
			{
				iVar0 = 0;
				while (iVar0 < Local_130.f_0)
				{
					iVar5 = func_60(iVar0);
					if (!unk_0x9F94F2CFDCA78C55(Local_203[iVar5 /*18*/]))
					{
						iVar6 = func_58(iVar0);
					}
					else
					{
						iVar6 = func_60(iVar0);
					}
					if (unk_0xCA8794CE207FC6D5(Local_130[iVar0 /*18*/], 0))
					{
						if (!unk_0x9F94F2CFDCA78C55(Local_203[iVar5 /*18*/]))
						{
							if (!unk_0x53170344050F2301(Local_203[iVar5 /*18*/], Local_130[iVar0 /*18*/], 0))
							{
								if (unk_0xEC043AB2FEE0E94F(Local_203[iVar5 /*18*/], -1794415470) != 1)
								{
									unk_0x36B42DB2912118E2(Local_203[iVar5 /*18*/], Local_130[iVar0 /*18*/], -1, -1, 2f, 1, 0);
								}
							}
						}
						if (iVar6 != -1)
						{
							if (!unk_0x9F94F2CFDCA78C55(Local_203[iVar6 /*18*/]))
							{
								if (!unk_0x53170344050F2301(Local_203[iVar6 /*18*/], Local_130[iVar0 /*18*/], 0))
								{
									if (unk_0xEC043AB2FEE0E94F(Local_203[iVar6 /*18*/], -1794415470) != 1)
									{
										unk_0x36B42DB2912118E2(Local_203[iVar6 /*18*/], Local_130[iVar0 /*18*/], -1, 0, 2f, 1, 0);
									}
								}
							}
							if (!unk_0x9F94F2CFDCA78C55(Local_203[iVar5 /*18*/]) && (iVar6 != -1 && !unk_0x9F94F2CFDCA78C55(Local_203[iVar6 /*18*/])))
							{
								if ((unk_0x53170344050F2301(Local_203[iVar5 /*18*/], Local_130[iVar0 /*18*/], 0) && (iVar6 != -1 && unk_0x53170344050F2301(Local_203[iVar6 /*18*/], Local_130[iVar0 /*18*/], 0))) && unk_0xCA8794CE207FC6D5(iLocal_90, 0))
								{
									fVar7 = func_39((70f - (unk_0xBBDA792448DB5A89((unk_0xF976C624234A4AA8() - iLocal_84)) / 50f)), 0f, 70f);
									if (fVar7 <= 1f || (unk_0xF976C624234A4AA8() - iLocal_84) > 4000)
									{
										unk_0x62E1AC14633FFF9D(Local_203[iVar5 /*18*/], fVar7);
										iVar8 = 0;
										while (iVar8 < Local_130.f_0)
										{
											if ((unk_0xCA8794CE207FC6D5(Local_130[iVar8 /*18*/], 0) && !unk_0x9F94F2CFDCA78C55(func_55(iVar8, 0))) && unk_0x53170344050F2301(func_55(iVar8, 0), Local_130[iVar8 /*18*/], 0))
											{
												unk_0xAC57FBF981AB03F4(func_55(iVar8, 0));
												unk_0xD09813BDAA102212(func_55(iVar8, 0), Local_130[iVar8 /*18*/], 0, 5, 10f, 786468, 10f, 10f, 1);
											}
											iVar8++;
										}
										iLocal_617 = 1;
									}
									else if (unk_0xEC043AB2FEE0E94F(Local_203[iVar5 /*18*/], -1273030092) != 1 && unk_0xEC043AB2FEE0E94F(Local_203[iVar5 /*18*/], -1817882002) != 1)
									{
										unk_0x3A1E687904400847(Local_203[iVar5 /*18*/], 3, 0);
										unk_0x3A1E687904400847(Local_203[iVar5 /*18*/], 1, 1);
										unk_0x3A1E687904400847(Local_203[iVar5 /*18*/], 2, 0);
										if (iVar0 == 0)
										{
											unk_0xD09813BDAA102212(Local_203[iVar5 /*18*/], Local_130[iVar0 /*18*/], iLocal_90, 10, fVar7, 786471, 4f, 10f, 1);
										}
										else if (iVar0 == 1)
										{
											unk_0xD09813BDAA102212(Local_203[iVar5 /*18*/], Local_130[iVar0 /*18*/], iLocal_90, 11, fVar7, 786470, 4f, 10f, 1);
										}
										else if (iVar0 == 2)
										{
											unk_0xD09813BDAA102212(Local_203[iVar5 /*18*/], Local_130[iVar0 /*18*/], iLocal_90, 10, fVar7, 786471, 4f, 10f, 1);
										}
										else if (iVar0 == 3)
										{
											unk_0xD09813BDAA102212(Local_203[iVar5 /*18*/], Local_130[iVar0 /*18*/], iLocal_90, 11, fVar7, 786470, 4f, 10f, 1);
										}
									}
								}
							}
						}
					}
					else
					{
						if (!unk_0x9F94F2CFDCA78C55(Local_203[iVar5 /*18*/]))
						{
							if (!unk_0x1BA961C8CF14F399(Local_203[iVar5 /*18*/]))
							{
								unk_0xB2B080B88A4144B7(Local_203[iVar5 /*18*/], 2, 0);
								unk_0xA859D289EEB2D72A(Local_203[iVar5 /*18*/], unk_0x507DA4994C3D8EBD(), 300f, 100000, 0, 0);
							}
						}
						if (iVar6 != -1)
						{
							if (!unk_0x9F94F2CFDCA78C55(Local_203[iVar6 /*18*/]))
							{
								if (!unk_0x1BA961C8CF14F399(Local_203[iVar6 /*18*/]))
								{
									unk_0xB2B080B88A4144B7(Local_203[iVar6 /*18*/], 2, 0);
									unk_0xA859D289EEB2D72A(Local_203[iVar6 /*18*/], unk_0x507DA4994C3D8EBD(), 300f, 100000, 0, 0);
								}
							}
						}
					}
					iVar0++;
				}
			}
			else
			{
				if (func_38(iLocal_616, 10f))
				{
					func_37(iLocal_616);
				}
				iLocal_616++;
				if (iLocal_616 > 3)
				{
					iLocal_616 = 0;
				}
			}
			func_44();
			func_29();
			break;
		
		case 6:
			if (func_38(iLocal_616, 1125515264))
			{
				func_37(iLocal_616);
			}
			iLocal_616++;
			if (iLocal_616 > 3)
			{
				iLocal_616 = 0;
			}
			break;
	}
	iVar0 = 0;
	while (iVar0 < Local_203.f_0)
	{
		if (unk_0xFD68187442384158(Local_203[iVar0 /*18*/]) && !unk_0x9F94F2CFDCA78C55(Local_203[iVar0 /*18*/]))
		{
			if (iLocal_48 > 1)
			{
				if (!unk_0x8FA72E132AAFA62F(sLocal_372))
				{
					func_28(iVar0);
					if (unk_0xFD68187442384158(Local_203[iVar0 /*18*/].f_2) && unk_0xDF75DAAACD32E49E(Local_203[iVar0 /*18*/].f_2))
					{
						if (!unk_0x2A24448FF232F834(Local_203[iVar0 /*18*/], 0))
						{
							if (unk_0xDAB2315B565377E3(Local_203[iVar0 /*18*/].f_2))
							{
								if (unk_0x08D60CA9F677F4AD(Local_203[iVar0 /*18*/]))
								{
									unk_0x07E0AE075425AA06(Local_203[iVar0 /*18*/].f_2, 0);
								}
							}
							else if (!unk_0x08D60CA9F677F4AD(Local_203[iVar0 /*18*/]))
							{
								unk_0x07E0AE075425AA06(Local_203[iVar0 /*18*/].f_2, 1);
							}
							if (!unk_0x19F2D2C58150C825(Local_203[iVar0 /*18*/]))
							{
								if (!unk_0x22605DE2E6933CF2(Local_203[iVar0 /*18*/], sLocal_372, func_27(iVar0), 3))
								{
									if (!Local_203[iVar0 /*18*/].f_11)
									{
										if (!unk_0x22605DE2E6933CF2(Local_203[iVar0 /*18*/], sLocal_372, "grip", 3))
										{
											unk_0xEC0A546609840086(Local_203[iVar0 /*18*/], sLocal_372, "grip", 1000f, -1000f, -1, 57, 0, 0, 0, 0);
											Local_203[iVar0 /*18*/].f_11 = 1;
										}
									}
								}
								else if (Local_203[iVar0 /*18*/].f_11)
								{
									unk_0xEC0A546609840086(Local_203[iVar0 /*18*/], sLocal_372, "grip", 1000f, -1000f, -1, 48, 0.99f, 0, 0, 0);
									Local_203[iVar0 /*18*/].f_11 = 0;
								}
							}
							if (!Local_203[iVar0 /*18*/].f_10)
							{
								unk_0xC47168D93A3B223B(sLocal_372);
								if (unk_0xB3E0182D84120379(sLocal_372))
								{
									unk_0xEF6A678C672AD689(Local_203[iVar0 /*18*/], sLocal_372);
									Local_203[iVar0 /*18*/].f_10 = 1;
								}
							}
						}
						else
						{
							if (Local_203[iVar0 /*18*/].f_11)
							{
								unk_0xEC0A546609840086(Local_203[iVar0 /*18*/], sLocal_372, "grip", 1000f, -1000f, -1, 48, 0.99f, 0, 0, 0);
								Local_203[iVar0 /*18*/].f_11 = 0;
							}
							if (Local_203[iVar0 /*18*/].f_10)
							{
								unk_0x04F7B10CA147AAAA(Local_203[iVar0 /*18*/]);
								Local_203[iVar0 /*18*/].f_10 = 0;
							}
						}
						if (unk_0x2E177F2B797A4A34(Local_203[iVar0 /*18*/]) && func_26(Local_203[iVar0 /*18*/], unk_0x78AB10B64129B3D5(Local_203[iVar0 /*18*/], 0)) == -1)
						{
							if (unk_0xDAB2315B565377E3(Local_203[iVar0 /*18*/].f_2))
							{
								unk_0x07E0AE075425AA06(Local_203[iVar0 /*18*/].f_2, 0);
							}
						}
						else if (!unk_0xDAB2315B565377E3(Local_203[iVar0 /*18*/].f_2))
						{
							unk_0x07E0AE075425AA06(Local_203[iVar0 /*18*/].f_2, 1);
						}
					}
					else
					{
						if (Local_203[iVar0 /*18*/].f_11)
						{
							unk_0xEC0A546609840086(Local_203[iVar0 /*18*/], sLocal_372, "grip", 1000f, -1000f, -1, 48, 0.99f, 0, 0, 0);
							Local_203[iVar0 /*18*/].f_11 = 0;
						}
						if (Local_203[iVar0 /*18*/].f_10)
						{
							unk_0x04F7B10CA147AAAA(Local_203[iVar0 /*18*/]);
							Local_203[iVar0 /*18*/].f_10 = 0;
						}
					}
				}
			}
			if (iLocal_46 != 7)
			{
				if (unk_0x88253E28293B8BFD(Local_203[iVar0 /*18*/]) && unk_0x865FD939154C0034(unk_0x507DA4994C3D8EBD()))
				{
					func_171(7);
				}
			}
		}
		iVar0++;
	}
	if (iLocal_46 != 7)
	{
		iVar0 = 0;
		while (iVar0 < Local_130.f_0)
		{
			if (unk_0xFD68187442384158(Local_130[iVar0 /*18*/]))
			{
				if (unk_0xCA8794CE207FC6D5(Local_130[iVar0 /*18*/], 0))
				{
					if (unk_0x53170344050F2301(unk_0x507DA4994C3D8EBD(), Local_130[iVar0 /*18*/], 0))
					{
						func_171(7);
					}
				}
			}
			iVar0++;
		}
	}
}

int func_26(int iParam0, int iParam1)
{
	if (!unk_0xE5D56342B0FF1D0D(iParam0) && !unk_0xE5D56342B0FF1D0D(iParam1))
	{
		if (unk_0x764E7360C13E7383(iParam0, iParam1))
		{
			if (unk_0xE634CB9EE7094537(iParam1, -1) == iParam0)
			{
				return -1;
			}
			if (unk_0xE634CB9EE7094537(iParam1, 0) == iParam0)
			{
				return 0;
			}
			if (unk_0xE634CB9EE7094537(iParam1, 1) == iParam0)
			{
				return 1;
			}
			if (unk_0xE634CB9EE7094537(iParam1, 2) == iParam0)
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
		if (unk_0x61D8FEAF64881CDA(Local_203[iParam0 /*18*/].f_15, iVar0))
		{
			iVar1 = 5;
			iVar2 = (iVar1 + iLocal_374);
			iVar3 = iVar0;
			if (iVar3 < iVar1)
			{
				if (unk_0x22605DE2E6933CF2(Local_203[iParam0 /*18*/], sLocal_372, func_27(iParam0), 3))
				{
					if (unk_0x5132EC78980FBED7(Local_203[iParam0 /*18*/], sLocal_372, func_27(iParam0)) > 0.9f)
					{
						unk_0xCD27BF29FB9012E2(&(Local_203[iParam0 /*18*/].f_15), iVar0);
					}
				}
			}
			else if (iVar3 < iVar2)
			{
				if (unk_0x22605DE2E6933CF2(Local_203[iParam0 /*18*/], sLocal_373, iLocal_374[(iVar3 - iVar1)], 3))
				{
					if (unk_0x5132EC78980FBED7(Local_203[iParam0 /*18*/], sLocal_373, iLocal_374[(iVar3 - iVar1)]) > 0.9f)
					{
						unk_0xCD27BF29FB9012E2(&(Local_203[iParam0 /*18*/].f_15), iVar0);
					}
				}
			}
			else if (!unk_0x22605DE2E6933CF2(Local_203[iParam0 /*18*/], sLocal_372, "grip", 3))
			{
				unk_0xCD27BF29FB9012E2(&(Local_203[iParam0 /*18*/].f_15), iVar0);
			}
		}
		iVar0++;
	}
}

void func_29()
{
	int iVar0;
	
	if (!unk_0x9F94F2CFDCA78C55(iLocal_85))
	{
		iVar0 = func_58(iLocal_567);
		if (((unk_0xFD68187442384158(Local_130[iLocal_567 /*18*/]) && unk_0xCA8794CE207FC6D5(Local_130[iLocal_567 /*18*/], 0)) && unk_0xFD68187442384158(Local_203[iVar0 /*18*/])) && !unk_0x9F94F2CFDCA78C55(Local_203[iVar0 /*18*/]))
		{
			if (unk_0x40923C25A763E8E8(Local_130[iLocal_567 /*18*/], joaat("cavalcade2")))
			{
				if (unk_0xB7A628320EFF8E47(Local_203[iVar0 /*18*/].f_6, Local_62) < unk_0xE3621CC40F31FE2E(30f, 2f) && unk_0xE634CB9EE7094537(Local_130[iLocal_567 /*18*/], 0) == Local_203[iVar0 /*18*/])
				{
					if (!Local_203[iVar0 /*18*/].f_9)
					{
						if (!func_36(iVar0))
						{
							func_30(iVar0);
						}
					}
					else if (!func_36(iVar0) && (unk_0xF976C624234A4AA8() - Local_203[iVar0 /*18*/].f_13) > 1000)
					{
						if (!unk_0x22605DE2E6933CF2(Local_203[iVar0 /*18*/], sLocal_373, "base", 3))
						{
							unk_0xEC0A546609840086(Local_203[iVar0 /*18*/], sLocal_373, "base", 8f, 1000f, -1, 16, 0, 0, 0, 0);
						}
					}
				}
			}
			else if (!Local_203[iVar0 /*18*/].f_9)
			{
				if (unk_0xB7A628320EFF8E47(Local_203[iVar0 /*18*/].f_6, Local_62) < unk_0xE3621CC40F31FE2E(30f, 2f) && unk_0xE634CB9EE7094537(Local_130[iLocal_567 /*18*/], 0) == Local_203[iVar0 /*18*/])
				{
					unk_0xF51B7D6313BA80B1(Local_203[iVar0 /*18*/], "random@paparazzi@pap_anims", "sweep_low", "sweep_med", "sweep_high", -1, iLocal_85, 1070134723, 1048576000);
					Local_203[iVar0 /*18*/].f_9 = 1;
					Local_203[iVar0 /*18*/].f_13 = unk_0xF976C624234A4AA8();
				}
			}
			else if (Local_203[iVar0 /*18*/].f_9)
			{
				if ((unk_0xF976C624234A4AA8() - Local_203[iVar0 /*18*/].f_13) > 2000)
				{
					Local_203[iVar0 /*18*/].f_9 = 0;
				}
			}
		}
		iLocal_567++;
		if (iLocal_567 >= Local_130.f_0)
		{
			iLocal_567 = 0;
		}
	}
}

void func_30(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	float fVar7;
	
	if (!unk_0x9F94F2CFDCA78C55(Local_203[iParam0 /*18*/]) && !unk_0x9F94F2CFDCA78C55(iLocal_85))
	{
		iVar0 = 15;
		Var1 = { Local_62 - Local_203[iParam0 /*18*/].f_6 };
		Var4 = { unk_0xF260FCBA09D07146(Local_203[iParam0 /*18*/]) };
		fVar7 = func_34(Var4, Var1);
		if (unk_0x75E01E8585722F89(fVar7) < 10f)
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
		if (!unk_0x61D8FEAF64881CDA(Local_203[iParam0 /*18*/].f_15, iParam1))
		{
			if (func_33(iParam1))
			{
				unk_0xEC0A546609840086(Local_203[iParam0 /*18*/], sLocal_373, iLocal_374[func_32(iParam1)], 4f, -4f, -1, 16, 0, 0, 0, 0);
			}
			else if (iParam1 < 5)
			{
				unk_0xEC0A546609840086(Local_203[iParam0 /*18*/], sLocal_372, func_27(iParam0), 8f, -8f, -1, 0, 0, 0, 0, 0);
			}
			else
			{
				unk_0xEC0A546609840086(Local_203[iParam0 /*18*/], sLocal_372, "grip", 1000f, -1000f, -1, 57, 0, 0, 0, 0);
			}
			Local_203[iParam0 /*18*/].f_15 = 0;
			unk_0x3DBE2A7AF9E71C82(&(Local_203[iParam0 /*18*/].f_15), iParam1);
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
	return (iVar0 >= 5 && iVar0 < (5 + iLocal_374));
}

float func_34(struct<3> Param0, struct<3> Param3)
{
	float fVar0;
	
	Param0 = { func_35(Param0) };
	Param3 = { func_35(Param3) };
	fVar0 = (unk_0x1E7EBED5BB2C078C(Param3.f_1, Param3.f_0) - unk_0x1E7EBED5BB2C078C(Param0.f_1, Param0.f_0));
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
	if (!unk_0x8FA72E132AAFA62F(sLocal_373))
	{
		iVar1 = 5;
		while (iVar1 <= 13)
		{
			if (!bVar0)
			{
				if (unk_0x61D8FEAF64881CDA(Local_203[iParam0 /*18*/].f_15, iVar1))
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
	
	if (unk_0xFD68187442384158(Local_130[iParam0 /*18*/]) && unk_0x19F2D2C58150C825(Local_130[iParam0 /*18*/]))
	{
		unk_0x10EA498723DC5A09(&(Local_130[iParam0 /*18*/]));
	}
	if (unk_0xD361727124133DF3(Local_130[iParam0 /*18*/].f_1))
	{
		unk_0xA0A65B537B1F11EC(&(Local_130[iParam0 /*18*/].f_1));
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (iVar0 == 1)
		{
			iVar1 = func_58(iParam0);
		}
		else
		{
			iVar1 = func_60(iParam0);
		}
		if (unk_0xFD68187442384158(Local_203[iVar1 /*18*/]) && unk_0x19F2D2C58150C825(Local_203[iVar1 /*18*/]))
		{
			if (unk_0xFD68187442384158(Local_203[iVar1 /*18*/]))
			{
				unk_0x4095FD029041DD48(&(Local_203[iVar1 /*18*/].f_2));
			}
			if (unk_0xD361727124133DF3(Local_203[iVar1 /*18*/].f_1))
			{
				unk_0xA0A65B537B1F11EC(&(Local_203[iVar1 /*18*/].f_1));
			}
			unk_0x8019BB3BA236A900(&(Local_203[iVar1 /*18*/]));
		}
		iVar0++;
	}
}

int func_38(int iParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = 1;
	if (unk_0xFD68187442384158(Local_130[iParam0 /*18*/]))
	{
		if (unk_0xCA8794CE207FC6D5(Local_130[iParam0 /*18*/], 0))
		{
			if (unk_0xB7A628320EFF8E47(Local_59, Local_130[iParam0 /*18*/].f_8) < (fParam1 * fParam1) || !unk_0x19F2D2C58150C825(Local_130[iParam0 /*18*/]))
			{
				iVar0 = 0;
			}
		}
	}
	if (unk_0xFD68187442384158(func_55(iParam0, 0)))
	{
		if (!unk_0x9F94F2CFDCA78C55(func_55(iParam0, 0)))
		{
			if (unk_0xB7A628320EFF8E47(Local_59, Local_203[func_60(iParam0) /*18*/].f_6) < (fParam1 * fParam1) || !unk_0x19F2D2C58150C825(func_55(iParam0, 0)))
			{
				iVar0 = 0;
			}
		}
	}
	if (unk_0xFD68187442384158(func_55(iParam0, 1)))
	{
		if (!unk_0x9F94F2CFDCA78C55(func_55(iParam0, 1)))
		{
			if (unk_0xB7A628320EFF8E47(Local_59, Local_203[func_58(iParam0) /*18*/].f_6) < (fParam1 * fParam1) || !unk_0x19F2D2C58150C825(func_55(iParam0, 1)))
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
	if (unk_0xFD68187442384158(iParam0) && unk_0xCA8794CE207FC6D5(iParam0, 0))
	{
		if (((((unk_0xFD68187442384158(iParam1) && iParam0 != iParam1) && !unk_0x9C14CED64BA9A516(unk_0x26EA758C2A691D06(iParam1))) && !unk_0x9652AA5F22572EA4(unk_0x26EA758C2A691D06(iParam1))) && !unk_0x6149FC3B1572A5B9(unk_0x26EA758C2A691D06(iParam1))) && !unk_0x0A0852014FD513B3(unk_0x26EA758C2A691D06(iParam1)))
		{
			if (unk_0x8FE221761D524CFE(unk_0xBF1B13057E5119A4(iParam1, 1), *uParam4, 1) > 20f)
			{
				if (func_43(iParam0, iParam1, iLocal_357, unk_0xBF1B13057E5119A4(iParam1, 1), unk_0xAD9A5677421290F3(iParam1, 2)))
				{
					*uParam2 = { *uParam4 };
					*uParam3 = *uParam5;
					*uParam2 = { unk_0xDA0070A0FA486D72(*uParam2, *uParam3, Param7) };
					*uParam4 = { unk_0xBF1B13057E5119A4(iParam1, 1) };
					*uParam5 = unk_0xA9D6B28E708753B6(iParam1);
				}
			}
			if (!unk_0x19F2D2C58150C825(iParam0))
			{
				*uParam6 = unk_0xF976C624234A4AA8();
			}
			else if ((unk_0xF976C624234A4AA8() - *uParam6) > iParam10)
			{
				if ((func_42(iParam0, iParam1, 1) > fParam11 && unk_0x8FE221761D524CFE(unk_0xBF1B13057E5119A4(iParam1, 1), *uParam2, 1) > 20f) && unk_0xB7A628320EFF8E47(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), *uParam2) > 100f)
				{
					if (!func_41(*uParam2))
					{
						if (!unk_0x23A9305227426F8B(*uParam2, 6f))
						{
							unk_0xAB97C8EA78D4E7DF(*uParam2, 6f, 0);
							unk_0x407F91A831576A66(*uParam2, 6f, 0, 0, 0, 0, 0);
							unk_0xF85858E5CBF4D9F0(iParam0, *uParam2, 1, 0, 0, 1);
							unk_0x248DC16118AE5035(iParam0, *uParam3);
							unk_0xD90C30D269B19096(iParam0);
							unk_0xADE31BE382A60FA4(iParam0, func_39((unk_0x11F6A4A45943670E(iParam1) + 10f), 10f, 60f));
							unk_0xE0E038A4E5C7727B(iParam0, 1, 1);
							*uParam6 = unk_0xF976C624234A4AA8();
						}
					}
				}
			}
		}
		else
		{
			*uParam6 = unk_0xF976C624234A4AA8();
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
	
	if (!unk_0xE5D56342B0FF1D0D(iParam0))
	{
		Var0 = { unk_0xBF1B13057E5119A4(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xBF1B13057E5119A4(iParam0, 0) };
	}
	if (!unk_0xE5D56342B0FF1D0D(iParam1))
	{
		Var3 = { unk_0xBF1B13057E5119A4(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xBF1B13057E5119A4(iParam1, 0) };
	}
	return unk_0x8FE221761D524CFE(Var0, Var3, iParam2);
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
	
	if (unk_0xFD68187442384158(iParam2))
	{
		unk_0xB72AA272E2B242A6(unk_0x26EA758C2A691D06(iParam0), &Var7, &Var10);
		unk_0xB72AA272E2B242A6(unk_0x26EA758C2A691D06(iParam1), &Var13, &uVar16);
		fVar19 = unk_0x75E01E8585722F89((Var10.f_2 - Var7.f_2));
		fVar20 = unk_0x75E01E8585722F89((Var10.f_0 - Var7.f_0));
		fVar21 = unk_0x75E01E8585722F89((Var10.f_1 - Var7.f_1));
		if (fVar20 > fVar19)
		{
			fVar22 = (fVar20 / 2f);
			fVar23 = (fVar22 - unk_0x75E01E8585722F89(Var7.f_2));
		}
		else
		{
			fVar22 = (fVar21 / 2f);
			fVar23 = (fVar22 - unk_0x75E01E8585722F89(Var7.f_0));
		}
		Var24.f_2 = (Var24.f_2 + (Var13.f_2 - Var7.f_2));
		unk_0xF85858E5CBF4D9F0(iParam2, Param3, 1, 0, 0, 1);
		unk_0xC1619F9F00BCB470(iParam2, Param6, 2, 1);
		Var1 = { unk_0x0CAFB9D38494283D(iParam2, Vector((fVar23 * 1.25f), ((fVar21 / 2f) - (fVar22 * 0.75f)), 0f) + Var24) };
		Var4 = { unk_0x0CAFB9D38494283D(iParam2, Vector((fVar23 * 1.25f), ((-fVar21 / 2f) + (fVar22 * 0.75f)), 0f) + Var24) };
		uVar35 = unk_0x46668681EA3C2CF0(Var4, Var1, fVar22, 19, unk_0x507DA4994C3D8EBD(), 4);
		if (unk_0xBFABF77FCEA8BA3F(uVar35, &iVar27, &uVar28, &uVar31, &uVar34) != 2)
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
	
	if ((unk_0xF976C624234A4AA8() - iLocal_566) > 100)
	{
		if ((unk_0xF976C624234A4AA8() - Local_203[iLocal_565 /*18*/].f_12) > 500)
		{
			if (unk_0xFD68187442384158(Local_203[iLocal_565 /*18*/]) && !unk_0x9F94F2CFDCA78C55(Local_203[iLocal_565 /*18*/]))
			{
				bVar0 = true;
				if (!Local_203[iLocal_565 /*18*/].f_9 && unk_0x2A24448FF232F834(Local_203[iLocal_565 /*18*/], 0))
				{
					bVar0 = false;
				}
				if (bVar0)
				{
					if (((unk_0x22605DE2E6933CF2(Local_203[iLocal_565 /*18*/], sLocal_372, func_27(iLocal_565), 3) && unk_0x5132EC78980FBED7(Local_203[iLocal_565 /*18*/], sLocal_372, func_27(iLocal_565)) > 0.5f) && unk_0x5132EC78980FBED7(Local_203[iLocal_565 /*18*/], sLocal_372, func_27(iLocal_565)) < 0.75f) || Local_203[iLocal_565 /*18*/].f_9)
					{
						unk_0x8BCDEA8221B6D08A("scr_rcpap1_camera", Local_203[iLocal_565 /*18*/].f_2, 0.019f, -0.01f, 0.046f, 0f, 0f, -180f, 1065353216, 0, 0, 0);
						if ((iLocal_565 % 3) == 0)
						{
							unk_0xE89B40A4D255370C(-1, "SHUTTER_FLASH", unk_0xBF1B13057E5119A4(Local_203[iLocal_565 /*18*/].f_2, 1), "CAMERA_FLASH_SOUNDSET", 0, 0, 0);
						}
						else if ((iLocal_565 % 3) == 1)
						{
							unk_0xE89B40A4D255370C(-1, "SHUTTER", unk_0xBF1B13057E5119A4(Local_203[iLocal_565 /*18*/].f_2, 1), "CAMERA_FLASH_SOUNDSET", 0, 0, 0);
						}
						else
						{
							unk_0xE89B40A4D255370C(-1, "FLASH", unk_0xBF1B13057E5119A4(Local_203[iLocal_565 /*18*/].f_2, 1), "CAMERA_FLASH_SOUNDSET", 0, 0, 0);
						}
						Local_203[iLocal_565 /*18*/].f_12 = unk_0xF976C624234A4AA8();
					}
					iLocal_566 = unk_0xF976C624234A4AA8();
				}
			}
			iLocal_565++;
			if (iLocal_565 >= Local_203.f_0)
			{
				iLocal_565 = 0;
			}
		}
	}
}

void func_45(int iParam0, int iParam1)
{
	if (!unk_0x9F94F2CFDCA78C55(Local_203[iParam1 /*18*/]) && !unk_0x9F94F2CFDCA78C55(iParam0))
	{
		if (!unk_0x849DBD2D635C99D5(Local_203[iParam1 /*18*/], iParam0, 20f))
		{
			if (unk_0xEC043AB2FEE0E94F(Local_203[iParam1 /*18*/], -875674219) != 1)
			{
				unk_0xDE75E9DE5B6221E1(Local_203[iParam1 /*18*/], iParam0, 0);
			}
		}
		else if ((unk_0xF976C624234A4AA8() - Local_203[iParam1 /*18*/].f_13) > 2000)
		{
			if (!unk_0x22605DE2E6933CF2(Local_203[iParam1 /*18*/], sLocal_372, func_27(iParam1), 3))
			{
				unk_0xEC0A546609840086(Local_203[iParam1 /*18*/], sLocal_372, func_27(iParam1), 4f, -4f, -1, 0, 0, 0, 0, 0);
				Local_203[iParam1 /*18*/].f_13 = unk_0xF976C624234A4AA8();
			}
		}
	}
}

void func_46(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	if (!unk_0x9F94F2CFDCA78C55(Local_203[iParam1 /*18*/]) && !unk_0x9F94F2CFDCA78C55(iParam0))
	{
		Var0 = { unk_0x0CAFB9D38494283D(iParam0, func_48(iParam1)) };
		switch (Local_203[iParam1 /*18*/].f_16)
		{
			case 0:
				func_47(Var0, iParam1, iParam0);
				Local_203[iParam1 /*18*/].f_16++;
				break;
			
			case 1:
				if (unk_0xEC043AB2FEE0E94F(Local_203[iParam1 /*18*/], 713668775) != 1 || unk_0x2A488C176D52CCA5(Var0, Local_203[iParam1 /*18*/].f_6) > 5f)
				{
					Local_203[iParam1 /*18*/].f_16++;
				}
				break;
			
			case 2:
				if (unk_0x2A488C176D52CCA5(Var0, Local_203[iParam1 /*18*/].f_6) > 10f)
				{
					func_47(Var0, iParam1, iParam0);
					Local_203[iParam1 /*18*/].f_16++;
				}
				else
				{
					func_45(iParam0, iParam1);
				}
				break;
			
			case 3:
				if (unk_0xB7A628320EFF8E47(Var0, Local_203[iParam1 /*18*/].f_3) > 25f)
				{
					func_47(Var0, iParam1, iParam0);
				}
				if (unk_0xEC043AB2FEE0E94F(Local_203[iParam1 /*18*/], 713668775) != 1)
				{
					Local_203[iParam1 /*18*/].f_16 = (Local_203[iParam1 /*18*/].f_16 - 1);
				}
				break;
			}
	}
}

void func_47(struct<3> Param0, int iParam3, int iParam4)
{
	struct<3> Var0;
	int iVar3;
	
	Var0 = { func_35(unk_0xBF1B13057E5119A4(iParam4, 1) - Param0) };
	iVar3 = unk_0xA75239A5F28CBA62(Var0.f_0, Var0.f_1);
	Local_203[iParam3 /*18*/].f_3 = { Param0 };
	unk_0xAC57FBF981AB03F4(Local_203[iParam3 /*18*/]);
	if (unk_0x2A488C176D52CCA5(Param0, Local_203[iParam3 /*18*/].f_6) < 2f)
	{
		unk_0x3F07E364A21EBC20(Local_203[iParam3 /*18*/], Local_203[iParam3 /*18*/].f_3, 1f, -1, 0.5f, 512, iVar3);
	}
	else
	{
		unk_0x3F07E364A21EBC20(Local_203[iParam3 /*18*/], Local_203[iParam3 /*18*/].f_3, 2f, -1, 0.5f, 512, iVar3);
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
	while (iVar0 < Local_203.f_0)
	{
		if (unk_0xD361727124133DF3(Local_203[iVar0 /*18*/].f_1))
		{
			if (unk_0x9F94F2CFDCA78C55(Local_203[iVar0 /*18*/]))
			{
				unk_0xA0A65B537B1F11EC(&(Local_203[iVar0 /*18*/].f_1));
			}
			else if (unk_0x2A24448FF232F834(Local_203[iVar0 /*18*/], 0))
			{
				unk_0xA0A65B537B1F11EC(&(Local_203[iVar0 /*18*/].f_1));
			}
		}
		else if (!unk_0x9F94F2CFDCA78C55(Local_203[iVar0 /*18*/]) && !unk_0x2A24448FF232F834(Local_203[iVar0 /*18*/], 0))
		{
			Local_203[iVar0 /*18*/].f_1 = func_173(Local_203[iVar0 /*18*/], 1, 145);
			unk_0x2B271F66198227B7(Local_203[iVar0 /*18*/].f_1, "EP_PAPBLIP");
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_130.f_0)
	{
		if (unk_0xCA8794CE207FC6D5(Local_130[iVar0 /*18*/], 0))
		{
			if (unk_0xD361727124133DF3(Local_130[iVar0 /*18*/].f_1))
			{
				Var1 = { unk_0xDEC21C0D420A9EFF(Local_130[iVar0 /*18*/].f_1) };
				Var4 = { Local_130[iVar0 /*18*/].f_8 };
				Var1.f_0 = (Var1.f_0 + ((Var4.f_0 - Var1.f_0) / 10f));
				Var1.f_1 = (Var1.f_1 + ((Var4.f_1 - Var1.f_1) / 10f));
				Var1.f_2 = (Var1.f_2 + ((Var4.f_2 - Var1.f_2) / 10f));
				unk_0x2F81977123174F1A(Local_130[iVar0 /*18*/].f_1, Var1);
				if (func_52(Local_130[iVar0 /*18*/], 1, 0, 0))
				{
					unk_0xA0A65B537B1F11EC(&(Local_130[iVar0 /*18*/].f_1));
				}
			}
			else if (!func_52(Local_130[iVar0 /*18*/], 1, 0, 0))
			{
				Local_130[iVar0 /*18*/].f_1 = func_50(Local_130[iVar0 /*18*/].f_8, 0);
				unk_0xEDB3DD98D55452E4(Local_130[iVar0 /*18*/].f_1, 1);
				unk_0x2B271F66198227B7(Local_130[iVar0 /*18*/].f_1, "EP_PAPBLIP");
				unk_0xAE9EE75C62A1DACD(Local_130[iVar0 /*18*/].f_1, 9);
			}
		}
		else if (unk_0xD361727124133DF3(Local_130[iVar0 /*18*/].f_1))
		{
			unk_0xA0A65B537B1F11EC(&(Local_130[iVar0 /*18*/].f_1));
		}
		iVar0++;
	}
}

var func_50(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x7BFA7BEBF46363DE(Param0);
	unk_0x1D8833C0F155BFE7(uVar0, func_51(unk_0xD95428C8AA1DBBF2(), 1f, 1f));
	unk_0x43F7D508C655CBA3(uVar0, iParam3);
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

int func_52(int iParam0, int iParam1, bool bParam2, int iParam3)
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

void func_53(int iParam0, struct<3> Param1, float fParam4, char* sParam5, char* sParam6, char* sParam7)
{
	if (!unk_0x9F94F2CFDCA78C55(Local_203[iParam0 /*18*/]))
	{
		if (unk_0x2A488C176D52CCA5(unk_0xBF1B13057E5119A4(Local_203[iParam0 /*18*/], 1), Param1) > 1.5f)
		{
			if (unk_0xEC043AB2FEE0E94F(Local_203[iParam0 /*18*/], 713668775) != 1)
			{
				unk_0x3F07E364A21EBC20(Local_203[iParam0 /*18*/], Param1, 2f, -1, 0.25f, 0, fParam4);
			}
		}
		else if (unk_0x75E01E8585722F89((func_54(unk_0xA9D6B28E708753B6(Local_203[iParam0 /*18*/])) - func_54(fParam4))) > 10f)
		{
			if (unk_0xEC043AB2FEE0E94F(Local_203[iParam0 /*18*/], 1920390111) != 1)
			{
				unk_0xDA74C6C73AFEC1F3(Local_203[iParam0 /*18*/], fParam4, 0);
			}
		}
		else
		{
			switch (Local_203[iParam0 /*18*/].f_16)
			{
				case 0:
					if (unk_0x8FA72E132AAFA62F(sParam7))
					{
						if (!unk_0x22605DE2E6933CF2(Local_203[iParam0 /*18*/], sParam5, sParam6, 3))
						{
							unk_0xEC0A546609840086(Local_203[iParam0 /*18*/], sParam5, sParam6, 4f, -4f, -1, 1, 0, 0, 0, 0);
						}
					}
					else if (!unk_0x22605DE2E6933CF2(Local_203[iParam0 /*18*/], sParam5, sParam6, 3))
					{
						unk_0xEC0A546609840086(Local_203[iParam0 /*18*/], sParam5, sParam6, 4f, -4f, -1, 0, 0, 0, 0, 0);
					}
					else if (unk_0x5132EC78980FBED7(Local_203[iParam0 /*18*/], sParam5, sParam6) > 0.99f)
					{
						unk_0xEC0A546609840086(Local_203[iParam0 /*18*/], sParam5, sParam7, 4f, -4f, -1, 0, 0, 0, 0, 0);
						Local_203[iParam0 /*18*/].f_16++;
					}
					break;
				
				case 1:
					if (!unk_0x22605DE2E6933CF2(Local_203[iParam0 /*18*/], sParam5, sParam7, 3))
					{
						unk_0xEC0A546609840086(Local_203[iParam0 /*18*/], sParam5, sParam7, 4f, -4f, -1, 0, 0, 0, 0, 0);
					}
					else if (unk_0x5132EC78980FBED7(Local_203[iParam0 /*18*/], sParam5, sParam7) > 0.99f)
					{
						unk_0xEC0A546609840086(Local_203[iParam0 /*18*/], sParam5, sParam6, 4f, -4f, -1, 0, 0, 0, 0, 0);
						Local_203[iParam0 /*18*/].f_16 = 0;
					}
					break;
				}
			}
	}
}

float func_54(float fParam0)
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

var func_55(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return Local_203[func_60(iParam0) /*18*/];
	}
	return Local_203[func_58(iParam0) /*18*/];
}

void func_56(int iParam0, struct<3> Param1, float fParam4, bool bParam5)
{
	if ((iParam0 % 2) == 1)
	{
		Local_130[iParam0 /*18*/] = unk_0x546974B676313326(joaat("vader"), Param1, fParam4, 1, 1);
	}
	else
	{
		Local_130[iParam0 /*18*/] = unk_0x546974B676313326(joaat("cavalcade2"), Param1, fParam4, 1, 1);
		unk_0x29CE15040B0080CB(Local_130[iParam0 /*18*/], 0);
	}
	unk_0xD90C30D269B19096(Local_130[iParam0 /*18*/]);
	unk_0xA175CED361F78A04(Local_130[iParam0 /*18*/], 1);
	if (bParam5)
	{
		if (!unk_0xFD68187442384158(func_55(iParam0, 0)))
		{
			func_57(func_60(iParam0), Param1, fParam4);
		}
		if (!unk_0xFD68187442384158(func_55(iParam0, 1)))
		{
			func_57(func_58(iParam0), Param1, fParam4);
		}
		if (!unk_0x9F94F2CFDCA78C55(func_55(iParam0, 0)) && unk_0xCA8794CE207FC6D5(Local_130[iParam0 /*18*/], 0))
		{
			unk_0x11460EBE0487B44F(func_55(iParam0, 0), Local_130[iParam0 /*18*/], -1);
		}
		if (!unk_0x9F94F2CFDCA78C55(func_55(iParam0, 1)) && unk_0xCA8794CE207FC6D5(Local_130[iParam0 /*18*/], 0))
		{
			unk_0x11460EBE0487B44F(func_55(iParam0, 1), Local_130[iParam0 /*18*/], 0);
		}
		unk_0xE0E038A4E5C7727B(Local_130[iParam0 /*18*/], 1, 1);
	}
}

void func_57(int iParam0, struct<3> Param1, float fParam4)
{
	Local_203[iParam0 /*18*/] = unk_0x7B88529CAE3B7F15(26, joaat("a_m_y_genstreet_02"), Param1, fParam4, 1, 1);
	unk_0x3A1E687904400847(Local_203[iParam0 /*18*/], 1, 0);
	unk_0x2DC5B31EBB810396(Local_203[iParam0 /*18*/], 1);
	unk_0x3A1E687904400847(Local_203[iParam0 /*18*/], 0, 1);
	unk_0xAEC837DFD456FB5E(Local_203[iParam0 /*18*/], 3);
	unk_0xCAFAFBAB1F150EFF(Local_203[iParam0 /*18*/], 1);
	unk_0x3A1E687904400847(Local_203[iParam0 /*18*/], 17, 1);
	unk_0xB2B080B88A4144B7(Local_203[iParam0 /*18*/], 2, 0);
	unk_0x5BA593EA32D0187E(Local_203[iParam0 /*18*/], 0);
	unk_0xA1E4BA3B17C6D931(Local_203[iParam0 /*18*/], 1);
	unk_0x82BD6614CF6D5ED4(Local_203[iParam0 /*18*/], 100);
	unk_0x17851927364BD706(Local_203[iParam0 /*18*/], joaat("FIRING_PATTERN_FULL_AUTO"));
	unk_0x7FEDD088E489CE41(Local_203[iParam0 /*18*/], 101, 1);
	unk_0x7FEDD088E489CE41(Local_203[iParam0 /*18*/], 185, 0);
	unk_0x3E16CE93BAE616EE(Local_203[iParam0 /*18*/], 300);
	unk_0xF2685765B7BEBCB0(Local_203[iParam0 /*18*/], 3, (iParam0 % 2), unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam0) / 2f)), 0);
	if (Global_3 || bLocal_69)
	{
		unk_0xF732465E1FF70CE4(Local_203[iParam0 /*18*/], 1);
		unk_0x3E16CE93BAE616EE(Local_203[iParam0 /*18*/], 500);
	}
	unk_0x9B02246888A617A8(Local_203[iParam0 /*18*/], 1);
	unk_0x3A1E687904400847(Local_203[iParam0 /*18*/], 2, 1);
	unk_0xD156A7AA30AC555A(Local_203[iParam0 /*18*/], 2f);
	unk_0x5BA593EA32D0187E(Local_203[iParam0 /*18*/], 0);
	unk_0x344C5D954883BFBF(Local_203[iParam0 /*18*/], 0);
	Local_203[iParam0 /*18*/].f_2 = unk_0xCEC985247737A30E(joaat("prop_pap_camera_01"), unk_0xC5B1818639240D24(Local_203[iParam0 /*18*/], 28422, 0f, 0f, 0f), 1, 1, 0);
	unk_0x26030664C7D28388(Local_203[iParam0 /*18*/].f_2, Local_203[iParam0 /*18*/], unk_0xA8918EDB277FC51C(Local_203[iParam0 /*18*/], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	if (unk_0xFD68187442384158(Local_203[0 /*18*/].f_2))
	{
		unk_0x07E0AE075425AA06(Local_203[0 /*18*/].f_2, 0);
	}
	Local_203[iParam0 /*18*/].f_17 = unk_0x5D422B4764FA2ACA(Local_203[iParam0 /*18*/]);
}

int func_58(int iParam0)
{
	return iParam0 * 2 + 1;
}

void func_59(int iParam0)
{
	if ((iParam0 % 2) == 1)
	{
		Local_203[iParam0 /*18*/].f_14 = ((iParam0 - 1) / 2);
	}
	else
	{
		Local_203[iParam0 /*18*/].f_14 = (iParam0 / 2);
	}
}

int func_60(int iParam0)
{
	return iParam0 * 2;
}

void func_61(int iParam0)
{
	Local_130[iParam0 /*18*/].f_17 = 0;
}

int func_62()
{
	bool bVar0;
	bool bVar1;
	
	if (!unk_0x9F94F2CFDCA78C55(iLocal_85))
	{
		bVar0 = false;
		if (func_65())
		{
			if (unk_0xFD68187442384158(func_64()))
			{
				if (unk_0x2A488C176D52CCA5(unk_0xBF1B13057E5119A4(func_64(), 1), Local_62) < 5f && unk_0x11F6A4A45943670E(iLocal_90) < 1f)
				{
					bVar0 = true;
				}
			}
		}
		else if (unk_0xCA8794CE207FC6D5(iLocal_90, 0))
		{
			if (!unk_0x53170344050F2301(unk_0x507DA4994C3D8EBD(), iLocal_90, 0) && unk_0x53170344050F2301(iLocal_85, iLocal_90, 0))
			{
				fLocal_569 = (fLocal_569 + unk_0x94B2D2AEAA1D886E());
			}
			else if (fLocal_569 > 0f)
			{
				fLocal_569 = 0f;
			}
		}
		if (bVar0)
		{
			fLocal_568 = (fLocal_568 + unk_0x94B2D2AEAA1D886E());
		}
		else if (fLocal_568 > 0f)
		{
			fLocal_568 = 0f;
		}
		if (fLocal_568 > 30f)
		{
			bVar1 = true;
		}
		if (iLocal_70)
		{
			if (!unk_0x764E7360C13E7383(iLocal_85, iLocal_90))
			{
				if (unk_0x1983DA3C921BB046(iLocal_85))
				{
					bVar1 = true;
				}
				iLocal_70 = 0;
			}
		}
		if (!iLocal_70)
		{
			if (unk_0x764E7360C13E7383(iLocal_85, iLocal_90))
			{
				iLocal_70 = 1;
			}
		}
		if (fLocal_569 > 30f)
		{
			bVar1 = true;
		}
		if (!unk_0xCA8794CE207FC6D5(iLocal_90, 0) && (!bLocal_367 || iLocal_46 == 1))
		{
			bVar1 = true;
		}
		if (unk_0x2A488C176D52CCA5(Local_62, Local_59) > 30f)
		{
			bVar1 = true;
		}
		if (((unk_0xCA8794CE207FC6D5(iLocal_90, 0) && func_63(iLocal_90)) && (!bLocal_367 || iLocal_46 == 1)) && unk_0x2A488C176D52CCA5(unk_0xBF1B13057E5119A4(iLocal_85, 1), Local_55) > 15f)
		{
			bVar1 = true;
		}
		if (unk_0xCA8794CE207FC6D5(iLocal_90, 0) && unk_0x26FE3F0A2045AA7E(iLocal_90))
		{
			bVar1 = true;
		}
		if (bVar1)
		{
			if (unk_0x4D3E68F73B727E49(0, 2) == 1)
			{
				sLocal_370 = "REPAP_GUP";
			}
			else
			{
				sLocal_370 = "REPAP_GUP2";
			}
			return 1;
		}
	}
	return 0;
}

int func_63(int iParam0)
{
	if (unk_0xFD68187442384158(iParam0))
	{
		if (unk_0xCA8794CE207FC6D5(iParam0, 0))
		{
			if (((unk_0xD803509E70F20530(iParam0, 0, 7000) || unk_0xD803509E70F20530(iParam0, 3, 30000)) || unk_0xD803509E70F20530(iParam0, 2, 30000)) || unk_0xD803509E70F20530(iParam0, 1, 40000))
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

int func_64()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar1 = -1;
	fVar2 = 999999f;
	iVar0 = 0;
	while (iVar0 < Local_203.f_0)
	{
		if ((unk_0xFD68187442384158(Local_203[iVar0 /*18*/]) && !unk_0x9F94F2CFDCA78C55(Local_203[iVar0 /*18*/])) && !unk_0x9F94F2CFDCA78C55(iLocal_85))
		{
			if (unk_0xB7A628320EFF8E47(Local_62, Local_203[iVar0 /*18*/].f_6) < fVar2)
			{
				fVar2 = unk_0xB7A628320EFF8E47(Local_62, Local_203[iVar0 /*18*/].f_6);
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 != -1)
	{
		return Local_203[iVar1 /*18*/];
	}
	return 0;
}

int func_65()
{
	if (unk_0xCA8794CE207FC6D5(iLocal_90, 0))
	{
		if (!unk_0x9F94F2CFDCA78C55(iLocal_85))
		{
			if (unk_0x53170344050F2301(iLocal_85, iLocal_90, 0) && unk_0x53170344050F2301(unk_0x507DA4994C3D8EBD(), iLocal_90, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_66()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_203.f_0)
	{
		if (func_67(Local_203[iVar0 /*18*/], 0, 0))
		{
			return 1;
		}
		if (unk_0xFD68187442384158(Local_203[iVar0 /*18*/]))
		{
			if (unk_0x9F94F2CFDCA78C55(Local_203[iVar0 /*18*/]) || unk_0xE5D56342B0FF1D0D(Local_203[iVar0 /*18*/]))
			{
				if (iLocal_385[iVar0] > 50)
				{
					iLocal_348++;
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_67(int iParam0, int iParam1, bool bParam2)
{
	struct<3> Var0;
	int iVar3;
	
	if (!unk_0x9F94F2CFDCA78C55(iParam0))
	{
		Var0 = { unk_0xBF1B13057E5119A4(iParam0, 1) };
		if (unk_0x73741D3DABB81B29(unk_0x507DA4994C3D8EBD(), 7))
		{
			unk_0xAE0CD3052D6ED1ED(unk_0x507DA4994C3D8EBD(), &iVar3, 1);
		}
		if (!bParam2)
		{
			if (unk_0x0982F2F40B035E77(Var0, 5f, 1))
			{
				return 1;
			}
		}
		if (unk_0xB7A628320EFF8E47(Var0, Local_59) < 400f)
		{
			if (!bParam2)
			{
				if ((unk_0x73741D3DABB81B29(unk_0x507DA4994C3D8EBD(), 6) && !unk_0xB6CDBC1E2904184A(unk_0x507DA4994C3D8EBD())) && unk_0xEB4AE93098956715(unk_0x507DA4994C3D8EBD()))
				{
					return 1;
				}
			}
			if ((iVar3 == joaat("weapon_petrolcan") && unk_0xEB4AE93098956715(unk_0x507DA4994C3D8EBD())) && unk_0xB7A628320EFF8E47(Local_59, Var0) < 9f)
			{
				return 1;
			}
			if (((unk_0xB89DCD342FB7AC95(unk_0xAF65E5A58BE87D95(), iParam0) || unk_0x8DEF14B60C4A9D01(unk_0xAF65E5A58BE87D95(), iParam0)) && (func_68(Local_59, iParam0) && unk_0xB7A628320EFF8E47(Local_59, unk_0xBF1B13057E5119A4(iParam0, 1)) < 100f)) && unk_0x73741D3DABB81B29(unk_0x507DA4994C3D8EBD(), 6))
			{
				return 1;
			}
			if (iLocal_384 > 150)
			{
				return 1;
			}
		}
		if (unk_0x0EECD6636717FFA3(unk_0xC5B1818639240D24(iParam0, 31086, 0f, 0f, 0f), 6f))
		{
			return 1;
		}
	}
	else if (unk_0xFD68187442384158(iParam0) && iParam1)
	{
		return 1;
	}
	return 0;
}

int func_68(struct<3> Param0, int iParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	Var0 = { unk_0xBF1B13057E5119A4(iParam3, 1) };
	Var3 = { unk_0x0CAFB9D38494283D(iParam3, 0f, 1f, 0f) - Var0 };
	Var6 = { Param0 - Var0 };
	fVar9 = func_69(Var3, Var6);
	if (fVar9 > 0.5f)
	{
		return 1;
	}
	return 0;
}

float func_69(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

void func_70()
{
	if (iLocal_46 != 11)
	{
		if (unk_0xD361727124133DF3(uLocal_361))
		{
			unk_0xA0A65B537B1F11EC(&uLocal_361);
		}
		if (unk_0xD361727124133DF3(uLocal_362))
		{
			unk_0xA0A65B537B1F11EC(&uLocal_362);
		}
		if (unk_0xD361727124133DF3(uLocal_359))
		{
			unk_0xA0A65B537B1F11EC(&uLocal_359);
		}
		iLocal_47 = iLocal_46;
		iLocal_46 = 11;
	}
	else if (unk_0x89D8D467C3C356CB(unk_0xAF65E5A58BE87D95()) > 0)
	{
		if (unk_0x89D8D467C3C356CB(unk_0xAF65E5A58BE87D95()) < 3)
		{
			if (!func_73())
			{
				func_71("REPAP_COP1");
			}
		}
		else
		{
			func_171(5);
		}
	}
	else if (func_5(&Local_394, cLocal_371, "REPAP_COP2", 4, 0, 0, 0))
	{
		iLocal_46 = iLocal_47;
	}
}

void func_71(char* sParam0)
{
	if ((unk_0xF976C624234A4AA8() - iLocal_666) > 5000)
	{
		if (!func_72())
		{
			if (func_5(&Local_394, cLocal_371, sParam0, 4, 0, 0, 0))
			{
				iLocal_666 = unk_0xF976C624234A4AA8();
			}
		}
	}
}

int func_72()
{
	if (Global_15692 != 0 || unk_0xF611D1BB58990143())
	{
		return 1;
	}
	return 0;
}

bool func_73()
{
	if (!unk_0x9F94F2CFDCA78C55(iLocal_85) && unk_0xB7A628320EFF8E47(Local_59, Local_62) < 400f)
	{
		if (!iLocal_349 && (unk_0xF976C624234A4AA8() - iLocal_351) > 5000)
		{
			if (iLocal_81 > 10)
			{
				iLocal_349 = 1;
				iLocal_81 = 0;
			}
		}
		if ((!iLocal_354 && !iLocal_349) && (unk_0xF976C624234A4AA8() - iLocal_355) > 4000)
		{
			if (unk_0x73741D3DABB81B29(unk_0x507DA4994C3D8EBD(), 6) && unk_0xEB4AE93098956715(unk_0x507DA4994C3D8EBD()))
			{
				if (iLocal_356 > 2)
				{
					if (!Global_3 && !bLocal_69)
					{
						func_171(5);
					}
				}
				else
				{
					iLocal_354 = 1;
					iLocal_356++;
				}
			}
		}
		if (((!iLocal_352 && !iLocal_349) && !iLocal_354) && (unk_0xF976C624234A4AA8() - iLocal_353) > 15000)
		{
			if (unk_0x73741D3DABB81B29(unk_0x507DA4994C3D8EBD(), 6) && !unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
			{
				iLocal_352 = 1;
			}
		}
		if (iLocal_349)
		{
			if (iLocal_350)
			{
				if (func_5(&Local_394, cLocal_371, "REPAP_HIT", 4, 0, 0, 0))
				{
					iLocal_351 = unk_0xF976C624234A4AA8();
					iLocal_349 = 0;
				}
			}
			else if (func_5(&Local_394, cLocal_371, "REPAP_HUR", 4, 0, 0, 0))
			{
				iLocal_351 = unk_0xF976C624234A4AA8();
				iLocal_349 = 0;
				iLocal_350 = 1;
			}
		}
		if (iLocal_354)
		{
			if (func_5(&Local_394, cLocal_371, "REPAP_SHOOT", 4, 0, 0, 0))
			{
				iLocal_355 = unk_0xF976C624234A4AA8();
				iLocal_354 = 0;
			}
		}
		if (iLocal_352)
		{
			if (func_5(&Local_394, cLocal_371, "REPAP_GUN", 4, 0, 0, 0))
			{
				iLocal_353 = unk_0xF976C624234A4AA8();
				iLocal_352 = 0;
			}
		}
	}
	return ((iLocal_352 || iLocal_354) || iLocal_349);
}

void func_74()
{
	if (!unk_0x9F94F2CFDCA78C55(iLocal_85))
	{
		unk_0xA1E4BA3B17C6D931(iLocal_85, 1);
		unk_0xCA4EA7D4F6DCCD43(255, uLocal_68, joaat("player"));
		if (!Global_3 && !bLocal_69)
		{
			unk_0x7FEDD088E489CE41(iLocal_85, 317, 1);
			unk_0x2DC5B31EBB810396(iLocal_85, 0);
		}
	}
	func_78(-1, 0);
	func_75();
	unk_0x4F724E65A4FC9C95(62);
	func_267();
}

void func_75()
{
	func_76();
}

int func_76()
{
	if (func_77(0))
	{
		return 0;
	}
	if (Global_89823.f_8)
	{
		if (Global_89823.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_89823.f_10 > 1)
	{
		return 0;
	}
	Global_89823.f_10++;
	return 1;
}

bool func_77(bool bParam0)
{
	if (!bParam0 && unk_0x25531002BCF0D968(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x61D8FEAF64881CDA(Global_68315, 0);
}

void func_78(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_96();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_95(iParam0))
	{
		func_94(iParam0, iParam1);
		if (!func_93(51))
		{
			func_89("RE_REWARD", 1, 0, 4000, 10000, func_92(), 0, 138, 0);
			func_88(51);
		}
		if (func_87(iParam0))
		{
			Global_97173.f_28117.f_2 = 3;
		}
		if (func_86(iParam0, iParam1) != 322)
		{
			func_80(func_86(iParam0, iParam1), Local_42.f_0, Local_42.f_1);
		}
		Global_97161 = iParam1;
		if (Global_97159 == 0)
		{
			if (((Global_97162 == 1 || Global_97162 == 5) || Global_97162 == 11) || Global_97162 == 25)
			{
				func_79(2);
			}
			else if ((Global_97162 == 26 || Global_97162 == 8) || Global_97162 == 17)
			{
				func_79(7);
			}
			else
			{
				func_79(1);
			}
		}
	}
}

void func_79(int iParam0)
{
	Global_97159 = iParam0;
}

void func_80(int iParam0, var uParam1, var uParam2)
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
		func_84((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_97173.f_8415[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_97173.f_8415[iParam0 /*12*/].f_6 == 11 || Global_97173.f_8415[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_97173.f_8415[iParam0 /*12*/].f_5 = 1;
		Global_97173.f_8415[iParam0 /*12*/].f_10 = uParam1;
		Global_97173.f_8415[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0x88300116A714168E(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x88300116A714168E(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x88300116A714168E(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_81();
	}
}

void func_81()
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
	Global_96909 = 0;
	Global_96910 = 0;
	Global_96911 = 0;
	Global_96912 = 0;
	Global_96913 = 0;
	Global_96914 = 0;
	Global_96915 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_97173.f_8415.f_3853;
	Global_97173.f_8415.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_97173.f_8415[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_97173.f_8415[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_96909++;
					fVar1 = (fVar1 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_96910++;
					fVar2 = (fVar2 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_96911++;
					fVar3 = (fVar3 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_96912++;
					fVar4 = (fVar4 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_96913++;
					fVar5 = (fVar5 + (Global_97173.f_8415[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_96914++;
					fVar6 = (fVar6 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_96915++;
					fVar7 = (fVar7 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_96892 > 0)
	{
		if (Global_96909 == Global_96892)
		{
			fVar1 = 55f;
		}
	}
	if (Global_96893 > 0)
	{
		if (Global_96910 == Global_96893)
		{
			fVar2 = 10f;
		}
	}
	if (Global_96894 > 0)
	{
		if (Global_96911 == Global_96894)
		{
			fVar3 = 0f;
		}
	}
	if (Global_96895 > 0)
	{
		if (Global_96912 == Global_96895)
		{
			fVar4 = 10f;
		}
	}
	if (Global_96896 > 0)
	{
		if (((Global_96913 == Global_96896 || (Global_96896 * 10 / Global_96913) < 41) || Global_96913 > Global_96899) || Global_96913 == Global_96899)
		{
			if (!unk_0x61D8FEAF64881CDA(Global_97173.f_8415.f_3856, 14))
			{
				if (Global_96913 == Global_96896)
				{
					unk_0x88300116A714168E(joaat("num_rndevents_completed"), Global_96896, 0);
					unk_0x3DBE2A7AF9E71C82(&(Global_97173.f_8415.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_96897 > 0)
	{
		if (Global_96914 == Global_96897)
		{
			fVar6 = 15f;
		}
	}
	if (Global_96898 > 0)
	{
		if (Global_96915 == Global_96898)
		{
			fVar7 = 5f;
		}
	}
	Global_97173.f_8415.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_96913 > Global_96899 || Global_96913 == Global_96899)
	{
		iVar9 = Global_96899;
	}
	else
	{
		iVar9 = Global_96913;
	}
	unk_0x96B68C67633472DC(joaat("num_missions_completed"), Global_96909, 1);
	unk_0x96B68C67633472DC(joaat("num_missions_available"), Global_96892, 1);
	unk_0x96B68C67633472DC(joaat("num_minigames_completed"), Global_96910, 1);
	unk_0x96B68C67633472DC(joaat("num_minigames_available"), Global_96893, 1);
	unk_0x96B68C67633472DC(joaat("num_oddjobs_completed"), Global_96911, 1);
	unk_0x96B68C67633472DC(joaat("num_oddjobs_available"), Global_96894, 1);
	unk_0x96B68C67633472DC(joaat("num_rndpeople_completed"), Global_96912, 1);
	unk_0x96B68C67633472DC(joaat("num_rndpeople_available"), Global_96895, 1);
	unk_0x96B68C67633472DC(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x96B68C67633472DC(joaat("num_rndevents_available"), Global_96899, 1);
	unk_0x96B68C67633472DC(joaat("num_misc_completed"), (Global_96915 + Global_96914), 1);
	unk_0x96B68C67633472DC(joaat("num_misc_available"), (Global_96898 + Global_96897), 1);
	Global_96916 = (Global_96909 * 100 / Global_96892);
	Global_96918 = ((Global_96911 + Global_96910) * 100 / (Global_96894 + Global_96893));
	Global_96917 = ((Global_96912 + iVar9) * 100 / (Global_96895 + Global_96899));
	Global_96919 = ((Global_96914 + Global_96915) * 100 / (Global_96897 + Global_96898));
	unk_0xCD9157C8F655290A(joaat("total_progress_made"), Global_97173.f_8415.f_3853, 1);
	unk_0x96B68C67633472DC(joaat("percent_story_missions"), Global_96916, 1);
	unk_0x96B68C67633472DC(joaat("percent_ambient_missions"), Global_96917, 1);
	unk_0x96B68C67633472DC(joaat("percent_oddjobs"), Global_96918, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_97173.f_8415.f_3853))
	{
		func_83(13, unk_0xF34EE736CF047844(Global_97173.f_8415.f_3853));
	}
	if (!unk_0x557C97BA9C4CE8E1())
	{
		if (!Global_68067)
		{
			if (func_82() == 2 == 0 && !unk_0xD95428C8AA1DBBF2())
			{
				if (unk_0x5F65F01B2E04B349())
				{
					Global_96907 = 0;
				}
				if (!Global_54572)
				{
					func_76();
				}
			}
		}
	}
}

int func_82()
{
	return Global_24444;
}

int func_83(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 61)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0xF81DDE50AEEE85CC(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xC190BD464AD91623(iParam0, iParam1);
	}
	return 0;
}

int func_84(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	
	if (iParam2 == -1)
	{
		iParam2 = func_85();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0xA207790667DAE5A1((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x3216D1FFC9DAD41E((iParam0 - 0)) * 64);
		iVar0 = unk_0x3F6A3CBDC7B68B4A(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0xA207790667DAE5A1((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x3216D1FFC9DAD41E((iParam0 - 192)) * 64);
		iVar0 = unk_0x3F6A3CBDC7B68B4A(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0xA207790667DAE5A1((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x3216D1FFC9DAD41E((iParam0 - 513)) * 64);
		iVar0 = unk_0x3F6A3CBDC7B68B4A(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0xA207790667DAE5A1((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x3216D1FFC9DAD41E((iParam0 - 705)) * 64);
		iVar0 = unk_0x3F6A3CBDC7B68B4A(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x2E32FF1D139F1210((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x3216D1FFC9DAD41E((iParam0 - 3111)) * 64);
		iVar0 = unk_0x3F6A3CBDC7B68B4A(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x2E32FF1D139F1210((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x3216D1FFC9DAD41E((iParam0 - 2919)) * 64);
		iVar0 = unk_0x3F6A3CBDC7B68B4A(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x6E59129DA6C486E4((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x3216D1FFC9DAD41E((iParam0 - 4207)) * 64);
		iVar0 = unk_0x3F6A3CBDC7B68B4A(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x6E59129DA6C486E4((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x3216D1FFC9DAD41E((iParam0 - 4335)) * 64);
		iVar0 = unk_0x3F6A3CBDC7B68B4A(uVar9, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_85()
{
	return Global_1312736;
}

int func_86(int iParam0, int iParam1)
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

int func_87(int iParam0)
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

void func_88(int iParam0)
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
		unk_0x3DBE2A7AF9E71C82(&(Global_97173.f_23602.f_150[iVar1]), iVar0);
	}
}

void func_89(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_90(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_90(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0xA858564DC37EED5E(sParam0, ""))
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
	while (iVar0 < Global_97173.f_23602.f_145)
	{
		if (unk_0xA858564DC37EED5E(&(Global_97173.f_23602[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_97173.f_23602.f_145 < 9)
	{
		StringCopy(&(Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_4), sParam1, 16);
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_8 = (unk_0xF976C624234A4AA8() + iParam3);
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_9 = iParam5;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_11 = iParam6;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_12 = uParam2;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_13 = iParam7;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_14 = iParam8;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_10 = ((unk_0xF976C624234A4AA8() + iParam3) + iParam4);
		}
		else
		{
			Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_10 = -1;
		}
		Global_97173.f_23602.f_145++;
		func_91();
	}
}

void func_91()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_97173.f_23602.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_97173.f_23602.f_145)
	{
		if (unk_0x61D8FEAF64881CDA(Global_97173.f_23602[iVar0 /*16*/].f_11, 0))
		{
			if (Global_97173.f_23602[iVar0 /*16*/].f_12 > Global_97173.f_23602.f_146[0])
			{
				Global_97173.f_23602.f_146[0] = Global_97173.f_23602[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x61D8FEAF64881CDA(Global_97173.f_23602[iVar0 /*16*/].f_11, 1))
		{
			if (Global_97173.f_23602[iVar0 /*16*/].f_12 > Global_97173.f_23602.f_146[1])
			{
				Global_97173.f_23602.f_146[1] = Global_97173.f_23602[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x61D8FEAF64881CDA(Global_97173.f_23602[iVar0 /*16*/].f_11, 2))
		{
			if (Global_97173.f_23602[iVar0 /*16*/].f_12 > Global_97173.f_23602.f_146[2])
			{
				Global_97173.f_23602.f_146[2] = Global_97173.f_23602[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_92()
{
	func_20();
	switch (Global_97173.f_1729.f_539.f_3213)
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

int func_93(int iParam0)
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
		return unk_0x61D8FEAF64881CDA(Global_97173.f_23602.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_94(int iParam0, int iParam1)
{
	unk_0x3DBE2A7AF9E71C82(&(Global_97173.f_28117.f_8[iParam0]), iParam1);
}

int func_95(int iParam0)
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

int func_96()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0x3ED5FA3F61EC9E68(), 64);
	uVar16 = func_97(Var0);
	return uVar16;
}

int func_97(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x3BA42EA02A10243D(&cParam0))
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

int func_98()
{
	if (Global_24679)
	{
		func_79(4);
		return 1;
	}
	return 0;
}

void func_99()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iLocal_48 != 5)
	{
		iLocal_48 = 5;
	}
	if (unk_0xD361727124133DF3(uLocal_359))
	{
		unk_0xA0A65B537B1F11EC(&uLocal_359);
	}
	switch (iLocal_368)
	{
		case 0:
			if (!unk_0x9F94F2CFDCA78C55(iLocal_85))
			{
				unk_0xA859D289EEB2D72A(iLocal_85, unk_0x507DA4994C3D8EBD(), 300f, -1, 0, 0);
			}
			iVar0 = 0;
			while (iVar0 < Local_203.f_0)
			{
				if (unk_0xFD68187442384158(Local_203[iVar0 /*18*/]))
				{
					if (unk_0x19F2D2C58150C825(Local_203[iVar0 /*18*/]) && unk_0xB7A628320EFF8E47(unk_0xBF1B13057E5119A4(Local_203[iVar0 /*18*/], 1), unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1)) > 900f)
					{
						if (unk_0xFD68187442384158(Local_203[iVar0 /*18*/].f_2))
						{
							unk_0x4095FD029041DD48(&(Local_203[iVar0 /*18*/].f_2));
						}
						unk_0x8019BB3BA236A900(&(Local_203[iVar0 /*18*/]));
					}
				}
				if (unk_0xD361727124133DF3(Local_203[iVar0 /*18*/].f_1))
				{
					unk_0xA0A65B537B1F11EC(&(Local_203[iVar0 /*18*/].f_1));
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < Local_130.f_0)
			{
				if (unk_0xFD68187442384158(Local_130[iVar0 /*18*/]))
				{
					if (unk_0x19F2D2C58150C825(Local_130[iVar0 /*18*/]) && unk_0xB7A628320EFF8E47(unk_0xBF1B13057E5119A4(Local_130[iVar0 /*18*/], 1), unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1)) > 900f)
					{
						unk_0x10EA498723DC5A09(&(Local_130[iVar0 /*18*/]));
					}
				}
				if (unk_0xD361727124133DF3(Local_130[iVar0 /*18*/].f_1))
				{
					unk_0xA0A65B537B1F11EC(&(Local_130[iVar0 /*18*/].f_1));
				}
				iVar0++;
			}
			unk_0xC1B1E9A034A63A62(0);
			iLocal_672 = 0;
			iLocal_368++;
			break;
		
		case 1:
			iVar1 = 0;
			iVar0 = 0;
			while (iVar0 < Local_203.f_0)
			{
				if ((unk_0xFD68187442384158(Local_203[iVar0 /*18*/]) && !unk_0x9F94F2CFDCA78C55(Local_203[iVar0 /*18*/])) && !unk_0xE5D56342B0FF1D0D(Local_203[iVar0 /*18*/]))
				{
					iVar1++;
					func_46(unk_0x507DA4994C3D8EBD(), iVar0);
					if (unk_0x19F2D2C58150C825(Local_203[iVar0 /*18*/]) && unk_0xB7A628320EFF8E47(unk_0xBF1B13057E5119A4(Local_203[iVar0 /*18*/], 1), unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1)) > 2500f)
					{
						if (unk_0xFD68187442384158(Local_203[iVar0 /*18*/].f_2))
						{
							unk_0x4095FD029041DD48(&(Local_203[iVar0 /*18*/].f_2));
						}
						unk_0x8019BB3BA236A900(&(Local_203[iVar0 /*18*/]));
					}
				}
				iVar0++;
			}
			if (!iLocal_672)
			{
				if (unk_0xB7A628320EFF8E47(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), unk_0xBF1B13057E5119A4(func_64(), 1)) < 100f)
				{
					iVar2 = unk_0x4D3E68F73B727E49(0, 3);
					if (func_19() == 1)
					{
						func_18(&Local_394, 6);
						func_18(&Local_394, 7);
						func_18(&Local_394, 8);
						switch (iVar2)
						{
							case 0:
								func_17(&Local_394, 6, func_64(), "PAP1ESCAPE", 0, 1);
								if (unk_0xFD68187442384158(Local_394[6 /*10*/]) && !unk_0x9F94F2CFDCA78C55(Local_394[6 /*10*/]))
								{
									if (func_5(&Local_394, cLocal_371, "REPAP_PAP1", 4, 0, 0, 0))
									{
										iLocal_672 = 1;
									}
								}
								break;
							
							case 1:
								func_17(&Local_394, 7, func_64(), "PAP2ESCAPE", 0, 1);
								if (unk_0xFD68187442384158(Local_394[7 /*10*/]) && !unk_0x9F94F2CFDCA78C55(Local_394[7 /*10*/]))
								{
									if (func_5(&Local_394, cLocal_371, "REPAP_PAP2", 4, 0, 0, 0))
									{
										iLocal_672 = 1;
									}
								}
								break;
							
							case 2:
								func_17(&Local_394, 8, func_64(), "PAP3ESCAPE", 0, 1);
								if (unk_0xFD68187442384158(Local_394[8 /*10*/]) && !unk_0x9F94F2CFDCA78C55(Local_394[8 /*10*/]))
								{
									if (func_5(&Local_394, cLocal_371, "REPAP_PAP3", 4, 0, 0, 0))
									{
										iLocal_672 = 1;
									}
								}
								break;
						}
					}
					else if (func_19() == 2)
					{
						func_18(&Local_394, 6);
						func_18(&Local_394, 5);
						iVar2 = unk_0x4D3E68F73B727E49(0, 3);
						switch (iVar2)
						{
							case 0:
								func_17(&Local_394, 6, func_64(), "PAP1ESCAPE", 0, 1);
								if (unk_0xFD68187442384158(Local_394[iVar2 /*10*/]) && !unk_0x9F94F2CFDCA78C55(Local_394[iVar2 /*10*/]))
								{
									if (func_5(&Local_394, cLocal_371, "REPAP_TAKE1T", 4, 0, 0, 0))
									{
										iLocal_672 = 1;
									}
								}
								break;
							
							case 1:
								func_17(&Local_394, 5, func_64(), "PAP2ESCAPE", 0, 1);
								if (unk_0xFD68187442384158(Local_394[iVar2 /*10*/]) && !unk_0x9F94F2CFDCA78C55(Local_394[iVar2 /*10*/]))
								{
									if (func_5(&Local_394, cLocal_371, "REPAP_TAKE2T", 4, 0, 0, 0))
									{
										iLocal_672 = 1;
									}
								}
								break;
							
							case 2:
								func_17(&Local_394, 5, func_64(), "PAP2ESCAPE", 0, 1);
								if (unk_0xFD68187442384158(Local_394[iVar2 /*10*/]) && !unk_0x9F94F2CFDCA78C55(Local_394[iVar2 /*10*/]))
								{
									if (func_5(&Local_394, cLocal_371, "REPAP_TAKE2T", 4, 0, 0, 0))
									{
										iLocal_672 = 1;
									}
								}
								break;
						}
					}
					else
					{
						func_18(&Local_394, 6);
						func_18(&Local_394, 5);
						iVar2 = unk_0x4D3E68F73B727E49(0, 3);
						switch (iVar2)
						{
							case 0:
								func_17(&Local_394, 6, func_64(), "PAP1ESCAPE", 0, 1);
								if (unk_0xFD68187442384158(Local_394[iVar2 /*10*/]) && !unk_0x9F94F2CFDCA78C55(Local_394[iVar2 /*10*/]))
								{
									if (func_5(&Local_394, cLocal_371, "REPAP_TAKE1M", 4, 0, 0, 0))
									{
										iLocal_672 = 1;
									}
								}
								break;
							
							case 1:
								func_17(&Local_394, 5, func_64(), "PAP2ESCAPE", 0, 1);
								if (unk_0xFD68187442384158(Local_394[iVar2 /*10*/]) && !unk_0x9F94F2CFDCA78C55(Local_394[iVar2 /*10*/]))
								{
									if (func_5(&Local_394, cLocal_371, "REPAP_TAKE2M", 4, 0, 0, 0))
									{
										iLocal_672 = 1;
									}
								}
								break;
							
							case 2:
								func_17(&Local_394, 5, func_64(), "PAP2ESCAPE", 0, 1);
								if (unk_0xFD68187442384158(Local_394[iVar2 /*10*/]) && !unk_0x9F94F2CFDCA78C55(Local_394[iVar2 /*10*/]))
								{
									if (func_5(&Local_394, cLocal_371, "REPAP_TAKE2M", 4, 0, 0, 0))
									{
										iLocal_672 = 1;
									}
								}
								break;
							}
						}
					}
			}
			if (func_66())
			{
				func_183();
				func_267();
			}
			if (iVar1 == 0)
			{
				func_267();
			}
			break;
	}
}

void func_100(char* sParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	
	if (iLocal_48 != 5)
	{
		iLocal_48 = 5;
	}
	if (!iLocal_671)
	{
		iVar0 = 0;
		while (iVar0 < Local_203.f_0)
		{
			if (unk_0xFD68187442384158(Local_203[iVar0 /*18*/]) && !unk_0x9F94F2CFDCA78C55(Local_203[iVar0 /*18*/]))
			{
				unk_0xAC57FBF981AB03F4(Local_203[iVar0 /*18*/]);
				Local_203[iVar0 /*18*/].f_16 = 2;
			}
			iVar0++;
		}
		iLocal_671 = 1;
	}
	iVar0 = 0;
	while (iVar0 < Local_203.f_0)
	{
		if (unk_0xD361727124133DF3(Local_203[iVar0 /*18*/].f_1))
		{
			unk_0xA0A65B537B1F11EC(&(Local_203[iVar0 /*18*/].f_1));
		}
		if (unk_0xFD68187442384158(Local_203[iVar0 /*18*/]))
		{
			if (!unk_0x9F94F2CFDCA78C55(Local_203[iVar0 /*18*/]))
			{
				iVar1++;
				if (!unk_0x9F94F2CFDCA78C55(iLocal_85))
				{
					if (unk_0x2A24448FF232F834(Local_203[iVar0 /*18*/], 0))
					{
						unk_0x48367A1F7C9A1041(Local_203[iVar0 /*18*/], 0, 0);
					}
					else
					{
						func_46(iLocal_85, iVar0);
					}
				}
				else if (unk_0xEC043AB2FEE0E94F(Local_203[iVar0 /*18*/], -1146898486) != 1)
				{
					unk_0xB68382181B4C4177(Local_203[iVar0 /*18*/], 1193033728, 0);
				}
			}
			if ((unk_0x19F2D2C58150C825(Local_203[iVar0 /*18*/]) && unk_0xB7A628320EFF8E47(unk_0xBF1B13057E5119A4(Local_203[iVar0 /*18*/], 1), unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1)) > 400f) && unk_0xB7A628320EFF8E47(unk_0xBF1B13057E5119A4(Local_203[iVar0 /*18*/], 1), unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1)) > 400f)
			{
				unk_0x8019BB3BA236A900(&(Local_203[iVar0 /*18*/]));
				if (unk_0xFD68187442384158(Local_203[iVar0 /*18*/].f_2))
				{
					unk_0x4095FD029041DD48(&(Local_203[iVar0 /*18*/].f_2));
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_130.f_0)
	{
		if (unk_0xFD68187442384158(Local_130[iVar0 /*18*/]))
		{
			if ((unk_0x19F2D2C58150C825(Local_130[iVar0 /*18*/]) && unk_0xB7A628320EFF8E47(unk_0xBF1B13057E5119A4(Local_130[iVar0 /*18*/], 1), unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1)) > 2500f) && func_52(Local_130[iVar0 /*18*/], 0, 0, 0))
			{
				unk_0xB67623A401171555(&(Local_130[iVar0 /*18*/]));
			}
		}
		if (unk_0xD361727124133DF3(Local_130[iVar0 /*18*/].f_1))
		{
			unk_0xA0A65B537B1F11EC(&(Local_130[iVar0 /*18*/].f_1));
		}
		iVar0++;
	}
	if (unk_0xFD68187442384158(iLocal_85))
	{
		if (unk_0x19F2D2C58150C825(iLocal_85) && unk_0xB7A628320EFF8E47(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), Local_62) > 2500f)
		{
			unk_0xCA4DD92F1F2931F3(&iLocal_85);
			func_267();
		}
	}
	if (func_66() || func_67(iLocal_85, 1, 1))
	{
		func_171(5);
	}
	iVar0 = 0;
	while (iVar0 < Local_203.f_0)
	{
		if (unk_0xFD68187442384158(Local_203[iVar0 /*18*/]))
		{
			if (!unk_0x9F94F2CFDCA78C55(Local_203[iVar0 /*18*/]))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	switch (iLocal_368)
	{
		case 0:
			if (unk_0xD361727124133DF3(uLocal_359))
			{
				unk_0xA0A65B537B1F11EC(&uLocal_359);
			}
			if (unk_0xD361727124133DF3(uLocal_360))
			{
				unk_0xA0A65B537B1F11EC(&uLocal_360);
			}
			if (!unk_0x9F94F2CFDCA78C55(iLocal_85))
			{
				unk_0xAC57FBF981AB03F4(iLocal_85);
				unk_0xD156A7AA30AC555A(iLocal_85, 3f);
			}
			func_101();
			if (unk_0x2A488C176D52CCA5(Local_59, Local_62) < 30f)
			{
				if (func_5(&Local_394, cLocal_371, sParam0, 4, 0, 0, 0))
				{
					iVar0 = 0;
					while (iVar0 < Local_203.f_0)
					{
						if (unk_0xFD68187442384158(Local_203[iVar0 /*18*/]))
						{
							if (!unk_0x9F94F2CFDCA78C55(Local_203[iVar0 /*18*/]))
							{
								unk_0xAC57FBF981AB03F4(Local_203[iVar0 /*18*/]);
							}
						}
						iVar0++;
					}
					iLocal_368++;
				}
			}
			else
			{
				iVar0 = 0;
				while (iVar0 < Local_203.f_0)
				{
					if (unk_0xFD68187442384158(Local_203[iVar0 /*18*/]))
					{
						if (!unk_0x9F94F2CFDCA78C55(Local_203[iVar0 /*18*/]))
						{
							unk_0xAC57FBF981AB03F4(Local_203[iVar0 /*18*/]);
						}
					}
					iVar0++;
				}
				iLocal_368++;
			}
			break;
		
		case 1:
			if (((unk_0xCA8794CE207FC6D5(iLocal_90, 0) && unk_0x53170344050F2301(iLocal_85, iLocal_90, 0)) && !bLocal_367) && unk_0xC51FBEBD87CFD69C(iLocal_90, -1))
			{
				if (unk_0x2A488C176D52CCA5(Local_62, Local_52) < 100f)
				{
					unk_0xB5DC017AFD430D1B(&uVar2);
					unk_0x1DE8910EDFD23539(0, iLocal_90);
					unk_0x5E44C1186E137E21(0, iLocal_90, Local_52, 20f, 0, joaat("serrano"), 786599, 10f, 10f);
					unk_0x52AC38C099F0E2E2(0, iLocal_90, Local_52, 288.7089f, 1, 50f, 0);
					unk_0xFF2E41BCADB4BDD3(0, iLocal_90, unk_0xBF1B13057E5119A4(iLocal_90, 1), 5, 10f, 262144, 2f, 2f, 1);
					unk_0x9632B185BE7E73E6(0, iLocal_90, 0);
					unk_0x3F07E364A21EBC20(0, Local_55, 1f, -1, 0.25f, 512, fLocal_58);
					unk_0x371C90C63129A983(0, "WORLD_HUMAN_SMOKING", 0, 1);
					unk_0x6EE8A5CF9AC75F12(uVar2);
					unk_0x8229311A391A4EC6(iLocal_85, uVar2);
					unk_0x9F77DFFC61FCB68C(&uVar2);
				}
				else
				{
					unk_0xB5DC017AFD430D1B(&uVar3);
					unk_0x1DE8910EDFD23539(0, iLocal_90);
					unk_0xF40D4EBDC0BA2C26(0, iLocal_90, 15f, 786468);
					unk_0x6EE8A5CF9AC75F12(uVar3);
					unk_0x8229311A391A4EC6(iLocal_85, uVar3);
					unk_0x9F77DFFC61FCB68C(&uVar3);
				}
				iLocal_368 = 1000;
			}
			else
			{
				if (unk_0x2A24448FF232F834(iLocal_85, 0))
				{
					unk_0x48367A1F7C9A1041(iLocal_85, 0, 0);
				}
				iLocal_368++;
			}
			break;
		
		case 2:
			if (iVar1 > 0)
			{
				unk_0xA859D289EEB2D72A(iLocal_85, unk_0x507DA4994C3D8EBD(), 3000f, -1, 1, 0);
				iLocal_368 = 1000;
			}
			else
			{
				if (unk_0x2A488C176D52CCA5(Local_62, Local_52) < 100f)
				{
					unk_0xB5DC017AFD430D1B(&uVar4);
					unk_0x3F07E364A21EBC20(0, Local_55, 1f, -1, 0.25f, 512, fLocal_58);
					unk_0x371C90C63129A983(0, "WORLD_HUMAN_SMOKING", 0, 1);
					unk_0x6EE8A5CF9AC75F12(uVar4);
					unk_0x8229311A391A4EC6(iLocal_85, uVar4);
					unk_0x9F77DFFC61FCB68C(&uVar4);
				}
				else
				{
					unk_0xB68382181B4C4177(iLocal_85, 1193033728, 0);
				}
				iLocal_368 = 1000;
			}
			break;
		
		case 1000:
			if (iVar1 == 0)
			{
				func_267();
			}
			break;
	}
}

void func_101()
{
	Global_14558 = 0;
	func_102();
}

void func_102()
{
	unk_0xA2A4AD85BA2F7ADD();
	Global_16703 = 0;
	if (unk_0xF611D1BB58990143())
	{
		unk_0xD858EC6FECDB4B3F(0);
		Global_15692 = 6;
	}
}

void func_103()
{
	func_101();
	if (!unk_0x9F94F2CFDCA78C55(iLocal_85) && unk_0xB7A628320EFF8E47(Local_59, Local_62) < 900f)
	{
		unk_0xAC57FBF981AB03F4(iLocal_85);
		if (func_5(&Local_394, cLocal_371, "REPAP_CRZY", 4, 0, 0, 0))
		{
			func_183();
			func_171(10);
		}
		unk_0xE440546F94B26235(iLocal_85, -2065892691);
	}
	else
	{
		func_183();
		func_171(10);
	}
}

void func_104()
{
	var uVar0;
	
	switch (iLocal_368)
	{
		case 0:
			func_132();
			if (!unk_0x9F94F2CFDCA78C55(iLocal_85))
			{
				if (!unk_0xD361727124133DF3(uLocal_359))
				{
					uLocal_359 = func_173(iLocal_85, 0, 145);
				}
				if (unk_0xD361727124133DF3(uLocal_362))
				{
					unk_0xA0A65B537B1F11EC(&uLocal_362);
				}
				if (unk_0xD361727124133DF3(uLocal_361))
				{
					unk_0xA0A65B537B1F11EC(&uLocal_361);
				}
				unk_0xAC57FBF981AB03F4(iLocal_85);
				unk_0xB5DC017AFD430D1B(&uVar0);
				unk_0x9632B185BE7E73E6(0, iLocal_90, 0);
				unk_0x3F07E364A21EBC20(0, Local_55, 1f, 30000, 0.25f, 512, fLocal_58);
				unk_0x371C90C63129A983(0, "WORLD_HUMAN_SMOKING", 0, 1);
				unk_0x6EE8A5CF9AC75F12(uVar0);
				unk_0x8229311A391A4EC6(iLocal_85, uVar0);
				unk_0x9F77DFFC61FCB68C(&uVar0);
				if (unk_0xBE55B130951EF5CA(iLocal_85))
				{
					unk_0xA2A854DDCAB3A06F(iLocal_85);
				}
				func_101();
				iLocal_368++;
			}
			break;
		
		case 1:
			if (!func_72() && !unk_0x9F94F2CFDCA78C55(iLocal_85))
			{
				if (unk_0x594EB70937EC1486(iLocal_85, Local_55, 3f, 3f, 3f, 0, 1, 0) && unk_0x594EB70937EC1486(unk_0x507DA4994C3D8EBD(), Local_55, 5f, 5f, 5f, 0, 1, 0))
				{
					iLocal_368++;
				}
			}
			break;
		
		case 2:
			if (!unk_0x9F94F2CFDCA78C55(iLocal_85))
			{
				func_131(0);
				if (func_5(&Local_394, cLocal_371, "REPAP_THK", 4, 0, 0, 0))
				{
					func_106(func_19(), 1, 150, 0, 1);
					iLocal_368++;
				}
			}
			break;
		
		case 3:
			if (!func_72() && !unk_0x9F94F2CFDCA78C55(iLocal_85))
			{
				unk_0xC1B1E9A034A63A62(0);
				iLocal_368++;
			}
			break;
		
		case 4:
			if (unk_0x83666F9FB8FEBD4B() > 2000)
			{
				if (func_105())
				{
					func_74();
				}
			}
			break;
	}
}

int func_105()
{
	return 1;
}

void func_106(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (Global_97173.f_29699[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_97173.f_29699[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_107(Global_97173.f_29699[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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
		unk_0x55FFE396AA3CA77A(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0x96B68C67633472DC(iVar1, iVar0, 1);
	}
}

int func_107(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_130();
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
					func_129(99, 1);
					func_128(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_128(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_128(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_115(0);
			switch (iParam2)
			{
				case 125:
				case 127:
				case 123:
				case 124:
				case 126:
					if (func_114(5))
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
							func_128(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_128(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_128(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_114(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_128(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_128(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_128(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_128(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_128(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_128(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 97:
				case 98:
				case 99:
				case 100:
				case 102:
				case 103:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
					switch (iParam0)
					{
						case 0:
							func_128(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_128(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_128(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x00ADB26EA48763F7())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_128(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_128(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_128(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_128(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_128(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_128(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_114(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_128(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_128(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_128(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_128(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_128(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_128(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_113(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_129(95, iParam3);
					break;
				
				case 1:
					func_129(97, iParam3);
					break;
				
				case 2:
					func_129(96, iParam3);
					break;
			}
			func_129(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_110(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_110(iVar1);
	}
	iVar5 = (Global_51747[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_51747[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_51747[iVar2] = 2147483647;
				}
				else
				{
					Global_51747[iVar2] = (Global_51747[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_128(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_128(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_128(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_51747[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_51747[iVar2];
			Global_51747[iVar2] = (Global_51747[iVar2] - iParam3);
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
		Global_97173.f_23756.f_233[iVar2 /*69*/].f_2[Global_97173.f_23756.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_97173.f_23756.f_233[iVar2 /*69*/].f_2[Global_97173.f_23756.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_97173.f_23756.f_233[iVar2 /*69*/].f_2[Global_97173.f_23756.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_97173.f_23756.f_233[iVar2 /*69*/]++;
		Global_97173.f_23756.f_233[iVar2 /*69*/].f_1++;
		if (Global_97173.f_23756.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_97173.f_23756.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_109(iParam0);
	if (Global_34909 == 15)
	{
		func_108(0);
	}
	return 1;
}

void func_108(bool bParam0)
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
			Global_97173.f_23756.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_97173.f_23756.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_97173.f_23756.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_97173.f_23756.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_97173.f_23756.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_97173.f_23756.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_51755[iVar0 /*3*/][0] = Global_97173.f_23756[iVar0];
		Global_51755.f_31[iVar0 /*3*/][0] = Global_97173.f_23756.f_11[iVar0];
		Global_51755.f_62[iVar0 /*3*/][0] = Global_97173.f_23756.f_22[iVar0];
		Global_51755.f_93[iVar0 /*3*/][0] = Global_97173.f_23756.f_33[iVar0];
		Global_51755.f_124[iVar0 /*3*/][0] = Global_97173.f_23756.f_44[iVar0];
		Global_51755.f_155[iVar0 /*3*/][0] = Global_97173.f_23756.f_55[iVar0];
		Global_51755.f_186[iVar0 /*3*/][0] = Global_97173.f_23756.f_66[iVar0];
		Global_51755.f_217[iVar0 /*3*/][0] = Global_97173.f_23756.f_77[iVar0];
		Global_51755.f_248[iVar0 /*3*/][0] = Global_97173.f_23756.f_88[iVar0];
		if (!bParam0)
		{
			Global_51755[iVar0 /*3*/][1] = Global_97173.f_23756[iVar0];
			Global_51755.f_31[iVar0 /*3*/][1] = Global_97173.f_23756.f_11[iVar0];
			Global_51755.f_62[iVar0 /*3*/][1] = Global_97173.f_23756.f_22[iVar0];
			Global_51755.f_93[iVar0 /*3*/][1] = Global_97173.f_23756.f_33[iVar0];
			Global_51755.f_124[iVar0 /*3*/][1] = Global_97173.f_23756.f_44[iVar0];
			Global_51755.f_155[iVar0 /*3*/][1] = Global_97173.f_23756.f_55[iVar0];
			Global_51755.f_186[iVar0 /*3*/][1] = Global_97173.f_23756.f_66[iVar0];
			Global_51755.f_217[iVar0 /*3*/][1] = Global_97173.f_23756.f_77[iVar0];
			Global_51755.f_248[iVar0 /*3*/][1] = Global_97173.f_23756.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_109(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_51747[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x96B68C67633472DC(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x96B68C67633472DC(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x96B68C67633472DC(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_110(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0xD95428C8AA1DBBF2())
	{
		if (unk_0x61D8FEAF64881CDA(Global_97173.f_23756.f_471, iParam0))
		{
			bVar0 = true;
			unk_0xCD27BF29FB9012E2(&(Global_97173.f_23756.f_471), iParam0);
		}
	}
	else if (unk_0x61D8FEAF64881CDA(Global_97173.f_23756.f_471, iParam0) || unk_0x61D8FEAF64881CDA(Global_2097152[func_112() /*8053*/].f_5756.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xCD27BF29FB9012E2(&(Global_97173.f_23756.f_471), iParam0);
		unk_0xCD27BF29FB9012E2(&(Global_2097152[func_112() /*8053*/].f_5756.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x82FD00B995993186("COUP_RED");
		unk_0x923B18EB34FC2117(func_111(iParam0));
		unk_0x054BCC5519168683(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_111(int iParam0)
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
		
		default:
	}
	return "";
}

int func_112()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_113(int iParam0)
{
	func_129(93, iParam0);
	func_129(29, iParam0);
	func_129(30, iParam0);
}

bool func_114(int iParam0)
{
	if (!unk_0xD95428C8AA1DBBF2())
	{
		return unk_0x61D8FEAF64881CDA(Global_97173.f_23756.f_471, iParam0);
	}
	return unk_0x61D8FEAF64881CDA(Global_2097152[func_112() /*8053*/].f_5756.f_10, iParam0);
}

int func_115(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0xC91582A6D1E6CE38(27))
	{
		return 0;
	}
	if (unk_0x55FFE396AA3CA77A(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x55FFE396AA3CA77A(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x55FFE396AA3CA77A(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x55FFE396AA3CA77A(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x96B68C67633472DC(joaat("num_cash_spent"), iVar1, 1);
		func_83(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_116(27, 1);
	return 1;
}

int func_116(int iParam0, int iParam1)
{
	if (iParam0 >= 61)
	{
		return 0;
	}
	return func_117(iParam0, iParam1);
}

int func_117(int iParam0, int iParam1)
{
	if (unk_0xC91582A6D1E6CE38(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_24690 != 0 && !Global_68067)
	{
		return 0;
	}
	if (func_127(&Global_2543759))
	{
		if (func_125(&Global_2543759, iParam0))
		{
			return 0;
		}
		if (func_118(&Global_2543759, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0xB13535CD55ADA8AF(iParam0))
		{
			return 0;
		}
		if (unk_0xC91582A6D1E6CE38(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_118(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[61];
	
	if (unk_0xC91582A6D1E6CE38(iParam1))
	{
		return 0;
	}
	if (func_125(uParam0, iParam1))
	{
		return 0;
	}
	func_121(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_119(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_119(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0xC91582A6D1E6CE38(iParam1))
	{
		return 0;
	}
	if (func_125(uParam0, iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_120(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_120(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 61;
}

void func_121(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_124(uParam0, iVar0);
		iVar0++;
	}
	func_122(&(uParam0->f_62), (8f - 0.5f));
}

void func_122(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_123() - fParam1);
	unk_0x3DBE2A7AF9E71C82(uParam0, 1);
	unk_0xCD27BF29FB9012E2(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_123()
{
	int iVar0;
	
	if (unk_0xD95428C8AA1DBBF2())
	{
		iVar0 = unk_0xFACC0E85E40AD425();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0xF976C624234A4AA8()) / 1000f);
}

void func_124(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 61;
}

bool func_125(var uParam0, int iParam1)
{
	return func_126(uParam0, iParam1) != -1;
}

int func_126(var uParam0, int iParam1)
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

bool func_127(var uParam0)
{
	return uParam0->f_68 == 1;
}

void func_128(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x55FFE396AA3CA77A(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x96B68C67633472DC(iParam0, iVar0, 1);
}

void func_129(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_50315[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0xD95428C8AA1DBBF2())
	{
		return;
	}
	if (Global_50315[iParam0 /*7*/])
	{
		unk_0x55FFE396AA3CA77A(Global_50315[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x96B68C67633472DC(Global_50315[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_130()
{
	int iVar0;
	
	if (unk_0xA730AA29D1C70932())
	{
		unk_0x55FFE396AA3CA77A(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_51747[0] == iVar0)
		{
			Global_51747[0] = iVar0;
		}
		unk_0x55FFE396AA3CA77A(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_51747[1] == iVar0)
		{
			Global_51747[1] = iVar0;
		}
		unk_0x55FFE396AA3CA77A(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_51747[2] == iVar0)
		{
			Global_51747[2] = iVar0;
		}
	}
}

void func_131(bool bParam0)
{
	if (!unk_0x9F94F2CFDCA78C55(iLocal_85))
	{
		if (iLocal_620 > 1)
		{
			if (!unk_0x849DBD2D635C99D5(iLocal_85, unk_0x507DA4994C3D8EBD(), 60f))
			{
				iLocal_620 = 0;
				iLocal_621 = 0;
			}
		}
		switch (iLocal_620)
		{
			case 0:
				unk_0xAC57FBF981AB03F4(iLocal_85);
				unk_0x8E759206778E571F(iLocal_85, unk_0x507DA4994C3D8EBD(), -1, 16, 2);
				unk_0xB5DC017AFD430D1B(&uLocal_619);
				unk_0xDE75E9DE5B6221E1(0, unk_0x507DA4994C3D8EBD(), 0);
				unk_0x8E759206778E571F(0, unk_0x507DA4994C3D8EBD(), -1, 16, 2);
				unk_0x6EE8A5CF9AC75F12(uLocal_619);
				unk_0x8229311A391A4EC6(iLocal_85, uLocal_619);
				unk_0x9F77DFFC61FCB68C(&uLocal_619);
				iLocal_620++;
				break;
			
			case 1:
				if (unk_0xEC043AB2FEE0E94F(iLocal_85, 242628503) != 1)
				{
					iLocal_620++;
				}
				break;
			
			case 2:
				if (bParam0)
				{
					switch (iLocal_621)
					{
						case 0:
							if (!unk_0x22605DE2E6933CF2(iLocal_85, "random@paparazzi@wait", "wait_a", 3))
							{
								unk_0xEC0A546609840086(iLocal_85, "random@paparazzi@wait", "wait_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
							}
							else if (unk_0x5132EC78980FBED7(iLocal_85, "random@paparazzi@wait", "wait_a") > 0.95f)
							{
								unk_0xEC0A546609840086(iLocal_85, "random@paparazzi@wait", "wait_b", 4f, -4f, -1, 0, 0, 0, 0, 0);
								iLocal_621++;
							}
							break;
						
						case 1:
							if (!unk_0x22605DE2E6933CF2(iLocal_85, "random@paparazzi@wait", "wait_b", 3))
							{
								unk_0xEC0A546609840086(iLocal_85, "random@paparazzi@wait", "wait_b", 4f, -4f, -1, 0, 0, 0, 0, 0);
							}
							else if (unk_0x5132EC78980FBED7(iLocal_85, "random@paparazzi@wait", "wait_b") > 0.95f)
							{
								unk_0xEC0A546609840086(iLocal_85, "random@paparazzi@wait", "wait_c", 4f, -4f, -1, 0, 0, 0, 0, 0);
								iLocal_621++;
							}
							break;
						
						case 2:
							if (!unk_0x22605DE2E6933CF2(iLocal_85, "random@paparazzi@wait", "wait_c", 3))
							{
								unk_0xEC0A546609840086(iLocal_85, "random@paparazzi@wait", "wait_c", 4f, -4f, -1, 0, 0, 0, 0, 0);
							}
							else if (unk_0x5132EC78980FBED7(iLocal_85, "random@paparazzi@wait", "wait_c") > 0.95f)
							{
								unk_0xEC0A546609840086(iLocal_85, "random@paparazzi@wait", "wait_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
								iLocal_621 = 0;
							}
							break;
						}
				}
				break;
			}
	}
}

void func_132()
{
	if (unk_0xD361727124133DF3(uLocal_363))
	{
		unk_0xA0A65B537B1F11EC(&uLocal_363);
	}
}

void func_133()
{
	var uVar0;
	
	if (unk_0xCA8794CE207FC6D5(iLocal_90, 0))
	{
		switch (iLocal_368)
		{
			case 0:
				if (!unk_0x9F94F2CFDCA78C55(iLocal_85) && unk_0xCA8794CE207FC6D5(iLocal_90, 0))
				{
					func_132();
					func_137(1, 1, 0, 0);
					if (unk_0xD361727124133DF3(uLocal_361))
					{
						unk_0xA0A65B537B1F11EC(&uLocal_361);
					}
					if (unk_0xD361727124133DF3(uLocal_359))
					{
						unk_0xA0A65B537B1F11EC(&uLocal_359);
					}
					if (unk_0xD361727124133DF3(uLocal_360))
					{
						unk_0xA0A65B537B1F11EC(&uLocal_360);
					}
					if (unk_0xBE55B130951EF5CA(iLocal_85))
					{
						unk_0xA2A854DDCAB3A06F(iLocal_85);
					}
					func_135();
					if (!unk_0x9F94F2CFDCA78C55(iLocal_85))
					{
						unk_0xE6D93A0484388DB3(iLocal_85, unk_0x0CAFB9D38494283D(iLocal_90, -10f, 5f, 0f), -1, 16, 4);
					}
					unk_0xE6D93A0484388DB3(unk_0x507DA4994C3D8EBD(), unk_0x0CAFB9D38494283D(iLocal_90, 10f, 5f, 0f), 15000, 16, 4);
					unk_0xFAAA53BBE1EEF174(unk_0xAF65E5A58BE87D95(), 0, 1280);
					if ((bLocal_367 || Global_3) || bLocal_69)
					{
						while (!func_134(&Local_394, cLocal_371, "REPAP_THK", "REPAP_THK_1", 4, 0, 0))
						{
							unk_0x4EDE34FBADD967A6(0);
						}
					}
					else
					{
						while (!func_5(&Local_394, cLocal_371, "REPAP_THK", 4, 0, 0, 0))
						{
							unk_0x4EDE34FBADD967A6(0);
						}
					}
					func_106(func_19(), 1, 750, 0, 1);
					if (!unk_0x9F94F2CFDCA78C55(iLocal_85))
					{
						unk_0xE6D93A0484388DB3(iLocal_85, unk_0x0CAFB9D38494283D(iLocal_90, -10f, 5f, 0f), -1, 16, 4);
						unk_0x243553B40CC46CFE(iLocal_85, 0, 0);
					}
					unk_0xE6D93A0484388DB3(unk_0x507DA4994C3D8EBD(), unk_0x0CAFB9D38494283D(iLocal_90, 10f, 5f, 0f), 15000, 16, 4);
					iLocal_368++;
				}
				break;
			
			case 1:
				if (!func_72() && !unk_0x9F94F2CFDCA78C55(iLocal_85))
				{
					unk_0xB5DC017AFD430D1B(&uVar0);
					unk_0x9632B185BE7E73E6(0, iLocal_90, 0);
					unk_0x3F07E364A21EBC20(0, Local_55, 1f, 30000, 0.25f, 512, fLocal_58);
					unk_0x371C90C63129A983(0, "WORLD_HUMAN_SMOKING", 0, 1);
					unk_0x6EE8A5CF9AC75F12(uVar0);
					unk_0x8229311A391A4EC6(iLocal_85, uVar0);
					unk_0x9F77DFFC61FCB68C(&uVar0);
					iLocal_368++;
					unk_0xC1B1E9A034A63A62(0);
				}
				break;
			
			case 2:
				if (!unk_0x9F94F2CFDCA78C55(iLocal_85) && unk_0xCA8794CE207FC6D5(iLocal_90, 0))
				{
					if (!unk_0x53170344050F2301(iLocal_85, iLocal_90, 0))
					{
						unk_0xC1B1E9A034A63A62(0);
						if (bLocal_367)
						{
							unk_0xFAAA53BBE1EEF174(unk_0xAF65E5A58BE87D95(), 1, 0);
							func_137(0, 1, 0, 0);
							iLocal_368 = 5;
						}
						else
						{
							iLocal_368++;
						}
					}
				}
				break;
			
			case 3:
				if ((!unk_0x9F94F2CFDCA78C55(iLocal_85) && unk_0xCA8794CE207FC6D5(iLocal_90, 0)) && unk_0x83666F9FB8FEBD4B() > 1000)
				{
					unk_0x9632B185BE7E73E6(unk_0x507DA4994C3D8EBD(), iLocal_90, 0);
					unk_0x8E759206778E571F(unk_0x507DA4994C3D8EBD(), iLocal_90, 10000, 0, 3);
					iLocal_368++;
				}
				break;
			
			case 4:
				if (unk_0xCA8794CE207FC6D5(iLocal_90, 0) && !unk_0x53170344050F2301(unk_0x507DA4994C3D8EBD(), iLocal_90, 0))
				{
					unk_0xFAAA53BBE1EEF174(unk_0xAF65E5A58BE87D95(), 1, 0);
					func_137(0, 1, 0, 0);
					unk_0xCDC1FD4387DA32EC(iLocal_90, 2);
					unk_0xC1B1E9A034A63A62(0);
					iLocal_368++;
				}
				break;
			
			case 5:
				if (unk_0x83666F9FB8FEBD4B() > 1000)
				{
					if (func_105())
					{
						if (!bLocal_367)
						{
							if (!func_93(19))
							{
								func_89("AM_H_CALLTX", 1, 0, -1, 10000, 7, 0, 0, 0);
								func_88(19);
							}
						}
						func_74();
					}
				}
				break;
			}
	}
}

bool func_134(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_16(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15699 = 0;
	Global_15706 = 0;
	Global_15701 = 0;
	Global_16683 = 1;
	Global_16685 = 0;
	Global_16689 = 0;
	StringCopy(&Global_16696, sParam3, 24);
	Global_2621441 = 0;
	return func_6(sParam2, iParam4, 0);
}

void func_135()
{
	Global_14558 = 0;
	func_136();
}

void func_136()
{
	if (unk_0xF611D1BB58990143())
	{
		unk_0xA2A4AD85BA2F7ADD();
		Global_16703 = 0;
		unk_0xD858EC6FECDB4B3F(1);
		Global_15692 = 6;
		return;
	}
}

void func_137(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0x62F999FAD28AC182(unk_0xAF65E5A58BE87D95());
		unk_0x85561C2D9ACBDF0D(unk_0xAF65E5A58BE87D95(), 1);
		unk_0xDD748F877B6C00B7(unk_0xAF65E5A58BE87D95(), 1);
		func_143(1);
		unk_0x3CD3516D9FBE0424();
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x49BDC46D7CAD9C63())
			{
				unk_0xD858EC6FECDB4B3F(0);
			}
			if (!func_9())
			{
				Global_14393.f_1 = 3;
			}
			Global_15692 = 5;
		}
		func_142(1, iParam3, iParam2);
		Global_54578 = 1;
		Global_66883 = 1;
		Global_68065 = 1;
	}
	else
	{
		func_143(0);
		unk_0x5DC2C7ED9A68FCEF();
		Global_54578 = 0;
		if (bParam1)
		{
			unk_0x56D29F96CA2CFAC2();
		}
		unk_0x85561C2D9ACBDF0D(unk_0xAF65E5A58BE87D95(), 0);
		unk_0xDD748F877B6C00B7(unk_0xAF65E5A58BE87D95(), 0);
		func_142(0, iParam3, iParam2);
		if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()) && !func_138(unk_0xAF65E5A58BE87D95()))
		{
			unk_0xF732465E1FF70CE4(unk_0x507DA4994C3D8EBD(), 0);
		}
		Global_68065 = 0;
	}
}

int func_138(int iParam0)
{
	if (func_140(iParam0, 0))
	{
		return 1;
	}
	if (func_139())
	{
		if (iParam0 == unk_0xAF65E5A58BE87D95())
		{
			return 1;
		}
	}
	if (unk_0x61D8FEAF64881CDA(Global_2413868[iParam0 /*253*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_139()
{
	return unk_0x61D8FEAF64881CDA(Global_2359301, 3);
}

bool func_140(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xAF65E5A58BE87D95())
	{
		bVar0 = func_141(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1582048[iParam0 /*324*/].f_180 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xB832D52B86777A35(iParam0))
		{
			bVar0 = unk_0x5805EAF13FC54BE6(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_141(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_85();
	}
	if (Global_1315875[iVar1] == 1)
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

int func_142(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x80AD636AD4184F2B())
	{
		if (unk_0x9FD74BBA3650C4CD() != iParam0 && uParam2)
		{
			unk_0x889006E2EE739868(iParam0, uParam1, 1);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_143(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x3DBE2A7AF9E71C82(&Global_2263, 13);
	}
	else
	{
		unk_0xCD27BF29FB9012E2(&Global_2263, 13);
	}
}

void func_144()
{
	if (Global_3 || bLocal_69)
	{
		unk_0x6471EB4B59AE203B(0.7f);
	}
	if (bLocal_367 && !unk_0x9F94F2CFDCA78C55(iLocal_85))
	{
		if (!func_164(iLocal_85))
		{
			if (!unk_0xD361727124133DF3(uLocal_359))
			{
				uLocal_359 = func_173(iLocal_85, 0, 145);
			}
		}
		else
		{
			if (func_65())
			{
				if (!unk_0xD361727124133DF3(uLocal_361))
				{
					uLocal_361 = func_50(Local_52, 1);
				}
				if (unk_0xD361727124133DF3(uLocal_362))
				{
					unk_0xA0A65B537B1F11EC(&uLocal_362);
				}
			}
			else
			{
				if (!unk_0xD361727124133DF3(uLocal_362))
				{
					uLocal_362 = func_50(Local_55, 1);
				}
				if (unk_0xD361727124133DF3(uLocal_361))
				{
					unk_0xA0A65B537B1F11EC(&uLocal_361);
				}
			}
			if (unk_0xD361727124133DF3(uLocal_359))
			{
				unk_0xA0A65B537B1F11EC(&uLocal_359);
			}
		}
		if (!unk_0x53170344050F2301(unk_0x507DA4994C3D8EBD(), iLocal_90, 0))
		{
			if ((unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0) && unk_0xCA8794CE207FC6D5(unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0), 0)) && func_163(unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0)))
			{
				iLocal_90 = 0;
				iLocal_90 = unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0);
				unk_0xBAE5DF507EEC53C8(iLocal_90, 1, 1);
				unk_0xCDC1FD4387DA32EC(iLocal_90, 1);
				unk_0xCDED36A388C5C6F3(iLocal_90, 0, 0);
			}
		}
		if (unk_0xD361727124133DF3(uLocal_362) && !unk_0x2A24448FF232F834(iLocal_85, 0))
		{
			if (unk_0x594EB70937EC1486(unk_0x507DA4994C3D8EBD(), Local_55, 15f, 15f, 15f, 0, 1, 0) || unk_0x594EB70937EC1486(unk_0x507DA4994C3D8EBD(), 231.7982f, 672.7683f, 189.2f, 1f, 1f, 2.5f, 1, 1, 0))
			{
				func_171(4);
			}
		}
		else if (iLocal_368 != 100)
		{
			if (func_65() && func_162(1, 1, 1))
			{
				if (unk_0x9EC075F0DABF6298(iLocal_90, 225.5938f, 681.1489f, 188.4262f, 232.02f, 681.3113f, 191.9843f, 8.75f, 0, 1, 0) || unk_0x594EB70937EC1486(unk_0x507DA4994C3D8EBD(), 226.6788f, 681.0637f, 189f, 1f, 1f, 2.5f, 1, 1, 0))
				{
					unk_0xC1B1E9A034A63A62(0);
					iLocal_368 = 100;
				}
			}
			else if (!unk_0x53170344050F2301(iLocal_85, iLocal_90, 0))
			{
				if (unk_0xEC043AB2FEE0E94F(iLocal_85, -1794415470) != 1)
				{
					unk_0x36B42DB2912118E2(iLocal_85, iLocal_90, -1, func_161(iLocal_90), 2f, 8388608, 0);
				}
			}
		}
	}
	else
	{
		if (iLocal_368 != 100)
		{
			if (func_65() && func_162(1, 1, 1))
			{
				if (unk_0x9EC075F0DABF6298(iLocal_90, 225.5938f, 681.1489f, 188.4262f, 232.02f, 681.3113f, 191.9843f, 8.75f, 0, 1, 0) || unk_0x594EB70937EC1486(unk_0x507DA4994C3D8EBD(), 226.6788f, 681.0637f, 189f, 1f, 1f, 2.5f, 1, 1, 0))
				{
					unk_0xC1B1E9A034A63A62(0);
					iLocal_368 = 100;
				}
			}
		}
		func_158(1);
	}
	switch (iLocal_368)
	{
		case 0:
			if (func_65())
			{
				if (unk_0x22605DE2E6933CF2(iLocal_85, "VEH@STD@PS@IDLE_PANIC", "sit", 3) || unk_0x22605DE2E6933CF2(iLocal_85, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 3))
				{
					unk_0xAC57FBF981AB03F4(iLocal_85);
				}
				if (func_5(&Local_394, cLocal_371, "REPAP_HM", 4, 0, 0, 0))
				{
					unk_0xA54C914AEB391F49(0.5f);
					iLocal_368++;
				}
				if (!func_157())
				{
					func_152();
				}
			}
			break;
		
		case 1:
			if (!func_73())
			{
				if (func_65())
				{
					if (!func_72())
					{
						if (func_19() == 0)
						{
							if (func_5(&Local_394, cLocal_371, "REPAP_LIFTM", 4, 0, 0, 0))
							{
								iLocal_368++;
							}
						}
						else if (func_19() == 1)
						{
							if (func_5(&Local_394, cLocal_371, "REPAP_LIFTF", 4, 0, 0, 0))
							{
								iLocal_368++;
							}
						}
						else if (func_5(&Local_394, cLocal_371, "REPAP_LIFTT", 4, 0, 0, 0))
						{
							iLocal_368++;
						}
					}
				}
			}
			break;
		
		case 2:
			if (!func_73())
			{
				if (func_65())
				{
					if (func_5(&Local_394, cLocal_371, "REPAP_PLEAD", 4, 0, 0, 0))
					{
						unk_0xC1B1E9A034A63A62(0);
						if (Global_3 || bLocal_69)
						{
							iLocal_368 = 99;
						}
						else
						{
							iLocal_368++;
						}
					}
				}
			}
			break;
		
		case 3:
			if (unk_0x83666F9FB8FEBD4B() > 7000)
			{
				if (func_148("REPAP_HOME1", (func_151() && !func_73())))
				{
					iLocal_368++;
				}
			}
			break;
		
		case 4:
			if (func_19() == 0)
			{
				if (func_148("REPAP_HOME1M", (func_151() && !func_73())))
				{
					iLocal_368++;
				}
			}
			else if (func_19() == 1)
			{
				if (func_148("REPAP_HOME1F", (func_151() && !func_73())))
				{
					iLocal_368++;
				}
			}
			else if (func_148("REPAP_HOME1T", (func_151() && !func_73())))
			{
				iLocal_368++;
			}
			break;
		
		case 5:
			if (func_148("REPAP_HOME1L", (func_151() && !func_73())))
			{
				unk_0xC1B1E9A034A63A62(0);
				iLocal_368++;
			}
			break;
		
		case 6:
			if (!func_73())
			{
				if (unk_0x83666F9FB8FEBD4B() > 7000)
				{
					if (func_151())
					{
						if (func_5(&Local_394, cLocal_371, "REPAP_HOME2", 4, 0, 0, 0))
						{
							iLocal_368++;
						}
					}
				}
			}
			break;
		
		case 7:
			if (!func_73())
			{
				if (func_151() && !func_72())
				{
					if (func_147("REPAP_HOME2"))
					{
						iLocal_368++;
					}
				}
			}
			break;
		
		case 8:
			if (func_148("REPAP_HOME2L", (func_151() && !func_73())))
			{
				iLocal_368++;
			}
			break;
		
		case 9:
			if (!func_73())
			{
				if (func_151() && !func_72())
				{
					if (func_147("REPAP_RESP2"))
					{
						unk_0xC1B1E9A034A63A62(0);
						iLocal_368++;
					}
				}
			}
			break;
		
		case 10:
			if (unk_0x83666F9FB8FEBD4B() > 7000)
			{
				if (func_148("REPAP_HOME3", (func_151() && !func_73())))
				{
					iLocal_368++;
				}
			}
			break;
		
		case 11:
			if (!func_73())
			{
				if (func_151() && !func_72())
				{
					if (func_147("REPAP_HOME3"))
					{
						unk_0xC1B1E9A034A63A62(0);
						iLocal_368++;
					}
				}
			}
			break;
		
		case 12:
			if (unk_0x83666F9FB8FEBD4B() > 7000)
			{
				if (func_148("REPAP_HOME4", (func_151() && !func_73())))
				{
					iLocal_368++;
				}
			}
			break;
		
		case 13:
			if (!func_73())
			{
				if (func_151() && !func_72())
				{
					if (func_147("REPAP_HOME4"))
					{
						unk_0xC1B1E9A034A63A62(0);
						iLocal_368++;
					}
				}
			}
			break;
		
		case 14:
			if (unk_0x83666F9FB8FEBD4B() > 7000)
			{
				if (func_148("REPAP_NOBAN", (func_151() && !func_73())))
				{
					iLocal_368++;
				}
			}
			break;
		
		case 15:
			if (!func_73())
			{
				if (func_151() && !func_72())
				{
					if (func_147("REPAP_NOBAN"))
					{
						iLocal_368++;
					}
				}
			}
			break;
		
		case 16:
			if (!func_73())
			{
				if (func_151() && !func_72())
				{
					if (func_5(&Local_394, cLocal_371, "REPAP_NOBANL", 4, 0, 0, 0))
					{
						iLocal_368++;
					}
				}
			}
			break;
		
		case 17:
			func_73();
			break;
		
		case 100:
			if (func_146(iLocal_90, 5f, 5, 1056964608, 0, 1))
			{
				func_172("");
				func_171(3);
			}
			break;
	}
	if (unk_0x89D8D467C3C356CB(unk_0xAF65E5A58BE87D95()) > 0)
	{
		func_70();
	}
	if (func_19() == 2)
	{
		if ((func_145() && !func_157()) && iLocal_46 != 8)
		{
			if (!unk_0x9F94F2CFDCA78C55(iLocal_85))
			{
				if (unk_0x594EB70937EC1486(iLocal_85, -1034.6f, 4918.6f, 205.9f, 5f, 5f, 5f, 0, 1, 0))
				{
					if (!unk_0xF9BC20445D57B42A(iLocal_85, unk_0x36A590B33049FCAF(unk_0xAF65E5A58BE87D95())))
					{
						unk_0x2D5B9F52D7E174CF(iLocal_85, unk_0x36A590B33049FCAF(unk_0xAF65E5A58BE87D95()));
					}
					func_101();
					iLocal_46 = 8;
				}
			}
		}
	}
}

var func_145()
{
	return Global_24678;
}

int func_146(int iParam0, int iParam1, int iParam2, float fParam3, int iParam4, bool bParam5)
{
	unk_0x500F4CA776CEBD0A(0, 71, 1);
	unk_0x500F4CA776CEBD0A(0, 72, 1);
	unk_0x500F4CA776CEBD0A(0, 76, 1);
	unk_0x500F4CA776CEBD0A(0, 73, 1);
	unk_0x500F4CA776CEBD0A(0, 59, 1);
	unk_0x500F4CA776CEBD0A(0, 60, 1);
	if (bParam5)
	{
		unk_0x500F4CA776CEBD0A(0, 75, 1);
	}
	unk_0x500F4CA776CEBD0A(0, 80, 1);
	unk_0x500F4CA776CEBD0A(0, 69, 1);
	unk_0x500F4CA776CEBD0A(0, 70, 1);
	unk_0x500F4CA776CEBD0A(0, 68, 1);
	unk_0x500F4CA776CEBD0A(0, 74, 1);
	unk_0x500F4CA776CEBD0A(0, 86, 1);
	unk_0x500F4CA776CEBD0A(0, 81, 1);
	unk_0x500F4CA776CEBD0A(0, 82, 1);
	unk_0x500F4CA776CEBD0A(0, 138, 1);
	unk_0x500F4CA776CEBD0A(0, 136, 1);
	unk_0x500F4CA776CEBD0A(0, 114, 1);
	unk_0x500F4CA776CEBD0A(0, 107, 1);
	unk_0x500F4CA776CEBD0A(0, 110, 1);
	unk_0x500F4CA776CEBD0A(0, 89, 1);
	unk_0x500F4CA776CEBD0A(0, 89, 1);
	unk_0x500F4CA776CEBD0A(0, 87, 1);
	unk_0x500F4CA776CEBD0A(0, 88, 1);
	unk_0x500F4CA776CEBD0A(0, 113, 1);
	unk_0x500F4CA776CEBD0A(0, 115, 1);
	unk_0x500F4CA776CEBD0A(0, 116, 1);
	unk_0x500F4CA776CEBD0A(0, 117, 1);
	unk_0x500F4CA776CEBD0A(0, 118, 1);
	unk_0x500F4CA776CEBD0A(0, 119, 1);
	unk_0x500F4CA776CEBD0A(0, 131, 1);
	unk_0x500F4CA776CEBD0A(0, 132, 1);
	unk_0x500F4CA776CEBD0A(0, 123, 1);
	unk_0x500F4CA776CEBD0A(0, 126, 1);
	unk_0x500F4CA776CEBD0A(0, 129, 1);
	unk_0x500F4CA776CEBD0A(0, 130, 1);
	unk_0x500F4CA776CEBD0A(0, 133, 1);
	unk_0x500F4CA776CEBD0A(0, 134, 1);
	unk_0x65C671B5F3251D24();
	if ((unk_0xF976C624234A4AA8() - Global_28) > 500)
	{
		unk_0x7674FE6F22323056(iParam0, iParam1, iParam2, iParam4);
	}
	Global_28 = unk_0xF976C624234A4AA8();
	if (!unk_0xE5D56342B0FF1D0D(iParam0))
	{
		if (unk_0x75E01E8585722F89(unk_0x11F6A4A45943670E(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

int func_147(char* sParam0)
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
	if (func_5(&Local_394, cLocal_371, &Var0, 4, 0, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_148(char* sParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!iLocal_71)
		{
			if (func_5(&Local_394, cLocal_371, sParam0, 4, 0, 0, 0))
			{
				iLocal_71 = 1;
				iLocal_72 = 0;
			}
		}
		else if (iLocal_72)
		{
			if (func_150(&Local_394, cLocal_371, sParam0, &Local_74, 4, 0, 0))
			{
				iLocal_72 = 0;
			}
		}
		if ((iLocal_71 && !iLocal_72) && bParam1)
		{
			if (iLocal_80 == -1)
			{
				if (!func_72())
				{
					iLocal_80 = unk_0xF976C624234A4AA8();
				}
			}
			else if ((unk_0xF976C624234A4AA8() - iLocal_80) > 500)
			{
				iLocal_80 = -1;
				iLocal_71 = 0;
				iLocal_72 = 0;
				return 1;
			}
		}
	}
	else if (iLocal_71 && !iLocal_72)
	{
		Local_74 = { func_149() };
		func_135();
		iLocal_72 = 1;
	}
	return 0;
}

struct<6> func_149()
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15692 == 4)
	{
		iVar6 = unk_0xB578A5EEDCABA08F();
		iVar6 = (iVar6 + Global_16702);
		iVar7 = iVar6 + 1;
		if (iVar7 > -1 && iVar6 > -1)
		{
			if (unk_0xD177A95825B53731(&(Global_14560[iVar7 /*6*/])))
			{
				return Global_14560[iVar7 /*6*/];
			}
			else
			{
				iVar8 = iVar7;
				while (iVar8 < 70)
				{
					if (unk_0xD177A95825B53731(&(Global_14560[iVar8 /*6*/])))
					{
						return Global_14560[iVar8 /*6*/];
						iVar8 = 70;
					}
					iVar8++;
				}
				return Var0;
			}
			return Global_14560[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

bool func_150(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_16(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15699 = 0;
	Global_15706 = 0;
	Global_15701 = 0;
	Global_16683 = 0;
	Global_16685 = 0;
	Global_16689 = 1;
	StringCopy(&Global_16696, sParam3, 24);
	Global_2621441 = 0;
	return func_6(sParam2, iParam4, 0);
}

int func_151()
{
	if (bLocal_367)
	{
		if (unk_0xCA8794CE207FC6D5(iLocal_90, 0))
		{
			if (func_65())
			{
				return 1;
			}
		}
		if (!unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0) && !unk_0x2A24448FF232F834(iLocal_85, 0))
		{
			if (unk_0xB7A628320EFF8E47(Local_59, Local_62) < 400f)
			{
				return 1;
			}
		}
	}
	else
	{
		return func_65();
	}
	return 0;
}

void func_152()
{
	if (func_19() == 2)
	{
		if (!unk_0xD361727124133DF3(uLocal_363))
		{
			func_155();
			uLocal_363 = func_154(-1034.6f, 4918.6f, 205.9f, 0);
			unk_0x01DF6D56C47E7482(uLocal_363, 269);
			func_153();
		}
	}
}

void func_153()
{
	if (!func_157())
	{
		if (func_19() == 2)
		{
			Global_24678 = 1;
		}
	}
}

var func_154(struct<3> Param0, int iParam3)
{
	return func_50(Param0, iParam3);
}

void func_155()
{
	if (func_19() == 2)
	{
		if (!Global_24680)
		{
			func_156("CULT_BLIP_HELP", -1);
			Global_24680 = 1;
		}
	}
}

void func_156(char* sParam0, int iParam1)
{
	unk_0x1ACC22C365D06AAE(sParam0);
	unk_0x9F84D1B39B1E5B59(0, 0, 1, iParam1);
}

int func_157()
{
	if (Global_97173.f_28117.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

void func_158(bool bParam0)
{
	if (unk_0xCA8794CE207FC6D5(iLocal_90, 0) && !unk_0x9F94F2CFDCA78C55(iLocal_85))
	{
		if (func_65())
		{
			if (bParam0)
			{
				if (!unk_0xD361727124133DF3(uLocal_361))
				{
					uLocal_361 = func_50(Local_52, 1);
				}
			}
			if (unk_0xD361727124133DF3(uLocal_359))
			{
				unk_0xA0A65B537B1F11EC(&uLocal_359);
			}
			if (unk_0xD361727124133DF3(uLocal_360))
			{
				unk_0xA0A65B537B1F11EC(&uLocal_360);
			}
		}
		else
		{
			if (unk_0xD361727124133DF3(uLocal_361))
			{
				unk_0xA0A65B537B1F11EC(&uLocal_361);
			}
			if (!unk_0x53170344050F2301(unk_0x507DA4994C3D8EBD(), iLocal_90, 0))
			{
				if (!unk_0xD361727124133DF3(uLocal_360))
				{
					uLocal_360 = func_159(iLocal_90, 0, 0);
				}
			}
			if (!unk_0x53170344050F2301(iLocal_85, iLocal_90, 0))
			{
				if (!unk_0xD361727124133DF3(uLocal_359))
				{
					uLocal_359 = func_173(iLocal_85, 0, 145);
				}
			}
			else if (unk_0xD361727124133DF3(uLocal_359))
			{
				unk_0xA0A65B537B1F11EC(&uLocal_359);
			}
		}
	}
}

int func_159(int iParam0, bool bParam1, bool bParam2)
{
	return func_160(iParam0, !bParam1, bParam2);
}

int func_160(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xFD68187442384158(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xB6F075D13B917FBE(iParam0);
	if (unk_0x1BA544973A67E699(iParam0))
	{
		unk_0x1D8833C0F155BFE7(uVar0, func_51(unk_0xD95428C8AA1DBBF2(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x109908E4511B0839(uVar0, bParam1);
		}
		else
		{
			unk_0xEDB3DD98D55452E4(uVar0, 2);
		}
	}
	else if (unk_0x91F594068DF4424F(iParam0))
	{
		unk_0x1D8833C0F155BFE7(uVar0, func_51(unk_0xD95428C8AA1DBBF2(), 0.7f, 0.7f));
		unk_0x109908E4511B0839(uVar0, bParam1);
	}
	else if (unk_0xBCF2529C09F7A239(iParam0))
	{
		unk_0x1D8833C0F155BFE7(uVar0, func_51(unk_0xD95428C8AA1DBBF2(), 0.7f, 0.7f));
	}
	return uVar0;
}

int func_161(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	if (unk_0xCA8794CE207FC6D5(iParam0, 0))
	{
		iVar1 = 0;
		while (iVar1 <= (unk_0xF7D9833F1E3C722B(iParam0) - 1))
		{
			if (iVar0 == -1)
			{
				iVar2 = iVar1;
				if (unk_0xC51FBEBD87CFD69C(iParam0, iVar2))
				{
					iVar0 = iVar2;
				}
			}
			iVar1++;
		}
	}
	return iVar0;
}

int func_162(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x6D1105B605F9B478())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
	{
		if (!unk_0x2E177F2B797A4A34(unk_0x507DA4994C3D8EBD()))
		{
			return 0;
		}
		iVar0 = unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0);
		if (bParam0)
		{
			if (unk_0xE5D56342B0FF1D0D(iVar0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0xE5D56342B0FF1D0D(iVar0))
			{
				if (unk_0xE634CB9EE7094537(iVar0, -1) != unk_0x507DA4994C3D8EBD())
				{
					return 0;
				}
			}
		}
		if (!unk_0xE5D56342B0FF1D0D(iVar0))
		{
			if (unk_0xEE28BD1C8F477A55(iVar0) < 0.95f || unk_0xEE28BD1C8F477A55(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x78E049AAE10556D5(unk_0xAF65E5A58BE87D95()))
	{
		return 0;
	}
	if (!unk_0x352008B5469ACC31(unk_0xAF65E5A58BE87D95()))
	{
		return 0;
	}
	return 1;
}

int func_163(int iParam0)
{
	if (!unk_0xE5D56342B0FF1D0D(uParam0))
	{
		if (unk_0xC51FBEBD87CFD69C(iParam0, -1))
		{
			return 1;
		}
		if (unk_0xC51FBEBD87CFD69C(iParam0, 0))
		{
			return 1;
		}
		if (unk_0xC51FBEBD87CFD69C(iParam0, 1))
		{
			return 1;
		}
		if (unk_0xC51FBEBD87CFD69C(iParam0, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_164(int iParam0)
{
	if (unk_0xF9BC20445D57B42A(iParam0, unk_0x36A590B33049FCAF(unk_0xAF65E5A58BE87D95())))
	{
		if (!unk_0x2F406E91B59DB558(unk_0x507DA4994C3D8EBD(), iParam0, 25f, 25f, 25f, 0, 1, 0))
		{
			unk_0xA2A854DDCAB3A06F(iParam0);
		}
		return 1;
	}
	else if (unk_0x2F406E91B59DB558(unk_0x507DA4994C3D8EBD(), iParam0, Global_18, 0, 1, 0))
	{
		unk_0x2D5B9F52D7E174CF(iParam0, unk_0x36A590B33049FCAF(unk_0xAF65E5A58BE87D95()));
	}
	return 0;
}

void func_165()
{
	if (!unk_0x9F94F2CFDCA78C55(iLocal_85) && unk_0xCA8794CE207FC6D5(iLocal_90, 0))
	{
		if (!unk_0x53170344050F2301(iLocal_85, iLocal_90, 1))
		{
			if (unk_0xEC043AB2FEE0E94F(iLocal_85, -1794415470) != 1)
			{
				unk_0x36B42DB2912118E2(iLocal_85, iLocal_90, -1, func_161(iLocal_90), 2f, 8388608, 0);
			}
		}
		if ((unk_0xFD68187442384158(func_64()) && unk_0xB7A628320EFF8E47(unk_0xBF1B13057E5119A4(iLocal_85, 1), unk_0xBF1B13057E5119A4(func_64(), 1)) < 100f) && (unk_0x11F6A4A45943670E(iLocal_90) < 5f || !unk_0xA34706B20AE53D17(unk_0x26EA758C2A691D06(iLocal_90))))
		{
			if (bLocal_367)
			{
				if (!unk_0x22605DE2E6933CF2(iLocal_85, "VEH@STD@PS@IDLE_PANIC", "sit", 3) && unk_0x764E7360C13E7383(iLocal_85, iLocal_90))
				{
					unk_0xEC0A546609840086(iLocal_85, "VEH@STD@PS@IDLE_PANIC", "sit", 4f, -4f, -1, 48, 0, 0, 0, 0);
				}
			}
			else if (!unk_0x22605DE2E6933CF2(iLocal_85, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 3) && unk_0x764E7360C13E7383(iLocal_85, iLocal_90))
			{
				unk_0xEC0A546609840086(iLocal_85, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 4f, -4f, -1, 48, 0, 0, 0, 0);
			}
		}
		else if ((unk_0x22605DE2E6933CF2(iLocal_85, "VEH@STD@PS@IDLE_PANIC", "sit", 3) || unk_0x22605DE2E6933CF2(iLocal_85, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 3)) && unk_0x764E7360C13E7383(iLocal_85, iLocal_90))
		{
			unk_0xAC57FBF981AB03F4(iLocal_85);
		}
		switch (iLocal_368)
		{
			case 0:
				if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					if (unk_0xFD68187442384158(func_64()) && !unk_0x9F94F2CFDCA78C55(func_64()))
					{
						func_18(&Local_394, 4);
						func_17(&Local_394, 4, func_64(), "PAPARAZZO", 0, 1);
					}
					iLocal_48 = 2;
					func_101();
					if (func_5(&Local_394, cLocal_371, "REPAP_GO", 4, 0, 0, 0))
					{
						unk_0xA54C914AEB391F49(0.2f);
						unk_0x2DC5B31EBB810396(iLocal_85, 1);
						unk_0xCA4EA7D4F6DCCD43(1, uLocal_68, joaat("player"));
						iLocal_357 = unk_0xCEC985247737A30E(joaat("prop_ld_test_01"), Local_86, 1, 1, 0);
						unk_0xCC8C6873CFB069A4(iLocal_357, 0, 0);
						unk_0x07E0AE075425AA06(iLocal_357, 0);
						unk_0x479E7EEEBDEE245D(iLocal_357, 1);
						iLocal_368++;
					}
				}
				break;
			
			case 1:
				func_167();
				if (!unk_0x9EC075F0DABF6298(iLocal_85, 243.5571f, 77.51265f, 90.08002f, 268.2083f, 144.2189f, 109.853f, 23.25f, 0, 1, 0))
				{
					iLocal_368++;
					iLocal_369 = unk_0xF976C624234A4AA8();
					iLocal_48 = 3;
				}
				break;
			
			case 2:
				if (!bLocal_667)
				{
					if (((((iLocal_669 != 1 && iLocal_669 != 3) && iLocal_669 != 6) && iLocal_669 != 9) && iLocal_669 != 11) && iLocal_669 != 13)
					{
						bLocal_668 = false;
						if (unk_0xFD68187442384158(func_64()) && unk_0x2F406E91B59DB558(func_64(), iLocal_90, 5f, 5f, 3f, 0, 1, 0))
						{
							bLocal_667 = true;
						}
					}
				}
				else
				{
					if (!func_72())
					{
						bLocal_668 = true;
					}
					if (unk_0xFD68187442384158(func_64()))
					{
						if (!unk_0x2F406E91B59DB558(func_64(), iLocal_90, 5f, 5f, 3f, 0, 1, 0))
						{
							bLocal_667 = false;
						}
					}
				}
				if (bLocal_668)
				{
					if (!func_73())
					{
						if (!func_166())
						{
							func_167();
						}
					}
				}
				else
				{
					switch (iLocal_669)
					{
						case 0:
							if (((!bLocal_667 && func_151()) && !func_73()) && !func_72())
							{
								if (func_5(&Local_394, cLocal_371, "REPAP_CHT", 4, 0, 0, 0))
								{
									iLocal_669++;
								}
							}
							break;
						
						case 1:
							if (((!bLocal_667 && func_151()) && !func_73()) && !func_72())
							{
								if (func_147("REPAP_RES1"))
								{
									iLocal_670 = unk_0xF976C624234A4AA8();
									iLocal_669++;
								}
							}
							break;
						
						case 2:
							if ((unk_0xF976C624234A4AA8() - iLocal_670) > 8000)
							{
								if (((!bLocal_667 && func_151()) && !func_73()) && !func_72())
								{
									if (func_147("REPAP_CHT2"))
									{
										iLocal_669++;
									}
								}
							}
							break;
						
						case 3:
							if (((!bLocal_667 && func_151()) && !func_73()) && !func_72())
							{
								if (func_5(&Local_394, cLocal_371, "REPAP_RESP2L", 4, 0, 0, 0))
								{
									iLocal_670 = unk_0xF976C624234A4AA8();
									iLocal_669++;
								}
							}
							break;
						
						case 4:
							if ((unk_0xF976C624234A4AA8() - iLocal_670) > 6000)
							{
								if (func_19() == 0)
								{
									if (func_148("REPAP_CHT3M", ((func_151() && !func_73()) && !bLocal_667)))
									{
										iLocal_669++;
									}
								}
								else if (func_19() == 1)
								{
									if (func_148("REPAP_CHT3F", ((func_151() && !func_73()) && !bLocal_667)))
									{
										iLocal_669++;
									}
								}
								else if (func_148("REPAP_CHT3T", ((func_151() && !func_73()) && !bLocal_667)))
								{
									iLocal_669++;
								}
								if (iLocal_669 > 4)
								{
									iLocal_670 = unk_0xF976C624234A4AA8();
								}
							}
							break;
						
						case 5:
							if ((unk_0xF976C624234A4AA8() - iLocal_670) > 8000)
							{
								if (func_19() == 0)
								{
									if (func_148("REPAP_CHT4M", ((func_151() && !func_73()) && !bLocal_667)))
									{
										iLocal_669++;
									}
								}
								else if (func_19() == 1)
								{
									if (func_148("REPAP_CHT4F", ((func_151() && !func_73()) && !bLocal_667)))
									{
										iLocal_669++;
									}
								}
								else if (func_148("REPAP_CHT4T", ((func_151() && !func_73()) && !bLocal_667)))
								{
									iLocal_669++;
								}
								if (iLocal_669 > 5)
								{
									iLocal_670 = unk_0xF976C624234A4AA8();
								}
							}
							break;
						
						case 6:
							if ((unk_0xF976C624234A4AA8() - iLocal_670) > 8000)
							{
								if (func_19() == 0)
								{
									if (func_148("REPAP_CHT5M", ((func_151() && !func_73()) && !bLocal_667)))
									{
										iLocal_669++;
									}
								}
								else if (func_19() == 1)
								{
									if (func_148("REPAP_CHT5F", ((func_151() && !func_73()) && !bLocal_667)))
									{
										iLocal_669++;
									}
								}
								else if (func_148("REPAP_CHT5T", ((func_151() && !func_73()) && !bLocal_667)))
								{
									iLocal_669++;
								}
								if (iLocal_669 > 6)
								{
									iLocal_670 = unk_0xF976C624234A4AA8();
								}
							}
							break;
						
						case 7:
							if ((unk_0xF976C624234A4AA8() - iLocal_670) > 8000)
							{
								if (((!bLocal_667 && func_151()) && !func_73()) && !func_72())
								{
									if (func_147("REPAP_CHT6"))
									{
										iLocal_669++;
									}
								}
							}
							break;
						
						case 8:
							if (((!bLocal_667 && func_151()) && !func_73()) && !func_72())
							{
								if (func_5(&Local_394, cLocal_371, "REPAP_RESP6L", 4, 0, 0, 0))
								{
									iLocal_670 = unk_0xF976C624234A4AA8();
									iLocal_669++;
								}
							}
							break;
						
						case 9:
							if ((unk_0xF976C624234A4AA8() - iLocal_670) > 8000)
							{
								if (((!bLocal_667 && func_151()) && !func_73()) && !func_72())
								{
									if (func_147("REPAP_CHT7"))
									{
										iLocal_669++;
									}
								}
							}
							break;
						
						case 10:
							if (((!bLocal_667 && func_151()) && !func_73()) && !func_72())
							{
								if (func_5(&Local_394, cLocal_371, "REPAP_RESP7L", 4, 0, 0, 0))
								{
									iLocal_670 = unk_0xF976C624234A4AA8();
									iLocal_669++;
								}
							}
							break;
						
						case 11:
							if ((unk_0xF976C624234A4AA8() - iLocal_670) > 8000)
							{
								if (((!bLocal_667 && func_151()) && !func_73()) && !func_72())
								{
									if (func_147("REPAP_CHT8"))
									{
										iLocal_669++;
									}
								}
							}
							break;
						
						case 12:
							if (((!bLocal_667 && func_151()) && !func_73()) && !func_72())
							{
								if (func_5(&Local_394, cLocal_371, "REPAP_RESP8L", 4, 0, 0, 0))
								{
									iLocal_669++;
								}
							}
							break;
						}
				}
				if (!unk_0xFD68187442384158(func_64()))
				{
					unk_0xC1B1E9A034A63A62(0);
					iLocal_368++;
					func_135();
					if (!Global_3 && !bLocal_69)
					{
						iLocal_48 = 6;
					}
				}
				if (Global_3 || bLocal_69)
				{
					if (unk_0x594EB70937EC1486(unk_0x507DA4994C3D8EBD(), 244.2175f, 441.0128f, 126.2767f, 33.5f, 40f, 14.75f, 0, 1, 0) && func_65())
					{
						iLocal_48 = 4;
						iLocal_84 = unk_0xF976C624234A4AA8();
					}
				}
				break;
			
			case 3:
				if (unk_0x83666F9FB8FEBD4B() > 3000 && func_65())
				{
					func_172("MAG_2_ESCAPE_PAP_TAKE_ACTRESS_HOME");
					if (func_5(&Local_394, cLocal_371, "REPAP_LOS", 4, 0, 0, 0))
					{
						func_171(2);
					}
				}
				break;
			
			case 4:
				break;
			
			case 5:
				break;
		}
		func_158(0);
	}
}

int func_166()
{
	int iVar0;
	
	iVar0 = func_24();
	if ((unk_0xF976C624234A4AA8() - iLocal_665) > 5000)
	{
		if (unk_0xFD68187442384158(iLocal_90) && unk_0x53170344050F2301(iLocal_85, iLocal_90, 0))
		{
			if (unk_0x53170344050F2301(unk_0x507DA4994C3D8EBD(), iLocal_90, 1))
			{
				if (iVar0 != -1 && (unk_0xF976C624234A4AA8() - Local_203[iVar0 /*18*/].f_12) < 3000)
				{
					if (func_5(&Local_394, cLocal_371, "REPAP_WHINE", 4, 0, 0, 0))
					{
						iLocal_665 = unk_0xF976C624234A4AA8();
						return 1;
					}
				}
			}
			else if (func_5(&Local_394, cLocal_371, "REPAP_EXIT", 4, 0, 0, 0))
			{
				iLocal_665 = unk_0xF976C624234A4AA8();
				return 1;
			}
		}
	}
	return 0;
}

void func_167()
{
	int iVar0;
	
	if ((unk_0xF976C624234A4AA8() - iLocal_563) > iLocal_564)
	{
		if ((!unk_0x9F94F2CFDCA78C55(iLocal_85) && unk_0xFD68187442384158(func_64())) && !unk_0x9F94F2CFDCA78C55(func_64()))
		{
			if (unk_0x8FE221761D524CFE(Local_62, unk_0xBF1B13057E5119A4(func_64(), 1), 1) < 8f)
			{
				iVar0 = unk_0x4D3E68F73B727E49(0, 5);
				func_18(&Local_394, 4);
				func_18(&Local_394, 5);
				func_18(&Local_394, 6);
				func_18(&Local_394, 7);
				switch (iVar0)
				{
					case 0:
						func_17(&Local_394, 4, func_64(), "PAPARAZZO", 0, 1);
						if (unk_0xFD68187442384158(Local_394[4 /*10*/]) && !unk_0x9F94F2CFDCA78C55(Local_394[4 /*10*/]))
						{
							if (func_5(&Local_394, cLocal_371, "REPAP_PP", 4, 0, 0, 0))
							{
								iLocal_563 = unk_0xF976C624234A4AA8();
								iLocal_564 = unk_0x4D3E68F73B727E49(2000, 3000);
							}
						}
						break;
					
					case 1:
						func_17(&Local_394, 4, func_64(), "PAPARAZZO", 0, 1);
						if (unk_0xFD68187442384158(Local_394[4 /*10*/]) && !unk_0x9F94F2CFDCA78C55(Local_394[4 /*10*/]))
						{
							if (func_5(&Local_394, cLocal_371, "REPAP_CALL1", 4, 0, 0, 0))
							{
								iLocal_563 = unk_0xF976C624234A4AA8();
								iLocal_564 = unk_0x4D3E68F73B727E49(2000, 3000);
							}
						}
						break;
					
					case 2:
						func_17(&Local_394, 5, func_64(), "PAP2", 0, 1);
						if (unk_0xFD68187442384158(Local_394[5 /*10*/]) && !unk_0x9F94F2CFDCA78C55(Local_394[5 /*10*/]))
						{
							if (func_5(&Local_394, cLocal_371, "REPAP_CALL2", 4, 0, 0, 0))
							{
								iLocal_563 = unk_0xF976C624234A4AA8();
								iLocal_564 = unk_0x4D3E68F73B727E49(2000, 3000);
							}
						}
						break;
					
					case 3:
						func_17(&Local_394, 6, func_64(), "PAP3", 0, 1);
						if (unk_0xFD68187442384158(Local_394[6 /*10*/]) && !unk_0x9F94F2CFDCA78C55(Local_394[6 /*10*/]))
						{
							if (func_5(&Local_394, cLocal_371, "REPAP_CALL3", 4, 0, 0, 0))
							{
								iLocal_563 = unk_0xF976C624234A4AA8();
								iLocal_564 = unk_0x4D3E68F73B727E49(2000, 3000);
							}
						}
						break;
					
					case 4:
						func_17(&Local_394, 7, func_64(), "PAP4", 0, 1);
						if (unk_0xFD68187442384158(Local_394[7 /*10*/]) && !unk_0x9F94F2CFDCA78C55(Local_394[7 /*10*/]))
						{
							if (func_5(&Local_394, cLocal_371, "REPAP_CALL4", 4, 0, 0, 0))
							{
								iLocal_563 = unk_0xF976C624234A4AA8();
								iLocal_564 = unk_0x4D3E68F73B727E49(2000, 3000);
							}
						}
						break;
					}
				}
			}
	}
}

void func_168()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	char cVar3[24];
	char* sVar9;
	char cVar10[24];
	var uVar16;
	
	if (!unk_0x9F94F2CFDCA78C55(iLocal_85))
	{
		if (unk_0xD361727124133DF3(uLocal_359))
		{
			unk_0x847FC5384ABAF1A7(uLocal_359, iLocal_663);
		}
		switch (iLocal_368)
		{
			case 0:
				unk_0x395C5D98343F0040("random@paparazzi@peek");
				unk_0x395C5D98343F0040("random@paparazzi@trans");
				unk_0x395C5D98343F0040("random@paparazzi@wait");
				if ((unk_0xCE40391AB65FE305("random@paparazzi@peek") && unk_0xCE40391AB65FE305("random@paparazzi@trans")) && unk_0xCE40391AB65FE305("random@paparazzi@wait"))
				{
					uLocal_624 = unk_0x1BEDF9ACAEAB15F8(Local_652, Local_655, 2);
					unk_0x206610E40EE4D7D9(iLocal_85, uLocal_624, "random@paparazzi@peek", "left_peek_a", 1000f, -8f, 1, 0, 1148846080, 0);
					unk_0x8E759206778E571F(iLocal_85, unk_0x507DA4994C3D8EBD(), -1, 4, 4);
					sLocal_625[0] = "peek_a";
					sLocal_625[1] = "peek_b";
					sLocal_625[2] = "peek_c";
					unk_0xA54C914AEB391F49(0.2f);
					iLocal_622 = 0;
					iLocal_658 = 0;
					iLocal_663 = 0;
					iLocal_73 = 1;
					iLocal_659 = 0;
					iLocal_70 = 0;
					fLocal_660 = 0f;
					iLocal_368++;
				}
				break;
			
			case 1:
				if (unk_0x61D8FEAF64881CDA(iLocal_659, 0))
				{
					if (!unk_0x61D8FEAF64881CDA(iLocal_659, 1))
					{
						unk_0x3DBE2A7AF9E71C82(&iLocal_659, 1);
					}
					else
					{
						iLocal_659 = 0;
					}
				}
				iVar2 = 0;
				bVar0 = unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), Local_638, Local_641, fLocal_644, 0, 1, 0);
				bVar1 = unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), Local_631, Local_634, fLocal_637, 0, 1, 0);
				if (unk_0xA858564DC37EED5E(sLocal_630, "right_"))
				{
					if (bVar1)
					{
						sLocal_630 = "left_";
						iVar2 = 1;
					}
				}
				else if (bVar0)
				{
					sLocal_630 = "right_";
					iVar2 = 1;
				}
				if ((unk_0x1955A5B9B65FEEBD(uLocal_624) && unk_0x6385FE4ECBDF05D2(uLocal_624) > 0.9f) || iVar2)
				{
					if (iLocal_659 == 0)
					{
						unk_0xAC57FBF981AB03F4(iLocal_85);
						iLocal_629++;
						if (iLocal_629 >= 3)
						{
							iLocal_629 = 0;
						}
						StringCopy(&cVar3, sLocal_630, 24);
						StringConCat(&cVar3, sLocal_625[iLocal_629], 24);
						uLocal_624 = unk_0x1BEDF9ACAEAB15F8(Local_652, Local_655, 2);
						unk_0x206610E40EE4D7D9(iLocal_85, uLocal_624, "random@paparazzi@peek", &cVar3, 4f, -4f, 1, 0, 1148846080, 0);
						unk_0x3DBE2A7AF9E71C82(&iLocal_659, 0);
					}
				}
				if (bVar0 || bVar1)
				{
					if (fLocal_660 <= 20f)
					{
						fLocal_660 = (fLocal_660 + unk_0x94B2D2AEAA1D886E());
					}
					if ((unk_0xF976C624234A4AA8() - iLocal_623) > 5000 && iLocal_659 == 0)
					{
						if (unk_0xB7A628320EFF8E47(Local_59, Local_62) < (22.2f * 22.2f))
						{
							if (fLocal_660 < 10f)
							{
								if (iLocal_661)
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
								func_17(&Local_394, 1, unk_0x507DA4994C3D8EBD(), "FRANKLIN", 0, 1);
							}
							else if (func_19() == 0)
							{
								func_17(&Local_394, 1, unk_0x507DA4994C3D8EBD(), "MICHAEL", 0, 1);
							}
							else
							{
								func_17(&Local_394, 1, unk_0x507DA4994C3D8EBD(), "TREVOR", 0, 1);
							}
							if (func_5(&Local_394, cLocal_371, sVar9, 4, 0, 0, 0))
							{
								iLocal_661 = 1;
								if (!unk_0x2F406E91B59DB558(unk_0x507DA4994C3D8EBD(), iLocal_85, 7f, 7f, 7f, 0, 1, 0))
								{
									unk_0xAC57FBF981AB03F4(iLocal_85);
									StringCopy(&cVar10, sLocal_630, 24);
									StringConCat(&cVar10, "come_here", 24);
									uLocal_624 = unk_0x1BEDF9ACAEAB15F8(Local_652, Local_655, 2);
									unk_0x206610E40EE4D7D9(iLocal_85, uLocal_624, "random@paparazzi@peek", &cVar10, 4f, -4f, 1, 0, 1148846080, 0);
									unk_0x3DBE2A7AF9E71C82(&iLocal_659, 0);
								}
								iLocal_623 = unk_0xF976C624234A4AA8();
							}
						}
					}
				}
				if (unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), Local_645, Local_648, fLocal_651, 0, 1, 0) && iLocal_659 == 0)
				{
					if (unk_0xD361727124133DF3(uLocal_358))
					{
						unk_0xA0A65B537B1F11EC(&uLocal_358);
						if (!unk_0xD361727124133DF3(uLocal_359))
						{
							uLocal_359 = func_173(iLocal_85, 0, 145);
						}
					}
					unk_0xAC57FBF981AB03F4(iLocal_85);
					uLocal_624 = unk_0x1BEDF9ACAEAB15F8(Local_652, Local_655, 2);
					if (bVar1)
					{
						unk_0x206610E40EE4D7D9(iLocal_85, uLocal_624, "random@paparazzi@trans", "trans_left_to_wait", 8f, -4f, 1, 0, 1148846080, 0);
					}
					else
					{
						unk_0x206610E40EE4D7D9(iLocal_85, uLocal_624, "random@paparazzi@trans", "trans_right_to_wait", 8f, -4f, 1, 0, 1148846080, 0);
					}
					unk_0x3DBE2A7AF9E71C82(&iLocal_659, 0);
					iLocal_368++;
				}
				break;
			
			case 2:
				if (unk_0x1955A5B9B65FEEBD(uLocal_624) && unk_0x6385FE4ECBDF05D2(uLocal_624) > 0.9f)
				{
					if (unk_0xEC043AB2FEE0E94F(iLocal_85, 242628503) != 1)
					{
						unk_0xAC57FBF981AB03F4(iLocal_85);
						unk_0xEC0A546609840086(iLocal_85, "random@paparazzi@wait", "wait_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
						iLocal_620 = 2;
						unk_0xC1B1E9A034A63A62(0);
					}
					iLocal_368++;
				}
				break;
			
			case 3:
				if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
				{
					if (func_170())
					{
						unk_0xB67623A401171555(&iLocal_90);
						iLocal_90 = unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0);
						unk_0xBAE5DF507EEC53C8(iLocal_90, 1, 1);
						unk_0xCDED36A388C5C6F3(iLocal_90, 0, 0);
						unk_0xCDC1FD4387DA32EC(iLocal_90, 1);
						bLocal_367 = true;
					}
				}
				if (!bLocal_367)
				{
					unk_0xCDC1FD4387DA32EC(iLocal_90, 1);
					if (func_134(&Local_394, cLocal_371, "REPAP_EXP", "REPAP_EXP_2", 4, 0, 0))
					{
						unk_0xC1B1E9A034A63A62(0);
						iLocal_663 = 1;
						iLocal_368 = 100;
					}
				}
				else if (func_134(&Local_394, cLocal_371, "REPAP_EXPB", "REPAP_EXPB_2", 4, 0, 0))
				{
					unk_0xC1B1E9A034A63A62(0);
					iLocal_663 = 1;
					iLocal_368++;
				}
				if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					func_169(Local_86, 1);
				}
				break;
			
			case 4:
				func_49();
				if (unk_0xCA8794CE207FC6D5(iLocal_90, 0))
				{
					if (unk_0x2F406E91B59DB558(iLocal_90, iLocal_85, Global_18 + Vector(2f, 12f, 12f), 0, 1, 0) && !bLocal_367)
					{
						if (unk_0xEC043AB2FEE0E94F(iLocal_85, 242628503) != 1 && !iLocal_658)
						{
							unk_0xB5DC017AFD430D1B(&uVar16);
							unk_0x3F07E364A21EBC20(0, 259.2552f, 122.2986f, 100.441f, 1f, 20000, 0.25f, 0, 1193033728);
							unk_0xDE75E9DE5B6221E1(0, unk_0x507DA4994C3D8EBD(), 0);
							unk_0x6EE8A5CF9AC75F12(uVar16);
							unk_0x8229311A391A4EC6(iLocal_85, uVar16);
							unk_0x243553B40CC46CFE(iLocal_85, 0, 0);
							unk_0x9F77DFFC61FCB68C(&uVar16);
							iLocal_658 = 1;
						}
						else
						{
							unk_0xD156A7AA30AC555A(iLocal_85, 1f);
							func_169(259.2552f, 122.2986f, 100.441f, 0);
						}
					}
					else
					{
						func_169(Local_86, 1);
					}
					if (!bLocal_367)
					{
						if (unk_0x53170344050F2301(unk_0x507DA4994C3D8EBD(), iLocal_90, 0))
						{
							if (unk_0xD361727124133DF3(uLocal_360))
							{
								unk_0xA0A65B537B1F11EC(&uLocal_360);
							}
							if (!unk_0xD361727124133DF3(uLocal_359))
							{
								uLocal_359 = func_173(iLocal_85, 0, 145);
							}
						}
					}
					if ((unk_0x2F406E91B59DB558(iLocal_90, iLocal_85, Global_18, 0, 1, 0) && func_163(iLocal_90)) && (unk_0x83666F9FB8FEBD4B() > 6000 || !bLocal_367))
					{
						if (!iLocal_622)
						{
							func_101();
							if (unk_0x9331412F1452086E(unk_0x507DA4994C3D8EBD()))
							{
								if (func_19() == 1)
								{
									if (func_5(&Local_394, cLocal_371, "REPAP_ONF", 4, 0, 0, 0))
									{
										iLocal_622 = 1;
									}
								}
								else if (func_19() == 0)
								{
									if (func_5(&Local_394, cLocal_371, "REPAP_ONM", 4, 0, 0, 0))
									{
										iLocal_622 = 1;
									}
								}
								else if (func_5(&Local_394, cLocal_371, "REPAP_ONT", 4, 0, 0, 0))
								{
									iLocal_622 = 1;
								}
							}
							else if (func_19() == 1)
							{
								if (func_5(&Local_394, cLocal_371, "REPAP_INF", 4, 0, 0, 0))
								{
									iLocal_622 = 1;
								}
							}
							else if (func_19() == 0)
							{
								if (func_5(&Local_394, cLocal_371, "REPAP_INM", 4, 0, 0, 0))
								{
									iLocal_622 = 1;
								}
							}
							else if (func_5(&Local_394, cLocal_371, "REPAP_INT", 4, 0, 0, 0))
							{
								iLocal_622 = 1;
							}
						}
						else
						{
							if (!bLocal_367)
							{
								iLocal_368 = -5;
							}
							else
							{
								iLocal_368++;
							}
							unk_0xAC57FBF981AB03F4(iLocal_85);
							unk_0x36B42DB2912118E2(iLocal_85, iLocal_90, -1, func_161(iLocal_90), 1f, 8388608, 0);
						}
					}
				}
				break;
			
			case -5:
				if (bLocal_367)
				{
					func_169(Local_86, 1);
				}
				else
				{
					func_169(259.2552f, 122.2986f, 100.441f, 0);
				}
				if (unk_0xCA8794CE207FC6D5(iLocal_90, 0))
				{
					if (func_146(iLocal_90, 1093140480, 1, 1056964608, 0, 1))
					{
						iLocal_368 = 5;
					}
				}
				break;
			
			case 5:
				if (unk_0xCA8794CE207FC6D5(iLocal_90, 0))
				{
					if (!unk_0x9F94F2CFDCA78C55(iLocal_85) && unk_0x53170344050F2301(iLocal_85, iLocal_90, 0))
					{
						if (unk_0xD361727124133DF3(uLocal_359))
						{
							unk_0xA0A65B537B1F11EC(&uLocal_359);
						}
						unk_0xCBA47B699F417E4D(unk_0x507DA4994C3D8EBD());
						func_171(1);
					}
					else
					{
						if (!Global_3 && !bLocal_69)
						{
							if ((unk_0x53170344050F2301(unk_0x507DA4994C3D8EBD(), iLocal_90, 0) && !unk_0x53170344050F2301(iLocal_85, iLocal_90, 1)) && !unk_0x9EC075F0DABF6298(iLocal_90, 225.1779f, 125.6632f, 113.6647f, 262.3032f, 111.8771f, 97.16339f, 37f, 0, 1, 0))
							{
								if (bLocal_367)
								{
									unk_0xB2B080B88A4144B7(iLocal_85, 2, 1);
									sLocal_370 = "REPAP_GUP";
									func_171(6);
								}
								else
								{
									unk_0x050E86400BAF39B2(unk_0xAF65E5A58BE87D95(), 1, 0);
									unk_0xB2B080B88A4144B7(iLocal_85, 2, 1);
									sLocal_370 = "REPAP_CP";
									func_171(6);
								}
							}
						}
						if (!unk_0x53170344050F2301(iLocal_85, iLocal_90, 0))
						{
							if (unk_0xEC043AB2FEE0E94F(iLocal_85, -1794415470) != 1)
							{
								unk_0xAC57FBF981AB03F4(iLocal_85);
								unk_0x36B42DB2912118E2(iLocal_85, iLocal_90, -1, func_161(iLocal_90), 1f, 8388608, 0);
							}
							else if (unk_0x2A488C176D52CCA5(Local_62, unk_0x0CAFB9D38494283D(iLocal_90, 1f, 0f, 0f)) < 1f)
							{
								unk_0xD156A7AA30AC555A(iLocal_85, 1f);
							}
						}
					}
				}
				break;
			
			case 100:
				if (unk_0xCA8794CE207FC6D5(iLocal_90, 0))
				{
					if (!func_72())
					{
						func_101();
						if (func_19() == 1)
						{
							if (func_5(&Local_394, cLocal_371, "REPAP_YSF", 4, 0, 0, 0))
							{
								iLocal_368++;
							}
						}
						else if (func_19() == 0)
						{
							func_101();
							if (func_5(&Local_394, cLocal_371, "REPAP_YSM", 4, 0, 0, 0))
							{
								iLocal_368++;
							}
							iLocal_73 = 0;
						}
						else if (func_5(&Local_394, cLocal_371, "REPAP_YST", 4, 0, 0, 0))
						{
							iLocal_368++;
						}
					}
				}
				if (iLocal_368 == 101)
				{
					fLocal_664 = 0f;
				}
				func_169(Local_86, 1);
				break;
			
			case 101:
				if (unk_0xB7A628320EFF8E47(Local_59, Local_62) < 49f && !unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
				{
					if (unk_0x11F6A4A45943670E(unk_0x507DA4994C3D8EBD()) < 3f)
					{
						fLocal_664 = (fLocal_664 + unk_0x94B2D2AEAA1D886E());
					}
					else
					{
						fLocal_664 = (fLocal_664 - (unk_0x94B2D2AEAA1D886E() * 2f));
					}
					if (fLocal_664 > 10f)
					{
						if (func_5(&Local_394, cLocal_371, "REPAP_PRT", 4, 0, 0, 0))
						{
							fLocal_664 = 0f;
						}
					}
				}
				if (unk_0xCA8794CE207FC6D5(iLocal_90, 0))
				{
					if (!unk_0x53170344050F2301(unk_0x507DA4994C3D8EBD(), iLocal_90, 0) && func_170())
					{
						bLocal_367 = true;
						iLocal_73 = 1;
						iLocal_90 = unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0);
						unk_0xBAE5DF507EEC53C8(iLocal_90, 1, 1);
					}
					if (unk_0x53170344050F2301(unk_0x507DA4994C3D8EBD(), iLocal_90, 0))
					{
						if (unk_0xD361727124133DF3(uLocal_360))
						{
							unk_0xA0A65B537B1F11EC(&uLocal_360);
						}
						if (!unk_0xD361727124133DF3(uLocal_359))
						{
							uLocal_359 = func_173(iLocal_85, 0, 145);
						}
					}
					else
					{
						if (unk_0xD361727124133DF3(uLocal_359))
						{
							unk_0xA0A65B537B1F11EC(&uLocal_359);
						}
						if (!unk_0xD361727124133DF3(uLocal_360))
						{
							uLocal_360 = func_159(iLocal_90, 0, 0);
						}
					}
					if (unk_0x764E7360C13E7383(unk_0x507DA4994C3D8EBD(), iLocal_90))
					{
						if (unk_0xD361727124133DF3(uLocal_360))
						{
							unk_0xA0A65B537B1F11EC(&uLocal_360);
						}
						if (!unk_0xD361727124133DF3(uLocal_359))
						{
							uLocal_359 = func_173(iLocal_85, 0, 145);
						}
						func_172("MAG_2_ESCAPE_PAP_CHASE");
						iLocal_368 = 4;
					}
					if (!iLocal_73)
					{
						if (unk_0xB7A628320EFF8E47(Local_59, Local_65) < 9f && func_19() == 0)
						{
							if (func_5(&Local_394, cLocal_371, "REPAP_MIKE", 4, 0, 0, 0))
							{
								iLocal_73 = 1;
							}
						}
					}
				}
				func_169(Local_86, 1);
				break;
		}
		if (!Global_3 && !bLocal_69)
		{
			if (unk_0xCA8794CE207FC6D5(iLocal_90, 0))
			{
				if (unk_0x2A488C176D52CCA5(Local_59, Local_86) > 75f)
				{
					func_171(6);
				}
				if (func_184())
				{
					func_171(5);
				}
			}
		}
		if (!bLocal_367)
		{
			if (!unk_0xCA8794CE207FC6D5(iLocal_90, 0))
			{
				if (!Global_3 && !bLocal_69)
				{
					func_171(5);
				}
			}
			else
			{
				if (!bLocal_367)
				{
					if (!Global_3 && !bLocal_69)
					{
						if (unk_0x5D422B4764FA2ACA(iLocal_90) < iLocal_82)
						{
							if (unk_0x6255AE2591FE7603(iLocal_90, unk_0x507DA4994C3D8EBD(), 1))
							{
								iLocal_83 = (iLocal_83 + (iLocal_82 - unk_0x5D422B4764FA2ACA(iLocal_90)));
							}
							unk_0x7CEA616AE5D86DF7(iLocal_90);
						}
						if (iLocal_83 > 250)
						{
							if (unk_0xB4D3CFD952BEB647(iLocal_85, iLocal_90) && unk_0x2A488C176D52CCA5(Local_62, Local_65) < 25f)
							{
								func_171(5);
							}
						}
					}
				}
				iLocal_82 = unk_0x5D422B4764FA2ACA(iLocal_90);
			}
		}
		if (!unk_0x9F94F2CFDCA78C55(iLocal_85))
		{
			if (unk_0x1BA961C8CF14F399(iLocal_85))
			{
				if (!Global_3 && !bLocal_69)
				{
					func_171(5);
				}
			}
		}
	}
}

void func_169(struct<3> Param0, bool bParam3)
{
	if (unk_0x2A488C176D52CCA5(Local_62, Param0) > 2.5f)
	{
		if (unk_0xEC043AB2FEE0E94F(iLocal_85, 713668775) != 1)
		{
			unk_0x3F07E364A21EBC20(iLocal_85, Param0, 1f, -1, 0.25f, 0, 1193033728);
		}
	}
	else if (unk_0xEC043AB2FEE0E94F(iLocal_85, 713668775) != 1)
	{
		func_131(bParam3);
		unk_0x8E759206778E571F(iLocal_85, unk_0x507DA4994C3D8EBD(), -1, 16, 2);
	}
}

bool func_170()
{
	return (((((unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0) && unk_0xCA8794CE207FC6D5(unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0), 0)) && (unk_0x4658BA5921D40213(unk_0x26EA758C2A691D06(unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0))) || unk_0xA34706B20AE53D17(unk_0x26EA758C2A691D06(unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0))))) && unk_0xF7D9833F1E3C722B(unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0)) > 0) && func_163(unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0))) && !Global_96220);
}

void func_171(int iParam0)
{
	iLocal_46 = iParam0;
	iLocal_368 = 0;
}

void func_172(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_559)
	{
		if (!unk_0xA858564DC37EED5E(iLocal_559[iVar0], sParam0))
		{
			if (unk_0xA2A45E58AC3DF6C5(iLocal_559[iVar0]))
			{
				unk_0xAB5C0FE0C680BC7F(iLocal_559[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_559)
	{
		if (unk_0xA858564DC37EED5E(iLocal_559[iVar0], sParam0))
		{
			if (!unk_0xA2A45E58AC3DF6C5(iLocal_559[iVar0]))
			{
				unk_0xD56AC40382654643(iLocal_559[iVar0]);
			}
		}
		iVar0++;
	}
}

var func_173(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_160(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xD361727124133DF3(uVar0)) && unk_0xD177A95825B53731(&(Global_97173.f_29699[iParam2 /*29*/].f_3)))
	{
		unk_0x2B271F66198227B7(uVar0, &(Global_97173.f_29699[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_174(int iParam0)
{
	if (func_177())
	{
		Global_97163 = 1;
		Global_97160 = unk_0xF976C624234A4AA8();
		if (func_87(Global_97162))
		{
			func_175(0);
		}
		unk_0xAABDA3B6E57B068A(1, "RE_TITLE");
		if (iParam0 && func_87(Global_97162))
		{
			unk_0x2EFA6B02E866355A();
		}
		return 1;
	}
	return 0;
}

void func_175(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_97173.f_28117.f_2 < 3)
			{
				if (!unk_0xA325E5426CD8AC07())
				{
					func_156(func_176(iParam0), -1);
					Global_97173.f_28117.f_2++;
					unk_0x3DBE2A7AF9E71C82(&Global_97169, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0x61D8FEAF64881CDA(Global_97169, 1))
			{
				if (!unk_0xA325E5426CD8AC07())
				{
					func_156(func_176(iParam0), -1);
					Global_97173.f_28117.f_3++;
					unk_0x3DBE2A7AF9E71C82(&Global_97169, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0x61D8FEAF64881CDA(Global_97169, 2))
			{
				if (!unk_0xA325E5426CD8AC07())
				{
					func_156(func_176(iParam0), -1);
					Global_97173.f_28117.f_4++;
					unk_0x3DBE2A7AF9E71C82(&Global_97169, 2);
				}
			}
			break;
	}
}

char* func_176(int iParam0)
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

int func_177()
{
	switch (func_178(&Global_24503, 0, 5, 0, unk_0xF682120D0C324317()))
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

int func_178(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_87667.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_182(0))
		{
			return 0;
		}
		Global_34873++;
		*uParam0 = Global_34873;
		unk_0x60D71C675384BFB1(unk_0x4D82797EF5035A9F(), 0);
		Global_17098.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0xA6C786E2F6583AF3(8);
		}
		Global_34909 = iParam2;
		Global_34871 = *uParam0;
		Global_34872 = iParam4;
		Global_34870 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_34870 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_34870)
			{
				if (Global_34876[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_34871 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_180(iParam2))
		{
			return 0;
		}
		if (Global_34870 == 8)
		{
			return 0;
		}
		Global_34873++;
		*uParam0 = Global_34873;
		Global_34876[Global_34870 /*4*/] = Global_34873;
		Global_34876[Global_34870 /*4*/].f_1 = iParam1;
		Global_34876[Global_34870 /*4*/].f_2 = iParam2;
		Global_34876[Global_34870 /*4*/].f_3 = 0;
		Global_34870++;
		if (iParam4 != 0)
		{
			func_179(uParam0, iParam4);
		}
	}
	return 2;
}

void func_179(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_34870 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_34870)
	{
		if (Global_34876[iVar0 /*4*/] == *uParam0)
		{
			Global_34876[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_180(int iParam0)
{
	return func_181(iParam0, Global_34909);
}

int func_181(int iParam0, int iParam1)
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

int func_182(int iParam0)
{
	if (Global_34909 == 15)
	{
		return 0;
	}
	if (func_180(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_183()
{
	int iVar0;
	
	if (!unk_0x9F94F2CFDCA78C55(iLocal_85))
	{
		unk_0xB2B080B88A4144B7(iLocal_85, 2, 0);
		unk_0xA859D289EEB2D72A(iLocal_85, unk_0x507DA4994C3D8EBD(), 300f, -1, 0, 0);
	}
	iVar0 = 0;
	while (iVar0 < Local_203.f_0)
	{
		if (!unk_0x9F94F2CFDCA78C55(Local_203[iVar0 /*18*/]))
		{
			unk_0xA859D289EEB2D72A(Local_203[iVar0 /*18*/], unk_0x507DA4994C3D8EBD(), 300f, -1, 0, 0);
			unk_0xE440546F94B26235(Local_203[iVar0 /*18*/], -2065892691);
			unk_0x2DC5B31EBB810396(Local_203[iVar0 /*18*/], 0);
		}
		iVar0++;
	}
}

int func_184()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < Local_203.f_0)
	{
		if (unk_0xFD68187442384158(Local_203[iVar1 /*18*/]) && !unk_0x9F94F2CFDCA78C55(Local_203[iVar1 /*18*/]))
		{
			if (unk_0xDAB2315B565377E3(Local_203[iVar1 /*18*/]))
			{
				if (((unk_0x0982F2F40B035E77(Local_203[iVar1 /*18*/].f_6, 5f, 1) || unk_0x6588804F7BCB1101(-1, Local_203[iVar1 /*18*/].f_6, 10f)) || unk_0x1BA961C8CF14F399(Local_203[iVar1 /*18*/])) || (iLocal_385[iVar1] > 10 && iLocal_46 == 0))
				{
					iVar0 = 1;
				}
			}
		}
		iVar1++;
	}
	if (iLocal_348 > 1)
	{
		iVar0 = 1;
	}
	iVar1 = 0;
	while (iVar1 < Local_130.f_0)
	{
		if (unk_0xFD68187442384158(Local_130[iVar1 /*18*/]))
		{
			if (unk_0xCA8794CE207FC6D5(Local_130[iVar1 /*18*/], 0) && unk_0xDAB2315B565377E3(Local_130[iVar1 /*18*/]))
			{
				if (unk_0xEF57771119A32DB2(Local_130[iVar1 /*18*/]))
				{
					iVar0 = 1;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_185()
{
	if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()) && !unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), Local_42) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0x903468970F24CA24(unk_0x507DA4994C3D8EBD())) > 1369f && !func_196())
		{
			return 0;
		}
	}
	if (func_192())
	{
		return 1;
	}
	if (func_186(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_186(float fParam0, bool bParam1)
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
	if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
	{
		if (func_21(func_19()))
		{
			iVar36 = func_92();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0x61D8FEAF64881CDA(Global_97173.f_16795[iVar32 /*6*/], 2) && !unk_0x61D8FEAF64881CDA(Global_97173.f_16795[iVar32 /*6*/], 3))
				{
					func_187(iVar32, &Var0);
					fVar35 = unk_0x8FE221761D524CFE(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 0), Var0.f_6, 1);
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

void func_187(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_188(uParam1, "Abigail1", func_190(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_189(iParam0), 1, 0);
			break;
		
		case 1:
			func_188(uParam1, "Abigail2", func_190(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_189(iParam0), 1, 0);
			break;
		
		case 2:
			func_188(uParam1, "Barry1", func_190(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_189(iParam0), 1, 0);
			break;
		
		case 3:
			func_188(uParam1, "Barry2", func_190(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_189(iParam0), 1, 1);
			break;
		
		case 4:
			func_188(uParam1, "Barry3", func_190(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_189(iParam0), 0, 0);
			break;
		
		case 5:
			func_188(uParam1, "Barry3A", func_190(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_189(iParam0), 0, 1);
			break;
		
		case 6:
			func_188(uParam1, "Barry3C", func_190(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_189(iParam0), 0, 1);
			break;
		
		case 7:
			func_188(uParam1, "Barry4", func_190(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_189(iParam0), 0, 0);
			break;
		
		case 8:
			func_188(uParam1, "Dreyfuss1", func_190(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_189(iParam0), 0, 0);
			break;
		
		case 9:
			func_188(uParam1, "Epsilon1", func_190(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_189(iParam0), 0, 0);
			break;
		
		case 10:
			func_188(uParam1, "Epsilon2", func_190(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_189(iParam0), 1, 0);
			break;
		
		case 11:
			func_188(uParam1, "Epsilon3", func_190(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_189(iParam0), 0, 0);
			break;
		
		case 12:
			func_188(uParam1, "Epsilon4", func_190(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_189(iParam0), 0, 0);
			break;
		
		case 13:
			func_188(uParam1, "Epsilon5", func_190(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_189(iParam0), 1, 0);
			break;
		
		case 14:
			func_188(uParam1, "Epsilon6", func_190(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_189(iParam0), 0, 1);
			break;
		
		case 15:
			func_188(uParam1, "Epsilon7", func_190(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_189(iParam0), 0, 0);
			break;
		
		case 16:
			func_188(uParam1, "Epsilon8", func_190(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_189(iParam0), 1, 0);
			break;
		
		case 17:
			func_188(uParam1, "Extreme1", func_190(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_189(iParam0), 0, 1);
			break;
		
		case 18:
			func_188(uParam1, "Extreme2", func_190(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_189(iParam0), 0, 1);
			break;
		
		case 19:
			func_188(uParam1, "Extreme3", func_190(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_189(iParam0), 0, 1);
			break;
		
		case 20:
			func_188(uParam1, "Extreme4", func_190(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_189(iParam0), 0, 0);
			break;
		
		case 21:
			func_188(uParam1, "Fanatic1", func_190(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_189(iParam0), 1, 0);
			break;
		
		case 22:
			func_188(uParam1, "Fanatic2", func_190(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_189(iParam0), 1, 0);
			break;
		
		case 23:
			func_188(uParam1, "Fanatic3", func_190(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_189(iParam0), 0, 1);
			break;
		
		case 24:
			func_188(uParam1, "Hao1", func_190(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_189(iParam0), 0, 1);
			break;
		
		case 25:
			func_188(uParam1, "Hunting1", func_190(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_189(iParam0), 0, 1);
			break;
		
		case 26:
			func_188(uParam1, "Hunting2", func_190(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_189(iParam0), 0, 1);
			break;
		
		case 27:
			func_188(uParam1, "Josh1", func_190(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_189(iParam0), 1, 0);
			break;
		
		case 28:
			func_188(uParam1, "Josh2", func_190(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_189(iParam0), 1, 1);
			break;
		
		case 29:
			func_188(uParam1, "Josh3", func_190(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_189(iParam0), 1, 1);
			break;
		
		case 30:
			func_188(uParam1, "Josh4", func_190(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_189(iParam0), 1, 0);
			break;
		
		case 31:
			func_188(uParam1, "Maude1", func_190(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_189(iParam0), 0, 1);
			break;
		
		case 32:
			func_188(uParam1, "Minute1", func_190(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_189(iParam0), 0, 1);
			break;
		
		case 33:
			func_188(uParam1, "Minute2", func_190(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_189(iParam0), 0, 1);
			break;
		
		case 34:
			func_188(uParam1, "Minute3", func_190(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_189(iParam0), 0, 1);
			break;
		
		case 35:
			func_188(uParam1, "MrsPhilips1", func_190(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_189(iParam0), 0, 0);
			break;
		
		case 36:
			func_188(uParam1, "MrsPhilips2", func_190(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_189(iParam0), 0, 0);
			break;
		
		case 37:
			func_188(uParam1, "Nigel1", func_190(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_189(iParam0), 1, 0);
			break;
		
		case 38:
			func_188(uParam1, "Nigel1A", func_190(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_189(iParam0), 1, 1);
			break;
		
		case 39:
			func_188(uParam1, "Nigel1B", func_190(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_189(iParam0), 1, 1);
			break;
		
		case 40:
			func_188(uParam1, "Nigel1C", func_190(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_189(iParam0), 1, 1);
			break;
		
		case 41:
			func_188(uParam1, "Nigel1D", func_190(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_189(iParam0), 1, 1);
			break;
		
		case 42:
			func_188(uParam1, "Nigel2", func_190(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_189(iParam0), 1, 1);
			break;
		
		case 43:
			func_188(uParam1, "Nigel3", func_190(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_189(iParam0), 1, 1);
			break;
		
		case 44:
			func_188(uParam1, "Omega1", func_190(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_189(iParam0), 0, 0);
			break;
		
		case 45:
			func_188(uParam1, "Omega2", func_190(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_189(iParam0), 0, 0);
			break;
		
		case 46:
			func_188(uParam1, "Paparazzo1", func_190(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_189(iParam0), 0, 1);
			break;
		
		case 47:
			func_188(uParam1, "Paparazzo2", func_190(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_189(iParam0), 0, 1);
			break;
		
		case 48:
			func_188(uParam1, "Paparazzo3", func_190(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_189(iParam0), 0, 0);
			break;
		
		case 49:
			func_188(uParam1, "Paparazzo3A", func_190(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_189(iParam0), 0, 1);
			break;
		
		case 50:
			func_188(uParam1, "Paparazzo3B", func_190(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_189(iParam0), 0, 1);
			break;
		
		case 51:
			func_188(uParam1, "Paparazzo4", func_190(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_189(iParam0), 0, 0);
			break;
		
		case 52:
			func_188(uParam1, "Rampage1", func_190(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_189(iParam0), 0, 0);
			break;
		
		case 54:
			func_188(uParam1, "Rampage3", func_190(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_189(iParam0), 1, 0);
			break;
		
		case 55:
			func_188(uParam1, "Rampage4", func_190(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_189(iParam0), 1, 0);
			break;
		
		case 56:
			func_188(uParam1, "Rampage5", func_190(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_189(iParam0), 0, 0);
			break;
		
		case 53:
			func_188(uParam1, "Rampage2", func_190(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_189(iParam0), 1, 0);
			break;
		
		case 57:
			func_188(uParam1, "TheLastOne", func_190(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_189(iParam0), 0, 1);
			break;
		
		case 58:
			func_188(uParam1, "Tonya1", func_190(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_189(iParam0), 0, 1);
			break;
		
		case 59:
			func_188(uParam1, "Tonya2", func_190(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_189(iParam0), 0, 1);
			break;
		
		case 60:
			func_188(uParam1, "Tonya3", func_190(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_189(iParam0), 0, 1);
			break;
		
		case 61:
			func_188(uParam1, "Tonya4", func_190(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_189(iParam0), 0, 1);
			break;
		
		case 62:
			func_188(uParam1, "Tonya5", func_190(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_189(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_188(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_189(int iParam0)
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

struct<2> func_190(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_191(iParam0) };
	if (unk_0x8FA72E132AAFA62F(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_191(int iParam0)
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

int func_192()
{
	if (func_195() && !func_196())
	{
		return 1;
	}
	if (func_194() && func_193())
	{
		return 1;
	}
	return 0;
}

bool func_193()
{
	return Global_96891 > 0;
}

int func_194()
{
	if (Global_87111 != -1)
	{
		return 1;
	}
	return 0;
}

int func_195()
{
	if (Global_87111 != -1)
	{
		return unk_0x61D8FEAF64881CDA(Global_80977[Global_87111 /*34*/].f_15, 20);
	}
	return 0;
}

int func_196()
{
	if (unk_0x80AD636AD4184F2B())
	{
		if (unk_0xE6BC404A1178AB93() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

void func_197()
{
	func_199(39, 1);
	func_199(40, 1);
	func_199(41, 1);
	func_199(42, 1);
	func_199(43, 1);
	uLocal_358 = func_198(Local_86);
	iLocal_85 = unk_0x7B88529CAE3B7F15(26, joaat("a_f_y_bevhills_03"), Local_86, fLocal_89, 1, 1);
	unk_0x3A1E687904400847(iLocal_85, 1, 1);
	unk_0x3A1E687904400847(iLocal_85, 17, 1);
	unk_0xB2B080B88A4144B7(iLocal_85, 128, 1);
	unk_0xA1E4BA3B17C6D931(iLocal_85, 1);
	unk_0xEA0F21C3BB415566(iLocal_85, 0);
	unk_0xF2685765B7BEBCB0(iLocal_85, 0, 0, 1, 0);
	unk_0xF2685765B7BEBCB0(iLocal_85, 2, 0, 0, 0);
	unk_0xF2685765B7BEBCB0(iLocal_85, 3, 0, 0, 0);
	unk_0xF2685765B7BEBCB0(iLocal_85, 4, 0, 0, 0);
	unk_0xF2685765B7BEBCB0(iLocal_85, 7, 1, 0, 0);
	unk_0xF2685765B7BEBCB0(iLocal_85, 8, 0, 0, 0);
	unk_0x9559F452E8108F99(iLocal_85, 1);
	unk_0x2DC5B31EBB810396(iLocal_85, 1);
	unk_0x6A750A31D18DA81A(iLocal_85, 0);
	unk_0x454E090239AFF6E8(iLocal_85, "LACEY");
	if (Global_3 || bLocal_69)
	{
		unk_0xF732465E1FF70CE4(iLocal_85, 1);
	}
	if (unk_0x46B6351EE89452C8("CELEBRITY", &uLocal_68))
	{
		unk_0xE440546F94B26235(iLocal_85, uLocal_68);
	}
	iLocal_90 = unk_0x546974B676313326(joaat("surano"), Local_91, fLocal_94, 1, 1);
	unk_0x5614D4217C75FFE5(iLocal_90, Local_91, 0, 0, 1);
	unk_0x39E21A7346BD6D1B(iLocal_90, 0.1293f, -0.0323f, -0.1606f, 0.978f);
	unk_0xCDED36A388C5C6F3(iLocal_90, 0, 0);
	unk_0x29CE15040B0080CB(iLocal_90, 10);
	unk_0xD90C30D269B19096(iLocal_90);
	unk_0xCDC1FD4387DA32EC(iLocal_90, 3);
	unk_0xCB627690F1A36612(iLocal_90, 1);
	unk_0xE2519ECBDF6A0ECC(iLocal_90, 1);
	unk_0xAEB769DB49B3E4FC(iLocal_90, unk_0xD29594461A8F01D6(1));
	if (func_19() == 1)
	{
		func_17(&Local_394, 1, unk_0x507DA4994C3D8EBD(), "FRANKLIN", 0, 1);
	}
	else if (func_19() == 0)
	{
		func_17(&Local_394, 1, unk_0x507DA4994C3D8EBD(), "MICHAEL", 0, 1);
	}
	else
	{
		func_17(&Local_394, 1, unk_0x507DA4994C3D8EBD(), "TREVOR", 0, 1);
	}
	func_17(&Local_394, 3, iLocal_85, "LACEY", 0, 1);
	iLocal_374[0] = "idle_a";
	iLocal_374[1] = "idle_b";
	iLocal_374[2] = "idle_c";
	iLocal_374[3] = "idle_d";
	iLocal_374[4] = "idle_e";
	iLocal_374[5] = "idle_f";
	iLocal_374[6] = "idle_g";
	iLocal_374[7] = "idle_h";
	iLocal_374[8] = "idle_i";
	iLocal_559[0] = "MAG_2_ESCAPE_PAP_GET_CAR";
	iLocal_559[1] = "MAG_2_ESCAPE_PAP_CHASE";
	iLocal_559[2] = "MAG_2_ESCAPE_PAP_TAKE_ACTRESS_HOME";
	unk_0x941F924D5E9C2140(joaat("vader"), 1);
	unk_0x941F924D5E9C2140(joaat("surano"), 1);
	unk_0x941F924D5E9C2140(joaat("cavalcade2"), 1);
}

var func_198(struct<3> Param0)
{
	var uVar0;
	
	uVar0 = unk_0x7BFA7BEBF46363DE(Param0);
	unk_0x80882386D3DF8627(uVar0, 0);
	unk_0xE5432F1BF1E5646B(uVar0, 0);
	return uVar0;
}

void func_199(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_206(iParam0, 2, 1))
		{
			func_205(iParam0, 2, 1);
		}
	}
	else if (func_206(iParam0, 2, 1))
	{
		func_200(iParam0, 2, 1);
	}
}

void func_200(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0xCD27BF29FB9012E2(&(Global_89836.f_1267[iParam0]), iParam1);
	}
	else if (unk_0xD95428C8AA1DBBF2())
	{
		if (func_82() == 0)
		{
			uVar0 = func_203(func_204(iParam0), -1, 0);
			unk_0xCD27BF29FB9012E2(&uVar0, iParam1);
			func_201(func_204(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0xCD27BF29FB9012E2(&(Global_97173.f_668[iParam0]), iParam1);
	}
}

void func_201(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2454190[iParam0 /*6*/][func_202(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x96B68C67633472DC(iVar0, uParam1, iParam3);
	}
}

int func_202(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_85();
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

int func_203(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2454190[iParam0 /*6*/][func_202(iParam1)];
	if (unk_0x55FFE396AA3CA77A(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_204(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 814;
			break;
		
		case 1:
			return 815;
			break;
		
		case 2:
			return 816;
			break;
		
		case 3:
			return 817;
			break;
		
		case 4:
			return 818;
			break;
		
		case 5:
			return 819;
			break;
		
		case 6:
			return 820;
			break;
		
		case 7:
			return 821;
			break;
		
		case 8:
			return 822;
			break;
		
		case 9:
			return 823;
			break;
		
		case 10:
			return 824;
			break;
		
		case 11:
			return 825;
			break;
		
		case 12:
			return 826;
			break;
		
		case 13:
			return 827;
			break;
		
		case 14:
			return 828;
			break;
		
		case 15:
			return 830;
			break;
		
		case 16:
			return 831;
			break;
		
		case 17:
			return 832;
			break;
		
		case 18:
			return 833;
			break;
		
		case 19:
			return 834;
			break;
		
		case 20:
			return 835;
			break;
		
		case 21:
			return 836;
			break;
		
		case 22:
			return 837;
			break;
		
		case 23:
			return 838;
			break;
		
		case 24:
			return 839;
			break;
		
		case 25:
			return 840;
			break;
		
		case 26:
			return 841;
			break;
		
		case 27:
			return 842;
			break;
		
		case 28:
			return 843;
			break;
		
		case 29:
			return 844;
			break;
		
		case 30:
			return 845;
			break;
		
		case 31:
			return 846;
			break;
		
		case 32:
			return 847;
			break;
		
		case 33:
			return 848;
			break;
		
		case 34:
			return 849;
			break;
		
		case 35:
			return 850;
			break;
		
		case 36:
			return 851;
			break;
		
		case 37:
			return 852;
			break;
		
		case 38:
			return 853;
			break;
		
		case 39:
			return 854;
			break;
		
		case 40:
			return 858;
			break;
		
		case 41:
			return 859;
			break;
		
		case 42:
			return 860;
			break;
		
		case 43:
			return 861;
			break;
		
		default:
			break;
	}
	return 2829;
}

void func_205(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0x3DBE2A7AF9E71C82(&(Global_89836.f_1267[iParam0]), iParam1);
	}
	else if (unk_0xD95428C8AA1DBBF2())
	{
		if (func_82() == 0)
		{
			uVar0 = func_203(func_204(iParam0), -1, 0);
			unk_0x3DBE2A7AF9E71C82(&uVar0, iParam1);
			func_201(func_204(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0x3DBE2A7AF9E71C82(&(Global_97173.f_668[iParam0]), iParam1);
	}
}

int func_206(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0x61D8FEAF64881CDA(Global_89836.f_1267[iParam0], iParam1);
	}
	else if (unk_0xD95428C8AA1DBBF2())
	{
		if (func_82() == 0)
		{
			return unk_0x61D8FEAF64881CDA(func_203(func_204(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x61D8FEAF64881CDA(Global_97173.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_207()
{
	if (!iLocal_95)
	{
		func_215(&uLocal_96, joaat("surano"));
		func_215(&uLocal_96, joaat("prop_ld_test_01"));
		func_215(&uLocal_96, joaat("a_f_y_bevhills_03"));
		func_215(&uLocal_96, joaat("a_m_y_genstreet_02"));
		func_215(&uLocal_96, joaat("vader"));
		func_215(&uLocal_96, joaat("cavalcade2"));
		func_215(&uLocal_96, joaat("prop_pap_camera_01"));
		func_212(&uLocal_96);
		iLocal_95 = 1;
	}
	if (!func_208(&uLocal_96))
	{
		return 0;
	}
	unk_0x395C5D98343F0040("random@escape_paparazzi@standing@");
	unk_0x395C5D98343F0040("random@paparazzi@pap_anims");
	unk_0x395C5D98343F0040("random@paparazzi@peek");
	unk_0x395C5D98343F0040("random@paparazzi@trans");
	unk_0x395C5D98343F0040("random@paparazzi@wait");
	unk_0x395C5D98343F0040("veh@std@ps@idle_panic");
	unk_0x395C5D98343F0040("veh@low@front_ps@idle_panic");
	unk_0x395C5D98343F0040(sLocal_373);
	unk_0x481B0AD01AC057F7("ESCPAP", 0);
	if (((((((((unk_0xCE40391AB65FE305("random@escape_paparazzi@standing@") && unk_0xCE40391AB65FE305("random@paparazzi@pap_anims")) && unk_0xCE40391AB65FE305("random@paparazzi@peek")) && unk_0xCE40391AB65FE305("random@paparazzi@trans")) && unk_0xCE40391AB65FE305("random@paparazzi@wait")) && unk_0xCE40391AB65FE305("veh@std@ps@idle_panic")) && unk_0xCE40391AB65FE305("veh@low@front_ps@idle_panic")) && unk_0xCE40391AB65FE305(sLocal_373)) && unk_0x6C741637F73EA9EC(0)) && unk_0xF08CFB68522305B2("Distant_Camera_Flash", false))
	{
		return 1;
	}
	return 0;
}

int func_208(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_31)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0x61D8FEAF64881CDA((*uParam0)[iVar0 /*2*/], 30))
		{
			if (!unk_0x61D8FEAF64881CDA((*uParam0)[iVar0 /*2*/], 29))
			{
				return 0;
			}
			if (!func_209(uParam0[iVar0 /*2*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_31 = 0;
	return 1;
}

bool func_209(var uParam0)
{
	return func_210(*uParam0, "NULL", uParam0->f_1);
}

int func_210(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0x61D8FEAF64881CDA(iParam0, 30))
	{
		if (unk_0x61D8FEAF64881CDA(iParam0, 29))
		{
			switch (func_211(iParam0))
			{
				case 0:
					return unk_0xD291857D0C9C7FEC(uParam2);
					break;
				
				case 1:
					return unk_0xCE40391AB65FE305(sParam1);
					break;
				
				case 2:
					return unk_0x7283AF7715BF497C(sParam1);
					break;
				
				case 3:
					return unk_0x31920D7070131373(sParam1);
					break;
				
				case 4:
					return unk_0xD3536FF14115DA03(iParam2, sParam1);
					break;
				
				case 5:
					return unk_0xB16E5DBDEC4BBDEB(sParam1);
					break;
				
				case 6:
					return unk_0xF08CFB68522305B2(sParam1, unk_0x61D8FEAF64881CDA(iParam0, 27));
					break;
				
				case 7:
					return unk_0xCF2008EE76BCB924(iParam2);
					break;
				
				case 8:
					return unk_0x6C741637F73EA9EC(iParam2);
					break;
				
				case 9:
					return unk_0x09B3E74864C634DA();
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

int func_211(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0x61D8FEAF64881CDA(iParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_212(var uParam0)
{
	func_213(uParam0, 9, -1, 0);
}

void func_213(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (!func_214(iParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0x61D8FEAF64881CDA((*uParam0)[iVar0 /*2*/], 30))
		{
			if (unk_0x61D8FEAF64881CDA((*uParam0)[iVar0 /*2*/], iParam1))
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
		if (!unk_0x61D8FEAF64881CDA((*uParam0)[iVar0 /*2*/], 30))
		{
			(uParam0[iVar0 /*2*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*2*/] = iParam3;
			unk_0x3DBE2A7AF9E71C82(uParam0[iVar0 /*2*/], iParam1);
			unk_0x3DBE2A7AF9E71C82(uParam0[iVar0 /*2*/], 30);
			return;
		}
		iVar0++;
	}
}

int func_214(int iParam0)
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

void func_215(var uParam0, int iParam1)
{
	func_213(uParam0, 0, iParam1, 0);
}

int func_216()
{
	if (!func_180(5))
	{
		return 1;
	}
	if (func_192())
	{
		return 1;
	}
	if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0x903468970F24CA24(unk_0x507DA4994C3D8EBD())) > 1369f && !func_196())
		{
			return 0;
		}
	}
	if (func_186(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_217()
{
	if ((Global_97162 == func_96() && unk_0x7BCE01926E77105A()) && Global_97163)
	{
		return 1;
	}
	return 0;
}

void func_218(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_31)
	{
		if ((unk_0xE3B6F359045B979E() >= (uParam0->f_32 + uParam0->f_33) || unk_0x61D8FEAF64881CDA(Global_89784.f_20, 2)) || unk_0x61D8FEAF64881CDA(Global_89784.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (unk_0x61D8FEAF64881CDA((*uParam0)[iVar0 /*2*/], 30))
				{
					if (!unk_0x61D8FEAF64881CDA((*uParam0)[iVar0 /*2*/], 29))
					{
						func_219(uParam0[iVar0 /*2*/]);
						uParam0->f_32 = unk_0xE3B6F359045B979E();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_219(var uParam0)
{
	func_220(uParam0, "NULL", uParam0->f_1);
}

void func_220(var uParam0, char* sParam1, int iParam2)
{
	if (unk_0x61D8FEAF64881CDA(*uParam0, 30))
	{
		switch (func_211(*uParam0))
		{
			case 0:
				unk_0xCBE6AC5010E5CE5C(uParam2);
				break;
			
			case 1:
				unk_0x395C5D98343F0040(sParam1);
				break;
			
			case 2:
				unk_0x4554A56FA4AB29D4(sParam1);
				break;
			
			case 3:
				unk_0x685EB3667D702B92(sParam1, unk_0x61D8FEAF64881CDA(*uParam0, 28));
				break;
			
			case 4:
				unk_0x27859D80F345E855(iParam2, sParam1);
				break;
			
			case 5:
				unk_0x909E9D811F9F1AAE(sParam1);
				break;
			
			case 6:
				unk_0xF08CFB68522305B2(sParam1, unk_0x61D8FEAF64881CDA(*uParam0, 27));
				break;
			
			case 7:
				unk_0x9BDCCBFB569D44D3(iParam2);
				break;
			
			case 8:
				unk_0x481B0AD01AC057F7(sParam1, iParam2);
				break;
			
			case 9:
				unk_0x903BC66D86D2CC1E();
				break;
			
			default:
				break;
		}
		unk_0x3DBE2A7AF9E71C82(uParam0, 29);
	}
}

void func_221(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_96();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_223(iParam0);
	unk_0x4F2CE8E787B36129(0);
	unk_0xD50D943D0D4E5EF1(1);
	Global_97159 = 0;
	func_222();
}

void func_222()
{
	if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
	{
		if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
		{
			unk_0x941F924D5E9C2140(unk_0x26EA758C2A691D06(unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0)), 1);
		}
		unk_0x7FEDD088E489CE41(unk_0x507DA4994C3D8EBD(), 32, 0);
	}
}

void func_223(int iParam0)
{
	Global_97162 = iParam0;
}

int func_224(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_131165)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_96();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_265())
		{
			return 0;
		}
	}
	Local_42 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()) && !unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
		{
			Var1 = { unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0x903468970F24CA24(unk_0x507DA4994C3D8EBD())) > 1369f && !func_196())
			{
				return 0;
			}
		}
		if (!Global_97173.f_7311)
		{
			return 0;
		}
		if (func_77(0))
		{
			return 0;
		}
		if (func_192())
		{
			return 0;
		}
		if (func_264())
		{
			return 0;
		}
		if (Global_97162 != -1)
		{
			return 0;
		}
		if (func_21(func_19()))
		{
			if (func_186(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()) && !bParam6)
		{
			if ((Var1.f_2 - Local_42.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_263(iParam3))
		{
			return 0;
		}
		if (func_21(func_19()))
		{
			if (func_262(func_19()) == 4 || func_262(func_19()) == 5)
			{
				return 0;
			}
		}
		if (func_21(func_19()))
		{
			if (!func_261(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_260(Global_97173.f_28117.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0xF976C624234A4AA8() - Global_97164) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_259())
		{
			return 0;
		}
		if (unk_0x4E6BA6FF244D94A8())
		{
			return 0;
		}
		if (unk_0x7BCE01926E77105A())
		{
			return 0;
		}
		if (!func_250(4))
		{
			return 0;
		}
		if (!func_180(5))
		{
			return 0;
		}
		if (func_249(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (unk_0x93AF5BB44F9A2E1B(unk_0xB9F7014CB27D77C7(unk_0x507DA4994C3D8EBD())))
		{
			if ((unk_0xB9F7014CB27D77C7(unk_0x507DA4994C3D8EBD()) == unk_0x9C1CBD99573D4312(377.153f, -717.567f, 10.0536f) || unk_0xB9F7014CB27D77C7(unk_0x507DA4994C3D8EBD()) == unk_0x9C1CBD99573D4312(320.9934f, 265.2515f, 82.1221f)) || unk_0xB9F7014CB27D77C7(unk_0x507DA4994C3D8EBD()) == unk_0x9C1CBD99573D4312(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_249(0, 0))
		{
			return 0;
		}
		if (Global_24590)
		{
			return 0;
		}
		if (func_263(30) && !func_249(30, 0))
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
				Var5 = { Global_97173.f_1729.f_539.f_1528[iVar4 /*3*/] };
				iVar8 = Global_97173.f_1729.f_539.f_1524[iVar4];
				if (func_248(iVar8))
				{
					if (func_226(iVar4))
					{
						if (!func_225(Var5, 0f, 0f, 0f))
						{
							if (unk_0xB7A628320EFF8E47(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 0), Var5) < (210f * 210f))
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

bool func_225(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_226(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_97173.f_1729.f_539.f_1524[iParam0];
	return func_227(iVar0);
}

int func_227(int iParam0)
{
	return func_228(iParam0, 1);
}

int func_228(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_248(iParam0))
	{
		return 0;
	}
	func_229(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_229(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_230(func_241(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_230(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_240(iParam0, iParam1))
	{
		iVar0 = func_239(iParam1);
		iVar1 = func_237(iParam0);
		iVar2 = (func_237(iParam0) - func_237(iParam1));
		iVar3 = (func_239(iParam0) - func_239(iParam1));
		iVar4 = (func_236(iParam0) - func_236(iParam1));
		iVar5 = (func_235(iParam0) - func_235(iParam1));
		iVar6 = (func_234(iParam0) - func_234(iParam1));
		iVar7 = (func_233(iParam0) - func_233(iParam1));
	}
	else
	{
		iVar0 = func_239(iParam0);
		iVar1 = func_237(iParam1);
		iVar2 = (func_237(iParam1) - func_237(iParam0));
		iVar3 = (func_239(iParam1) - func_239(iParam0));
		iVar4 = (func_236(iParam1) - func_236(iParam0));
		iVar5 = (func_235(iParam1) - func_235(iParam0));
		iVar6 = (func_234(iParam1) - func_234(iParam0));
		iVar7 = (func_233(iParam1) - func_233(iParam0));
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
		iVar4 = (iVar4 + func_232(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_231(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
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

float func_231(float fParam0, float fParam1, float fParam2)
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

int func_232(int iParam0, int iParam1)
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

int func_233(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_234(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_235(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_236(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_237(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_238(unk_0x61D8FEAF64881CDA(iParam0, 31), -1, 1)) + 2011;
}

int func_238(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_239(int iParam0)
{
	return iParam0 & 15;
}

int func_240(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_248(iParam1) || !func_248(iParam0))
	{
		return 1;
	}
	iVar0 = func_237(iParam0);
	iVar1 = func_237(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_239(iParam0);
	iVar1 = func_239(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_236(iParam0);
	iVar1 = func_236(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_235(iParam0);
	iVar1 = func_235(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_234(iParam0);
	iVar1 = func_234(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_233(iParam0);
	iVar1 = func_233(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_241()
{
	var uVar0;
	
	func_247(&uVar0, unk_0x2784A8234E9B4202());
	func_246(&uVar0, unk_0x06F66CEDC24218A4());
	func_245(&uVar0, unk_0xE76C684D1C903A71());
	func_244(&uVar0, unk_0xA277D6C04B4B44C8());
	func_243(&uVar0, unk_0x1285C2DD1E4945FF());
	func_242(&uVar0, unk_0xCFC08A7C99F98C5B());
	return uVar0;
}

void func_242(var uParam0, int iParam1)
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

void func_243(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_244(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_239(*uParam0);
	iVar1 = func_237(*uParam0);
	if (iParam1 < 1 || iParam1 > func_232(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_245(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_246(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_247(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_248(int iParam0)
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
	iVar0 = func_233(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_234(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_235(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_237(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_239(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_236(iParam0);
	if (iVar5 < 1 || iVar5 > func_232(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_249(int iParam0, int iParam1)
{
	if (unk_0x61D8FEAF64881CDA(Global_97173.f_28117.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_250(int iParam0)
{
	int iVar0;
	
	if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
	{
		if (unk_0xFD68187442384158(unk_0x507DA4994C3D8EBD()))
		{
			if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
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
						if (((((((((((((((((!unk_0x78E049AAE10556D5(unk_0xAF65E5A58BE87D95()) || unk_0xF97DDB74A78F6500(unk_0x507DA4994C3D8EBD())) || unk_0xADFF42956B1E6E0F(unk_0x507DA4994C3D8EBD())) || unk_0x1983DA3C921BB046(unk_0x507DA4994C3D8EBD())) || unk_0xC9A89245EC1B2DDF(unk_0x507DA4994C3D8EBD())) || unk_0xAC33D6DDFB2C92EC(unk_0xAF65E5A58BE87D95(), 1)) || unk_0x3AA78AB1897C2B94(unk_0xAF65E5A58BE87D95())) || unk_0xC20B334EFA64243F(unk_0x507DA4994C3D8EBD(), 0)) || func_258()) || Global_96220) || Global_24446) || func_257()) || func_14(8, -1)) || func_256()) || func_255()) || func_254()) || func_253()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xAC33D6DDFB2C92EC(unk_0xAF65E5A58BE87D95(), 1) || func_258()) || Global_24446) || func_257()) || func_14(8, -1)) || func_254()) || func_256()) || func_255()) || func_253()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x78E049AAE10556D5(unk_0xAF65E5A58BE87D95()) || unk_0xF97DDB74A78F6500(unk_0x507DA4994C3D8EBD())) || unk_0xADFF42956B1E6E0F(unk_0x507DA4994C3D8EBD())) || unk_0x1983DA3C921BB046(unk_0x507DA4994C3D8EBD())) || unk_0xC9A89245EC1B2DDF(unk_0x507DA4994C3D8EBD())) || unk_0xAC33D6DDFB2C92EC(unk_0xAF65E5A58BE87D95(), 1)) || unk_0x3AA78AB1897C2B94(unk_0xAF65E5A58BE87D95())) || unk_0xC20B334EFA64243F(unk_0x507DA4994C3D8EBD(), 0)) || func_258()) || Global_96220) || Global_24446) || func_257()) || func_14(8, -1)) || func_254()) || func_256()) || func_255()) || func_253()) || Global_97173.f_5944.f_889[iVar0] == 5) || Global_35456 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x1983DA3C921BB046(unk_0x507DA4994C3D8EBD()) || unk_0xC9A89245EC1B2DDF(unk_0x507DA4994C3D8EBD())) || unk_0xAC33D6DDFB2C92EC(unk_0xAF65E5A58BE87D95(), 1)) || unk_0xC20B334EFA64243F(unk_0x507DA4994C3D8EBD(), 0)) || func_258()) || Global_96220) || Global_24446) || func_257()) || func_14(8, -1)) || func_256()) || func_255()) || func_253()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_258() || unk_0x89D8D467C3C356CB(unk_0xAF65E5A58BE87D95()) > 0) || func_14(8, -1)) || func_253()) || func_252()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_14(8, -1) || func_256()) || func_255()) || func_252()) || func_251())
						{
							return 0;
						}
						if ((unk_0xA4ADA92842355D33() && unk_0x4B08838D3C4A40AA() != 3) && unk_0x34F66A7928F4DB93() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0xFD68187442384158(unk_0x507DA4994C3D8EBD()))
						{
							if ((((((((((((((unk_0xC20B334EFA64243F(unk_0x507DA4994C3D8EBD(), 0) || unk_0x89D8D467C3C356CB(unk_0xAF65E5A58BE87D95()) > 0) || unk_0xF97DDB74A78F6500(unk_0x507DA4994C3D8EBD())) || unk_0x1983DA3C921BB046(unk_0x507DA4994C3D8EBD())) || unk_0xC9A89245EC1B2DDF(unk_0x507DA4994C3D8EBD())) || unk_0xAC33D6DDFB2C92EC(unk_0xAF65E5A58BE87D95(), 1)) || unk_0x3AA78AB1897C2B94(unk_0xAF65E5A58BE87D95())) || func_258()) || Global_24446) || func_257()) || func_14(8, -1)) || func_255()) || func_254()) || func_253()) || Global_97173.f_5944.f_889[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0xC20B334EFA64243F(unk_0x507DA4994C3D8EBD(), 0) || !unk_0xA54B09EB6B49FA94(unk_0xAF65E5A58BE87D95())) || !unk_0x78E049AAE10556D5(unk_0xAF65E5A58BE87D95())) || !unk_0x8D4100BAA46EE198()) || unk_0xF97DDB74A78F6500(unk_0x507DA4994C3D8EBD())) || unk_0x1983DA3C921BB046(unk_0x507DA4994C3D8EBD())) || unk_0xC9A89245EC1B2DDF(unk_0x507DA4994C3D8EBD())) || unk_0xAC33D6DDFB2C92EC(unk_0xAF65E5A58BE87D95(), 1)) || func_258()) || func_255()) || Global_96220) || Global_24446) || func_257()) || Global_35953) || func_14(8, -1)) || func_254()) || func_252()) || func_253()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0xC20B334EFA64243F(unk_0x507DA4994C3D8EBD(), 0) || !unk_0xA54B09EB6B49FA94(unk_0xAF65E5A58BE87D95())) || !unk_0x78E049AAE10556D5(unk_0xAF65E5A58BE87D95())) || !unk_0x8D4100BAA46EE198()) || unk_0xF0428CCE35084401(unk_0xAF65E5A58BE87D95(), 0)) || unk_0xF97DDB74A78F6500(unk_0x507DA4994C3D8EBD())) || unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 1)) || unk_0x1983DA3C921BB046(unk_0x507DA4994C3D8EBD())) || unk_0xC9A89245EC1B2DDF(unk_0x507DA4994C3D8EBD())) || unk_0x43C1CCFF3C61F7D7(unk_0x507DA4994C3D8EBD())) || unk_0xAC33D6DDFB2C92EC(unk_0xAF65E5A58BE87D95(), 1)) || unk_0x3AA78AB1897C2B94(unk_0xAF65E5A58BE87D95())) || func_258()) || Global_96220) || Global_24446) || func_257()) || func_14(8, -1)) || func_254()) || func_252()) || func_256()) || func_255()) || func_253())
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

var func_251()
{
	return Global_89823.f_1;
}

int func_252()
{
	if (Global_87111 != -1)
	{
		return unk_0x61D8FEAF64881CDA(Global_80977[Global_87111 /*34*/].f_15, 13);
	}
	return 0;
}

int func_253()
{
	if (unk_0x25531002BCF0D968(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_254()
{
	if (Global_68327)
	{
		return 1;
	}
	else if (Global_54566 && !Global_54572)
	{
		return 1;
	}
	return 0;
}

bool func_255()
{
	return Global_89836.f_291 > 0;
}

bool func_256()
{
	return Global_89836.f_290 > 0;
}

var func_257()
{
	return Global_1315898;
}

int func_258()
{
	if (!unk_0xD95428C8AA1DBBF2())
	{
		return Global_87667.f_44 == 1;
	}
	return 0;
}

int func_259()
{
	func_11();
	if (Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_260(int iParam0)
{
	return func_240(func_241(), iParam0);
}

int func_261(int iParam0, int iParam1, int iParam2)
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

int func_262(int iParam0)
{
	if (!func_21(iParam0))
	{
		return 7;
	}
	return Global_97173.f_5944.f_889[iParam0];
}

bool func_263(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_265())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0x61D8FEAF64881CDA(Global_97173.f_28117, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0x61D8FEAF64881CDA(Global_97173.f_28117.f_1, iVar0);
	}
	return bVar1;
}

int func_264()
{
	var uVar0;
	
	if (Global_24594)
	{
		uVar0 = unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0);
		if (unk_0xCA8794CE207FC6D5(uVar0, 0))
		{
			if (!unk_0x9F94F2CFDCA78C55(unk_0xE634CB9EE7094537(iVar0, 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_265()
{
	var uVar0;
	
	if (unk_0x85B80D0F84A3F70C())
	{
		if (unk_0x61D8FEAF64881CDA(unk_0x227FB8F9C772BAFB(866), 0))
		{
			return 1;
		}
	}
	if (!unk_0xD95428C8AA1DBBF2())
	{
		if (unk_0x61D8FEAF64881CDA(Global_97173.f_668.f_683, 7))
		{
			return 1;
		}
	}
	if (Global_131417 == 2)
	{
		return 1;
	}
	if (unk_0xA730AA29D1C70932())
	{
		if (unk_0x72B3C5483AF02F51())
		{
			if (unk_0xFA66FD5789959E48())
			{
				if (unk_0x85B80D0F84A3F70C())
				{
					uVar0 = unk_0x227FB8F9C772BAFB(866);
					unk_0x3DBE2A7AF9E71C82(&uVar0, 0);
					unk_0x6C25B3CA27EB626F(uVar0);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_266(var uParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		uParam0->f_33 = iParam1;
	}
}

void func_267()
{
	func_285(0);
	unk_0x9A76FCB3181D8AAB(-90f, -1488f, -50f, 55f, -1470f, 50f, 1);
	unk_0xF81DFFDCEDAA4951("WORLD_VEHICLE_DRIVE_SOLO", 1);
	func_280(&uLocal_96, 0);
	unk_0xA878656BC39BBC51("random@escape_paparazzi@standing@");
	unk_0xA878656BC39BBC51("random@paparazzi@pap_anims");
	unk_0xA878656BC39BBC51("random@paparazzi@peek");
	unk_0xA878656BC39BBC51("random@paparazzi@trans");
	unk_0xA878656BC39BBC51("random@paparazzi@wait");
	unk_0xA878656BC39BBC51("veh@std@ps@idle_panic");
	unk_0xA878656BC39BBC51("veh@low@front_ps@idle_panic");
	unk_0xA878656BC39BBC51(sLocal_373);
	unk_0xEE6010D5E324610F();
	if (func_217())
	{
		unk_0xA54C914AEB391F49(1f);
	}
	if (unk_0xFD68187442384158(iLocal_85) && !unk_0x9F94F2CFDCA78C55(iLocal_85))
	{
		if (unk_0xBE55B130951EF5CA(iLocal_85))
		{
			unk_0xA2A854DDCAB3A06F(iLocal_85);
		}
		if (unk_0x2A24448FF232F834(iLocal_85, 1))
		{
			if (!unk_0x1BA961C8CF14F399(iLocal_85))
			{
				unk_0x48367A1F7C9A1041(iLocal_85, 0, 0);
			}
		}
	}
	func_269(-1);
	unk_0x0E824F7271760B02();
	unk_0x215D5A45803F79DC(0);
	unk_0x941F924D5E9C2140(joaat("vader"), 0);
	unk_0x941F924D5E9C2140(joaat("surano"), 0);
	unk_0x941F924D5E9C2140(joaat("cavalcade2"), 0);
	unk_0x1D6153ECFEB26B2A(uLocal_364, 0);
	unk_0x1D6153ECFEB26B2A(uLocal_365, 0);
	unk_0x1D6153ECFEB26B2A(uLocal_366, 0);
	unk_0xC198E0954F22A27D(Vector(93.8361f, 92.1704f, 246.1673f) + Vector(6f, 6f, 6f), Vector(93.8361f, 92.1704f, 246.1673f) - Vector(6f, 6f, 6f), 1, 1);
	if (Global_24682)
	{
		unk_0xF74C93D9036BCC1E("AC_STOP");
	}
	func_268();
	unk_0x883793591E631A3B();
}

void func_268()
{
	Global_24678 = 0;
	Global_24679 = 0;
	Global_24681 = 0;
	Global_24682 = 0;
	Global_24683 = 0;
}

void func_269(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_96();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_217())
	{
		func_273(iParam0);
		unk_0xAABDA3B6E57B068A(0, 0);
		Global_97164 = unk_0xF976C624234A4AA8();
		func_272(30000);
		StringCopy(&cVar0, func_271(Global_97162, 1), 64);
		if (func_95(Global_97162) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_97161, 64);
		}
		unk_0x7D8C98CDE178AB1B(&cVar0, Global_97159, (unk_0xF976C624234A4AA8() - Global_97160), 0);
	}
	else if (unk_0x61D8FEAF64881CDA(Global_97169, 0) && Global_97173.f_28117.f_2 < 3)
	{
		unk_0xCD27BF29FB9012E2(&Global_97169, 0);
	}
	func_270(&Global_24503);
	Global_97163 = 0;
	func_223(-1);
}

void func_270(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_34871)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_34870 = 0;
	Global_34872 = 0;
	Global_34909 = 15;
	Global_54569 = 0;
	Global_54570 = 0;
}

char* func_271(int iParam0, bool bParam1)
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

void func_272(int iParam0)
{
	Global_35460 = (unk_0xF976C624234A4AA8() + iParam0);
}

void func_273(int iParam0)
{
	func_274(iParam0, 0, func_279(iParam0));
}

void func_274(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_241();
	func_277(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_276(iParam0, &uVar0);
	Var1 = { func_275(&uVar0) };
}

struct<16> func_275(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_235(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_234(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_233(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_236(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_239(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_237(*uParam0), 64);
	return Var0;
}

void func_276(int iParam0, var uParam1)
{
	Global_97173.f_28117.f_43[iParam0] = *uParam1;
}

void func_277(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_237(*uParam0);
	iVar1 = func_239(*uParam0);
	iVar2 = func_236(*uParam0);
	iVar3 = func_235(*uParam0);
	iVar4 = func_234(*uParam0);
	iVar5 = func_233(*uParam0);
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
	iVar6 = func_232(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_232(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_278(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_278(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_247(uParam0, iParam1);
	func_246(uParam0, iParam2);
	func_245(uParam0, iParam3);
	func_244(uParam0, iParam4);
	func_243(uParam0, iParam5);
	func_242(uParam0, iParam6);
}

int func_279(int iParam0)
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

void func_280(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_282(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_281(uParam0[iVar0 /*2*/]);
		iVar0++;
	}
	uParam0->f_31 = 0;
	uParam0->f_32 = -1;
	uParam0->f_33 = 1;
}

void func_281(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
}

void func_282(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0x61D8FEAF64881CDA((*uParam0)[iVar0 /*2*/], 30))
		{
			func_283(uParam0[iVar0 /*2*/]);
		}
		iVar0++;
	}
	uParam0->f_31 = 1;
}

void func_283(var uParam0)
{
	func_284(*uParam0, "NULL", uParam0->f_1);
}

void func_284(int iParam0, char* sParam1, var uParam2)
{
	if (unk_0x61D8FEAF64881CDA(uParam0, 30))
	{
		switch (func_211(iParam0))
		{
			case 0:
				unk_0xFF467904A8A12BBE(uParam2);
				break;
			
			case 1:
				unk_0xA878656BC39BBC51(sParam1);
				break;
			
			case 2:
				unk_0x36A51C16EAE930C6(sParam1);
				break;
			
			case 3:
				unk_0xB6A951E6C2922F87(sParam1);
				break;
			
			case 4:
				unk_0x6F50999A7C4DD6A2(uParam2, sParam1);
				break;
			
			case 5:
				unk_0x932057F38C942D3B(sParam1);
				break;
			
			case 6:
				unk_0xEE6010D5E324610F();
				break;
			
			case 7:
				unk_0x369C9F8CD6971E4B(uParam2);
				break;
			
			case 8:
				unk_0x0474B54D6F301DDF(uParam2, unk_0x61D8FEAF64881CDA(iParam0, 26));
				break;
			
			case 9:
				unk_0x7E0FE22DC929277C();
				break;
			
			default:
				break;
		}
	}
}

void func_285(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 44)
	{
		func_199(iVar0, bParam0);
		iVar0++;
	}
}

