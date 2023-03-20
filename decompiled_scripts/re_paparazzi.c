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
	if (unk_0xD63E63DFACCEB80E(11))
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
			unk_0xE60DEFFB2A853900();
		}
	}
	uLocal_364 = unk_0x676E460800A9E1B7(Vector(93.3633f, 82.5239f, 276.3459f) + Vector(10f, 10f, 10f), Vector(93.3633f, 82.5239f, 276.3459f) - Vector(10f, 10f, 10f), 0, 1, 1, 1);
	uLocal_365 = unk_0x676E460800A9E1B7(Vector(188.5935f, 675.8706f, 227.8598f) + Vector(4f, 4f, 4f), Vector(188.5935f, 675.8706f, 227.8598f) - Vector(4f, 4f, 4f), 0, 1, 1, 1);
	uLocal_366 = unk_0x676E460800A9E1B7(Vector(93.8361f, 92.1704f, 246.1673f) + Vector(6f, 6f, 6f), Vector(93.8361f, 92.1704f, 246.1673f) - Vector(6f, 6f, 6f), 0, 1, 1, 1);
	if (Global_3)
	{
		unk_0xFC90BEDEE248C76D(246.1673f, 92.1704f, 93.8361f, 6f, 1, 0, 0, 0);
	}
	unk_0xCF023D488D3EAE4D(Vector(93.8361f, 92.1704f, 246.1673f) + Vector(6f, 6f, 6f), Vector(93.8361f, 92.1704f, 246.1673f) - Vector(6f, 6f, 6f), 0, 1);
	unk_0xED55513146C2792B("WORLD_VEHICLE_DRIVE_SOLO", 0);
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
		unk_0x2F626F4BEC43C4F6("RE_EP", 0);
		iVar0 = 0;
		while (iVar0 < Local_130.f_0)
		{
			if (unk_0x746960881FB19A89(Local_130[iVar0 /*18*/]) && !unk_0x0BA451447C3B1A8D(Local_130[iVar0 /*18*/]))
			{
				Local_130[iVar0 /*18*/].f_8 = { unk_0x77009B1C011405A9(Local_130[iVar0 /*18*/], 1) };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < Local_203.f_0)
		{
			if (unk_0x746960881FB19A89(Local_203[iVar0 /*18*/]) && !unk_0x0BA451447C3B1A8D(Local_203[iVar0 /*18*/]))
			{
				Local_203[iVar0 /*18*/].f_6 = { unk_0x77009B1C011405A9(Local_203[iVar0 /*18*/], 1) };
			}
			iVar0++;
		}
		if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()) && !unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
		{
			Local_59 = { unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1) };
		}
		if (!unk_0x3E0478C40AB5B38D(iLocal_85))
		{
			Local_62 = { unk_0x77009B1C011405A9(iLocal_85, 1) };
		}
		if (unk_0x746960881FB19A89(iLocal_90) && !unk_0x0BA451447C3B1A8D(iLocal_90))
		{
			Local_65 = { unk_0x77009B1C011405A9(iLocal_90, 1) };
		}
		if (!func_217())
		{
			if (unk_0xB819D1DD7DA58F08())
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
						if ((func_184() || unk_0xD092BBE40A1C72AA(unk_0xCFC72E446B0B3AD7()) > 0) || !unk_0xFC38B241541883D3(iLocal_90, 0))
						{
							if (!Global_3 && !bLocal_69)
							{
								func_183();
								func_267();
							}
						}
						else if (unk_0xFE0FA79BC49EBB07(unk_0x9F92518438215DD0(), 281.0074f, 192.4805f, 58.08817f, 228.8291f, 50.88667f, 111.6104f, 82.75f, 0, 1, 0))
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
			unk_0xA067756A5A1E98E5(unk_0xCFC72E446B0B3AD7());
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
						if (unk_0x746960881FB19A89(iLocal_85))
						{
							unk_0x7763EDCBED8A5840(&iLocal_85);
						}
						func_74();
					}
					break;
				
				case 11:
					func_70();
					break;
			}
			if (!unk_0x41EEB10CCC2497A8(unk_0x9F92518438215DD0(), Local_62, 210f, 210f, 210f, 0, 1, 0))
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
				if ((!unk_0xFE0FA79BC49EBB07(unk_0x9F92518438215DD0(), 243.6443f, 123.7193f, 97.59898f, 262.4353f, 116.8746f, 107.4762f, 32.25f, 0, 1, 0) && (unk_0x17103F66FBB44C3C() - iLocal_563) > 5000) && !unk_0x3E0478C40AB5B38D(Local_203[iVar1 /*18*/]))
				{
					if (unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(Local_203[iVar1 /*18*/], 1), Local_59) < (30.5f * 30.5f) && unk_0xB7A628320EFF8E47(Local_62, Local_59) > (22.5f * 22.5f))
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
									iLocal_563 = unk_0x17103F66FBB44C3C();
									iLocal_662 = 1;
								}
							}
							else if (func_5(&Local_394, cLocal_371, "REPAP_CHAT", 1, 0, 0, 0))
							{
								iLocal_563 = unk_0x17103F66FBB44C3C();
							}
						}
						else
						{
							StringCopy(&cVar2, "REPAP_AZAA_0", 24);
							StringIntConCat(&cVar2, unk_0x073B65E051D2F03E(1, 13), 24);
							func_3(Local_203[iVar1 /*18*/], &cVar2, "PAPARAZZO", 24);
							iLocal_563 = unk_0x17103F66FBB44C3C();
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
	
	if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1))
	{
		iVar0 = unk_0xBD0F8DEB580D2E67(unk_0x9F92518438215DD0());
		if (unk_0xFC38B241541883D3(iVar0, 0))
		{
			iVar1 = unk_0xB5BBEB12C77EE430(iVar0, 0);
			if (!unk_0x3E0478C40AB5B38D(iVar1))
			{
				if (iVar1 != unk_0x9F92518438215DD0())
				{
					if (unk_0x34E74FF8690AA4B1(iVar1))
					{
						if (!unk_0xACBBD9D9F0EB7D59(iVar1, unk_0x9F92518438215DD0()))
						{
							unk_0x402A96371F34E6D8(iVar1, unk_0x9F92518438215DD0(), 2000, 2048, 2);
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
		if (unk_0x746960881FB19A89(Local_203[iVar0 /*18*/]))
		{
			if (unk_0xFD181DDA4D8D6786(Local_203[iVar0 /*18*/]) < Local_203[iVar0 /*18*/].f_17)
			{
				if (unk_0xE99AF5B1B3F0BB7C(Local_203[iVar0 /*18*/], unk_0x9F92518438215DD0(), 1))
				{
					iLocal_385[iVar0] = (iLocal_385[iVar0] + (Local_203[iVar0 /*18*/].f_17 - unk_0xFD181DDA4D8D6786(Local_203[iVar0 /*18*/])));
					iLocal_81 = (iLocal_81 + (Local_203[iVar0 /*18*/].f_17 - unk_0xFD181DDA4D8D6786(Local_203[iVar0 /*18*/])));
					unk_0x87659527DF5C44B5(Local_203[iVar0 /*18*/]);
					if (iLocal_385[iVar0] > iLocal_384)
					{
						iLocal_384 = iLocal_385[iVar0];
					}
				}
			}
			Local_203[iVar0 /*18*/].f_17 = unk_0xFD181DDA4D8D6786(Local_203[iVar0 /*18*/]);
		}
		iVar0++;
	}
}

void func_3(var uParam0, char[4] cParam1, char* sParam2, int iParam3)
{
	unk_0x4970C6C5BAEFBF31(uParam0, cParam1, sParam2, func_4(iParam3), 0);
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
					unk_0xC318E8D9E0AA1394(0);
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
		if (unk_0xDFF00E8709AA7095())
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
			unk_0xF76EE56D3E7DAF1B(&Global_2263, 20);
			unk_0xF76EE56D3E7DAF1B(&Global_2264, 17);
			unk_0xF76EE56D3E7DAF1B(&Global_2265, 0);
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
			if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
			{
				if (unk_0xF9AED6291438A448(unk_0x9F92518438215DD0()))
				{
					return 0;
				}
				if (func_10())
				{
					return 0;
				}
				if (unk_0x29652A1660936FDB(unk_0x9F92518438215DD0()))
				{
					return 0;
				}
				if (unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0()))
				{
					return 0;
				}
				if (unk_0xA75CD3E8519BDC0D(unk_0x9F92518438215DD0()))
				{
					return 0;
				}
				if (unk_0x963737771EA06D79(unk_0x9F92518438215DD0(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68245)
				{
					if (unk_0x5BFFEED2EB6664D5(unk_0x9F92518438215DD0()))
					{
						return 0;
					}
					if (unk_0x29F9C49274370985(unk_0xCFC72E446B0B3AD7()))
					{
						return 0;
					}
					if (unk_0x5EE181A2C8679F09(unk_0x9F92518438215DD0()))
					{
						return 0;
					}
					if (unk_0x2AD403FEE60639F3(unk_0xCFC72E446B0B3AD7()))
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
				if (unk_0x94E72F17611BCD3C(Global_2263, 9))
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
	unk_0xC318E8D9E0AA1394(0);
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
	unk_0xF76EE56D3E7DAF1B(&Global_2264, 16);
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
	
	if (Global_68245)
	{
		iVar0 = 0;
		unk_0x9DA0F3A686A566A6(unk_0x9F92518438215DD0(), &iVar1, 1);
		if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x5CC26ADF98AA54C9() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
	{
		if (unk_0xD1C0C220414EB327(unk_0x9F92518438215DD0(), 78, 1))
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
		Global_14393 = func_19();
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

bool func_12(int iParam0)
{
	return Global_34913 == iParam0;
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
				return Global_1327593.f_203[iParam1];
			}
			break;
	}
	return unk_0x94E72F17611BCD3C(Global_1327593.f_949, iParam0);
}

void func_15()
{
	unk_0xAD3949CD5FADCA61();
	Global_16703 = 0;
	if ((unk_0x71F866C9C77F9B9F() || Global_14393.f_1 == 9) || Global_14392 == 1)
	{
		unk_0xC318E8D9E0AA1394(0);
		Global_15692 = 6;
		Global_14393.f_1 = 3;
		return;
	}
	if (unk_0xDFF00E8709AA7095())
	{
		unk_0xC318E8D9E0AA1394(1);
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
	if (!Global_68245)
	{
		if (!unk_0x3E0478C40AB5B38D(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xF25BFC104A163677(iParam2, 0);
			}
			else
			{
				unk_0xF25BFC104A163677(iParam2, 1);
			}
		}
		if (!unk_0x3E0478C40AB5B38D(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x12977F077B942364(iParam2, 0);
			}
			else
			{
				unk_0x12977F077B942364(iParam2, 1);
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
	return Global_97358.f_1729.f_539.f_3213;
}

void func_20()
{
	int iVar0;
	
	if (unk_0x746960881FB19A89(unk_0x9F92518438215DD0()))
	{
		if (func_23(Global_97358.f_1729.f_539.f_3213) != unk_0xB6A50C909A8FABC3(unk_0x9F92518438215DD0()))
		{
			iVar0 = func_22(unk_0x9F92518438215DD0());
			if (func_21(iVar0) && (!func_12(14) || Global_96311))
			{
				if (Global_97358.f_1729.f_539.f_3213 != iVar0 && func_21(Global_97358.f_1729.f_539.f_3213))
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

bool func_21(int iParam0)
{
	return iParam0 < 3;
}

int func_22(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x746960881FB19A89(uParam0))
	{
		iVar1 = unk_0xB6A50C909A8FABC3(iParam0);
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
		return Global_97358.f_29774[iParam0 /*29*/];
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
		if ((unk_0x746960881FB19A89(Local_203[iVar0 /*18*/]) && !unk_0x3E0478C40AB5B38D(Local_203[iVar0 /*18*/])) && !unk_0x3E0478C40AB5B38D(iLocal_85))
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
			unk_0x3BC6D217451D6BB7(joaat("a_m_y_genstreet_02"));
			unk_0x3BC6D217451D6BB7(joaat("prop_pap_camera_01"));
			unk_0x3BC6D217451D6BB7(joaat("cavalcade2"));
			unk_0x3BC6D217451D6BB7(joaat("vader"));
			unk_0xDA293E5084610B09(sLocal_372);
			unk_0xDA293E5084610B09("random@paparazzi@pap_anims");
			if (((((unk_0x149162179DBAEDB0(joaat("a_m_y_genstreet_02")) && unk_0x149162179DBAEDB0(joaat("prop_pap_camera_01"))) && unk_0x149162179DBAEDB0(joaat("cavalcade2"))) && unk_0x149162179DBAEDB0(joaat("vader"))) && unk_0x3DA2EED4204CE591(sLocal_372)) && unk_0x3DA2EED4204CE591("random@paparazzi@pap_anims"))
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
				unk_0xFA51DC22F6E34F6E(func_55(0, 1), 265.408f, 151.2875f, 103.5673f, 1, 0, 0, 1);
				unk_0x03D97EDECF2E1859(func_55(0, 1), 217.1033f);
				unk_0xFA51DC22F6E34F6E(func_55(2, 1), 245.9477f, 72.661f, 89.1067f, 1, 0, 0, 1);
				unk_0x03D97EDECF2E1859(func_55(2, 1), 38.6283f);
				unk_0xFA51DC22F6E34F6E(func_55(3, 1), 244.1872f, 73.3336f, 89.0917f, 1, 0, 0, 1);
				unk_0x03D97EDECF2E1859(func_55(3, 1), 272.9875f);
				unk_0x7CF15DD8B3815A0D(func_55(0, 1), "random@paparazzi@pap_anims", "base_pap", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0x7CF15DD8B3815A0D(func_55(1, 0), "random@paparazzi@pap_anims", "pap_idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0x7CF15DD8B3815A0D(func_55(1, 1), "random@paparazzi@pap_anims", "pap_idle_b", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0x7CF15DD8B3815A0D(func_55(2, 1), "random@paparazzi@pap_anims", "pap_idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0x7CF15DD8B3815A0D(func_55(3, 1), "random@paparazzi@pap_anims", "pap_idle_b", 8f, -8f, -1, 1, 0, 0, 0, 0);
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
			if (unk_0x746960881FB19A89(Local_203[2 /*18*/].f_2))
			{
				if (!unk_0xB3CC729BBAA21637(Local_203[2 /*18*/].f_2))
				{
					unk_0x407020DF5CAB33D3(Local_203[2 /*18*/].f_2, 1);
				}
			}
			switch (iLocal_615)
			{
				case 0:
					if (!unk_0x3E0478C40AB5B38D(func_55(1, 0)))
					{
						unk_0x32D18ECD9E6F9BE2(func_55(1, 0));
					}
					if (!unk_0x3E0478C40AB5B38D(func_55(1, 1)))
					{
						unk_0x32D18ECD9E6F9BE2(func_55(1, 1));
					}
					if (!unk_0x746960881FB19A89(Local_130[2 /*18*/]))
					{
						func_56(2, Local_595[2 /*3*/], fLocal_608[2], 0);
						if (unk_0xFC38B241541883D3(Local_130[2 /*18*/], 0))
						{
							func_57(func_60(2), unk_0x77009B1C011405A9(Local_130[2 /*18*/], 1), 0f);
							unk_0x4DB6897DB04DE279(func_55(2, 0), Local_130[2 /*18*/], -1);
						}
					}
					if (!unk_0x746960881FB19A89(Local_130[3 /*18*/]))
					{
						func_56(3, Local_595[3 /*3*/], fLocal_608[3], 0);
					}
					if (!unk_0x3E0478C40AB5B38D(func_55(2, 1)))
					{
						unk_0x27DF0A5AA993D7B6(func_55(2, 1), Local_580, 2f, -1, 0.25f, 0, 1193033728);
					}
					if (!unk_0x3E0478C40AB5B38D(func_55(3, 1)))
					{
						unk_0x27DF0A5AA993D7B6(func_55(3, 1), Local_583, 2f, -1, 0.25f, 0, 1193033728);
					}
					if (!unk_0x746960881FB19A89(func_55(3, 0)))
					{
						func_57(func_60(3), 253.8376f, 85.4544f, 92.8933f, 85.1702f);
					}
					if (Global_3 || bLocal_69)
					{
						if (!unk_0x3E0478C40AB5B38D(func_55(1, 0)))
						{
							unk_0x27DF0A5AA993D7B6(func_55(1, 0), Local_586, 2f, 20000, 0.25f, 0, 1193033728);
						}
						if (!unk_0x3E0478C40AB5B38D(func_55(1, 1)))
						{
							unk_0x27DF0A5AA993D7B6(func_55(1, 1), Local_589, 2f, 20000, 0.25f, 0, 1193033728);
						}
						if (!unk_0x3E0478C40AB5B38D(func_55(0, 1)))
						{
							unk_0x27DF0A5AA993D7B6(func_55(0, 1), Local_592, 2f, 20000, 0.25f, 0, 1193033728);
						}
					}
					unk_0x5AE11BC36633DE4E(0);
					iVar1 = 0;
					while (iVar1 < Local_203.f_0)
					{
						if (unk_0x746960881FB19A89(Local_203[iVar1 /*18*/]))
						{
							unk_0x060D3260330D112D(Local_203[iVar1 /*18*/], "MAG_2_PAPARAZZI_GROUP", 0);
						}
						iVar1++;
					}
					iVar1 = 0;
					while (iVar1 < Local_130.f_0)
					{
						if (unk_0x746960881FB19A89(Local_130[iVar1 /*18*/]))
						{
							unk_0x060D3260330D112D(Local_130[iVar1 /*18*/], "MAG_2_PAPARAZZI_GROUP", 0);
						}
						iVar1++;
					}
					iLocal_615++;
					break;
				
				case 1:
					func_49();
					if ((unk_0xFC38B241541883D3(Local_130[0 /*18*/], 0) && !unk_0x3E0478C40AB5B38D(func_55(0, 0))) && !unk_0x3E0478C40AB5B38D(func_55(0, 1)))
					{
						if (!iLocal_570[1])
						{
							iLocal_570[1] = 1;
							unk_0xC96425701AF2C9C4(func_55(0, 0), Local_130[0 /*18*/], Local_574, 10f, 0, joaat("cavalcade2"), 786469, 2f, 10f);
						}
					}
					if ((unk_0xFC38B241541883D3(Local_130[2 /*18*/], 0) && !unk_0x3E0478C40AB5B38D(func_55(2, 0))) && !unk_0x3E0478C40AB5B38D(func_55(2, 1)))
					{
						if (!iLocal_570[0])
						{
							unk_0xC96425701AF2C9C4(func_55(2, 0), Local_130[2 /*18*/], Local_577, 10f, 0, joaat("cavalcade2"), 786469, 2f, 10f);
							iLocal_570[0] = 1;
						}
					}
					if (unk_0x746960881FB19A89(iLocal_85) && !unk_0x3E0478C40AB5B38D(iLocal_85))
					{
						func_46(iLocal_85, 6);
						if (Global_3 || bLocal_69)
						{
							if (!unk_0x3E0478C40AB5B38D(func_55(1, 0)))
							{
								if (unk_0x41EEB10CCC2497A8(func_55(1, 0), Local_586, Global_21, 0, 1, 0))
								{
									func_45(iLocal_85, func_60(1));
								}
							}
							if (!unk_0x3E0478C40AB5B38D(func_55(1, 1)))
							{
								if (unk_0x41EEB10CCC2497A8(func_55(1, 1), Local_589, Global_21, 0, 1, 0))
								{
									func_45(iLocal_85, func_58(1));
								}
							}
							if (!unk_0x3E0478C40AB5B38D(func_55(0, 1)))
							{
								if (unk_0x41EEB10CCC2497A8(func_55(0, 1), Local_589, Global_21, 0, 1, 0))
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
					if (unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(iLocal_90, 1), Local_86) < 9f)
					{
						if (unk_0x41EEB10CCC2497A8(func_55(2, 1), Local_580, Global_21, 0, 1, 0))
						{
							func_45(iLocal_85, func_58(2));
						}
						if (unk_0x41EEB10CCC2497A8(func_55(3, 1), Local_583, Global_21, 0, 1, 0))
						{
							func_45(iLocal_85, func_58(3));
						}
						if (unk_0x41EEB10CCC2497A8(func_55(0, 1), Local_583, Global_21, 0, 1, 0))
						{
							func_45(iLocal_85, func_58(0));
						}
					}
					else
					{
						if (!unk_0x94E72F17611BCD3C(iLocal_618, 3))
						{
							unk_0x32D18ECD9E6F9BE2(Local_203[func_58(3) /*18*/]);
							unk_0xEDB9A377CD8B7F03(&iLocal_618, 3);
						}
						if (!unk_0x94E72F17611BCD3C(iLocal_618, 2))
						{
							unk_0x32D18ECD9E6F9BE2(Local_203[func_58(2) /*18*/]);
							unk_0xEDB9A377CD8B7F03(&iLocal_618, 2);
						}
						if (!unk_0x94E72F17611BCD3C(iLocal_618, 0))
						{
							unk_0x32D18ECD9E6F9BE2(Local_203[func_58(0) /*18*/]);
							unk_0xEDB9A377CD8B7F03(&iLocal_618, 0);
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
			if (unk_0xFC38B241541883D3(iLocal_90, 0))
			{
				if (unk_0x9EF11DECA38804B6(iLocal_90) < 1f)
				{
					fLocal_573 = (fLocal_573 + unk_0xD1D592A06EBAAE4F());
				}
				else if (fLocal_573 > 0f)
				{
					fLocal_573 = 0f;
				}
			}
			iVar0 = 0;
			while (iVar0 < Local_130.f_0)
			{
				if (unk_0x746960881FB19A89(Local_130[iVar0 /*18*/]) && iLocal_46 != 6)
				{
					if ((iVar0 < 2 && ((iVar0 != iLocal_613 || !unk_0x746960881FB19A89(Local_130[0 /*18*/])) || !unk_0x746960881FB19A89(Local_130[1 /*18*/]))) && (unk_0x17103F66FBB44C3C() - iLocal_614) > 500)
					{
						if (unk_0xB7A628320EFF8E47(Local_59, Local_86) > 400f)
						{
							if (unk_0xB7A628320EFF8E47(Local_59, Local_86) < 62500f || (unk_0x17103F66FBB44C3C() - iLocal_369) < 30000)
							{
								func_40(Local_130[iVar0 /*18*/], iLocal_90, &(Local_130[iVar0 /*18*/].f_5), &(Local_130[iVar0 /*18*/].f_15), &(Local_130[iVar0 /*18*/].f_11), &(Local_130[iVar0 /*18*/].f_14), &(Local_130[iVar0 /*18*/].f_16), Local_130[iVar0 /*18*/].f_2, 800, 50f);
								iLocal_613 = iVar0;
								iLocal_614 = unk_0x17103F66FBB44C3C();
							}
						}
					}
					iVar2 = func_60(iVar0);
					if (!unk_0x3E0478C40AB5B38D(Local_203[iVar2 /*18*/]))
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
							if (unk_0xFC38B241541883D3(Local_130[iVar0 /*18*/], 0))
							{
								if (!unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), Local_130[iVar0 /*18*/], 0))
								{
									if (!unk_0x3E0478C40AB5B38D(Local_203[iVar2 /*18*/]))
									{
										if (!unk_0x44E080690DA76A2A(Local_203[iVar2 /*18*/], Local_130[iVar0 /*18*/], 0))
										{
											if (unk_0xE962BD784DD0E442(Local_203[iVar2 /*18*/], -1794415470) != 1 && unk_0x4A33023BC86AAA7F(Local_130[iVar0 /*18*/], -1))
											{
												unk_0x4073360CA020BB84(Local_203[iVar2 /*18*/], Local_130[iVar0 /*18*/], -1, -1, 2f, 1, 0);
											}
										}
									}
									if (iVar3 != -1)
									{
										if (!unk_0x3E0478C40AB5B38D(Local_203[iVar3 /*18*/]))
										{
											if (!unk_0x44E080690DA76A2A(Local_203[iVar3 /*18*/], Local_130[iVar0 /*18*/], 0))
											{
												if (unk_0xE962BD784DD0E442(Local_203[iVar3 /*18*/], -1794415470) != 1 && unk_0x4A33023BC86AAA7F(Local_130[iVar0 /*18*/], 0))
												{
													unk_0x4073360CA020BB84(Local_203[iVar3 /*18*/], Local_130[iVar0 /*18*/], -1, 0, 2f, 1, 0);
												}
											}
										}
										if (!unk_0x3E0478C40AB5B38D(Local_203[iVar2 /*18*/]) && (iVar3 != -1 && !unk_0x3E0478C40AB5B38D(Local_203[iVar3 /*18*/])))
										{
											if ((unk_0x44E080690DA76A2A(Local_203[iVar2 /*18*/], Local_130[iVar0 /*18*/], 0) && (iVar3 != -1 && unk_0x44E080690DA76A2A(Local_203[iVar3 /*18*/], Local_130[iVar0 /*18*/], 0))) && unk_0xFC38B241541883D3(iLocal_90, 0))
											{
												if (unk_0xE962BD784DD0E442(Local_203[iVar2 /*18*/], -1273030092) != 1 && unk_0xE962BD784DD0E442(Local_203[iVar2 /*18*/], -1817882002) != 1)
												{
													unk_0x64277E0EB39C1162(Local_203[iVar2 /*18*/], 3, 0);
													unk_0x64277E0EB39C1162(Local_203[iVar2 /*18*/], 1, 1);
													unk_0x64277E0EB39C1162(Local_203[iVar2 /*18*/], 2, 0);
													if (iVar0 == 0)
													{
														unk_0xBBB86C3DA83A56F3(Local_203[iVar2 /*18*/], Local_130[iVar0 /*18*/], iLocal_90, 10, 50f, 786471, 4f, 10f, 1);
													}
													else if (iVar0 == 1)
													{
														unk_0xBBB86C3DA83A56F3(Local_203[iVar2 /*18*/], Local_130[iVar0 /*18*/], iLocal_90, 11, 50f, 786470, 4f, 10f, 1);
													}
													else if (iVar0 == 2)
													{
														unk_0xBBB86C3DA83A56F3(Local_203[iVar2 /*18*/], Local_130[iVar0 /*18*/], iLocal_90, 10, 50f, 786471, 4f, 10f, 1);
													}
													else if (iVar0 == 3)
													{
														unk_0xBBB86C3DA83A56F3(Local_203[iVar2 /*18*/], Local_130[iVar0 /*18*/], iLocal_90, 11, 50f, 786470, 4f, 10f, 1);
													}
												}
												unk_0xB7E3E890C2B1B305(Local_203[iVar2 /*18*/], func_39((3f * unk_0x91EAD4F2F9B5B38A(Local_65, Local_130[iVar0 /*18*/].f_8, 1)), 50f, 120f));
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
								if (!unk_0x3E0478C40AB5B38D(Local_203[iVar2 /*18*/]))
								{
									if (!unk_0x7E4B3ADE683EE23B(Local_203[iVar2 /*18*/]))
									{
										unk_0xA334EDA2335A13CA(Local_203[iVar2 /*18*/], 2, 0);
										unk_0x722E6B3A5162A6BB(Local_203[iVar2 /*18*/], unk_0x9F92518438215DD0(), 300f, 100000, 0, 0);
									}
								}
								if (iVar3 != -1)
								{
									if (!unk_0x3E0478C40AB5B38D(Local_203[iVar3 /*18*/]))
									{
										if (!unk_0x7E4B3ADE683EE23B(Local_203[iVar3 /*18*/]))
										{
											unk_0xA334EDA2335A13CA(Local_203[iVar3 /*18*/], 2, 0);
											unk_0x722E6B3A5162A6BB(Local_203[iVar3 /*18*/], unk_0x9F92518438215DD0(), 300f, 100000, 0, 0);
										}
									}
								}
							}
							break;
						
						case 1:
							if (unk_0x827151D7B70CB853(Local_203[iVar2 /*18*/], 0))
							{
								unk_0xF811299AF81DB581(Local_203[iVar2 /*18*/], 1, 256);
							}
							else
							{
								func_46(iLocal_85, iVar2);
							}
							if (iVar3 != -1)
							{
								if (!unk_0x3E0478C40AB5B38D(Local_203[iVar3 /*18*/]))
								{
									if (unk_0x827151D7B70CB853(Local_203[iVar3 /*18*/], 0))
									{
										unk_0xF811299AF81DB581(Local_203[iVar3 /*18*/], 0, 256);
									}
									else
									{
										func_46(iLocal_85, iVar3);
									}
								}
							}
							if (unk_0xFC38B241541883D3(Local_130[iVar0 /*18*/], 0))
							{
								if (unk_0x2A488C176D52CCA5(Local_130[iVar0 /*18*/].f_8, Local_65) > 15f)
								{
									Local_130[iVar0 /*18*/].f_17 = 0;
								}
							}
							break;
					}
					if ((!unk_0x3E0478C40AB5B38D(Local_203[iVar2 /*18*/]) && (iVar3 == -1 || !unk_0x3E0478C40AB5B38D(Local_203[iVar3 /*18*/]))) && unk_0xFC38B241541883D3(Local_130[iVar0 /*18*/], 0))
					{
						iVar4 = 1;
						if (!unk_0xC7FF9739199F83C9(Local_203[iVar2 /*18*/]))
						{
							iVar4 = 0;
						}
						if (iVar3 != -1)
						{
							if (!unk_0xC7FF9739199F83C9(Local_203[iVar3 /*18*/]))
							{
								iVar4 = 0;
							}
						}
						if (!unk_0xC7FF9739199F83C9(Local_130[iVar0 /*18*/]))
						{
							iVar4 = 0;
						}
						if ((iVar4 && unk_0x2A488C176D52CCA5(Local_59, Local_130[iVar0 /*18*/].f_8) > 25f) && unk_0x2A488C176D52CCA5(Local_59, Local_203[iVar0 /*18*/].f_6) > 25f)
						{
							if (!unk_0x44E080690DA76A2A(Local_203[iVar2 /*18*/], Local_130[iVar0 /*18*/], 0))
							{
								unk_0x4DB6897DB04DE279(Local_203[iVar2 /*18*/], Local_130[iVar0 /*18*/], -1);
							}
							if (iVar3 != -1)
							{
								if (!unk_0x44E080690DA76A2A(Local_203[iVar3 /*18*/], Local_130[iVar0 /*18*/], 0))
								{
									unk_0x4DB6897DB04DE279(Local_203[iVar3 /*18*/], Local_130[iVar0 /*18*/], 0);
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
					if (!unk_0x3E0478C40AB5B38D(Local_203[iVar5 /*18*/]))
					{
						iVar6 = func_58(iVar0);
					}
					else
					{
						iVar6 = func_60(iVar0);
					}
					if (unk_0xFC38B241541883D3(Local_130[iVar0 /*18*/], 0))
					{
						if (!unk_0x3E0478C40AB5B38D(Local_203[iVar5 /*18*/]))
						{
							if (!unk_0x44E080690DA76A2A(Local_203[iVar5 /*18*/], Local_130[iVar0 /*18*/], 0))
							{
								if (unk_0xE962BD784DD0E442(Local_203[iVar5 /*18*/], -1794415470) != 1)
								{
									unk_0x4073360CA020BB84(Local_203[iVar5 /*18*/], Local_130[iVar0 /*18*/], -1, -1, 2f, 1, 0);
								}
							}
						}
						if (iVar6 != -1)
						{
							if (!unk_0x3E0478C40AB5B38D(Local_203[iVar6 /*18*/]))
							{
								if (!unk_0x44E080690DA76A2A(Local_203[iVar6 /*18*/], Local_130[iVar0 /*18*/], 0))
								{
									if (unk_0xE962BD784DD0E442(Local_203[iVar6 /*18*/], -1794415470) != 1)
									{
										unk_0x4073360CA020BB84(Local_203[iVar6 /*18*/], Local_130[iVar0 /*18*/], -1, 0, 2f, 1, 0);
									}
								}
							}
							if (!unk_0x3E0478C40AB5B38D(Local_203[iVar5 /*18*/]) && (iVar6 != -1 && !unk_0x3E0478C40AB5B38D(Local_203[iVar6 /*18*/])))
							{
								if ((unk_0x44E080690DA76A2A(Local_203[iVar5 /*18*/], Local_130[iVar0 /*18*/], 0) && (iVar6 != -1 && unk_0x44E080690DA76A2A(Local_203[iVar6 /*18*/], Local_130[iVar0 /*18*/], 0))) && unk_0xFC38B241541883D3(iLocal_90, 0))
								{
									fVar7 = func_39((70f - (unk_0xBBDA792448DB5A89((unk_0x17103F66FBB44C3C() - iLocal_84)) / 50f)), 0f, 70f);
									if (fVar7 <= 1f || (unk_0x17103F66FBB44C3C() - iLocal_84) > 4000)
									{
										unk_0x554C3B4B6B2F1D19(Local_203[iVar5 /*18*/], fVar7);
										iVar8 = 0;
										while (iVar8 < Local_130.f_0)
										{
											if ((unk_0xFC38B241541883D3(Local_130[iVar8 /*18*/], 0) && !unk_0x3E0478C40AB5B38D(func_55(iVar8, 0))) && unk_0x44E080690DA76A2A(func_55(iVar8, 0), Local_130[iVar8 /*18*/], 0))
											{
												unk_0x32D18ECD9E6F9BE2(func_55(iVar8, 0));
												unk_0xBBB86C3DA83A56F3(func_55(iVar8, 0), Local_130[iVar8 /*18*/], 0, 5, 10f, 786468, 10f, 10f, 1);
											}
											iVar8++;
										}
										iLocal_617 = 1;
									}
									else if (unk_0xE962BD784DD0E442(Local_203[iVar5 /*18*/], -1273030092) != 1 && unk_0xE962BD784DD0E442(Local_203[iVar5 /*18*/], -1817882002) != 1)
									{
										unk_0x64277E0EB39C1162(Local_203[iVar5 /*18*/], 3, 0);
										unk_0x64277E0EB39C1162(Local_203[iVar5 /*18*/], 1, 1);
										unk_0x64277E0EB39C1162(Local_203[iVar5 /*18*/], 2, 0);
										if (iVar0 == 0)
										{
											unk_0xBBB86C3DA83A56F3(Local_203[iVar5 /*18*/], Local_130[iVar0 /*18*/], iLocal_90, 10, fVar7, 786471, 4f, 10f, 1);
										}
										else if (iVar0 == 1)
										{
											unk_0xBBB86C3DA83A56F3(Local_203[iVar5 /*18*/], Local_130[iVar0 /*18*/], iLocal_90, 11, fVar7, 786470, 4f, 10f, 1);
										}
										else if (iVar0 == 2)
										{
											unk_0xBBB86C3DA83A56F3(Local_203[iVar5 /*18*/], Local_130[iVar0 /*18*/], iLocal_90, 10, fVar7, 786471, 4f, 10f, 1);
										}
										else if (iVar0 == 3)
										{
											unk_0xBBB86C3DA83A56F3(Local_203[iVar5 /*18*/], Local_130[iVar0 /*18*/], iLocal_90, 11, fVar7, 786470, 4f, 10f, 1);
										}
									}
								}
							}
						}
					}
					else
					{
						if (!unk_0x3E0478C40AB5B38D(Local_203[iVar5 /*18*/]))
						{
							if (!unk_0x7E4B3ADE683EE23B(Local_203[iVar5 /*18*/]))
							{
								unk_0xA334EDA2335A13CA(Local_203[iVar5 /*18*/], 2, 0);
								unk_0x722E6B3A5162A6BB(Local_203[iVar5 /*18*/], unk_0x9F92518438215DD0(), 300f, 100000, 0, 0);
							}
						}
						if (iVar6 != -1)
						{
							if (!unk_0x3E0478C40AB5B38D(Local_203[iVar6 /*18*/]))
							{
								if (!unk_0x7E4B3ADE683EE23B(Local_203[iVar6 /*18*/]))
								{
									unk_0xA334EDA2335A13CA(Local_203[iVar6 /*18*/], 2, 0);
									unk_0x722E6B3A5162A6BB(Local_203[iVar6 /*18*/], unk_0x9F92518438215DD0(), 300f, 100000, 0, 0);
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
		if (unk_0x746960881FB19A89(Local_203[iVar0 /*18*/]) && !unk_0x3E0478C40AB5B38D(Local_203[iVar0 /*18*/]))
		{
			if (iLocal_48 > 1)
			{
				if (!unk_0x9E9AFDBF482248F6(sLocal_372))
				{
					func_28(iVar0);
					if (unk_0x746960881FB19A89(Local_203[iVar0 /*18*/].f_2) && unk_0xBB5C52611DD71292(Local_203[iVar0 /*18*/].f_2))
					{
						if (!unk_0x827151D7B70CB853(Local_203[iVar0 /*18*/], 0))
						{
							if (unk_0xB3CC729BBAA21637(Local_203[iVar0 /*18*/].f_2))
							{
								if (unk_0x11579615465D25B4(Local_203[iVar0 /*18*/]))
								{
									unk_0x407020DF5CAB33D3(Local_203[iVar0 /*18*/].f_2, 0);
								}
							}
							else if (!unk_0x11579615465D25B4(Local_203[iVar0 /*18*/]))
							{
								unk_0x407020DF5CAB33D3(Local_203[iVar0 /*18*/].f_2, 1);
							}
							if (!unk_0xC7FF9739199F83C9(Local_203[iVar0 /*18*/]))
							{
								if (!unk_0x3C17D9ED0E5F3FCA(Local_203[iVar0 /*18*/], sLocal_372, func_27(iVar0), 3))
								{
									if (!Local_203[iVar0 /*18*/].f_11)
									{
										if (!unk_0x3C17D9ED0E5F3FCA(Local_203[iVar0 /*18*/], sLocal_372, "grip", 3))
										{
											unk_0x7CF15DD8B3815A0D(Local_203[iVar0 /*18*/], sLocal_372, "grip", 1000f, -1000f, -1, 57, 0, 0, 0, 0);
											Local_203[iVar0 /*18*/].f_11 = 1;
										}
									}
								}
								else if (Local_203[iVar0 /*18*/].f_11)
								{
									unk_0x7CF15DD8B3815A0D(Local_203[iVar0 /*18*/], sLocal_372, "grip", 1000f, -1000f, -1, 48, 0.99f, 0, 0, 0);
									Local_203[iVar0 /*18*/].f_11 = 0;
								}
							}
							if (!Local_203[iVar0 /*18*/].f_10)
							{
								unk_0x682EF355A788351B(sLocal_372);
								if (unk_0xAFD85240786B670A(sLocal_372))
								{
									unk_0x64DCCC63AF39C005(Local_203[iVar0 /*18*/], sLocal_372);
									Local_203[iVar0 /*18*/].f_10 = 1;
								}
							}
						}
						else
						{
							if (Local_203[iVar0 /*18*/].f_11)
							{
								unk_0x7CF15DD8B3815A0D(Local_203[iVar0 /*18*/], sLocal_372, "grip", 1000f, -1000f, -1, 48, 0.99f, 0, 0, 0);
								Local_203[iVar0 /*18*/].f_11 = 0;
							}
							if (Local_203[iVar0 /*18*/].f_10)
							{
								unk_0x889BB99E5D3F2CA6(Local_203[iVar0 /*18*/]);
								Local_203[iVar0 /*18*/].f_10 = 0;
							}
						}
						if (unk_0x44615198247FF471(Local_203[iVar0 /*18*/]) && func_26(Local_203[iVar0 /*18*/], unk_0x1161215F69587BDA(Local_203[iVar0 /*18*/], 0)) == -1)
						{
							if (unk_0xB3CC729BBAA21637(Local_203[iVar0 /*18*/].f_2))
							{
								unk_0x407020DF5CAB33D3(Local_203[iVar0 /*18*/].f_2, 0);
							}
						}
						else if (!unk_0xB3CC729BBAA21637(Local_203[iVar0 /*18*/].f_2))
						{
							unk_0x407020DF5CAB33D3(Local_203[iVar0 /*18*/].f_2, 1);
						}
					}
					else
					{
						if (Local_203[iVar0 /*18*/].f_11)
						{
							unk_0x7CF15DD8B3815A0D(Local_203[iVar0 /*18*/], sLocal_372, "grip", 1000f, -1000f, -1, 48, 0.99f, 0, 0, 0);
							Local_203[iVar0 /*18*/].f_11 = 0;
						}
						if (Local_203[iVar0 /*18*/].f_10)
						{
							unk_0x889BB99E5D3F2CA6(Local_203[iVar0 /*18*/]);
							Local_203[iVar0 /*18*/].f_10 = 0;
						}
					}
				}
			}
			if (iLocal_46 != 7)
			{
				if (unk_0xBCBBB7902DEFA79B(Local_203[iVar0 /*18*/]) && unk_0xAB9B7705A127421C(unk_0x9F92518438215DD0()))
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
			if (unk_0x746960881FB19A89(Local_130[iVar0 /*18*/]))
			{
				if (unk_0xFC38B241541883D3(Local_130[iVar0 /*18*/], 0))
				{
					if (unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), Local_130[iVar0 /*18*/], 0))
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
	if (!unk_0x0BA451447C3B1A8D(iParam0) && !unk_0x0BA451447C3B1A8D(iParam1))
	{
		if (unk_0x2A2DBEFFFC03A22F(iParam0, iParam1))
		{
			if (unk_0xB5BBEB12C77EE430(iParam1, -1) == iParam0)
			{
				return -1;
			}
			if (unk_0xB5BBEB12C77EE430(iParam1, 0) == iParam0)
			{
				return 0;
			}
			if (unk_0xB5BBEB12C77EE430(iParam1, 1) == iParam0)
			{
				return 1;
			}
			if (unk_0xB5BBEB12C77EE430(iParam1, 2) == iParam0)
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
		if (unk_0x94E72F17611BCD3C(Local_203[iParam0 /*18*/].f_15, iVar0))
		{
			iVar1 = 5;
			iVar2 = (iVar1 + iLocal_374);
			iVar3 = iVar0;
			if (iVar3 < iVar1)
			{
				if (unk_0x3C17D9ED0E5F3FCA(Local_203[iParam0 /*18*/], sLocal_372, func_27(iParam0), 3))
				{
					if (unk_0xD17241758B91AAED(Local_203[iParam0 /*18*/], sLocal_372, func_27(iParam0)) > 0.9f)
					{
						unk_0xF76EE56D3E7DAF1B(&(Local_203[iParam0 /*18*/].f_15), iVar0);
					}
				}
			}
			else if (iVar3 < iVar2)
			{
				if (unk_0x3C17D9ED0E5F3FCA(Local_203[iParam0 /*18*/], sLocal_373, iLocal_374[(iVar3 - iVar1)], 3))
				{
					if (unk_0xD17241758B91AAED(Local_203[iParam0 /*18*/], sLocal_373, iLocal_374[(iVar3 - iVar1)]) > 0.9f)
					{
						unk_0xF76EE56D3E7DAF1B(&(Local_203[iParam0 /*18*/].f_15), iVar0);
					}
				}
			}
			else if (!unk_0x3C17D9ED0E5F3FCA(Local_203[iParam0 /*18*/], sLocal_372, "grip", 3))
			{
				unk_0xF76EE56D3E7DAF1B(&(Local_203[iParam0 /*18*/].f_15), iVar0);
			}
		}
		iVar0++;
	}
}

void func_29()
{
	int iVar0;
	
	if (!unk_0x3E0478C40AB5B38D(iLocal_85))
	{
		iVar0 = func_58(iLocal_567);
		if (((unk_0x746960881FB19A89(Local_130[iLocal_567 /*18*/]) && unk_0xFC38B241541883D3(Local_130[iLocal_567 /*18*/], 0)) && unk_0x746960881FB19A89(Local_203[iVar0 /*18*/])) && !unk_0x3E0478C40AB5B38D(Local_203[iVar0 /*18*/]))
		{
			if (unk_0x343BE15E9FFCF907(Local_130[iLocal_567 /*18*/], joaat("cavalcade2")))
			{
				if (unk_0xB7A628320EFF8E47(Local_203[iVar0 /*18*/].f_6, Local_62) < unk_0xE3621CC40F31FE2E(30f, 2f) && unk_0xB5BBEB12C77EE430(Local_130[iLocal_567 /*18*/], 0) == Local_203[iVar0 /*18*/])
				{
					if (!Local_203[iVar0 /*18*/].f_9)
					{
						if (!func_36(iVar0))
						{
							func_30(iVar0);
						}
					}
					else if (!func_36(iVar0) && (unk_0x17103F66FBB44C3C() - Local_203[iVar0 /*18*/].f_13) > 1000)
					{
						if (!unk_0x3C17D9ED0E5F3FCA(Local_203[iVar0 /*18*/], sLocal_373, "base", 3))
						{
							unk_0x7CF15DD8B3815A0D(Local_203[iVar0 /*18*/], sLocal_373, "base", 8f, 1000f, -1, 16, 0, 0, 0, 0);
						}
					}
				}
			}
			else if (!Local_203[iVar0 /*18*/].f_9)
			{
				if (unk_0xB7A628320EFF8E47(Local_203[iVar0 /*18*/].f_6, Local_62) < unk_0xE3621CC40F31FE2E(30f, 2f) && unk_0xB5BBEB12C77EE430(Local_130[iLocal_567 /*18*/], 0) == Local_203[iVar0 /*18*/])
				{
					unk_0x201DD05291C0FAF4(Local_203[iVar0 /*18*/], "random@paparazzi@pap_anims", "sweep_low", "sweep_med", "sweep_high", -1, iLocal_85, 1070134723, 1048576000);
					Local_203[iVar0 /*18*/].f_9 = 1;
					Local_203[iVar0 /*18*/].f_13 = unk_0x17103F66FBB44C3C();
				}
			}
			else if (Local_203[iVar0 /*18*/].f_9)
			{
				if ((unk_0x17103F66FBB44C3C() - Local_203[iVar0 /*18*/].f_13) > 2000)
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
	
	if (!unk_0x3E0478C40AB5B38D(Local_203[iParam0 /*18*/]) && !unk_0x3E0478C40AB5B38D(iLocal_85))
	{
		iVar0 = 15;
		Var1 = { Local_62 - Local_203[iParam0 /*18*/].f_6 };
		Var4 = { unk_0x83A30AB34278DD93(Local_203[iParam0 /*18*/]) };
		fVar7 = func_34(Var4, Var1);
		if (unk_0xE3DAC530D2CCDAE3(fVar7) < 10f)
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
		if (!unk_0x94E72F17611BCD3C(Local_203[iParam0 /*18*/].f_15, iParam1))
		{
			if (func_33(iParam1))
			{
				unk_0x7CF15DD8B3815A0D(Local_203[iParam0 /*18*/], sLocal_373, iLocal_374[func_32(iParam1)], 4f, -4f, -1, 16, 0, 0, 0, 0);
			}
			else if (iParam1 < 5)
			{
				unk_0x7CF15DD8B3815A0D(Local_203[iParam0 /*18*/], sLocal_372, func_27(iParam0), 8f, -8f, -1, 0, 0, 0, 0, 0);
			}
			else
			{
				unk_0x7CF15DD8B3815A0D(Local_203[iParam0 /*18*/], sLocal_372, "grip", 1000f, -1000f, -1, 57, 0, 0, 0, 0);
			}
			Local_203[iParam0 /*18*/].f_15 = 0;
			unk_0xEDB9A377CD8B7F03(&(Local_203[iParam0 /*18*/].f_15), iParam1);
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
	fVar0 = (unk_0x4E9A83F39209A4F6(Param3.f_1, Param3.f_0) - unk_0x4E9A83F39209A4F6(Param0.f_1, Param0.f_0));
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
	if (!unk_0x9E9AFDBF482248F6(sLocal_373))
	{
		iVar1 = 5;
		while (iVar1 <= 13)
		{
			if (!bVar0)
			{
				if (unk_0x94E72F17611BCD3C(Local_203[iParam0 /*18*/].f_15, iVar1))
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
	
	if (unk_0x746960881FB19A89(Local_130[iParam0 /*18*/]) && unk_0xC7FF9739199F83C9(Local_130[iParam0 /*18*/]))
	{
		unk_0xCD3EBB4EAE50293F(&(Local_130[iParam0 /*18*/]));
	}
	if (unk_0x2E6E8D325977B3EC(Local_130[iParam0 /*18*/].f_1))
	{
		unk_0x0451B5D93A4BDAA0(&(Local_130[iParam0 /*18*/].f_1));
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
		if (unk_0x746960881FB19A89(Local_203[iVar1 /*18*/]) && unk_0xC7FF9739199F83C9(Local_203[iVar1 /*18*/]))
		{
			if (unk_0x746960881FB19A89(Local_203[iVar1 /*18*/]))
			{
				unk_0x83A49C880CB75451(&(Local_203[iVar1 /*18*/].f_2));
			}
			if (unk_0x2E6E8D325977B3EC(Local_203[iVar1 /*18*/].f_1))
			{
				unk_0x0451B5D93A4BDAA0(&(Local_203[iVar1 /*18*/].f_1));
			}
			unk_0x7763EDCBED8A5840(&(Local_203[iVar1 /*18*/]));
		}
		iVar0++;
	}
}

int func_38(int iParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = 1;
	if (unk_0x746960881FB19A89(Local_130[iParam0 /*18*/]))
	{
		if (unk_0xFC38B241541883D3(Local_130[iParam0 /*18*/], 0))
		{
			if (unk_0xB7A628320EFF8E47(Local_59, Local_130[iParam0 /*18*/].f_8) < (fParam1 * fParam1) || !unk_0xC7FF9739199F83C9(Local_130[iParam0 /*18*/]))
			{
				iVar0 = 0;
			}
		}
	}
	if (unk_0x746960881FB19A89(func_55(iParam0, 0)))
	{
		if (!unk_0x3E0478C40AB5B38D(func_55(iParam0, 0)))
		{
			if (unk_0xB7A628320EFF8E47(Local_59, Local_203[func_60(iParam0) /*18*/].f_6) < (fParam1 * fParam1) || !unk_0xC7FF9739199F83C9(func_55(iParam0, 0)))
			{
				iVar0 = 0;
			}
		}
	}
	if (unk_0x746960881FB19A89(func_55(iParam0, 1)))
	{
		if (!unk_0x3E0478C40AB5B38D(func_55(iParam0, 1)))
		{
			if (unk_0xB7A628320EFF8E47(Local_59, Local_203[func_58(iParam0) /*18*/].f_6) < (fParam1 * fParam1) || !unk_0xC7FF9739199F83C9(func_55(iParam0, 1)))
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
	if (unk_0x746960881FB19A89(iParam0) && unk_0xFC38B241541883D3(iParam0, 0))
	{
		if (((((unk_0x746960881FB19A89(iParam1) && iParam0 != iParam1) && !unk_0x567194A60F82D51A(unk_0xB6A50C909A8FABC3(iParam1))) && !unk_0xDB519A4108C6BFB1(unk_0xB6A50C909A8FABC3(iParam1))) && !unk_0xAAF77E03CD60491E(unk_0xB6A50C909A8FABC3(iParam1))) && !unk_0x297BD02A9765671B(unk_0xB6A50C909A8FABC3(iParam1)))
		{
			if (unk_0x91EAD4F2F9B5B38A(unk_0x77009B1C011405A9(iParam1, 1), *uParam4, 1) > 20f)
			{
				if (func_43(iParam0, iParam1, iLocal_357, unk_0x77009B1C011405A9(iParam1, 1), unk_0x045015AED79BD50E(iParam1, 2)))
				{
					*uParam2 = { *uParam4 };
					*uParam3 = *uParam5;
					*uParam2 = { unk_0x81D32A4E7E765EA7(*uParam2, *uParam3, Param7) };
					*uParam4 = { unk_0x77009B1C011405A9(iParam1, 1) };
					*uParam5 = unk_0xE691E4EA6B4440C6(iParam1);
				}
			}
			if (!unk_0xC7FF9739199F83C9(iParam0))
			{
				*uParam6 = unk_0x17103F66FBB44C3C();
			}
			else if ((unk_0x17103F66FBB44C3C() - *uParam6) > iParam10)
			{
				if ((func_42(iParam0, iParam1, 1) > fParam11 && unk_0x91EAD4F2F9B5B38A(unk_0x77009B1C011405A9(iParam1, 1), *uParam2, 1) > 20f) && unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), *uParam2) > 100f)
				{
					if (!func_41(*uParam2))
					{
						if (!unk_0xE298336AB6E66F7E(*uParam2, 6f))
						{
							unk_0xA82CB0D67E22220B(*uParam2, 6f, 0);
							unk_0x8F9D4AA83F37F6E2(*uParam2, 6f, 0, 0, 0, 0, 0);
							unk_0xFA51DC22F6E34F6E(iParam0, *uParam2, 1, 0, 0, 1);
							unk_0x03D97EDECF2E1859(iParam0, *uParam3);
							unk_0x77C765087051EDD6(iParam0);
							unk_0xBF3459C0ACC7B82F(iParam0, func_39((unk_0x9EF11DECA38804B6(iParam1) + 10f), 10f, 60f));
							unk_0x6FD45FA39DD18625(iParam0, 1, 1);
							*uParam6 = unk_0x17103F66FBB44C3C();
						}
					}
				}
			}
		}
		else
		{
			*uParam6 = unk_0x17103F66FBB44C3C();
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
	
	if (!unk_0x0BA451447C3B1A8D(iParam0))
	{
		Var0 = { unk_0x77009B1C011405A9(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x77009B1C011405A9(iParam0, 0) };
	}
	if (!unk_0x0BA451447C3B1A8D(iParam1))
	{
		Var3 = { unk_0x77009B1C011405A9(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0x77009B1C011405A9(iParam1, 0) };
	}
	return unk_0x91EAD4F2F9B5B38A(Var0, Var3, iParam2);
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
	
	if (unk_0x746960881FB19A89(iParam2))
	{
		unk_0x6BD8057B0B6EC46D(unk_0xB6A50C909A8FABC3(iParam0), &Var7, &Var10);
		unk_0x6BD8057B0B6EC46D(unk_0xB6A50C909A8FABC3(iParam1), &Var13, &uVar16);
		fVar19 = unk_0xE3DAC530D2CCDAE3((Var10.f_2 - Var7.f_2));
		fVar20 = unk_0xE3DAC530D2CCDAE3((Var10.f_0 - Var7.f_0));
		fVar21 = unk_0xE3DAC530D2CCDAE3((Var10.f_1 - Var7.f_1));
		if (fVar20 > fVar19)
		{
			fVar22 = (fVar20 / 2f);
			fVar23 = (fVar22 - unk_0xE3DAC530D2CCDAE3(Var7.f_2));
		}
		else
		{
			fVar22 = (fVar21 / 2f);
			fVar23 = (fVar22 - unk_0xE3DAC530D2CCDAE3(Var7.f_0));
		}
		Var24.f_2 = (Var24.f_2 + (Var13.f_2 - Var7.f_2));
		unk_0xFA51DC22F6E34F6E(iParam2, Param3, 1, 0, 0, 1);
		unk_0x8F856D0103CF1B91(iParam2, Param6, 2, 1);
		Var1 = { unk_0x20CBCBD58A2C73B4(iParam2, Vector((fVar23 * 1.25f), ((fVar21 / 2f) - (fVar22 * 0.75f)), 0f) + Var24) };
		Var4 = { unk_0x20CBCBD58A2C73B4(iParam2, Vector((fVar23 * 1.25f), ((-fVar21 / 2f) + (fVar22 * 0.75f)), 0f) + Var24) };
		uVar35 = unk_0x704DCFDF0766F407(Var4, Var1, fVar22, 19, unk_0x9F92518438215DD0(), 4);
		if (unk_0xD200D7E3AEDD340D(uVar35, &iVar27, &uVar28, &uVar31, &uVar34) != 2)
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
	
	if ((unk_0x17103F66FBB44C3C() - iLocal_566) > 100)
	{
		if ((unk_0x17103F66FBB44C3C() - Local_203[iLocal_565 /*18*/].f_12) > 500)
		{
			if (unk_0x746960881FB19A89(Local_203[iLocal_565 /*18*/]) && !unk_0x3E0478C40AB5B38D(Local_203[iLocal_565 /*18*/]))
			{
				bVar0 = true;
				if (!Local_203[iLocal_565 /*18*/].f_9 && unk_0x827151D7B70CB853(Local_203[iLocal_565 /*18*/], 0))
				{
					bVar0 = false;
				}
				if (bVar0)
				{
					if (((unk_0x3C17D9ED0E5F3FCA(Local_203[iLocal_565 /*18*/], sLocal_372, func_27(iLocal_565), 3) && unk_0xD17241758B91AAED(Local_203[iLocal_565 /*18*/], sLocal_372, func_27(iLocal_565)) > 0.5f) && unk_0xD17241758B91AAED(Local_203[iLocal_565 /*18*/], sLocal_372, func_27(iLocal_565)) < 0.75f) || Local_203[iLocal_565 /*18*/].f_9)
					{
						unk_0xACCC0049A47E21C3("scr_rcpap1_camera", Local_203[iLocal_565 /*18*/].f_2, 0.019f, -0.01f, 0.046f, 0f, 0f, -180f, 1065353216, 0, 0, 0);
						if ((iLocal_565 % 3) == 0)
						{
							unk_0x6687E59C6A0BB305(-1, "SHUTTER_FLASH", unk_0x77009B1C011405A9(Local_203[iLocal_565 /*18*/].f_2, 1), "CAMERA_FLASH_SOUNDSET", 0, 0, 0);
						}
						else if ((iLocal_565 % 3) == 1)
						{
							unk_0x6687E59C6A0BB305(-1, "SHUTTER", unk_0x77009B1C011405A9(Local_203[iLocal_565 /*18*/].f_2, 1), "CAMERA_FLASH_SOUNDSET", 0, 0, 0);
						}
						else
						{
							unk_0x6687E59C6A0BB305(-1, "FLASH", unk_0x77009B1C011405A9(Local_203[iLocal_565 /*18*/].f_2, 1), "CAMERA_FLASH_SOUNDSET", 0, 0, 0);
						}
						Local_203[iLocal_565 /*18*/].f_12 = unk_0x17103F66FBB44C3C();
					}
					iLocal_566 = unk_0x17103F66FBB44C3C();
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
	if (!unk_0x3E0478C40AB5B38D(Local_203[iParam1 /*18*/]) && !unk_0x3E0478C40AB5B38D(iParam0))
	{
		if (!unk_0x53C8F92CF78772BF(Local_203[iParam1 /*18*/], iParam0, 20f))
		{
			if (unk_0xE962BD784DD0E442(Local_203[iParam1 /*18*/], -875674219) != 1)
			{
				unk_0x23F243BF5B07DA90(Local_203[iParam1 /*18*/], iParam0, 0);
			}
		}
		else if ((unk_0x17103F66FBB44C3C() - Local_203[iParam1 /*18*/].f_13) > 2000)
		{
			if (!unk_0x3C17D9ED0E5F3FCA(Local_203[iParam1 /*18*/], sLocal_372, func_27(iParam1), 3))
			{
				unk_0x7CF15DD8B3815A0D(Local_203[iParam1 /*18*/], sLocal_372, func_27(iParam1), 4f, -4f, -1, 0, 0, 0, 0, 0);
				Local_203[iParam1 /*18*/].f_13 = unk_0x17103F66FBB44C3C();
			}
		}
	}
}

void func_46(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	if (!unk_0x3E0478C40AB5B38D(Local_203[iParam1 /*18*/]) && !unk_0x3E0478C40AB5B38D(iParam0))
	{
		Var0 = { unk_0x20CBCBD58A2C73B4(iParam0, func_48(iParam1)) };
		switch (Local_203[iParam1 /*18*/].f_16)
		{
			case 0:
				func_47(Var0, iParam1, iParam0);
				Local_203[iParam1 /*18*/].f_16++;
				break;
			
			case 1:
				if (unk_0xE962BD784DD0E442(Local_203[iParam1 /*18*/], 713668775) != 1 || unk_0x2A488C176D52CCA5(Var0, Local_203[iParam1 /*18*/].f_6) > 5f)
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
				if (unk_0xE962BD784DD0E442(Local_203[iParam1 /*18*/], 713668775) != 1)
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
	
	Var0 = { func_35(unk_0x77009B1C011405A9(iParam4, 1) - Param0) };
	iVar3 = unk_0x4F034F83AF91EC27(Var0.f_0, Var0.f_1);
	Local_203[iParam3 /*18*/].f_3 = { Param0 };
	unk_0x32D18ECD9E6F9BE2(Local_203[iParam3 /*18*/]);
	if (unk_0x2A488C176D52CCA5(Param0, Local_203[iParam3 /*18*/].f_6) < 2f)
	{
		unk_0x27DF0A5AA993D7B6(Local_203[iParam3 /*18*/], Local_203[iParam3 /*18*/].f_3, 1f, -1, 0.5f, 512, iVar3);
	}
	else
	{
		unk_0x27DF0A5AA993D7B6(Local_203[iParam3 /*18*/], Local_203[iParam3 /*18*/].f_3, 2f, -1, 0.5f, 512, iVar3);
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
		if (unk_0x2E6E8D325977B3EC(Local_203[iVar0 /*18*/].f_1))
		{
			if (unk_0x3E0478C40AB5B38D(Local_203[iVar0 /*18*/]))
			{
				unk_0x0451B5D93A4BDAA0(&(Local_203[iVar0 /*18*/].f_1));
			}
			else if (unk_0x827151D7B70CB853(Local_203[iVar0 /*18*/], 0))
			{
				unk_0x0451B5D93A4BDAA0(&(Local_203[iVar0 /*18*/].f_1));
			}
		}
		else if (!unk_0x3E0478C40AB5B38D(Local_203[iVar0 /*18*/]) && !unk_0x827151D7B70CB853(Local_203[iVar0 /*18*/], 0))
		{
			Local_203[iVar0 /*18*/].f_1 = func_173(Local_203[iVar0 /*18*/], 1, 145);
			unk_0x2A8C2BEEA4F7041F(Local_203[iVar0 /*18*/].f_1, "EP_PAPBLIP");
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_130.f_0)
	{
		if (unk_0xFC38B241541883D3(Local_130[iVar0 /*18*/], 0))
		{
			if (unk_0x2E6E8D325977B3EC(Local_130[iVar0 /*18*/].f_1))
			{
				Var1 = { unk_0xF4A29E04CA54F443(Local_130[iVar0 /*18*/].f_1) };
				Var4 = { Local_130[iVar0 /*18*/].f_8 };
				Var1.f_0 = (Var1.f_0 + ((Var4.f_0 - Var1.f_0) / 10f));
				Var1.f_1 = (Var1.f_1 + ((Var4.f_1 - Var1.f_1) / 10f));
				Var1.f_2 = (Var1.f_2 + ((Var4.f_2 - Var1.f_2) / 10f));
				unk_0xAB1A4C1CDE66050B(Local_130[iVar0 /*18*/].f_1, Var1);
				if (func_52(Local_130[iVar0 /*18*/], 1, 0, 0))
				{
					unk_0x0451B5D93A4BDAA0(&(Local_130[iVar0 /*18*/].f_1));
				}
			}
			else if (!func_52(Local_130[iVar0 /*18*/], 1, 0, 0))
			{
				Local_130[iVar0 /*18*/].f_1 = func_50(Local_130[iVar0 /*18*/].f_8, 0);
				unk_0x016722B6E0559A9A(Local_130[iVar0 /*18*/].f_1, 1);
				unk_0x2A8C2BEEA4F7041F(Local_130[iVar0 /*18*/].f_1, "EP_PAPBLIP");
				unk_0x15DE80E4F3BF69A9(Local_130[iVar0 /*18*/].f_1, 9);
			}
		}
		else if (unk_0x2E6E8D325977B3EC(Local_130[iVar0 /*18*/].f_1))
		{
			unk_0x0451B5D93A4BDAA0(&(Local_130[iVar0 /*18*/].f_1));
		}
		iVar0++;
	}
}

var func_50(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x2290D76D0A4ACACA(Param0);
	unk_0xD4916ED85412C8D9(uVar0, func_51(unk_0x4B69FB3A5B09A1BA(), 1f, 1f));
	unk_0xD8EEE815F0120FCE(uVar0, iParam3);
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
	
	iVar1 = unk_0x95A70C0B34435CA8(uParam0) + 1;
	if (!unk_0x0BA451447C3B1A8D(uParam0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (!unk_0x4A33023BC86AAA7F(iParam0, (iVar0 - 1)))
			{
				iVar2 = unk_0xB5BBEB12C77EE430(iParam0, (iVar0 - 1));
				if (iParam3 && iVar2 == unk_0x9F92518438215DD0())
				{
				}
				else if (bParam2)
				{
					if (!unk_0x3E0478C40AB5B38D(iVar2))
					{
						if (unk_0x2FCB242469087013(iVar2))
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
					iVar3 = unk_0xB5BBEB12C77EE430(iParam0, (iVar0 - 1));
					if (!unk_0x3E0478C40AB5B38D(iVar3))
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
	if (!unk_0x3E0478C40AB5B38D(Local_203[iParam0 /*18*/]))
	{
		if (unk_0x2A488C176D52CCA5(unk_0x77009B1C011405A9(Local_203[iParam0 /*18*/], 1), Param1) > 1.5f)
		{
			if (unk_0xE962BD784DD0E442(Local_203[iParam0 /*18*/], 713668775) != 1)
			{
				unk_0x27DF0A5AA993D7B6(Local_203[iParam0 /*18*/], Param1, 2f, -1, 0.25f, 0, fParam4);
			}
		}
		else if (unk_0xE3DAC530D2CCDAE3((func_54(unk_0xE691E4EA6B4440C6(Local_203[iParam0 /*18*/])) - func_54(fParam4))) > 10f)
		{
			if (unk_0xE962BD784DD0E442(Local_203[iParam0 /*18*/], 1920390111) != 1)
			{
				unk_0x70A8B8D6374F080F(Local_203[iParam0 /*18*/], fParam4, 0);
			}
		}
		else
		{
			switch (Local_203[iParam0 /*18*/].f_16)
			{
				case 0:
					if (unk_0x9E9AFDBF482248F6(sParam7))
					{
						if (!unk_0x3C17D9ED0E5F3FCA(Local_203[iParam0 /*18*/], sParam5, sParam6, 3))
						{
							unk_0x7CF15DD8B3815A0D(Local_203[iParam0 /*18*/], sParam5, sParam6, 4f, -4f, -1, 1, 0, 0, 0, 0);
						}
					}
					else if (!unk_0x3C17D9ED0E5F3FCA(Local_203[iParam0 /*18*/], sParam5, sParam6, 3))
					{
						unk_0x7CF15DD8B3815A0D(Local_203[iParam0 /*18*/], sParam5, sParam6, 4f, -4f, -1, 0, 0, 0, 0, 0);
					}
					else if (unk_0xD17241758B91AAED(Local_203[iParam0 /*18*/], sParam5, sParam6) > 0.99f)
					{
						unk_0x7CF15DD8B3815A0D(Local_203[iParam0 /*18*/], sParam5, sParam7, 4f, -4f, -1, 0, 0, 0, 0, 0);
						Local_203[iParam0 /*18*/].f_16++;
					}
					break;
				
				case 1:
					if (!unk_0x3C17D9ED0E5F3FCA(Local_203[iParam0 /*18*/], sParam5, sParam7, 3))
					{
						unk_0x7CF15DD8B3815A0D(Local_203[iParam0 /*18*/], sParam5, sParam7, 4f, -4f, -1, 0, 0, 0, 0, 0);
					}
					else if (unk_0xD17241758B91AAED(Local_203[iParam0 /*18*/], sParam5, sParam7) > 0.99f)
					{
						unk_0x7CF15DD8B3815A0D(Local_203[iParam0 /*18*/], sParam5, sParam6, 4f, -4f, -1, 0, 0, 0, 0, 0);
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
		Local_130[iParam0 /*18*/] = unk_0xB0694AD0A3BB8936(joaat("vader"), Param1, fParam4, 1, 1);
	}
	else
	{
		Local_130[iParam0 /*18*/] = unk_0xB0694AD0A3BB8936(joaat("cavalcade2"), Param1, fParam4, 1, 1);
		unk_0xDFA36C740458266A(Local_130[iParam0 /*18*/], 0);
	}
	unk_0x77C765087051EDD6(Local_130[iParam0 /*18*/]);
	unk_0x17E8CB2415E3DCFE(Local_130[iParam0 /*18*/], 1);
	if (bParam5)
	{
		if (!unk_0x746960881FB19A89(func_55(iParam0, 0)))
		{
			func_57(func_60(iParam0), Param1, fParam4);
		}
		if (!unk_0x746960881FB19A89(func_55(iParam0, 1)))
		{
			func_57(func_58(iParam0), Param1, fParam4);
		}
		if (!unk_0x3E0478C40AB5B38D(func_55(iParam0, 0)) && unk_0xFC38B241541883D3(Local_130[iParam0 /*18*/], 0))
		{
			unk_0x4DB6897DB04DE279(func_55(iParam0, 0), Local_130[iParam0 /*18*/], -1);
		}
		if (!unk_0x3E0478C40AB5B38D(func_55(iParam0, 1)) && unk_0xFC38B241541883D3(Local_130[iParam0 /*18*/], 0))
		{
			unk_0x4DB6897DB04DE279(func_55(iParam0, 1), Local_130[iParam0 /*18*/], 0);
		}
		unk_0x6FD45FA39DD18625(Local_130[iParam0 /*18*/], 1, 1);
	}
}

void func_57(int iParam0, struct<3> Param1, float fParam4)
{
	Local_203[iParam0 /*18*/] = unk_0xA00B5D954AD320BF(26, joaat("a_m_y_genstreet_02"), Param1, fParam4, 1, 1);
	unk_0x64277E0EB39C1162(Local_203[iParam0 /*18*/], 1, 0);
	unk_0x4A1AC49BA4A747F7(Local_203[iParam0 /*18*/], 1);
	unk_0x64277E0EB39C1162(Local_203[iParam0 /*18*/], 0, 1);
	unk_0x5204CFB0BCA6456D(Local_203[iParam0 /*18*/], 3);
	unk_0x69C5E202565B9651(Local_203[iParam0 /*18*/], 1);
	unk_0x64277E0EB39C1162(Local_203[iParam0 /*18*/], 17, 1);
	unk_0xA334EDA2335A13CA(Local_203[iParam0 /*18*/], 2, 0);
	unk_0x185D18DA9BC98757(Local_203[iParam0 /*18*/], 0);
	unk_0xE8105B7E3908547D(Local_203[iParam0 /*18*/], 1);
	unk_0xBB4C2CBE603AE372(Local_203[iParam0 /*18*/], 100);
	unk_0x2D6448F975552ABA(Local_203[iParam0 /*18*/], joaat("FIRING_PATTERN_FULL_AUTO"));
	unk_0x9001FCB58244C11D(Local_203[iParam0 /*18*/], 101, 1);
	unk_0x9001FCB58244C11D(Local_203[iParam0 /*18*/], 185, 0);
	unk_0x5C66176FC9E6724C(Local_203[iParam0 /*18*/], 300);
	unk_0xB27BF64B02C0107E(Local_203[iParam0 /*18*/], 3, (iParam0 % 2), unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam0) / 2f)), 0);
	if (Global_3 || bLocal_69)
	{
		unk_0xC204B4E5503A54EA(Local_203[iParam0 /*18*/], 1);
		unk_0x5C66176FC9E6724C(Local_203[iParam0 /*18*/], 500);
	}
	unk_0x79C17B0FEABE87FB(Local_203[iParam0 /*18*/], 1);
	unk_0x64277E0EB39C1162(Local_203[iParam0 /*18*/], 2, 1);
	unk_0x0365EE015603E149(Local_203[iParam0 /*18*/], 2f);
	unk_0x185D18DA9BC98757(Local_203[iParam0 /*18*/], 0);
	unk_0x9C718295C759454B(Local_203[iParam0 /*18*/], 0);
	Local_203[iParam0 /*18*/].f_2 = unk_0xA7DA1E6D4C99864B(joaat("prop_pap_camera_01"), unk_0xAA04EEFB14FDE2E9(Local_203[iParam0 /*18*/], 28422, 0f, 0f, 0f), 1, 1, 0);
	unk_0x80BA810554025DFF(Local_203[iParam0 /*18*/].f_2, Local_203[iParam0 /*18*/], unk_0xB8BF0926F5E41F7D(Local_203[iParam0 /*18*/], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	if (unk_0x746960881FB19A89(Local_203[0 /*18*/].f_2))
	{
		unk_0x407020DF5CAB33D3(Local_203[0 /*18*/].f_2, 0);
	}
	Local_203[iParam0 /*18*/].f_17 = unk_0xFD181DDA4D8D6786(Local_203[iParam0 /*18*/]);
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
	
	if (!unk_0x3E0478C40AB5B38D(iLocal_85))
	{
		bVar0 = false;
		if (func_65())
		{
			if (unk_0x746960881FB19A89(func_64()))
			{
				if (unk_0x2A488C176D52CCA5(unk_0x77009B1C011405A9(func_64(), 1), Local_62) < 5f && unk_0x9EF11DECA38804B6(iLocal_90) < 1f)
				{
					bVar0 = true;
				}
			}
		}
		else if (unk_0xFC38B241541883D3(iLocal_90, 0))
		{
			if (!unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), iLocal_90, 0) && unk_0x44E080690DA76A2A(iLocal_85, iLocal_90, 0))
			{
				fLocal_569 = (fLocal_569 + unk_0xD1D592A06EBAAE4F());
			}
			else if (fLocal_569 > 0f)
			{
				fLocal_569 = 0f;
			}
		}
		if (bVar0)
		{
			fLocal_568 = (fLocal_568 + unk_0xD1D592A06EBAAE4F());
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
			if (!unk_0x2A2DBEFFFC03A22F(iLocal_85, iLocal_90))
			{
				if (unk_0xBD280C076BC69C97(iLocal_85))
				{
					bVar1 = true;
				}
				iLocal_70 = 0;
			}
		}
		if (!iLocal_70)
		{
			if (unk_0x2A2DBEFFFC03A22F(iLocal_85, iLocal_90))
			{
				iLocal_70 = 1;
			}
		}
		if (fLocal_569 > 30f)
		{
			bVar1 = true;
		}
		if (!unk_0xFC38B241541883D3(iLocal_90, 0) && (!bLocal_367 || iLocal_46 == 1))
		{
			bVar1 = true;
		}
		if (unk_0x2A488C176D52CCA5(Local_62, Local_59) > 30f)
		{
			bVar1 = true;
		}
		if (((unk_0xFC38B241541883D3(iLocal_90, 0) && func_63(iLocal_90)) && (!bLocal_367 || iLocal_46 == 1)) && unk_0x2A488C176D52CCA5(unk_0x77009B1C011405A9(iLocal_85, 1), Local_55) > 15f)
		{
			bVar1 = true;
		}
		if (unk_0xFC38B241541883D3(iLocal_90, 0) && unk_0x5BFFEED2EB6664D5(iLocal_90))
		{
			bVar1 = true;
		}
		if (bVar1)
		{
			if (unk_0x073B65E051D2F03E(0, 2) == 1)
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
	if (unk_0x746960881FB19A89(iParam0))
	{
		if (unk_0xFC38B241541883D3(iParam0, 0))
		{
			if (((unk_0xED6198B6F71F1E6F(iParam0, 0, 7000) || unk_0xED6198B6F71F1E6F(iParam0, 3, 30000)) || unk_0xED6198B6F71F1E6F(iParam0, 2, 30000)) || unk_0xED6198B6F71F1E6F(iParam0, 1, 40000))
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
		if ((unk_0x746960881FB19A89(Local_203[iVar0 /*18*/]) && !unk_0x3E0478C40AB5B38D(Local_203[iVar0 /*18*/])) && !unk_0x3E0478C40AB5B38D(iLocal_85))
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
	if (unk_0xFC38B241541883D3(iLocal_90, 0))
	{
		if (!unk_0x3E0478C40AB5B38D(iLocal_85))
		{
			if (unk_0x44E080690DA76A2A(iLocal_85, iLocal_90, 0) && unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), iLocal_90, 0))
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
		if (unk_0x746960881FB19A89(Local_203[iVar0 /*18*/]))
		{
			if (unk_0x3E0478C40AB5B38D(Local_203[iVar0 /*18*/]) || unk_0x0BA451447C3B1A8D(Local_203[iVar0 /*18*/]))
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
	
	if (!unk_0x3E0478C40AB5B38D(iParam0))
	{
		Var0 = { unk_0x77009B1C011405A9(iParam0, 1) };
		if (unk_0x860AFAABAECF6379(unk_0x9F92518438215DD0(), 7))
		{
			unk_0x9DA0F3A686A566A6(unk_0x9F92518438215DD0(), &iVar3, 1);
		}
		if (!bParam2)
		{
			if (unk_0xD18D82BE9A1A5E43(Var0, 5f, 1))
			{
				return 1;
			}
		}
		if (unk_0xB7A628320EFF8E47(Var0, Local_59) < 400f)
		{
			if (!bParam2)
			{
				if ((unk_0x860AFAABAECF6379(unk_0x9F92518438215DD0(), 6) && !unk_0x68616F991D40E2B5(unk_0x9F92518438215DD0())) && unk_0x4A4902C6AC8DCB7E(unk_0x9F92518438215DD0()))
				{
					return 1;
				}
			}
			if ((iVar3 == joaat("weapon_petrolcan") && unk_0x4A4902C6AC8DCB7E(unk_0x9F92518438215DD0())) && unk_0xB7A628320EFF8E47(Local_59, Var0) < 9f)
			{
				return 1;
			}
			if (((unk_0xB7F4FC4B0BBF8285(unk_0xCFC72E446B0B3AD7(), iParam0) || unk_0xEA02B89C167BF0E3(unk_0xCFC72E446B0B3AD7(), iParam0)) && (func_68(Local_59, iParam0) && unk_0xB7A628320EFF8E47(Local_59, unk_0x77009B1C011405A9(iParam0, 1)) < 100f)) && unk_0x860AFAABAECF6379(unk_0x9F92518438215DD0(), 6))
			{
				return 1;
			}
			if (iLocal_384 > 150)
			{
				return 1;
			}
		}
		if (unk_0x2EF36063171DEEDD(unk_0xAA04EEFB14FDE2E9(iParam0, 31086, 0f, 0f, 0f), 6f))
		{
			return 1;
		}
	}
	else if (unk_0x746960881FB19A89(iParam0) && iParam1)
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
	
	Var0 = { unk_0x77009B1C011405A9(iParam3, 1) };
	Var3 = { unk_0x20CBCBD58A2C73B4(iParam3, 0f, 1f, 0f) - Var0 };
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
		if (unk_0x2E6E8D325977B3EC(uLocal_361))
		{
			unk_0x0451B5D93A4BDAA0(&uLocal_361);
		}
		if (unk_0x2E6E8D325977B3EC(uLocal_362))
		{
			unk_0x0451B5D93A4BDAA0(&uLocal_362);
		}
		if (unk_0x2E6E8D325977B3EC(uLocal_359))
		{
			unk_0x0451B5D93A4BDAA0(&uLocal_359);
		}
		iLocal_47 = iLocal_46;
		iLocal_46 = 11;
	}
	else if (unk_0xD092BBE40A1C72AA(unk_0xCFC72E446B0B3AD7()) > 0)
	{
		if (unk_0xD092BBE40A1C72AA(unk_0xCFC72E446B0B3AD7()) < 3)
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
	if ((unk_0x17103F66FBB44C3C() - iLocal_666) > 5000)
	{
		if (!func_72())
		{
			if (func_5(&Local_394, cLocal_371, sParam0, 4, 0, 0, 0))
			{
				iLocal_666 = unk_0x17103F66FBB44C3C();
			}
		}
	}
}

int func_72()
{
	if (Global_15692 != 0 || unk_0xDFF00E8709AA7095())
	{
		return 1;
	}
	return 0;
}

bool func_73()
{
	if (!unk_0x3E0478C40AB5B38D(iLocal_85) && unk_0xB7A628320EFF8E47(Local_59, Local_62) < 400f)
	{
		if (!iLocal_349 && (unk_0x17103F66FBB44C3C() - iLocal_351) > 5000)
		{
			if (iLocal_81 > 10)
			{
				iLocal_349 = 1;
				iLocal_81 = 0;
			}
		}
		if ((!iLocal_354 && !iLocal_349) && (unk_0x17103F66FBB44C3C() - iLocal_355) > 4000)
		{
			if (unk_0x860AFAABAECF6379(unk_0x9F92518438215DD0(), 6) && unk_0x4A4902C6AC8DCB7E(unk_0x9F92518438215DD0()))
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
		if (((!iLocal_352 && !iLocal_349) && !iLocal_354) && (unk_0x17103F66FBB44C3C() - iLocal_353) > 15000)
		{
			if (unk_0x860AFAABAECF6379(unk_0x9F92518438215DD0(), 6) && !unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
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
					iLocal_351 = unk_0x17103F66FBB44C3C();
					iLocal_349 = 0;
				}
			}
			else if (func_5(&Local_394, cLocal_371, "REPAP_HUR", 4, 0, 0, 0))
			{
				iLocal_351 = unk_0x17103F66FBB44C3C();
				iLocal_349 = 0;
				iLocal_350 = 1;
			}
		}
		if (iLocal_354)
		{
			if (func_5(&Local_394, cLocal_371, "REPAP_SHOOT", 4, 0, 0, 0))
			{
				iLocal_355 = unk_0x17103F66FBB44C3C();
				iLocal_354 = 0;
			}
		}
		if (iLocal_352)
		{
			if (func_5(&Local_394, cLocal_371, "REPAP_GUN", 4, 0, 0, 0))
			{
				iLocal_353 = unk_0x17103F66FBB44C3C();
				iLocal_352 = 0;
			}
		}
	}
	return ((iLocal_352 || iLocal_354) || iLocal_349);
}

void func_74()
{
	if (!unk_0x3E0478C40AB5B38D(iLocal_85))
	{
		unk_0xE8105B7E3908547D(iLocal_85, 1);
		unk_0xF2061C15946C53A2(255, uLocal_68, joaat("player"));
		if (!Global_3 && !bLocal_69)
		{
			unk_0x9001FCB58244C11D(iLocal_85, 317, 1);
			unk_0x4A1AC49BA4A747F7(iLocal_85, 0);
		}
	}
	func_78(-1, 0);
	func_75();
	unk_0xF2E6C77EC932251F(62);
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
	if (Global_90001.f_8)
	{
		if (Global_90001.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_90001.f_10 > 1)
	{
		return 0;
	}
	Global_90001.f_10++;
	return 1;
}

bool func_77(bool bParam0)
{
	if (!bParam0 && unk_0x7B47A371E2D93C2C(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x94E72F17611BCD3C(Global_68493, 0);
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
			Global_97358.f_28192.f_2 = 3;
		}
		if (func_86(iParam0, iParam1) != 322)
		{
			func_80(func_86(iParam0, iParam1), Local_42.f_0, Local_42.f_1);
		}
		Global_97346 = iParam1;
		if (Global_97344 == 0)
		{
			if (((Global_97347 == 1 || Global_97347 == 5) || Global_97347 == 11) || Global_97347 == 25)
			{
				func_79(2);
			}
			else if ((Global_97347 == 26 || Global_97347 == 8) || Global_97347 == 17)
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
	Global_97344 = iParam0;
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
	if (Global_97358.f_8448[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_97358.f_8448[iParam0 /*12*/].f_6 == 11 || Global_97358.f_8448[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_97358.f_8448[iParam0 /*12*/].f_5 = 1;
		Global_97358.f_8448[iParam0 /*12*/].f_10 = uParam1;
		Global_97358.f_8448[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0x21F0CE088EF06776(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x21F0CE088EF06776(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x21F0CE088EF06776(joaat("num_hidden_packages_3"), 50, 0);
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
	Global_97094 = 0;
	Global_97095 = 0;
	Global_97096 = 0;
	Global_97097 = 0;
	Global_97098 = 0;
	Global_97099 = 0;
	Global_97100 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_97358.f_8448.f_3853;
	Global_97358.f_8448.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_97358.f_8448[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_97358.f_8448[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_97094++;
					fVar1 = (fVar1 + Global_97358.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_97095++;
					fVar2 = (fVar2 + Global_97358.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_97096++;
					fVar3 = (fVar3 + Global_97358.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_97097++;
					fVar4 = (fVar4 + Global_97358.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_97098++;
					fVar5 = (fVar5 + (Global_97358.f_8448[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_97099++;
					fVar6 = (fVar6 + Global_97358.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_97100++;
					fVar7 = (fVar7 + Global_97358.f_8448[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_97077 > 0)
	{
		if (Global_97094 == Global_97077)
		{
			fVar1 = 55f;
		}
	}
	if (Global_97078 > 0)
	{
		if (Global_97095 == Global_97078)
		{
			fVar2 = 10f;
		}
	}
	if (Global_97079 > 0)
	{
		if (Global_97096 == Global_97079)
		{
			fVar3 = 0f;
		}
	}
	if (Global_97080 > 0)
	{
		if (Global_97097 == Global_97080)
		{
			fVar4 = 10f;
		}
	}
	if (Global_97081 > 0)
	{
		if (((Global_97098 == Global_97081 || (Global_97081 * 10 / Global_97098) < 41) || Global_97098 > Global_97084) || Global_97098 == Global_97084)
		{
			if (!unk_0x94E72F17611BCD3C(Global_97358.f_8448.f_3856, 14))
			{
				if (Global_97098 == Global_97081)
				{
					unk_0x21F0CE088EF06776(joaat("num_rndevents_completed"), Global_97081, 0);
					unk_0xEDB9A377CD8B7F03(&(Global_97358.f_8448.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_97082 > 0)
	{
		if (Global_97099 == Global_97082)
		{
			fVar6 = 15f;
		}
	}
	if (Global_97083 > 0)
	{
		if (Global_97100 == Global_97083)
		{
			fVar7 = 5f;
		}
	}
	Global_97358.f_8448.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_97098 > Global_97084 || Global_97098 == Global_97084)
	{
		iVar9 = Global_97084;
	}
	else
	{
		iVar9 = Global_97098;
	}
	unk_0xC46BDC34976E9532(joaat("num_missions_completed"), Global_97094, 1);
	unk_0xC46BDC34976E9532(joaat("num_missions_available"), Global_97077, 1);
	unk_0xC46BDC34976E9532(joaat("num_minigames_completed"), Global_97095, 1);
	unk_0xC46BDC34976E9532(joaat("num_minigames_available"), Global_97078, 1);
	unk_0xC46BDC34976E9532(joaat("num_oddjobs_completed"), Global_97096, 1);
	unk_0xC46BDC34976E9532(joaat("num_oddjobs_available"), Global_97079, 1);
	unk_0xC46BDC34976E9532(joaat("num_rndpeople_completed"), Global_97097, 1);
	unk_0xC46BDC34976E9532(joaat("num_rndpeople_available"), Global_97080, 1);
	unk_0xC46BDC34976E9532(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0xC46BDC34976E9532(joaat("num_rndevents_available"), Global_97084, 1);
	unk_0xC46BDC34976E9532(joaat("num_misc_completed"), (Global_97100 + Global_97099), 1);
	unk_0xC46BDC34976E9532(joaat("num_misc_available"), (Global_97083 + Global_97082), 1);
	Global_97101 = (Global_97094 * 100 / Global_97077);
	Global_97103 = ((Global_97096 + Global_97095) * 100 / (Global_97079 + Global_97078));
	Global_97102 = ((Global_97097 + iVar9) * 100 / (Global_97080 + Global_97084));
	Global_97104 = ((Global_97099 + Global_97100) * 100 / (Global_97082 + Global_97083));
	unk_0xBCD0D59720958AE8(joaat("total_progress_made"), Global_97358.f_8448.f_3853, 1);
	unk_0xC46BDC34976E9532(joaat("percent_story_missions"), Global_97101, 1);
	unk_0xC46BDC34976E9532(joaat("percent_ambient_missions"), Global_97102, 1);
	unk_0xC46BDC34976E9532(joaat("percent_oddjobs"), Global_97103, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_97358.f_8448.f_3853))
	{
		func_83(13, unk_0xF34EE736CF047844(Global_97358.f_8448.f_3853));
	}
	if (!unk_0xE30896F28DC0733C())
	{
		if (!Global_68245)
		{
			if (func_82() == 2 == 0 && !unk_0x4B69FB3A5B09A1BA())
			{
				if (unk_0x7F7C75BD0BC3CD70())
				{
					Global_97092 = 0;
				}
				if (!Global_54750)
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
	iVar0 = unk_0xB52E39FB32049D7B(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x72E8D9153ACCB3F4(iParam0, iParam1);
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
		uVar2 = unk_0x7565CDA85EDEC9B0((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xE2BC0DB4A5812A4A((iParam0 - 0)) * 64);
		iVar0 = unk_0xD231E78603975F31(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x7565CDA85EDEC9B0((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xE2BC0DB4A5812A4A((iParam0 - 192)) * 64);
		iVar0 = unk_0xD231E78603975F31(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x7565CDA85EDEC9B0((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xE2BC0DB4A5812A4A((iParam0 - 513)) * 64);
		iVar0 = unk_0xD231E78603975F31(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x7565CDA85EDEC9B0((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xE2BC0DB4A5812A4A((iParam0 - 705)) * 64);
		iVar0 = unk_0xD231E78603975F31(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x61264BB982D4A58A((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xE2BC0DB4A5812A4A((iParam0 - 3111)) * 64);
		iVar0 = unk_0xD231E78603975F31(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x61264BB982D4A58A((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xE2BC0DB4A5812A4A((iParam0 - 2919)) * 64);
		iVar0 = unk_0xD231E78603975F31(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4895 && iParam0 < 5023)
	{
		uVar8 = unk_0x35D7A57BD397F35B((iParam0 - 4895), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4895) - unk_0xE2BC0DB4A5812A4A((iParam0 - 4895)) * 64);
		iVar0 = unk_0xD231E78603975F31(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 5023 && iParam0 < 5087)
	{
		uVar9 = unk_0x35D7A57BD397F35B((iParam0 - 5023), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 5023) - unk_0xE2BC0DB4A5812A4A((iParam0 - 5023)) * 64);
		iVar0 = unk_0xD231E78603975F31(uVar9, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_85()
{
	return Global_1312737;
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
		unk_0xEDB9A377CD8B7F03(&(Global_97358.f_23635.f_150[iVar1]), iVar0);
	}
}

void func_89(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_90(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_90(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x6B08EC9A88700FBB(sParam0, ""))
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
	while (iVar0 < Global_97358.f_23635.f_145)
	{
		if (unk_0x6B08EC9A88700FBB(&(Global_97358.f_23635[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_97358.f_23635.f_145 < 9)
	{
		StringCopy(&(Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_4), sParam1, 16);
		Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_8 = (unk_0x17103F66FBB44C3C() + iParam3);
		Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_9 = iParam5;
		Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_11 = iParam6;
		Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_12 = uParam2;
		Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_13 = iParam7;
		Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_14 = iParam8;
		Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_10 = ((unk_0x17103F66FBB44C3C() + iParam3) + iParam4);
		}
		else
		{
			Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_10 = -1;
		}
		Global_97358.f_23635.f_145++;
		func_91();
	}
}

void func_91()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_97358.f_23635.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_97358.f_23635.f_145)
	{
		if (unk_0x94E72F17611BCD3C(Global_97358.f_23635[iVar0 /*16*/].f_11, 0))
		{
			if (Global_97358.f_23635[iVar0 /*16*/].f_12 > Global_97358.f_23635.f_146[0])
			{
				Global_97358.f_23635.f_146[0] = Global_97358.f_23635[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x94E72F17611BCD3C(Global_97358.f_23635[iVar0 /*16*/].f_11, 1))
		{
			if (Global_97358.f_23635[iVar0 /*16*/].f_12 > Global_97358.f_23635.f_146[1])
			{
				Global_97358.f_23635.f_146[1] = Global_97358.f_23635[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x94E72F17611BCD3C(Global_97358.f_23635[iVar0 /*16*/].f_11, 2))
		{
			if (Global_97358.f_23635[iVar0 /*16*/].f_12 > Global_97358.f_23635.f_146[2])
			{
				Global_97358.f_23635.f_146[2] = Global_97358.f_23635[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_92()
{
	func_20();
	switch (Global_97358.f_1729.f_539.f_3213)
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
		return unk_0x94E72F17611BCD3C(Global_97358.f_23635.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_94(int iParam0, int iParam1)
{
	unk_0xEDB9A377CD8B7F03(&(Global_97358.f_28192.f_8[iParam0]), iParam1);
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
	
	StringCopy(&Var0, unk_0xC2E9075570B5D2B9(), 64);
	uVar16 = func_97(Var0);
	return uVar16;
}

int func_97(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x398F092142D37E17(&cParam0))
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
	if (unk_0x2E6E8D325977B3EC(uLocal_359))
	{
		unk_0x0451B5D93A4BDAA0(&uLocal_359);
	}
	switch (iLocal_368)
	{
		case 0:
			if (!unk_0x3E0478C40AB5B38D(iLocal_85))
			{
				unk_0x722E6B3A5162A6BB(iLocal_85, unk_0x9F92518438215DD0(), 300f, -1, 0, 0);
			}
			iVar0 = 0;
			while (iVar0 < Local_203.f_0)
			{
				if (unk_0x746960881FB19A89(Local_203[iVar0 /*18*/]))
				{
					if (unk_0xC7FF9739199F83C9(Local_203[iVar0 /*18*/]) && unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(Local_203[iVar0 /*18*/], 1), unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1)) > 900f)
					{
						if (unk_0x746960881FB19A89(Local_203[iVar0 /*18*/].f_2))
						{
							unk_0x83A49C880CB75451(&(Local_203[iVar0 /*18*/].f_2));
						}
						unk_0x7763EDCBED8A5840(&(Local_203[iVar0 /*18*/]));
					}
				}
				if (unk_0x2E6E8D325977B3EC(Local_203[iVar0 /*18*/].f_1))
				{
					unk_0x0451B5D93A4BDAA0(&(Local_203[iVar0 /*18*/].f_1));
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < Local_130.f_0)
			{
				if (unk_0x746960881FB19A89(Local_130[iVar0 /*18*/]))
				{
					if (unk_0xC7FF9739199F83C9(Local_130[iVar0 /*18*/]) && unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(Local_130[iVar0 /*18*/], 1), unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1)) > 900f)
					{
						unk_0xCD3EBB4EAE50293F(&(Local_130[iVar0 /*18*/]));
					}
				}
				if (unk_0x2E6E8D325977B3EC(Local_130[iVar0 /*18*/].f_1))
				{
					unk_0x0451B5D93A4BDAA0(&(Local_130[iVar0 /*18*/].f_1));
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
				if ((unk_0x746960881FB19A89(Local_203[iVar0 /*18*/]) && !unk_0x3E0478C40AB5B38D(Local_203[iVar0 /*18*/])) && !unk_0x0BA451447C3B1A8D(Local_203[iVar0 /*18*/]))
				{
					iVar1++;
					func_46(unk_0x9F92518438215DD0(), iVar0);
					if (unk_0xC7FF9739199F83C9(Local_203[iVar0 /*18*/]) && unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(Local_203[iVar0 /*18*/], 1), unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1)) > 2500f)
					{
						if (unk_0x746960881FB19A89(Local_203[iVar0 /*18*/].f_2))
						{
							unk_0x83A49C880CB75451(&(Local_203[iVar0 /*18*/].f_2));
						}
						unk_0x7763EDCBED8A5840(&(Local_203[iVar0 /*18*/]));
					}
				}
				iVar0++;
			}
			if (!iLocal_672)
			{
				if (unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), unk_0x77009B1C011405A9(func_64(), 1)) < 100f)
				{
					iVar2 = unk_0x073B65E051D2F03E(0, 3);
					if (func_19() == 1)
					{
						func_18(&Local_394, 6);
						func_18(&Local_394, 7);
						func_18(&Local_394, 8);
						switch (iVar2)
						{
							case 0:
								func_17(&Local_394, 6, func_64(), "PAP1ESCAPE", 0, 1);
								if (unk_0x746960881FB19A89(Local_394[6 /*10*/]) && !unk_0x3E0478C40AB5B38D(Local_394[6 /*10*/]))
								{
									if (func_5(&Local_394, cLocal_371, "REPAP_PAP1", 4, 0, 0, 0))
									{
										iLocal_672 = 1;
									}
								}
								break;
							
							case 1:
								func_17(&Local_394, 7, func_64(), "PAP2ESCAPE", 0, 1);
								if (unk_0x746960881FB19A89(Local_394[7 /*10*/]) && !unk_0x3E0478C40AB5B38D(Local_394[7 /*10*/]))
								{
									if (func_5(&Local_394, cLocal_371, "REPAP_PAP2", 4, 0, 0, 0))
									{
										iLocal_672 = 1;
									}
								}
								break;
							
							case 2:
								func_17(&Local_394, 8, func_64(), "PAP3ESCAPE", 0, 1);
								if (unk_0x746960881FB19A89(Local_394[8 /*10*/]) && !unk_0x3E0478C40AB5B38D(Local_394[8 /*10*/]))
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
						iVar2 = unk_0x073B65E051D2F03E(0, 3);
						switch (iVar2)
						{
							case 0:
								func_17(&Local_394, 6, func_64(), "PAP1ESCAPE", 0, 1);
								if (unk_0x746960881FB19A89(Local_394[iVar2 /*10*/]) && !unk_0x3E0478C40AB5B38D(Local_394[iVar2 /*10*/]))
								{
									if (func_5(&Local_394, cLocal_371, "REPAP_TAKE1T", 4, 0, 0, 0))
									{
										iLocal_672 = 1;
									}
								}
								break;
							
							case 1:
								func_17(&Local_394, 5, func_64(), "PAP2ESCAPE", 0, 1);
								if (unk_0x746960881FB19A89(Local_394[iVar2 /*10*/]) && !unk_0x3E0478C40AB5B38D(Local_394[iVar2 /*10*/]))
								{
									if (func_5(&Local_394, cLocal_371, "REPAP_TAKE2T", 4, 0, 0, 0))
									{
										iLocal_672 = 1;
									}
								}
								break;
							
							case 2:
								func_17(&Local_394, 5, func_64(), "PAP2ESCAPE", 0, 1);
								if (unk_0x746960881FB19A89(Local_394[iVar2 /*10*/]) && !unk_0x3E0478C40AB5B38D(Local_394[iVar2 /*10*/]))
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
						iVar2 = unk_0x073B65E051D2F03E(0, 3);
						switch (iVar2)
						{
							case 0:
								func_17(&Local_394, 6, func_64(), "PAP1ESCAPE", 0, 1);
								if (unk_0x746960881FB19A89(Local_394[iVar2 /*10*/]) && !unk_0x3E0478C40AB5B38D(Local_394[iVar2 /*10*/]))
								{
									if (func_5(&Local_394, cLocal_371, "REPAP_TAKE1M", 4, 0, 0, 0))
									{
										iLocal_672 = 1;
									}
								}
								break;
							
							case 1:
								func_17(&Local_394, 5, func_64(), "PAP2ESCAPE", 0, 1);
								if (unk_0x746960881FB19A89(Local_394[iVar2 /*10*/]) && !unk_0x3E0478C40AB5B38D(Local_394[iVar2 /*10*/]))
								{
									if (func_5(&Local_394, cLocal_371, "REPAP_TAKE2M", 4, 0, 0, 0))
									{
										iLocal_672 = 1;
									}
								}
								break;
							
							case 2:
								func_17(&Local_394, 5, func_64(), "PAP2ESCAPE", 0, 1);
								if (unk_0x746960881FB19A89(Local_394[iVar2 /*10*/]) && !unk_0x3E0478C40AB5B38D(Local_394[iVar2 /*10*/]))
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
			if (unk_0x746960881FB19A89(Local_203[iVar0 /*18*/]) && !unk_0x3E0478C40AB5B38D(Local_203[iVar0 /*18*/]))
			{
				unk_0x32D18ECD9E6F9BE2(Local_203[iVar0 /*18*/]);
				Local_203[iVar0 /*18*/].f_16 = 2;
			}
			iVar0++;
		}
		iLocal_671 = 1;
	}
	iVar0 = 0;
	while (iVar0 < Local_203.f_0)
	{
		if (unk_0x2E6E8D325977B3EC(Local_203[iVar0 /*18*/].f_1))
		{
			unk_0x0451B5D93A4BDAA0(&(Local_203[iVar0 /*18*/].f_1));
		}
		if (unk_0x746960881FB19A89(Local_203[iVar0 /*18*/]))
		{
			if (!unk_0x3E0478C40AB5B38D(Local_203[iVar0 /*18*/]))
			{
				iVar1++;
				if (!unk_0x3E0478C40AB5B38D(iLocal_85))
				{
					if (unk_0x827151D7B70CB853(Local_203[iVar0 /*18*/], 0))
					{
						unk_0xF811299AF81DB581(Local_203[iVar0 /*18*/], 0, 0);
					}
					else
					{
						func_46(iLocal_85, iVar0);
					}
				}
				else if (unk_0xE962BD784DD0E442(Local_203[iVar0 /*18*/], -1146898486) != 1)
				{
					unk_0x6A678E26A585E3C6(Local_203[iVar0 /*18*/], 1193033728, 0);
				}
			}
			if ((unk_0xC7FF9739199F83C9(Local_203[iVar0 /*18*/]) && unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(Local_203[iVar0 /*18*/], 1), unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1)) > 400f) && unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(Local_203[iVar0 /*18*/], 1), unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1)) > 400f)
			{
				unk_0x7763EDCBED8A5840(&(Local_203[iVar0 /*18*/]));
				if (unk_0x746960881FB19A89(Local_203[iVar0 /*18*/].f_2))
				{
					unk_0x83A49C880CB75451(&(Local_203[iVar0 /*18*/].f_2));
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_130.f_0)
	{
		if (unk_0x746960881FB19A89(Local_130[iVar0 /*18*/]))
		{
			if ((unk_0xC7FF9739199F83C9(Local_130[iVar0 /*18*/]) && unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(Local_130[iVar0 /*18*/], 1), unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1)) > 2500f) && func_52(Local_130[iVar0 /*18*/], 0, 0, 0))
			{
				unk_0x9187463EB4918A4D(&(Local_130[iVar0 /*18*/]));
			}
		}
		if (unk_0x2E6E8D325977B3EC(Local_130[iVar0 /*18*/].f_1))
		{
			unk_0x0451B5D93A4BDAA0(&(Local_130[iVar0 /*18*/].f_1));
		}
		iVar0++;
	}
	if (unk_0x746960881FB19A89(iLocal_85))
	{
		if (unk_0xC7FF9739199F83C9(iLocal_85) && unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), Local_62) > 2500f)
		{
			unk_0x995B3705D02B0401(&iLocal_85);
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
		if (unk_0x746960881FB19A89(Local_203[iVar0 /*18*/]))
		{
			if (!unk_0x3E0478C40AB5B38D(Local_203[iVar0 /*18*/]))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	switch (iLocal_368)
	{
		case 0:
			if (unk_0x2E6E8D325977B3EC(uLocal_359))
			{
				unk_0x0451B5D93A4BDAA0(&uLocal_359);
			}
			if (unk_0x2E6E8D325977B3EC(uLocal_360))
			{
				unk_0x0451B5D93A4BDAA0(&uLocal_360);
			}
			if (!unk_0x3E0478C40AB5B38D(iLocal_85))
			{
				unk_0x32D18ECD9E6F9BE2(iLocal_85);
				unk_0x0365EE015603E149(iLocal_85, 3f);
			}
			func_101();
			if (unk_0x2A488C176D52CCA5(Local_59, Local_62) < 30f)
			{
				if (func_5(&Local_394, cLocal_371, sParam0, 4, 0, 0, 0))
				{
					iVar0 = 0;
					while (iVar0 < Local_203.f_0)
					{
						if (unk_0x746960881FB19A89(Local_203[iVar0 /*18*/]))
						{
							if (!unk_0x3E0478C40AB5B38D(Local_203[iVar0 /*18*/]))
							{
								unk_0x32D18ECD9E6F9BE2(Local_203[iVar0 /*18*/]);
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
					if (unk_0x746960881FB19A89(Local_203[iVar0 /*18*/]))
					{
						if (!unk_0x3E0478C40AB5B38D(Local_203[iVar0 /*18*/]))
						{
							unk_0x32D18ECD9E6F9BE2(Local_203[iVar0 /*18*/]);
						}
					}
					iVar0++;
				}
				iLocal_368++;
			}
			break;
		
		case 1:
			if (((unk_0xFC38B241541883D3(iLocal_90, 0) && unk_0x44E080690DA76A2A(iLocal_85, iLocal_90, 0)) && !bLocal_367) && unk_0x4A33023BC86AAA7F(iLocal_90, -1))
			{
				if (unk_0x2A488C176D52CCA5(Local_62, Local_52) < 100f)
				{
					unk_0xF87DA7F5BA8C7D0F(&uVar2);
					unk_0xE3B52F7614505C04(0, iLocal_90);
					unk_0xC96425701AF2C9C4(0, iLocal_90, Local_52, 20f, 0, joaat("serrano"), 786599, 10f, 10f);
					unk_0xCCB857BE6ED3A633(0, iLocal_90, Local_52, 288.7089f, 1, 50f, 0);
					unk_0x2B0CA599BAD90FB6(0, iLocal_90, unk_0x77009B1C011405A9(iLocal_90, 1), 5, 10f, 262144, 2f, 2f, 1);
					unk_0xDC6D5C817B48C45A(0, iLocal_90, 0);
					unk_0x27DF0A5AA993D7B6(0, Local_55, 1f, -1, 0.25f, 512, fLocal_58);
					unk_0x18CA21B07F636243(0, "WORLD_HUMAN_SMOKING", 0, 1);
					unk_0x3179CCC77CBAB31F(uVar2);
					unk_0xC7EBE3C9AC83FAAA(iLocal_85, uVar2);
					unk_0xCD02E3C29B8253A6(&uVar2);
				}
				else
				{
					unk_0xF87DA7F5BA8C7D0F(&uVar3);
					unk_0xE3B52F7614505C04(0, iLocal_90);
					unk_0xAFFE01EF7078CAD9(0, iLocal_90, 15f, 786468);
					unk_0x3179CCC77CBAB31F(uVar3);
					unk_0xC7EBE3C9AC83FAAA(iLocal_85, uVar3);
					unk_0xCD02E3C29B8253A6(&uVar3);
				}
				iLocal_368 = 1000;
			}
			else
			{
				if (unk_0x827151D7B70CB853(iLocal_85, 0))
				{
					unk_0xF811299AF81DB581(iLocal_85, 0, 0);
				}
				iLocal_368++;
			}
			break;
		
		case 2:
			if (iVar1 > 0)
			{
				unk_0x722E6B3A5162A6BB(iLocal_85, unk_0x9F92518438215DD0(), 3000f, -1, 1, 0);
				iLocal_368 = 1000;
			}
			else
			{
				if (unk_0x2A488C176D52CCA5(Local_62, Local_52) < 100f)
				{
					unk_0xF87DA7F5BA8C7D0F(&uVar4);
					unk_0x27DF0A5AA993D7B6(0, Local_55, 1f, -1, 0.25f, 512, fLocal_58);
					unk_0x18CA21B07F636243(0, "WORLD_HUMAN_SMOKING", 0, 1);
					unk_0x3179CCC77CBAB31F(uVar4);
					unk_0xC7EBE3C9AC83FAAA(iLocal_85, uVar4);
					unk_0xCD02E3C29B8253A6(&uVar4);
				}
				else
				{
					unk_0x6A678E26A585E3C6(iLocal_85, 1193033728, 0);
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
	unk_0xAD3949CD5FADCA61();
	Global_16703 = 0;
	if (unk_0xDFF00E8709AA7095())
	{
		unk_0xC318E8D9E0AA1394(0);
		Global_15692 = 6;
	}
}

void func_103()
{
	func_101();
	if (!unk_0x3E0478C40AB5B38D(iLocal_85) && unk_0xB7A628320EFF8E47(Local_59, Local_62) < 900f)
	{
		unk_0x32D18ECD9E6F9BE2(iLocal_85);
		if (func_5(&Local_394, cLocal_371, "REPAP_CRZY", 4, 0, 0, 0))
		{
			func_183();
			func_171(10);
		}
		unk_0xA50AD6983D49A772(iLocal_85, -2065892691);
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
			if (!unk_0x3E0478C40AB5B38D(iLocal_85))
			{
				if (!unk_0x2E6E8D325977B3EC(uLocal_359))
				{
					uLocal_359 = func_173(iLocal_85, 0, 145);
				}
				if (unk_0x2E6E8D325977B3EC(uLocal_362))
				{
					unk_0x0451B5D93A4BDAA0(&uLocal_362);
				}
				if (unk_0x2E6E8D325977B3EC(uLocal_361))
				{
					unk_0x0451B5D93A4BDAA0(&uLocal_361);
				}
				unk_0x32D18ECD9E6F9BE2(iLocal_85);
				unk_0xF87DA7F5BA8C7D0F(&uVar0);
				unk_0xDC6D5C817B48C45A(0, iLocal_90, 0);
				unk_0x27DF0A5AA993D7B6(0, Local_55, 1f, 30000, 0.25f, 512, fLocal_58);
				unk_0x18CA21B07F636243(0, "WORLD_HUMAN_SMOKING", 0, 1);
				unk_0x3179CCC77CBAB31F(uVar0);
				unk_0xC7EBE3C9AC83FAAA(iLocal_85, uVar0);
				unk_0xCD02E3C29B8253A6(&uVar0);
				if (unk_0x6AAACE62C58880BC(iLocal_85))
				{
					unk_0x1FA92C26AB9467D3(iLocal_85);
				}
				func_101();
				iLocal_368++;
			}
			break;
		
		case 1:
			if (!func_72() && !unk_0x3E0478C40AB5B38D(iLocal_85))
			{
				if (unk_0x41EEB10CCC2497A8(iLocal_85, Local_55, 3f, 3f, 3f, 0, 1, 0) && unk_0x41EEB10CCC2497A8(unk_0x9F92518438215DD0(), Local_55, 5f, 5f, 5f, 0, 1, 0))
				{
					iLocal_368++;
				}
			}
			break;
		
		case 2:
			if (!unk_0x3E0478C40AB5B38D(iLocal_85))
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
			if (!func_72() && !unk_0x3E0478C40AB5B38D(iLocal_85))
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
	
	if (Global_97358.f_29774[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_97358.f_29774[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_107(Global_97358.f_29774[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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
		unk_0x39496A55977AA312(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0xC46BDC34976E9532(iVar1, iVar0, 1);
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
					switch (unk_0x63D5B7FC98AAD9B7())
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
	iVar5 = (Global_51925[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_51925[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_51925[iVar2] = 2147483647;
				}
				else
				{
					Global_51925[iVar2] = (Global_51925[iVar2] + iParam3);
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
				if ((Global_51925[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_51925[iVar2];
			Global_51925[iVar2] = (Global_51925[iVar2] - iParam3);
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
		Global_97358.f_23789.f_233[iVar2 /*69*/].f_2[Global_97358.f_23789.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_97358.f_23789.f_233[iVar2 /*69*/].f_2[Global_97358.f_23789.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_97358.f_23789.f_233[iVar2 /*69*/].f_2[Global_97358.f_23789.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_97358.f_23789.f_233[iVar2 /*69*/]++;
		Global_97358.f_23789.f_233[iVar2 /*69*/].f_1++;
		if (Global_97358.f_23789.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_97358.f_23789.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_109(iParam0);
	if (Global_34913 == 15)
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
			Global_97358.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_97358.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_97358.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_97358.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_97358.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_97358.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_51933[iVar0 /*3*/][0] = Global_97358.f_23789[iVar0];
		Global_51933.f_31[iVar0 /*3*/][0] = Global_97358.f_23789.f_11[iVar0];
		Global_51933.f_62[iVar0 /*3*/][0] = Global_97358.f_23789.f_22[iVar0];
		Global_51933.f_93[iVar0 /*3*/][0] = Global_97358.f_23789.f_33[iVar0];
		Global_51933.f_124[iVar0 /*3*/][0] = Global_97358.f_23789.f_44[iVar0];
		Global_51933.f_155[iVar0 /*3*/][0] = Global_97358.f_23789.f_55[iVar0];
		Global_51933.f_186[iVar0 /*3*/][0] = Global_97358.f_23789.f_66[iVar0];
		Global_51933.f_217[iVar0 /*3*/][0] = Global_97358.f_23789.f_77[iVar0];
		Global_51933.f_248[iVar0 /*3*/][0] = Global_97358.f_23789.f_88[iVar0];
		if (!bParam0)
		{
			Global_51933[iVar0 /*3*/][1] = Global_97358.f_23789[iVar0];
			Global_51933.f_31[iVar0 /*3*/][1] = Global_97358.f_23789.f_11[iVar0];
			Global_51933.f_62[iVar0 /*3*/][1] = Global_97358.f_23789.f_22[iVar0];
			Global_51933.f_93[iVar0 /*3*/][1] = Global_97358.f_23789.f_33[iVar0];
			Global_51933.f_124[iVar0 /*3*/][1] = Global_97358.f_23789.f_44[iVar0];
			Global_51933.f_155[iVar0 /*3*/][1] = Global_97358.f_23789.f_55[iVar0];
			Global_51933.f_186[iVar0 /*3*/][1] = Global_97358.f_23789.f_66[iVar0];
			Global_51933.f_217[iVar0 /*3*/][1] = Global_97358.f_23789.f_77[iVar0];
			Global_51933.f_248[iVar0 /*3*/][1] = Global_97358.f_23789.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_109(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_51925[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0xC46BDC34976E9532(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0xC46BDC34976E9532(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0xC46BDC34976E9532(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_110(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0x4B69FB3A5B09A1BA())
	{
		if (unk_0x94E72F17611BCD3C(Global_97358.f_23789.f_471, iParam0))
		{
			bVar0 = true;
			unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_23789.f_471), iParam0);
		}
	}
	else if (unk_0x94E72F17611BCD3C(Global_97358.f_23789.f_471, iParam0) || unk_0x94E72F17611BCD3C(Global_2097152[func_112() /*8064*/].f_5756.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_23789.f_471), iParam0);
		unk_0xF76EE56D3E7DAF1B(&(Global_2097152[func_112() /*8064*/].f_5756.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x3BE5C2319988C0DB("COUP_RED");
		unk_0xDB4BC767CEF09274(func_111(iParam0));
		unk_0x47BD44C357490C29(&cVar1, &cVar1, 1, 0, "", 0);
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
	if (!unk_0x4B69FB3A5B09A1BA())
	{
		return unk_0x94E72F17611BCD3C(Global_97358.f_23789.f_471, iParam0);
	}
	return unk_0x94E72F17611BCD3C(Global_2097152[func_112() /*8064*/].f_5756.f_10, iParam0);
}

int func_115(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x43C8E3C45AFA597C(27))
	{
		return 0;
	}
	if (unk_0x39496A55977AA312(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x39496A55977AA312(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x39496A55977AA312(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x39496A55977AA312(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0xC46BDC34976E9532(joaat("num_cash_spent"), iVar1, 1);
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
	if (unk_0x43C8E3C45AFA597C(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_24690 != 0 && !Global_68245)
	{
		return 0;
	}
	if (func_127(&Global_2545750))
	{
		if (func_125(&Global_2545750, iParam0))
		{
			return 0;
		}
		if (func_118(&Global_2545750, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x640DBCBD28EEC61A(iParam0))
		{
			return 0;
		}
		if (unk_0x43C8E3C45AFA597C(iParam0))
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
	
	if (unk_0x43C8E3C45AFA597C(iParam1))
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
	
	if (unk_0x43C8E3C45AFA597C(iParam1))
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
	uParam0->f_1 = (func_123(unk_0x94E72F17611BCD3C(*uParam0, 4)) - fParam1);
	unk_0xEDB9A377CD8B7F03(uParam0, 1);
	unk_0xF76EE56D3E7DAF1B(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_123(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		return (unk_0xBBDA792448DB5A89(unk_0x17103F66FBB44C3C()) / 1000f);
	}
	if (unk_0x4B69FB3A5B09A1BA())
	{
		iVar0 = unk_0x6A8628B6E9F055B3();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0x17103F66FBB44C3C()) / 1000f);
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
	
	unk_0x39496A55977AA312(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xC46BDC34976E9532(iParam0, iVar0, 1);
}

void func_129(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_50493[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x4B69FB3A5B09A1BA())
	{
		return;
	}
	if (Global_50493[iParam0 /*7*/])
	{
		unk_0x39496A55977AA312(Global_50493[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0xC46BDC34976E9532(Global_50493[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_130()
{
	int iVar0;
	
	if (unk_0x9183AA5076D2BF07())
	{
		unk_0x39496A55977AA312(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_51925[0] == iVar0)
		{
			Global_51925[0] = iVar0;
		}
		unk_0x39496A55977AA312(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_51925[1] == iVar0)
		{
			Global_51925[1] = iVar0;
		}
		unk_0x39496A55977AA312(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_51925[2] == iVar0)
		{
			Global_51925[2] = iVar0;
		}
	}
}

void func_131(bool bParam0)
{
	if (!unk_0x3E0478C40AB5B38D(iLocal_85))
	{
		if (iLocal_620 > 1)
		{
			if (!unk_0x53C8F92CF78772BF(iLocal_85, unk_0x9F92518438215DD0(), 60f))
			{
				iLocal_620 = 0;
				iLocal_621 = 0;
			}
		}
		switch (iLocal_620)
		{
			case 0:
				unk_0x32D18ECD9E6F9BE2(iLocal_85);
				unk_0x402A96371F34E6D8(iLocal_85, unk_0x9F92518438215DD0(), -1, 16, 2);
				unk_0xF87DA7F5BA8C7D0F(&uLocal_619);
				unk_0x23F243BF5B07DA90(0, unk_0x9F92518438215DD0(), 0);
				unk_0x402A96371F34E6D8(0, unk_0x9F92518438215DD0(), -1, 16, 2);
				unk_0x3179CCC77CBAB31F(uLocal_619);
				unk_0xC7EBE3C9AC83FAAA(iLocal_85, uLocal_619);
				unk_0xCD02E3C29B8253A6(&uLocal_619);
				iLocal_620++;
				break;
			
			case 1:
				if (unk_0xE962BD784DD0E442(iLocal_85, 242628503) != 1)
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
							if (!unk_0x3C17D9ED0E5F3FCA(iLocal_85, "random@paparazzi@wait", "wait_a", 3))
							{
								unk_0x7CF15DD8B3815A0D(iLocal_85, "random@paparazzi@wait", "wait_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
							}
							else if (unk_0xD17241758B91AAED(iLocal_85, "random@paparazzi@wait", "wait_a") > 0.95f)
							{
								unk_0x7CF15DD8B3815A0D(iLocal_85, "random@paparazzi@wait", "wait_b", 4f, -4f, -1, 0, 0, 0, 0, 0);
								iLocal_621++;
							}
							break;
						
						case 1:
							if (!unk_0x3C17D9ED0E5F3FCA(iLocal_85, "random@paparazzi@wait", "wait_b", 3))
							{
								unk_0x7CF15DD8B3815A0D(iLocal_85, "random@paparazzi@wait", "wait_b", 4f, -4f, -1, 0, 0, 0, 0, 0);
							}
							else if (unk_0xD17241758B91AAED(iLocal_85, "random@paparazzi@wait", "wait_b") > 0.95f)
							{
								unk_0x7CF15DD8B3815A0D(iLocal_85, "random@paparazzi@wait", "wait_c", 4f, -4f, -1, 0, 0, 0, 0, 0);
								iLocal_621++;
							}
							break;
						
						case 2:
							if (!unk_0x3C17D9ED0E5F3FCA(iLocal_85, "random@paparazzi@wait", "wait_c", 3))
							{
								unk_0x7CF15DD8B3815A0D(iLocal_85, "random@paparazzi@wait", "wait_c", 4f, -4f, -1, 0, 0, 0, 0, 0);
							}
							else if (unk_0xD17241758B91AAED(iLocal_85, "random@paparazzi@wait", "wait_c") > 0.95f)
							{
								unk_0x7CF15DD8B3815A0D(iLocal_85, "random@paparazzi@wait", "wait_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
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
	if (unk_0x2E6E8D325977B3EC(uLocal_363))
	{
		unk_0x0451B5D93A4BDAA0(&uLocal_363);
	}
}

void func_133()
{
	var uVar0;
	
	if (unk_0xFC38B241541883D3(iLocal_90, 0))
	{
		switch (iLocal_368)
		{
			case 0:
				if (!unk_0x3E0478C40AB5B38D(iLocal_85) && unk_0xFC38B241541883D3(iLocal_90, 0))
				{
					func_132();
					func_137(1, 1, 0, 0);
					if (unk_0x2E6E8D325977B3EC(uLocal_361))
					{
						unk_0x0451B5D93A4BDAA0(&uLocal_361);
					}
					if (unk_0x2E6E8D325977B3EC(uLocal_359))
					{
						unk_0x0451B5D93A4BDAA0(&uLocal_359);
					}
					if (unk_0x2E6E8D325977B3EC(uLocal_360))
					{
						unk_0x0451B5D93A4BDAA0(&uLocal_360);
					}
					if (unk_0x6AAACE62C58880BC(iLocal_85))
					{
						unk_0x1FA92C26AB9467D3(iLocal_85);
					}
					func_135();
					if (!unk_0x3E0478C40AB5B38D(iLocal_85))
					{
						unk_0x284B09A617F0967C(iLocal_85, unk_0x20CBCBD58A2C73B4(iLocal_90, -10f, 5f, 0f), -1, 16, 4);
					}
					unk_0x284B09A617F0967C(unk_0x9F92518438215DD0(), unk_0x20CBCBD58A2C73B4(iLocal_90, 10f, 5f, 0f), 15000, 16, 4);
					unk_0xC70D4A06E38B2711(unk_0xCFC72E446B0B3AD7(), 0, 1280);
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
					if (!unk_0x3E0478C40AB5B38D(iLocal_85))
					{
						unk_0x284B09A617F0967C(iLocal_85, unk_0x20CBCBD58A2C73B4(iLocal_90, -10f, 5f, 0f), -1, 16, 4);
						unk_0xF0875A1DC909B469(iLocal_85, 0, 0);
					}
					unk_0x284B09A617F0967C(unk_0x9F92518438215DD0(), unk_0x20CBCBD58A2C73B4(iLocal_90, 10f, 5f, 0f), 15000, 16, 4);
					iLocal_368++;
				}
				break;
			
			case 1:
				if (!func_72() && !unk_0x3E0478C40AB5B38D(iLocal_85))
				{
					unk_0xF87DA7F5BA8C7D0F(&uVar0);
					unk_0xDC6D5C817B48C45A(0, iLocal_90, 0);
					unk_0x27DF0A5AA993D7B6(0, Local_55, 1f, 30000, 0.25f, 512, fLocal_58);
					unk_0x18CA21B07F636243(0, "WORLD_HUMAN_SMOKING", 0, 1);
					unk_0x3179CCC77CBAB31F(uVar0);
					unk_0xC7EBE3C9AC83FAAA(iLocal_85, uVar0);
					unk_0xCD02E3C29B8253A6(&uVar0);
					iLocal_368++;
					unk_0xC1B1E9A034A63A62(0);
				}
				break;
			
			case 2:
				if (!unk_0x3E0478C40AB5B38D(iLocal_85) && unk_0xFC38B241541883D3(iLocal_90, 0))
				{
					if (!unk_0x44E080690DA76A2A(iLocal_85, iLocal_90, 0))
					{
						unk_0xC1B1E9A034A63A62(0);
						if (bLocal_367)
						{
							unk_0xC70D4A06E38B2711(unk_0xCFC72E446B0B3AD7(), 1, 0);
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
				if ((!unk_0x3E0478C40AB5B38D(iLocal_85) && unk_0xFC38B241541883D3(iLocal_90, 0)) && unk_0x83666F9FB8FEBD4B() > 1000)
				{
					unk_0xDC6D5C817B48C45A(unk_0x9F92518438215DD0(), iLocal_90, 0);
					unk_0x402A96371F34E6D8(unk_0x9F92518438215DD0(), iLocal_90, 10000, 0, 3);
					iLocal_368++;
				}
				break;
			
			case 4:
				if (unk_0xFC38B241541883D3(iLocal_90, 0) && !unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), iLocal_90, 0))
				{
					unk_0xC70D4A06E38B2711(unk_0xCFC72E446B0B3AD7(), 1, 0);
					func_137(0, 1, 0, 0);
					unk_0x993B4D0D3CD44124(iLocal_90, 2);
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
	if (unk_0xDFF00E8709AA7095())
	{
		unk_0xAD3949CD5FADCA61();
		Global_16703 = 0;
		unk_0xC318E8D9E0AA1394(1);
		Global_15692 = 6;
		return;
	}
}

void func_137(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0xEDCFF0FC6297F270(unk_0xCFC72E446B0B3AD7());
		unk_0x1717FA72303864E3(unk_0xCFC72E446B0B3AD7(), 1);
		unk_0x81953AC360BD0D5D(unk_0xCFC72E446B0B3AD7(), 1);
		func_143(1);
		unk_0x2C65B46CAD8BDA04();
		unk_0x2D600F28499293DD();
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x71F866C9C77F9B9F())
			{
				unk_0xC318E8D9E0AA1394(0);
			}
			if (!func_9())
			{
				Global_14393.f_1 = 3;
			}
			Global_15692 = 5;
		}
		func_142(1, iParam3, iParam2);
		Global_54756 = 1;
		Global_67061 = 1;
		Global_68243 = 1;
	}
	else
	{
		func_143(0);
		unk_0x1B4F451D66F090A7();
		Global_54756 = 0;
		if (bParam1)
		{
			unk_0x431DA04416622A80();
		}
		unk_0x1717FA72303864E3(unk_0xCFC72E446B0B3AD7(), 0);
		unk_0x81953AC360BD0D5D(unk_0xCFC72E446B0B3AD7(), 0);
		func_142(0, iParam3, iParam2);
		if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()) && !func_138(unk_0xCFC72E446B0B3AD7()))
		{
			unk_0xC204B4E5503A54EA(unk_0x9F92518438215DD0(), 0);
		}
		Global_68243 = 0;
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
		if (iParam0 == unk_0xCFC72E446B0B3AD7())
		{
			return 1;
		}
	}
	if (unk_0x94E72F17611BCD3C(Global_2414035[iParam0 /*254*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_139()
{
	return unk_0x94E72F17611BCD3C(Global_2359301, 3);
}

bool func_140(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xCFC72E446B0B3AD7())
	{
		bVar0 = func_141(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1582869[iParam0 /*332*/].f_188 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xCB29E1C3D086FBAE(iParam0))
		{
			bVar0 = unk_0x59A4BF97B76AD953(iParam0) == 8;
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
	if (Global_1315877[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312731[iVar1];
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
	if (unk_0x708CE249B4F97BF8())
	{
		if (unk_0xF8386AB49CD1A1B8() != iParam0 && uParam2)
		{
			unk_0xC9B8731F7E02AD92(iParam0, uParam1, 1);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_143(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xEDB9A377CD8B7F03(&Global_2263, 13);
	}
	else
	{
		unk_0xF76EE56D3E7DAF1B(&Global_2263, 13);
	}
}

void func_144()
{
	if (Global_3 || bLocal_69)
	{
		unk_0x147A0C994A99D356(0.7f);
	}
	if (bLocal_367 && !unk_0x3E0478C40AB5B38D(iLocal_85))
	{
		if (!func_164(iLocal_85))
		{
			if (!unk_0x2E6E8D325977B3EC(uLocal_359))
			{
				uLocal_359 = func_173(iLocal_85, 0, 145);
			}
		}
		else
		{
			if (func_65())
			{
				if (!unk_0x2E6E8D325977B3EC(uLocal_361))
				{
					uLocal_361 = func_50(Local_52, 1);
				}
				if (unk_0x2E6E8D325977B3EC(uLocal_362))
				{
					unk_0x0451B5D93A4BDAA0(&uLocal_362);
				}
			}
			else
			{
				if (!unk_0x2E6E8D325977B3EC(uLocal_362))
				{
					uLocal_362 = func_50(Local_55, 1);
				}
				if (unk_0x2E6E8D325977B3EC(uLocal_361))
				{
					unk_0x0451B5D93A4BDAA0(&uLocal_361);
				}
			}
			if (unk_0x2E6E8D325977B3EC(uLocal_359))
			{
				unk_0x0451B5D93A4BDAA0(&uLocal_359);
			}
		}
		if (!unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), iLocal_90, 0))
		{
			if ((unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0) && unk_0xFC38B241541883D3(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0), 0)) && func_163(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0)))
			{
				iLocal_90 = 0;
				iLocal_90 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
				unk_0x336AE92FD68DEF98(iLocal_90, 1, 1);
				unk_0x993B4D0D3CD44124(iLocal_90, 1);
				unk_0x003E17A8BE5EA5B6(iLocal_90, 0, 0);
			}
		}
		if (unk_0x2E6E8D325977B3EC(uLocal_362) && !unk_0x827151D7B70CB853(iLocal_85, 0))
		{
			if (unk_0x41EEB10CCC2497A8(unk_0x9F92518438215DD0(), Local_55, 15f, 15f, 15f, 0, 1, 0) || unk_0x41EEB10CCC2497A8(unk_0x9F92518438215DD0(), 231.7982f, 672.7683f, 189.2f, 1f, 1f, 2.5f, 1, 1, 0))
			{
				func_171(4);
			}
		}
		else if (iLocal_368 != 100)
		{
			if (func_65() && func_162(1, 1, 1))
			{
				if (unk_0xFE0FA79BC49EBB07(iLocal_90, 225.5938f, 681.1489f, 188.4262f, 232.02f, 681.3113f, 191.9843f, 8.75f, 0, 1, 0) || unk_0x41EEB10CCC2497A8(unk_0x9F92518438215DD0(), 226.6788f, 681.0637f, 189f, 1f, 1f, 2.5f, 1, 1, 0))
				{
					unk_0xC1B1E9A034A63A62(0);
					iLocal_368 = 100;
				}
			}
			else if (!unk_0x44E080690DA76A2A(iLocal_85, iLocal_90, 0))
			{
				if (unk_0xE962BD784DD0E442(iLocal_85, -1794415470) != 1)
				{
					unk_0x4073360CA020BB84(iLocal_85, iLocal_90, -1, func_161(iLocal_90), 2f, 8388608, 0);
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
				if (unk_0xFE0FA79BC49EBB07(iLocal_90, 225.5938f, 681.1489f, 188.4262f, 232.02f, 681.3113f, 191.9843f, 8.75f, 0, 1, 0) || unk_0x41EEB10CCC2497A8(unk_0x9F92518438215DD0(), 226.6788f, 681.0637f, 189f, 1f, 1f, 2.5f, 1, 1, 0))
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
				if (unk_0x3C17D9ED0E5F3FCA(iLocal_85, "VEH@STD@PS@IDLE_PANIC", "sit", 3) || unk_0x3C17D9ED0E5F3FCA(iLocal_85, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 3))
				{
					unk_0x32D18ECD9E6F9BE2(iLocal_85);
				}
				if (func_5(&Local_394, cLocal_371, "REPAP_HM", 4, 0, 0, 0))
				{
					unk_0xB1E35D138037D248(0.5f);
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
	if (unk_0xD092BBE40A1C72AA(unk_0xCFC72E446B0B3AD7()) > 0)
	{
		func_70();
	}
	if (func_19() == 2)
	{
		if ((func_145() && !func_157()) && iLocal_46 != 8)
		{
			if (!unk_0x3E0478C40AB5B38D(iLocal_85))
			{
				if (unk_0x41EEB10CCC2497A8(iLocal_85, -1034.6f, 4918.6f, 205.9f, 5f, 5f, 5f, 0, 1, 0))
				{
					if (!unk_0x91690C37B3C4E5FA(iLocal_85, unk_0x0CD9BC7F312ED395(unk_0xCFC72E446B0B3AD7())))
					{
						unk_0x78267FAB4E1661CE(iLocal_85, unk_0x0CD9BC7F312ED395(unk_0xCFC72E446B0B3AD7()));
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
	unk_0x6A6A41C66448AD09(0, 71, 1);
	unk_0x6A6A41C66448AD09(0, 72, 1);
	unk_0x6A6A41C66448AD09(0, 76, 1);
	unk_0x6A6A41C66448AD09(0, 73, 1);
	unk_0x6A6A41C66448AD09(0, 59, 1);
	unk_0x6A6A41C66448AD09(0, 60, 1);
	if (bParam5)
	{
		unk_0x6A6A41C66448AD09(0, 75, 1);
	}
	unk_0x6A6A41C66448AD09(0, 80, 1);
	unk_0x6A6A41C66448AD09(0, 69, 1);
	unk_0x6A6A41C66448AD09(0, 70, 1);
	unk_0x6A6A41C66448AD09(0, 68, 1);
	unk_0x6A6A41C66448AD09(0, 74, 1);
	unk_0x6A6A41C66448AD09(0, 86, 1);
	unk_0x6A6A41C66448AD09(0, 81, 1);
	unk_0x6A6A41C66448AD09(0, 82, 1);
	unk_0x6A6A41C66448AD09(0, 138, 1);
	unk_0x6A6A41C66448AD09(0, 136, 1);
	unk_0x6A6A41C66448AD09(0, 114, 1);
	unk_0x6A6A41C66448AD09(0, 107, 1);
	unk_0x6A6A41C66448AD09(0, 110, 1);
	unk_0x6A6A41C66448AD09(0, 89, 1);
	unk_0x6A6A41C66448AD09(0, 89, 1);
	unk_0x6A6A41C66448AD09(0, 87, 1);
	unk_0x6A6A41C66448AD09(0, 88, 1);
	unk_0x6A6A41C66448AD09(0, 113, 1);
	unk_0x6A6A41C66448AD09(0, 115, 1);
	unk_0x6A6A41C66448AD09(0, 116, 1);
	unk_0x6A6A41C66448AD09(0, 117, 1);
	unk_0x6A6A41C66448AD09(0, 118, 1);
	unk_0x6A6A41C66448AD09(0, 119, 1);
	unk_0x6A6A41C66448AD09(0, 131, 1);
	unk_0x6A6A41C66448AD09(0, 132, 1);
	unk_0x6A6A41C66448AD09(0, 123, 1);
	unk_0x6A6A41C66448AD09(0, 126, 1);
	unk_0x6A6A41C66448AD09(0, 129, 1);
	unk_0x6A6A41C66448AD09(0, 130, 1);
	unk_0x6A6A41C66448AD09(0, 133, 1);
	unk_0x6A6A41C66448AD09(0, 134, 1);
	unk_0x2630A94EE47FEC93();
	if ((unk_0x17103F66FBB44C3C() - Global_28) > 500)
	{
		unk_0xEF5DFB41E5585C16(iParam0, iParam1, iParam2, iParam4);
	}
	Global_28 = unk_0x17103F66FBB44C3C();
	if (!unk_0x0BA451447C3B1A8D(iParam0))
	{
		if (unk_0xE3DAC530D2CCDAE3(unk_0x9EF11DECA38804B6(iParam0)) <= fParam3)
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
					iLocal_80 = unk_0x17103F66FBB44C3C();
				}
			}
			else if ((unk_0x17103F66FBB44C3C() - iLocal_80) > 500)
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
		iVar6 = unk_0x966346019D5E0542();
		iVar6 = (iVar6 + Global_16702);
		iVar7 = iVar6 + 1;
		if (iVar7 > -1 && iVar6 > -1)
		{
			if (unk_0x75426D5397CE9E5D(&(Global_14560[iVar7 /*6*/])))
			{
				return Global_14560[iVar7 /*6*/];
			}
			else
			{
				iVar8 = iVar7;
				while (iVar8 < 70)
				{
					if (unk_0x75426D5397CE9E5D(&(Global_14560[iVar8 /*6*/])))
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
		if (unk_0xFC38B241541883D3(iLocal_90, 0))
		{
			if (func_65())
			{
				return 1;
			}
		}
		if (!unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0) && !unk_0x827151D7B70CB853(iLocal_85, 0))
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
		if (!unk_0x2E6E8D325977B3EC(uLocal_363))
		{
			func_155();
			uLocal_363 = func_154(-1034.6f, 4918.6f, 205.9f, 0);
			unk_0xAFF0147EA2454485(uLocal_363, 269);
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
	unk_0x21D4405986536E14(sParam0);
	unk_0x7BDC04B08D7A7FE0(0, 0, 1, iParam1);
}

int func_157()
{
	if (Global_97358.f_28192.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

void func_158(bool bParam0)
{
	if (unk_0xFC38B241541883D3(iLocal_90, 0) && !unk_0x3E0478C40AB5B38D(iLocal_85))
	{
		if (func_65())
		{
			if (bParam0)
			{
				if (!unk_0x2E6E8D325977B3EC(uLocal_361))
				{
					uLocal_361 = func_50(Local_52, 1);
				}
			}
			if (unk_0x2E6E8D325977B3EC(uLocal_359))
			{
				unk_0x0451B5D93A4BDAA0(&uLocal_359);
			}
			if (unk_0x2E6E8D325977B3EC(uLocal_360))
			{
				unk_0x0451B5D93A4BDAA0(&uLocal_360);
			}
		}
		else
		{
			if (unk_0x2E6E8D325977B3EC(uLocal_361))
			{
				unk_0x0451B5D93A4BDAA0(&uLocal_361);
			}
			if (!unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), iLocal_90, 0))
			{
				if (!unk_0x2E6E8D325977B3EC(uLocal_360))
				{
					uLocal_360 = func_159(iLocal_90, 0, 0);
				}
			}
			if (!unk_0x44E080690DA76A2A(iLocal_85, iLocal_90, 0))
			{
				if (!unk_0x2E6E8D325977B3EC(uLocal_359))
				{
					uLocal_359 = func_173(iLocal_85, 0, 145);
				}
			}
			else if (unk_0x2E6E8D325977B3EC(uLocal_359))
			{
				unk_0x0451B5D93A4BDAA0(&uLocal_359);
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
	
	if (!unk_0x746960881FB19A89(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x5304FE8A2CED6AE8(iParam0);
	if (unk_0x2B1914308D0376C8(iParam0))
	{
		unk_0xD4916ED85412C8D9(uVar0, func_51(unk_0x4B69FB3A5B09A1BA(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xFEE42298F5E238BE(uVar0, bParam1);
		}
		else
		{
			unk_0x016722B6E0559A9A(uVar0, 2);
		}
	}
	else if (unk_0x4E178F5D4155391A(iParam0))
	{
		unk_0xD4916ED85412C8D9(uVar0, func_51(unk_0x4B69FB3A5B09A1BA(), 0.7f, 0.7f));
		unk_0xFEE42298F5E238BE(uVar0, bParam1);
	}
	else if (unk_0xA6C29CC20CD3DCB4(iParam0))
	{
		unk_0xD4916ED85412C8D9(uVar0, func_51(unk_0x4B69FB3A5B09A1BA(), 0.7f, 0.7f));
	}
	return uVar0;
}

int func_161(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	if (unk_0xFC38B241541883D3(iParam0, 0))
	{
		iVar1 = 0;
		while (iVar1 <= (unk_0x95A70C0B34435CA8(iParam0) - 1))
		{
			if (iVar0 == -1)
			{
				iVar2 = iVar1;
				if (unk_0x4A33023BC86AAA7F(iParam0, iVar2))
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
	
	if (unk_0x01F284681531A927())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
	{
		if (!unk_0x44615198247FF471(unk_0x9F92518438215DD0()))
		{
			return 0;
		}
		iVar0 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
		if (bParam0)
		{
			if (unk_0x0BA451447C3B1A8D(iVar0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x0BA451447C3B1A8D(iVar0))
			{
				if (unk_0xB5BBEB12C77EE430(iVar0, -1) != unk_0x9F92518438215DD0())
				{
					return 0;
				}
			}
		}
		if (!unk_0x0BA451447C3B1A8D(iVar0))
		{
			if (unk_0xCC4F040D720C3035(iVar0) < 0.95f || unk_0xCC4F040D720C3035(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x6C08E4B26051504F(unk_0xCFC72E446B0B3AD7()))
	{
		return 0;
	}
	if (!unk_0x2439A8FCC113E966(unk_0xCFC72E446B0B3AD7()))
	{
		return 0;
	}
	return 1;
}

int func_163(int iParam0)
{
	if (!unk_0x0BA451447C3B1A8D(uParam0))
	{
		if (unk_0x4A33023BC86AAA7F(iParam0, -1))
		{
			return 1;
		}
		if (unk_0x4A33023BC86AAA7F(iParam0, 0))
		{
			return 1;
		}
		if (unk_0x4A33023BC86AAA7F(iParam0, 1))
		{
			return 1;
		}
		if (unk_0x4A33023BC86AAA7F(iParam0, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_164(int iParam0)
{
	if (unk_0x91690C37B3C4E5FA(iParam0, unk_0x0CD9BC7F312ED395(unk_0xCFC72E446B0B3AD7())))
	{
		if (!unk_0x5093D6F9140AD109(unk_0x9F92518438215DD0(), iParam0, 25f, 25f, 25f, 0, 1, 0))
		{
			unk_0x1FA92C26AB9467D3(iParam0);
		}
		return 1;
	}
	else if (unk_0x5093D6F9140AD109(unk_0x9F92518438215DD0(), iParam0, Global_18, 0, 1, 0))
	{
		unk_0x78267FAB4E1661CE(iParam0, unk_0x0CD9BC7F312ED395(unk_0xCFC72E446B0B3AD7()));
	}
	return 0;
}

void func_165()
{
	if (!unk_0x3E0478C40AB5B38D(iLocal_85) && unk_0xFC38B241541883D3(iLocal_90, 0))
	{
		if (!unk_0x44E080690DA76A2A(iLocal_85, iLocal_90, 1))
		{
			if (unk_0xE962BD784DD0E442(iLocal_85, -1794415470) != 1)
			{
				unk_0x4073360CA020BB84(iLocal_85, iLocal_90, -1, func_161(iLocal_90), 2f, 8388608, 0);
			}
		}
		if ((unk_0x746960881FB19A89(func_64()) && unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(iLocal_85, 1), unk_0x77009B1C011405A9(func_64(), 1)) < 100f) && (unk_0x9EF11DECA38804B6(iLocal_90) < 5f || !unk_0x8D759C5DD707B910(unk_0xB6A50C909A8FABC3(iLocal_90))))
		{
			if (bLocal_367)
			{
				if (!unk_0x3C17D9ED0E5F3FCA(iLocal_85, "VEH@STD@PS@IDLE_PANIC", "sit", 3) && unk_0x2A2DBEFFFC03A22F(iLocal_85, iLocal_90))
				{
					unk_0x7CF15DD8B3815A0D(iLocal_85, "VEH@STD@PS@IDLE_PANIC", "sit", 4f, -4f, -1, 48, 0, 0, 0, 0);
				}
			}
			else if (!unk_0x3C17D9ED0E5F3FCA(iLocal_85, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 3) && unk_0x2A2DBEFFFC03A22F(iLocal_85, iLocal_90))
			{
				unk_0x7CF15DD8B3815A0D(iLocal_85, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 4f, -4f, -1, 48, 0, 0, 0, 0);
			}
		}
		else if ((unk_0x3C17D9ED0E5F3FCA(iLocal_85, "VEH@STD@PS@IDLE_PANIC", "sit", 3) || unk_0x3C17D9ED0E5F3FCA(iLocal_85, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 3)) && unk_0x2A2DBEFFFC03A22F(iLocal_85, iLocal_90))
		{
			unk_0x32D18ECD9E6F9BE2(iLocal_85);
		}
		switch (iLocal_368)
		{
			case 0:
				if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					if (unk_0x746960881FB19A89(func_64()) && !unk_0x3E0478C40AB5B38D(func_64()))
					{
						func_18(&Local_394, 4);
						func_17(&Local_394, 4, func_64(), "PAPARAZZO", 0, 1);
					}
					iLocal_48 = 2;
					func_101();
					if (func_5(&Local_394, cLocal_371, "REPAP_GO", 4, 0, 0, 0))
					{
						unk_0xB1E35D138037D248(0.2f);
						unk_0x4A1AC49BA4A747F7(iLocal_85, 1);
						unk_0xF2061C15946C53A2(1, uLocal_68, joaat("player"));
						iLocal_357 = unk_0xA7DA1E6D4C99864B(joaat("prop_ld_test_01"), Local_86, 1, 1, 0);
						unk_0x4220BD8C5CDBF540(iLocal_357, 0, 0);
						unk_0x407020DF5CAB33D3(iLocal_357, 0);
						unk_0xD9B13F0A69759C12(iLocal_357, 1);
						iLocal_368++;
					}
				}
				break;
			
			case 1:
				func_167();
				if (!unk_0xFE0FA79BC49EBB07(iLocal_85, 243.5571f, 77.51265f, 90.08002f, 268.2083f, 144.2189f, 109.853f, 23.25f, 0, 1, 0))
				{
					iLocal_368++;
					iLocal_369 = unk_0x17103F66FBB44C3C();
					iLocal_48 = 3;
				}
				break;
			
			case 2:
				if (!bLocal_667)
				{
					if (((((iLocal_669 != 1 && iLocal_669 != 3) && iLocal_669 != 6) && iLocal_669 != 9) && iLocal_669 != 11) && iLocal_669 != 13)
					{
						bLocal_668 = false;
						if (unk_0x746960881FB19A89(func_64()) && unk_0x5093D6F9140AD109(func_64(), iLocal_90, 5f, 5f, 3f, 0, 1, 0))
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
					if (unk_0x746960881FB19A89(func_64()))
					{
						if (!unk_0x5093D6F9140AD109(func_64(), iLocal_90, 5f, 5f, 3f, 0, 1, 0))
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
									iLocal_670 = unk_0x17103F66FBB44C3C();
									iLocal_669++;
								}
							}
							break;
						
						case 2:
							if ((unk_0x17103F66FBB44C3C() - iLocal_670) > 8000)
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
									iLocal_670 = unk_0x17103F66FBB44C3C();
									iLocal_669++;
								}
							}
							break;
						
						case 4:
							if ((unk_0x17103F66FBB44C3C() - iLocal_670) > 6000)
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
									iLocal_670 = unk_0x17103F66FBB44C3C();
								}
							}
							break;
						
						case 5:
							if ((unk_0x17103F66FBB44C3C() - iLocal_670) > 8000)
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
									iLocal_670 = unk_0x17103F66FBB44C3C();
								}
							}
							break;
						
						case 6:
							if ((unk_0x17103F66FBB44C3C() - iLocal_670) > 8000)
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
									iLocal_670 = unk_0x17103F66FBB44C3C();
								}
							}
							break;
						
						case 7:
							if ((unk_0x17103F66FBB44C3C() - iLocal_670) > 8000)
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
									iLocal_670 = unk_0x17103F66FBB44C3C();
									iLocal_669++;
								}
							}
							break;
						
						case 9:
							if ((unk_0x17103F66FBB44C3C() - iLocal_670) > 8000)
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
									iLocal_670 = unk_0x17103F66FBB44C3C();
									iLocal_669++;
								}
							}
							break;
						
						case 11:
							if ((unk_0x17103F66FBB44C3C() - iLocal_670) > 8000)
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
				if (!unk_0x746960881FB19A89(func_64()))
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
					if (unk_0x41EEB10CCC2497A8(unk_0x9F92518438215DD0(), 244.2175f, 441.0128f, 126.2767f, 33.5f, 40f, 14.75f, 0, 1, 0) && func_65())
					{
						iLocal_48 = 4;
						iLocal_84 = unk_0x17103F66FBB44C3C();
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
	if ((unk_0x17103F66FBB44C3C() - iLocal_665) > 5000)
	{
		if (unk_0x746960881FB19A89(iLocal_90) && unk_0x44E080690DA76A2A(iLocal_85, iLocal_90, 0))
		{
			if (unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), iLocal_90, 1))
			{
				if (iVar0 != -1 && (unk_0x17103F66FBB44C3C() - Local_203[iVar0 /*18*/].f_12) < 3000)
				{
					if (func_5(&Local_394, cLocal_371, "REPAP_WHINE", 4, 0, 0, 0))
					{
						iLocal_665 = unk_0x17103F66FBB44C3C();
						return 1;
					}
				}
			}
			else if (func_5(&Local_394, cLocal_371, "REPAP_EXIT", 4, 0, 0, 0))
			{
				iLocal_665 = unk_0x17103F66FBB44C3C();
				return 1;
			}
		}
	}
	return 0;
}

void func_167()
{
	int iVar0;
	
	if ((unk_0x17103F66FBB44C3C() - iLocal_563) > iLocal_564)
	{
		if ((!unk_0x3E0478C40AB5B38D(iLocal_85) && unk_0x746960881FB19A89(func_64())) && !unk_0x3E0478C40AB5B38D(func_64()))
		{
			if (unk_0x91EAD4F2F9B5B38A(Local_62, unk_0x77009B1C011405A9(func_64(), 1), 1) < 8f)
			{
				iVar0 = unk_0x073B65E051D2F03E(0, 5);
				func_18(&Local_394, 4);
				func_18(&Local_394, 5);
				func_18(&Local_394, 6);
				func_18(&Local_394, 7);
				switch (iVar0)
				{
					case 0:
						func_17(&Local_394, 4, func_64(), "PAPARAZZO", 0, 1);
						if (unk_0x746960881FB19A89(Local_394[4 /*10*/]) && !unk_0x3E0478C40AB5B38D(Local_394[4 /*10*/]))
						{
							if (func_5(&Local_394, cLocal_371, "REPAP_PP", 4, 0, 0, 0))
							{
								iLocal_563 = unk_0x17103F66FBB44C3C();
								iLocal_564 = unk_0x073B65E051D2F03E(2000, 3000);
							}
						}
						break;
					
					case 1:
						func_17(&Local_394, 4, func_64(), "PAPARAZZO", 0, 1);
						if (unk_0x746960881FB19A89(Local_394[4 /*10*/]) && !unk_0x3E0478C40AB5B38D(Local_394[4 /*10*/]))
						{
							if (func_5(&Local_394, cLocal_371, "REPAP_CALL1", 4, 0, 0, 0))
							{
								iLocal_563 = unk_0x17103F66FBB44C3C();
								iLocal_564 = unk_0x073B65E051D2F03E(2000, 3000);
							}
						}
						break;
					
					case 2:
						func_17(&Local_394, 5, func_64(), "PAP2", 0, 1);
						if (unk_0x746960881FB19A89(Local_394[5 /*10*/]) && !unk_0x3E0478C40AB5B38D(Local_394[5 /*10*/]))
						{
							if (func_5(&Local_394, cLocal_371, "REPAP_CALL2", 4, 0, 0, 0))
							{
								iLocal_563 = unk_0x17103F66FBB44C3C();
								iLocal_564 = unk_0x073B65E051D2F03E(2000, 3000);
							}
						}
						break;
					
					case 3:
						func_17(&Local_394, 6, func_64(), "PAP3", 0, 1);
						if (unk_0x746960881FB19A89(Local_394[6 /*10*/]) && !unk_0x3E0478C40AB5B38D(Local_394[6 /*10*/]))
						{
							if (func_5(&Local_394, cLocal_371, "REPAP_CALL3", 4, 0, 0, 0))
							{
								iLocal_563 = unk_0x17103F66FBB44C3C();
								iLocal_564 = unk_0x073B65E051D2F03E(2000, 3000);
							}
						}
						break;
					
					case 4:
						func_17(&Local_394, 7, func_64(), "PAP4", 0, 1);
						if (unk_0x746960881FB19A89(Local_394[7 /*10*/]) && !unk_0x3E0478C40AB5B38D(Local_394[7 /*10*/]))
						{
							if (func_5(&Local_394, cLocal_371, "REPAP_CALL4", 4, 0, 0, 0))
							{
								iLocal_563 = unk_0x17103F66FBB44C3C();
								iLocal_564 = unk_0x073B65E051D2F03E(2000, 3000);
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
	
	if (!unk_0x3E0478C40AB5B38D(iLocal_85))
	{
		if (unk_0x2E6E8D325977B3EC(uLocal_359))
		{
			unk_0x49101D6A0E39441B(uLocal_359, iLocal_663);
		}
		switch (iLocal_368)
		{
			case 0:
				unk_0xDA293E5084610B09("random@paparazzi@peek");
				unk_0xDA293E5084610B09("random@paparazzi@trans");
				unk_0xDA293E5084610B09("random@paparazzi@wait");
				if ((unk_0x3DA2EED4204CE591("random@paparazzi@peek") && unk_0x3DA2EED4204CE591("random@paparazzi@trans")) && unk_0x3DA2EED4204CE591("random@paparazzi@wait"))
				{
					uLocal_624 = unk_0x8E83718430E22797(Local_652, Local_655, 2);
					unk_0x6C4954C76B25F972(iLocal_85, uLocal_624, "random@paparazzi@peek", "left_peek_a", 1000f, -8f, 1, 0, 1148846080, 0);
					unk_0x402A96371F34E6D8(iLocal_85, unk_0x9F92518438215DD0(), -1, 4, 4);
					sLocal_625[0] = "peek_a";
					sLocal_625[1] = "peek_b";
					sLocal_625[2] = "peek_c";
					unk_0xB1E35D138037D248(0.2f);
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
				if (unk_0x94E72F17611BCD3C(iLocal_659, 0))
				{
					if (!unk_0x94E72F17611BCD3C(iLocal_659, 1))
					{
						unk_0xEDB9A377CD8B7F03(&iLocal_659, 1);
					}
					else
					{
						iLocal_659 = 0;
					}
				}
				iVar2 = 0;
				bVar0 = unk_0xFE0FA79BC49EBB07(unk_0x9F92518438215DD0(), Local_638, Local_641, fLocal_644, 0, 1, 0);
				bVar1 = unk_0xFE0FA79BC49EBB07(unk_0x9F92518438215DD0(), Local_631, Local_634, fLocal_637, 0, 1, 0);
				if (unk_0x6B08EC9A88700FBB(sLocal_630, "right_"))
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
				if ((unk_0xAA446425C3A969F9(uLocal_624) && unk_0xF9F2ADAEAB471E70(uLocal_624) > 0.9f) || iVar2)
				{
					if (iLocal_659 == 0)
					{
						unk_0x32D18ECD9E6F9BE2(iLocal_85);
						iLocal_629++;
						if (iLocal_629 >= 3)
						{
							iLocal_629 = 0;
						}
						StringCopy(&cVar3, sLocal_630, 24);
						StringConCat(&cVar3, sLocal_625[iLocal_629], 24);
						uLocal_624 = unk_0x8E83718430E22797(Local_652, Local_655, 2);
						unk_0x6C4954C76B25F972(iLocal_85, uLocal_624, "random@paparazzi@peek", &cVar3, 4f, -4f, 1, 0, 1148846080, 0);
						unk_0xEDB9A377CD8B7F03(&iLocal_659, 0);
					}
				}
				if (bVar0 || bVar1)
				{
					if (fLocal_660 <= 20f)
					{
						fLocal_660 = (fLocal_660 + unk_0xD1D592A06EBAAE4F());
					}
					if ((unk_0x17103F66FBB44C3C() - iLocal_623) > 5000 && iLocal_659 == 0)
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
								func_17(&Local_394, 1, unk_0x9F92518438215DD0(), "FRANKLIN", 0, 1);
							}
							else if (func_19() == 0)
							{
								func_17(&Local_394, 1, unk_0x9F92518438215DD0(), "MICHAEL", 0, 1);
							}
							else
							{
								func_17(&Local_394, 1, unk_0x9F92518438215DD0(), "TREVOR", 0, 1);
							}
							if (func_5(&Local_394, cLocal_371, sVar9, 4, 0, 0, 0))
							{
								iLocal_661 = 1;
								if (!unk_0x5093D6F9140AD109(unk_0x9F92518438215DD0(), iLocal_85, 7f, 7f, 7f, 0, 1, 0))
								{
									unk_0x32D18ECD9E6F9BE2(iLocal_85);
									StringCopy(&cVar10, sLocal_630, 24);
									StringConCat(&cVar10, "come_here", 24);
									uLocal_624 = unk_0x8E83718430E22797(Local_652, Local_655, 2);
									unk_0x6C4954C76B25F972(iLocal_85, uLocal_624, "random@paparazzi@peek", &cVar10, 4f, -4f, 1, 0, 1148846080, 0);
									unk_0xEDB9A377CD8B7F03(&iLocal_659, 0);
								}
								iLocal_623 = unk_0x17103F66FBB44C3C();
							}
						}
					}
				}
				if (unk_0xFE0FA79BC49EBB07(unk_0x9F92518438215DD0(), Local_645, Local_648, fLocal_651, 0, 1, 0) && iLocal_659 == 0)
				{
					if (unk_0x2E6E8D325977B3EC(uLocal_358))
					{
						unk_0x0451B5D93A4BDAA0(&uLocal_358);
						if (!unk_0x2E6E8D325977B3EC(uLocal_359))
						{
							uLocal_359 = func_173(iLocal_85, 0, 145);
						}
					}
					unk_0x32D18ECD9E6F9BE2(iLocal_85);
					uLocal_624 = unk_0x8E83718430E22797(Local_652, Local_655, 2);
					if (bVar1)
					{
						unk_0x6C4954C76B25F972(iLocal_85, uLocal_624, "random@paparazzi@trans", "trans_left_to_wait", 8f, -4f, 1, 0, 1148846080, 0);
					}
					else
					{
						unk_0x6C4954C76B25F972(iLocal_85, uLocal_624, "random@paparazzi@trans", "trans_right_to_wait", 8f, -4f, 1, 0, 1148846080, 0);
					}
					unk_0xEDB9A377CD8B7F03(&iLocal_659, 0);
					iLocal_368++;
				}
				break;
			
			case 2:
				if (unk_0xAA446425C3A969F9(uLocal_624) && unk_0xF9F2ADAEAB471E70(uLocal_624) > 0.9f)
				{
					if (unk_0xE962BD784DD0E442(iLocal_85, 242628503) != 1)
					{
						unk_0x32D18ECD9E6F9BE2(iLocal_85);
						unk_0x7CF15DD8B3815A0D(iLocal_85, "random@paparazzi@wait", "wait_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
						iLocal_620 = 2;
						unk_0xC1B1E9A034A63A62(0);
					}
					iLocal_368++;
				}
				break;
			
			case 3:
				if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
				{
					if (func_170())
					{
						unk_0x9187463EB4918A4D(&iLocal_90);
						iLocal_90 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
						unk_0x336AE92FD68DEF98(iLocal_90, 1, 1);
						unk_0x003E17A8BE5EA5B6(iLocal_90, 0, 0);
						unk_0x993B4D0D3CD44124(iLocal_90, 1);
						bLocal_367 = true;
					}
				}
				if (!bLocal_367)
				{
					unk_0x993B4D0D3CD44124(iLocal_90, 1);
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
				if (unk_0xFC38B241541883D3(iLocal_90, 0))
				{
					if (unk_0x5093D6F9140AD109(iLocal_90, iLocal_85, Global_18 + Vector(2f, 12f, 12f), 0, 1, 0) && !bLocal_367)
					{
						if (unk_0xE962BD784DD0E442(iLocal_85, 242628503) != 1 && !iLocal_658)
						{
							unk_0xF87DA7F5BA8C7D0F(&uVar16);
							unk_0x27DF0A5AA993D7B6(0, 259.2552f, 122.2986f, 100.441f, 1f, 20000, 0.25f, 0, 1193033728);
							unk_0x23F243BF5B07DA90(0, unk_0x9F92518438215DD0(), 0);
							unk_0x3179CCC77CBAB31F(uVar16);
							unk_0xC7EBE3C9AC83FAAA(iLocal_85, uVar16);
							unk_0xF0875A1DC909B469(iLocal_85, 0, 0);
							unk_0xCD02E3C29B8253A6(&uVar16);
							iLocal_658 = 1;
						}
						else
						{
							unk_0x0365EE015603E149(iLocal_85, 1f);
							func_169(259.2552f, 122.2986f, 100.441f, 0);
						}
					}
					else
					{
						func_169(Local_86, 1);
					}
					if (!bLocal_367)
					{
						if (unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), iLocal_90, 0))
						{
							if (unk_0x2E6E8D325977B3EC(uLocal_360))
							{
								unk_0x0451B5D93A4BDAA0(&uLocal_360);
							}
							if (!unk_0x2E6E8D325977B3EC(uLocal_359))
							{
								uLocal_359 = func_173(iLocal_85, 0, 145);
							}
						}
					}
					if ((unk_0x5093D6F9140AD109(iLocal_90, iLocal_85, Global_18, 0, 1, 0) && func_163(iLocal_90)) && (unk_0x83666F9FB8FEBD4B() > 6000 || !bLocal_367))
					{
						if (!iLocal_622)
						{
							func_101();
							if (unk_0x633DA2F150D07C27(unk_0x9F92518438215DD0()))
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
							unk_0x32D18ECD9E6F9BE2(iLocal_85);
							unk_0x4073360CA020BB84(iLocal_85, iLocal_90, -1, func_161(iLocal_90), 1f, 8388608, 0);
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
				if (unk_0xFC38B241541883D3(iLocal_90, 0))
				{
					if (func_146(iLocal_90, 1093140480, 1, 1056964608, 0, 1))
					{
						iLocal_368 = 5;
					}
				}
				break;
			
			case 5:
				if (unk_0xFC38B241541883D3(iLocal_90, 0))
				{
					if (!unk_0x3E0478C40AB5B38D(iLocal_85) && unk_0x44E080690DA76A2A(iLocal_85, iLocal_90, 0))
					{
						if (unk_0x2E6E8D325977B3EC(uLocal_359))
						{
							unk_0x0451B5D93A4BDAA0(&uLocal_359);
						}
						unk_0xD2062A6AC314B85E(unk_0x9F92518438215DD0());
						func_171(1);
					}
					else
					{
						if (!Global_3 && !bLocal_69)
						{
							if ((unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), iLocal_90, 0) && !unk_0x44E080690DA76A2A(iLocal_85, iLocal_90, 1)) && !unk_0xFE0FA79BC49EBB07(iLocal_90, 225.1779f, 125.6632f, 113.6647f, 262.3032f, 111.8771f, 97.16339f, 37f, 0, 1, 0))
							{
								if (bLocal_367)
								{
									unk_0xA334EDA2335A13CA(iLocal_85, 2, 1);
									sLocal_370 = "REPAP_GUP";
									func_171(6);
								}
								else
								{
									unk_0x6EAEC8403384110F(unk_0xCFC72E446B0B3AD7(), 1, 0);
									unk_0xA334EDA2335A13CA(iLocal_85, 2, 1);
									sLocal_370 = "REPAP_CP";
									func_171(6);
								}
							}
						}
						if (!unk_0x44E080690DA76A2A(iLocal_85, iLocal_90, 0))
						{
							if (unk_0xE962BD784DD0E442(iLocal_85, -1794415470) != 1)
							{
								unk_0x32D18ECD9E6F9BE2(iLocal_85);
								unk_0x4073360CA020BB84(iLocal_85, iLocal_90, -1, func_161(iLocal_90), 1f, 8388608, 0);
							}
							else if (unk_0x2A488C176D52CCA5(Local_62, unk_0x20CBCBD58A2C73B4(iLocal_90, 1f, 0f, 0f)) < 1f)
							{
								unk_0x0365EE015603E149(iLocal_85, 1f);
							}
						}
					}
				}
				break;
			
			case 100:
				if (unk_0xFC38B241541883D3(iLocal_90, 0))
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
				if (unk_0xB7A628320EFF8E47(Local_59, Local_62) < 49f && !unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
				{
					if (unk_0x9EF11DECA38804B6(unk_0x9F92518438215DD0()) < 3f)
					{
						fLocal_664 = (fLocal_664 + unk_0xD1D592A06EBAAE4F());
					}
					else
					{
						fLocal_664 = (fLocal_664 - (unk_0xD1D592A06EBAAE4F() * 2f));
					}
					if (fLocal_664 > 10f)
					{
						if (func_5(&Local_394, cLocal_371, "REPAP_PRT", 4, 0, 0, 0))
						{
							fLocal_664 = 0f;
						}
					}
				}
				if (unk_0xFC38B241541883D3(iLocal_90, 0))
				{
					if (!unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), iLocal_90, 0) && func_170())
					{
						bLocal_367 = true;
						iLocal_73 = 1;
						iLocal_90 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
						unk_0x336AE92FD68DEF98(iLocal_90, 1, 1);
					}
					if (unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), iLocal_90, 0))
					{
						if (unk_0x2E6E8D325977B3EC(uLocal_360))
						{
							unk_0x0451B5D93A4BDAA0(&uLocal_360);
						}
						if (!unk_0x2E6E8D325977B3EC(uLocal_359))
						{
							uLocal_359 = func_173(iLocal_85, 0, 145);
						}
					}
					else
					{
						if (unk_0x2E6E8D325977B3EC(uLocal_359))
						{
							unk_0x0451B5D93A4BDAA0(&uLocal_359);
						}
						if (!unk_0x2E6E8D325977B3EC(uLocal_360))
						{
							uLocal_360 = func_159(iLocal_90, 0, 0);
						}
					}
					if (unk_0x2A2DBEFFFC03A22F(unk_0x9F92518438215DD0(), iLocal_90))
					{
						if (unk_0x2E6E8D325977B3EC(uLocal_360))
						{
							unk_0x0451B5D93A4BDAA0(&uLocal_360);
						}
						if (!unk_0x2E6E8D325977B3EC(uLocal_359))
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
			if (unk_0xFC38B241541883D3(iLocal_90, 0))
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
			if (!unk_0xFC38B241541883D3(iLocal_90, 0))
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
						if (unk_0xFD181DDA4D8D6786(iLocal_90) < iLocal_82)
						{
							if (unk_0xE99AF5B1B3F0BB7C(iLocal_90, unk_0x9F92518438215DD0(), 1))
							{
								iLocal_83 = (iLocal_83 + (iLocal_82 - unk_0xFD181DDA4D8D6786(iLocal_90)));
							}
							unk_0x87659527DF5C44B5(iLocal_90);
						}
						if (iLocal_83 > 250)
						{
							if (unk_0xCEC6A26F61687EAE(iLocal_85, iLocal_90) && unk_0x2A488C176D52CCA5(Local_62, Local_65) < 25f)
							{
								func_171(5);
							}
						}
					}
				}
				iLocal_82 = unk_0xFD181DDA4D8D6786(iLocal_90);
			}
		}
		if (!unk_0x3E0478C40AB5B38D(iLocal_85))
		{
			if (unk_0x7E4B3ADE683EE23B(iLocal_85))
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
		if (unk_0xE962BD784DD0E442(iLocal_85, 713668775) != 1)
		{
			unk_0x27DF0A5AA993D7B6(iLocal_85, Param0, 1f, -1, 0.25f, 0, 1193033728);
		}
	}
	else if (unk_0xE962BD784DD0E442(iLocal_85, 713668775) != 1)
	{
		func_131(bParam3);
		unk_0x402A96371F34E6D8(iLocal_85, unk_0x9F92518438215DD0(), -1, 16, 2);
	}
}

bool func_170()
{
	return (((((unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0) && unk_0xFC38B241541883D3(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0), 0)) && (unk_0x80D7E1622143A2A0(unk_0xB6A50C909A8FABC3(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0))) || unk_0x8D759C5DD707B910(unk_0xB6A50C909A8FABC3(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0))))) && unk_0x95A70C0B34435CA8(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0)) > 0) && func_163(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0))) && !Global_96405);
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
		if (!unk_0x6B08EC9A88700FBB(iLocal_559[iVar0], sParam0))
		{
			if (unk_0x370603716EC2D420(iLocal_559[iVar0]))
			{
				unk_0x6041FBFC1EE8196A(iLocal_559[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_559)
	{
		if (unk_0x6B08EC9A88700FBB(iLocal_559[iVar0], sParam0))
		{
			if (!unk_0x370603716EC2D420(iLocal_559[iVar0]))
			{
				unk_0x9B517A4FE28A719F(iLocal_559[iVar0]);
			}
		}
		iVar0++;
	}
}

var func_173(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_160(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x2E6E8D325977B3EC(uVar0)) && unk_0x75426D5397CE9E5D(&(Global_97358.f_29774[iParam2 /*29*/].f_3)))
	{
		unk_0x2A8C2BEEA4F7041F(uVar0, &(Global_97358.f_29774[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_174(int iParam0)
{
	if (func_177())
	{
		Global_97348 = 1;
		Global_97345 = unk_0x17103F66FBB44C3C();
		if (func_87(Global_97347))
		{
			func_175(0);
		}
		unk_0x50809CE263545545(1, "RE_TITLE");
		if (iParam0 && func_87(Global_97347))
		{
			unk_0x951B29B8E6D6CC38();
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
			if (Global_97358.f_28192.f_2 < 3)
			{
				if (!unk_0xBC4ECC4B5C6B7814())
				{
					func_156(func_176(iParam0), -1);
					Global_97358.f_28192.f_2++;
					unk_0xEDB9A377CD8B7F03(&Global_97354, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0x94E72F17611BCD3C(Global_97354, 1))
			{
				if (!unk_0xBC4ECC4B5C6B7814())
				{
					func_156(func_176(iParam0), -1);
					Global_97358.f_28192.f_3++;
					unk_0xEDB9A377CD8B7F03(&Global_97354, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0x94E72F17611BCD3C(Global_97354, 2))
			{
				if (!unk_0xBC4ECC4B5C6B7814())
				{
					func_156(func_176(iParam0), -1);
					Global_97358.f_28192.f_4++;
					unk_0xEDB9A377CD8B7F03(&Global_97354, 2);
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
	switch (func_178(&Global_24503, 0, 5, 0, unk_0x81ACA1EEF1E4410D()))
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
		if (Global_87845.f_44 == 1)
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
		Global_34877++;
		*uParam0 = Global_34877;
		unk_0xC243E2F8392527C0(unk_0x2563F6EECD8726D3(), 0);
		Global_17098.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x160853D5D71EE3FE(8);
		}
		Global_34913 = iParam2;
		Global_34875 = *uParam0;
		Global_34876 = iParam4;
		Global_34874 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_34874 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_34874)
			{
				if (Global_34880[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_34875 == *uParam0)
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
		if (Global_34874 == 8)
		{
			return 0;
		}
		Global_34877++;
		*uParam0 = Global_34877;
		Global_34880[Global_34874 /*4*/] = Global_34877;
		Global_34880[Global_34874 /*4*/].f_1 = iParam1;
		Global_34880[Global_34874 /*4*/].f_2 = iParam2;
		Global_34880[Global_34874 /*4*/].f_3 = 0;
		Global_34874++;
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
	
	if (Global_34874 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_34874)
	{
		if (Global_34880[iVar0 /*4*/] == *uParam0)
		{
			Global_34880[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_180(int iParam0)
{
	return func_181(iParam0, Global_34913);
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
	if (Global_34913 == 15)
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
	
	if (!unk_0x3E0478C40AB5B38D(iLocal_85))
	{
		unk_0xA334EDA2335A13CA(iLocal_85, 2, 0);
		unk_0x722E6B3A5162A6BB(iLocal_85, unk_0x9F92518438215DD0(), 300f, -1, 0, 0);
	}
	iVar0 = 0;
	while (iVar0 < Local_203.f_0)
	{
		if (!unk_0x3E0478C40AB5B38D(Local_203[iVar0 /*18*/]))
		{
			unk_0x722E6B3A5162A6BB(Local_203[iVar0 /*18*/], unk_0x9F92518438215DD0(), 300f, -1, 0, 0);
			unk_0xA50AD6983D49A772(Local_203[iVar0 /*18*/], -2065892691);
			unk_0x4A1AC49BA4A747F7(Local_203[iVar0 /*18*/], 0);
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
		if (unk_0x746960881FB19A89(Local_203[iVar1 /*18*/]) && !unk_0x3E0478C40AB5B38D(Local_203[iVar1 /*18*/]))
		{
			if (unk_0xB3CC729BBAA21637(Local_203[iVar1 /*18*/]))
			{
				if (((unk_0xD18D82BE9A1A5E43(Local_203[iVar1 /*18*/].f_6, 5f, 1) || unk_0x24E7720869956FA9(-1, Local_203[iVar1 /*18*/].f_6, 10f)) || unk_0x7E4B3ADE683EE23B(Local_203[iVar1 /*18*/])) || (iLocal_385[iVar1] > 10 && iLocal_46 == 0))
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
		if (unk_0x746960881FB19A89(Local_130[iVar1 /*18*/]))
		{
			if (unk_0xFC38B241541883D3(Local_130[iVar1 /*18*/], 0) && unk_0xB3CC729BBAA21637(Local_130[iVar1 /*18*/]))
			{
				if (unk_0x0FC809E10EF0EAC3(Local_130[iVar1 /*18*/]))
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
	if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()) && !unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), Local_42) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0xAEA1379E6840A7DA(unk_0x9F92518438215DD0())) > 1369f && !func_196())
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
	if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
	{
		if (func_21(func_19()))
		{
			iVar36 = func_92();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0x94E72F17611BCD3C(Global_97358.f_16828[iVar32 /*6*/], 2) && !unk_0x94E72F17611BCD3C(Global_97358.f_16828[iVar32 /*6*/], 3))
				{
					func_187(iVar32, &Var0);
					fVar35 = unk_0x91EAD4F2F9B5B38A(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 0), Var0.f_6, 1);
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
	if (unk_0x9E9AFDBF482248F6(&cVar2))
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
	return Global_97076 > 0;
}

int func_194()
{
	if (Global_87289 != -1)
	{
		return 1;
	}
	return 0;
}

int func_195()
{
	if (Global_87289 != -1)
	{
		return unk_0x94E72F17611BCD3C(Global_81155[Global_87289 /*34*/].f_15, 20);
	}
	return 0;
}

int func_196()
{
	if (unk_0x708CE249B4F97BF8())
	{
		if (unk_0xC981EEB259E36845() == 1f)
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
	iLocal_85 = unk_0xA00B5D954AD320BF(26, joaat("a_f_y_bevhills_03"), Local_86, fLocal_89, 1, 1);
	unk_0x64277E0EB39C1162(iLocal_85, 1, 1);
	unk_0x64277E0EB39C1162(iLocal_85, 17, 1);
	unk_0xA334EDA2335A13CA(iLocal_85, 128, 1);
	unk_0xE8105B7E3908547D(iLocal_85, 1);
	unk_0x624C7BCDEBB9C07F(iLocal_85, 0);
	unk_0xB27BF64B02C0107E(iLocal_85, 0, 0, 1, 0);
	unk_0xB27BF64B02C0107E(iLocal_85, 2, 0, 0, 0);
	unk_0xB27BF64B02C0107E(iLocal_85, 3, 0, 0, 0);
	unk_0xB27BF64B02C0107E(iLocal_85, 4, 0, 0, 0);
	unk_0xB27BF64B02C0107E(iLocal_85, 7, 1, 0, 0);
	unk_0xB27BF64B02C0107E(iLocal_85, 8, 0, 0, 0);
	unk_0xFE7179C8CCB1717F(iLocal_85, 1);
	unk_0x4A1AC49BA4A747F7(iLocal_85, 1);
	unk_0x0CFE85F88BE373C8(iLocal_85, 0);
	unk_0x1B0EED08D8CF2596(iLocal_85, "LACEY");
	if (Global_3 || bLocal_69)
	{
		unk_0xC204B4E5503A54EA(iLocal_85, 1);
	}
	if (unk_0x4B38C66919CC2E48("CELEBRITY", &uLocal_68))
	{
		unk_0xA50AD6983D49A772(iLocal_85, uLocal_68);
	}
	iLocal_90 = unk_0xB0694AD0A3BB8936(joaat("surano"), Local_91, fLocal_94, 1, 1);
	unk_0x18487241EBD142A4(iLocal_90, Local_91, 0, 0, 1);
	unk_0xDAD4024FD9391D31(iLocal_90, 0.1293f, -0.0323f, -0.1606f, 0.978f);
	unk_0x003E17A8BE5EA5B6(iLocal_90, 0, 0);
	unk_0xDFA36C740458266A(iLocal_90, 10);
	unk_0x77C765087051EDD6(iLocal_90);
	unk_0x993B4D0D3CD44124(iLocal_90, 3);
	unk_0x76369414188E9AC2(iLocal_90, 1);
	unk_0x5232D5FF1F933BDE(iLocal_90, 1);
	unk_0xF137CB02A3F10019(iLocal_90, unk_0x35C684C30B151915(1));
	if (func_19() == 1)
	{
		func_17(&Local_394, 1, unk_0x9F92518438215DD0(), "FRANKLIN", 0, 1);
	}
	else if (func_19() == 0)
	{
		func_17(&Local_394, 1, unk_0x9F92518438215DD0(), "MICHAEL", 0, 1);
	}
	else
	{
		func_17(&Local_394, 1, unk_0x9F92518438215DD0(), "TREVOR", 0, 1);
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
	unk_0x60DAE84D0B296FD2(joaat("vader"), 1);
	unk_0x60DAE84D0B296FD2(joaat("surano"), 1);
	unk_0x60DAE84D0B296FD2(joaat("cavalcade2"), 1);
}

var func_198(struct<3> Param0)
{
	var uVar0;
	
	uVar0 = unk_0x2290D76D0A4ACACA(Param0);
	unk_0xFBF7E9E330FE936E(uVar0, 0);
	unk_0xCA523773918411B5(uVar0, 0);
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
		unk_0xF76EE56D3E7DAF1B(&(Global_90014.f_1272[iParam0]), iParam1);
	}
	else if (unk_0x4B69FB3A5B09A1BA())
	{
		if (func_82() == 0)
		{
			uVar0 = func_203(func_204(iParam0), -1, 0);
			unk_0xF76EE56D3E7DAF1B(&uVar0, iParam1);
			func_201(func_204(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_668[iParam0]), iParam1);
	}
}

void func_201(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2454588[iParam0 /*6*/][func_202(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xC46BDC34976E9532(iVar0, uParam1, iParam3);
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

int func_203(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2454588[iParam0 /*6*/][func_202(iParam1)];
	if (unk_0x39496A55977AA312(uVar0, &uVar1, -1))
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
			return 819;
			break;
		
		case 1:
			return 820;
			break;
		
		case 2:
			return 821;
			break;
		
		case 3:
			return 822;
			break;
		
		case 4:
			return 823;
			break;
		
		case 5:
			return 824;
			break;
		
		case 6:
			return 825;
			break;
		
		case 7:
			return 826;
			break;
		
		case 8:
			return 827;
			break;
		
		case 9:
			return 828;
			break;
		
		case 10:
			return 829;
			break;
		
		case 11:
			return 830;
			break;
		
		case 12:
			return 831;
			break;
		
		case 13:
			return 832;
			break;
		
		case 14:
			return 833;
			break;
		
		case 15:
			return 835;
			break;
		
		case 16:
			return 836;
			break;
		
		case 17:
			return 837;
			break;
		
		case 18:
			return 838;
			break;
		
		case 19:
			return 839;
			break;
		
		case 20:
			return 840;
			break;
		
		case 21:
			return 841;
			break;
		
		case 22:
			return 842;
			break;
		
		case 23:
			return 843;
			break;
		
		case 24:
			return 844;
			break;
		
		case 25:
			return 845;
			break;
		
		case 26:
			return 846;
			break;
		
		case 27:
			return 847;
			break;
		
		case 28:
			return 848;
			break;
		
		case 29:
			return 849;
			break;
		
		case 30:
			return 850;
			break;
		
		case 31:
			return 851;
			break;
		
		case 32:
			return 852;
			break;
		
		case 33:
			return 853;
			break;
		
		case 34:
			return 854;
			break;
		
		case 35:
			return 855;
			break;
		
		case 36:
			return 856;
			break;
		
		case 37:
			return 857;
			break;
		
		case 38:
			return 858;
			break;
		
		case 39:
			return 859;
			break;
		
		case 40:
			return 863;
			break;
		
		case 41:
			return 864;
			break;
		
		case 42:
			return 865;
			break;
		
		case 43:
			return 866;
			break;
		
		default:
			break;
	}
	return 3015;
}

void func_205(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0xEDB9A377CD8B7F03(&(Global_90014.f_1272[iParam0]), iParam1);
	}
	else if (unk_0x4B69FB3A5B09A1BA())
	{
		if (func_82() == 0)
		{
			uVar0 = func_203(func_204(iParam0), -1, 0);
			unk_0xEDB9A377CD8B7F03(&uVar0, iParam1);
			func_201(func_204(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0xEDB9A377CD8B7F03(&(Global_97358.f_668[iParam0]), iParam1);
	}
}

int func_206(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0x94E72F17611BCD3C(Global_90014.f_1272[iParam0], iParam1);
	}
	else if (unk_0x4B69FB3A5B09A1BA())
	{
		if (func_82() == 0)
		{
			return unk_0x94E72F17611BCD3C(func_203(func_204(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x94E72F17611BCD3C(Global_97358.f_668[iParam0], iParam1);
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
	unk_0xDA293E5084610B09("random@escape_paparazzi@standing@");
	unk_0xDA293E5084610B09("random@paparazzi@pap_anims");
	unk_0xDA293E5084610B09("random@paparazzi@peek");
	unk_0xDA293E5084610B09("random@paparazzi@trans");
	unk_0xDA293E5084610B09("random@paparazzi@wait");
	unk_0xDA293E5084610B09("veh@std@ps@idle_panic");
	unk_0xDA293E5084610B09("veh@low@front_ps@idle_panic");
	unk_0xDA293E5084610B09(sLocal_373);
	unk_0x9C53AD1E8A38ADEE("ESCPAP", 0);
	if (((((((((unk_0x3DA2EED4204CE591("random@escape_paparazzi@standing@") && unk_0x3DA2EED4204CE591("random@paparazzi@pap_anims")) && unk_0x3DA2EED4204CE591("random@paparazzi@peek")) && unk_0x3DA2EED4204CE591("random@paparazzi@trans")) && unk_0x3DA2EED4204CE591("random@paparazzi@wait")) && unk_0x3DA2EED4204CE591("veh@std@ps@idle_panic")) && unk_0x3DA2EED4204CE591("veh@low@front_ps@idle_panic")) && unk_0x3DA2EED4204CE591(sLocal_373)) && unk_0x7DE7B5897062BC2C(0)) && unk_0xEC2376DA57EC68E1("Distant_Camera_Flash", false))
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
		if (unk_0x94E72F17611BCD3C((*uParam0)[iVar0 /*2*/], 30))
		{
			if (!unk_0x94E72F17611BCD3C((*uParam0)[iVar0 /*2*/], 29))
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
	if (unk_0x94E72F17611BCD3C(iParam0, 30))
	{
		if (unk_0x94E72F17611BCD3C(iParam0, 29))
		{
			switch (func_211(iParam0))
			{
				case 0:
					return unk_0x149162179DBAEDB0(uParam2);
					break;
				
				case 1:
					return unk_0x3DA2EED4204CE591(sParam1);
					break;
				
				case 2:
					return unk_0x18E6A43566D33720(sParam1);
					break;
				
				case 3:
					return unk_0x48125D4CA17FF2F9(sParam1);
					break;
				
				case 4:
					return unk_0x381FCADDEA0C040B(iParam2, sParam1);
					break;
				
				case 5:
					return unk_0x2922F456A375F556(sParam1);
					break;
				
				case 6:
					return unk_0xEC2376DA57EC68E1(sParam1, unk_0x94E72F17611BCD3C(iParam0, 27));
					break;
				
				case 7:
					return unk_0x4F5C35B2846E04BD(iParam2);
					break;
				
				case 8:
					return unk_0x7DE7B5897062BC2C(iParam2);
					break;
				
				case 9:
					return unk_0x3749C5550F0953F2();
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
		if (unk_0x94E72F17611BCD3C(iParam0, iVar0))
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
		if (unk_0x94E72F17611BCD3C((*uParam0)[iVar0 /*2*/], 30))
		{
			if (unk_0x94E72F17611BCD3C((*uParam0)[iVar0 /*2*/], iParam1))
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
		if (!unk_0x94E72F17611BCD3C((*uParam0)[iVar0 /*2*/], 30))
		{
			(uParam0[iVar0 /*2*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*2*/] = iParam3;
			unk_0xEDB9A377CD8B7F03(uParam0[iVar0 /*2*/], iParam1);
			unk_0xEDB9A377CD8B7F03(uParam0[iVar0 /*2*/], 30);
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
	if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0xAEA1379E6840A7DA(unk_0x9F92518438215DD0())) > 1369f && !func_196())
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
	if ((Global_97347 == func_96() && unk_0x5B668B6112C83376()) && Global_97348)
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
		if ((unk_0xD313E4EFACD47B38() >= (uParam0->f_32 + uParam0->f_33) || unk_0x94E72F17611BCD3C(Global_89962.f_20, 2)) || unk_0x94E72F17611BCD3C(Global_89962.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (unk_0x94E72F17611BCD3C((*uParam0)[iVar0 /*2*/], 30))
				{
					if (!unk_0x94E72F17611BCD3C((*uParam0)[iVar0 /*2*/], 29))
					{
						func_219(uParam0[iVar0 /*2*/]);
						uParam0->f_32 = unk_0xD313E4EFACD47B38();
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
	if (unk_0x94E72F17611BCD3C(*uParam0, 30))
	{
		switch (func_211(*uParam0))
		{
			case 0:
				unk_0x3BC6D217451D6BB7(uParam2);
				break;
			
			case 1:
				unk_0xDA293E5084610B09(sParam1);
				break;
			
			case 2:
				unk_0xF56FC42B9186CE3F(sParam1);
				break;
			
			case 3:
				unk_0x2EA266AD98E82E2A(sParam1, unk_0x94E72F17611BCD3C(*uParam0, 28));
				break;
			
			case 4:
				unk_0x8E6E37300A0A2B22(iParam2, sParam1);
				break;
			
			case 5:
				unk_0x33733EEE6375F985(sParam1);
				break;
			
			case 6:
				unk_0xEC2376DA57EC68E1(sParam1, unk_0x94E72F17611BCD3C(*uParam0, 27));
				break;
			
			case 7:
				unk_0xE0DC368212C82AB7(iParam2);
				break;
			
			case 8:
				unk_0x9C53AD1E8A38ADEE(sParam1, iParam2);
				break;
			
			case 9:
				unk_0x21ED45FD62BE6E8D();
				break;
			
			default:
				break;
		}
		unk_0xEDB9A377CD8B7F03(uParam0, 29);
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
	unk_0xEDE0414F2E7294E3(0);
	unk_0xA81D632371FE58C9(1);
	Global_97344 = 0;
	func_222();
}

void func_222()
{
	if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
	{
		if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
		{
			unk_0x60DAE84D0B296FD2(unk_0xB6A50C909A8FABC3(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0)), 1);
		}
		unk_0x9001FCB58244C11D(unk_0x9F92518438215DD0(), 32, 0);
	}
}

void func_223(int iParam0)
{
	Global_97347 = iParam0;
}

int func_224(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_131425)
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
		if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()) && !unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
		{
			Var1 = { unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0xAEA1379E6840A7DA(unk_0x9F92518438215DD0())) > 1369f && !func_196())
			{
				return 0;
			}
		}
		if (!Global_97358.f_7341)
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
		if (Global_97347 != -1)
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
		if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()) && !bParam6)
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
		if (!func_260(Global_97358.f_28192.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x17103F66FBB44C3C() - Global_97349) < 150000)
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
		if (unk_0xDC8D2FA0A650F78B())
		{
			return 0;
		}
		if (unk_0x5B668B6112C83376())
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
		if (unk_0xF67FA89DDC5D0BDC(unk_0x835E5CA41A401AEB(unk_0x9F92518438215DD0())))
		{
			if ((unk_0x835E5CA41A401AEB(unk_0x9F92518438215DD0()) == unk_0x8AE51093FA7FBE3F(377.153f, -717.567f, 10.0536f) || unk_0x835E5CA41A401AEB(unk_0x9F92518438215DD0()) == unk_0x8AE51093FA7FBE3F(320.9934f, 265.2515f, 82.1221f)) || unk_0x835E5CA41A401AEB(unk_0x9F92518438215DD0()) == unk_0x8AE51093FA7FBE3F(-1425.564f, -244.3f, 15.8053f))
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
				Var5 = { Global_97358.f_1729.f_539.f_1528[iVar4 /*3*/] };
				iVar8 = Global_97358.f_1729.f_539.f_1524[iVar4];
				if (func_248(iVar8))
				{
					if (func_226(iVar4))
					{
						if (!func_225(Var5, 0f, 0f, 0f))
						{
							if (unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 0), Var5) < (210f * 210f))
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
	
	iVar0 = Global_97358.f_1729.f_539.f_1524[iParam0];
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
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_238(unk_0x94E72F17611BCD3C(iParam0, 31), -1, 1)) + 2011;
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
	
	func_247(&uVar0, unk_0xD9940DF735CED1D5());
	func_246(&uVar0, unk_0x00CE62DFC32D8B1E());
	func_245(&uVar0, unk_0x3E15607264E063C3());
	func_244(&uVar0, unk_0xA2C54D866C588926());
	func_243(&uVar0, unk_0x35E06151CD8A2DD1());
	func_242(&uVar0, unk_0x4C625096668FC49E());
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
	if (unk_0x94E72F17611BCD3C(Global_97358.f_28192.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_250(int iParam0)
{
	int iVar0;
	
	if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
	{
		if (unk_0x746960881FB19A89(unk_0x9F92518438215DD0()))
		{
			if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
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
						if (((((((((((((((((!unk_0x6C08E4B26051504F(unk_0xCFC72E446B0B3AD7()) || unk_0xFAF3D214E00907D8(unk_0x9F92518438215DD0())) || unk_0x11CF47CA7B00BE4F(unk_0x9F92518438215DD0())) || unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0())) || unk_0x6B6534ADCC502CF1(unk_0x9F92518438215DD0())) || unk_0x6BD7C167138FCD4C(unk_0xCFC72E446B0B3AD7(), 1)) || unk_0x29F9C49274370985(unk_0xCFC72E446B0B3AD7())) || unk_0x5D1AEC61B1517F38(unk_0x9F92518438215DD0(), 0)) || func_258()) || Global_96405) || Global_24446) || func_257()) || func_14(8, -1)) || func_256()) || func_255()) || func_254()) || func_253()) || Global_97358.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x6BD7C167138FCD4C(unk_0xCFC72E446B0B3AD7(), 1) || func_258()) || Global_24446) || func_257()) || func_14(8, -1)) || func_254()) || func_256()) || func_255()) || func_253()) || Global_97358.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x6C08E4B26051504F(unk_0xCFC72E446B0B3AD7()) || unk_0xFAF3D214E00907D8(unk_0x9F92518438215DD0())) || unk_0x11CF47CA7B00BE4F(unk_0x9F92518438215DD0())) || unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0())) || unk_0x6B6534ADCC502CF1(unk_0x9F92518438215DD0())) || unk_0x6BD7C167138FCD4C(unk_0xCFC72E446B0B3AD7(), 1)) || unk_0x29F9C49274370985(unk_0xCFC72E446B0B3AD7())) || unk_0x5D1AEC61B1517F38(unk_0x9F92518438215DD0(), 0)) || func_258()) || Global_96405) || Global_24446) || func_257()) || func_14(8, -1)) || func_254()) || func_256()) || func_255()) || func_253()) || Global_97358.f_5944.f_919[iVar0] == 5) || Global_35460 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0()) || unk_0x6B6534ADCC502CF1(unk_0x9F92518438215DD0())) || unk_0x6BD7C167138FCD4C(unk_0xCFC72E446B0B3AD7(), 1)) || unk_0x5D1AEC61B1517F38(unk_0x9F92518438215DD0(), 0)) || func_258()) || Global_96405) || Global_24446) || func_257()) || func_14(8, -1)) || func_256()) || func_255()) || func_253()) || Global_97358.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_258() || unk_0xD092BBE40A1C72AA(unk_0xCFC72E446B0B3AD7()) > 0) || func_14(8, -1)) || func_253()) || func_252()) || Global_97358.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_14(8, -1) || func_256()) || func_255()) || func_252()) || func_251())
						{
							return 0;
						}
						if ((unk_0x2D8FCFBC4E01FF7C() && unk_0x07A396B1A4E45F2E() != 3) && unk_0x3EFE2A7CA77DFD27() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x746960881FB19A89(unk_0x9F92518438215DD0()))
						{
							if ((((((((((((((unk_0x5D1AEC61B1517F38(unk_0x9F92518438215DD0(), 0) || unk_0xD092BBE40A1C72AA(unk_0xCFC72E446B0B3AD7()) > 0) || unk_0xFAF3D214E00907D8(unk_0x9F92518438215DD0())) || unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0())) || unk_0x6B6534ADCC502CF1(unk_0x9F92518438215DD0())) || unk_0x6BD7C167138FCD4C(unk_0xCFC72E446B0B3AD7(), 1)) || unk_0x29F9C49274370985(unk_0xCFC72E446B0B3AD7())) || func_258()) || Global_24446) || func_257()) || func_14(8, -1)) || func_255()) || func_254()) || func_253()) || Global_97358.f_5944.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x5D1AEC61B1517F38(unk_0x9F92518438215DD0(), 0) || !unk_0x1C7932D7B27409A6(unk_0xCFC72E446B0B3AD7())) || !unk_0x6C08E4B26051504F(unk_0xCFC72E446B0B3AD7())) || !unk_0x9685D9855970A029()) || unk_0xFAF3D214E00907D8(unk_0x9F92518438215DD0())) || unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0())) || unk_0x6B6534ADCC502CF1(unk_0x9F92518438215DD0())) || unk_0x6BD7C167138FCD4C(unk_0xCFC72E446B0B3AD7(), 1)) || func_258()) || func_255()) || Global_96405) || Global_24446) || func_257()) || Global_35957) || func_14(8, -1)) || func_254()) || func_252()) || func_253()) || Global_97358.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x5D1AEC61B1517F38(unk_0x9F92518438215DD0(), 0) || !unk_0x1C7932D7B27409A6(unk_0xCFC72E446B0B3AD7())) || !unk_0x6C08E4B26051504F(unk_0xCFC72E446B0B3AD7())) || !unk_0x9685D9855970A029()) || unk_0x99A27D5F9B887E5F(unk_0xCFC72E446B0B3AD7(), 0)) || unk_0xFAF3D214E00907D8(unk_0x9F92518438215DD0())) || unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1)) || unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0())) || unk_0x6B6534ADCC502CF1(unk_0x9F92518438215DD0())) || unk_0xC8399522CF774929(unk_0x9F92518438215DD0())) || unk_0x6BD7C167138FCD4C(unk_0xCFC72E446B0B3AD7(), 1)) || unk_0x29F9C49274370985(unk_0xCFC72E446B0B3AD7())) || func_258()) || Global_96405) || Global_24446) || func_257()) || func_14(8, -1)) || func_254()) || func_252()) || func_256()) || func_255()) || func_253())
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
	return Global_90001.f_1;
}

int func_252()
{
	if (Global_87289 != -1)
	{
		return unk_0x94E72F17611BCD3C(Global_81155[Global_87289 /*34*/].f_15, 13);
	}
	return 0;
}

int func_253()
{
	if (unk_0x7B47A371E2D93C2C(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_254()
{
	if (Global_68505)
	{
		return 1;
	}
	else if (Global_54744 && !Global_54750)
	{
		return 1;
	}
	return 0;
}

bool func_255()
{
	return Global_90014.f_291 > 0;
}

bool func_256()
{
	return Global_90014.f_290 > 0;
}

var func_257()
{
	return Global_1315900;
}

int func_258()
{
	if (!unk_0x4B69FB3A5B09A1BA())
	{
		return Global_87845.f_44 == 1;
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
	return Global_97358.f_5944.f_919[iParam0];
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
		bVar1 = unk_0x94E72F17611BCD3C(Global_97358.f_28192, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0x94E72F17611BCD3C(Global_97358.f_28192.f_1, iVar0);
	}
	return bVar1;
}

int func_264()
{
	var uVar0;
	
	if (Global_24594)
	{
		uVar0 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
		if (unk_0xFC38B241541883D3(uVar0, 0))
		{
			if (!unk_0x3E0478C40AB5B38D(unk_0xB5BBEB12C77EE430(iVar0, 0)))
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
	
	if (unk_0x6979E33C9417DF13())
	{
		if (unk_0x94E72F17611BCD3C(unk_0xF10205C2D28EABD5(866), 0))
		{
			return 1;
		}
	}
	if (!unk_0x4B69FB3A5B09A1BA())
	{
		if (unk_0x94E72F17611BCD3C(Global_97358.f_668.f_683, 7))
		{
			return 1;
		}
	}
	if (Global_131677 == 2)
	{
		return 1;
	}
	if (unk_0x9183AA5076D2BF07())
	{
		if (unk_0x92966E63982CCDA8())
		{
			if (unk_0xDE4ECE183EAC7EDB())
			{
				if (unk_0x6979E33C9417DF13())
				{
					uVar0 = unk_0xF10205C2D28EABD5(866);
					unk_0xEDB9A377CD8B7F03(&uVar0, 0);
					unk_0x69EF975E73B9F02D(uVar0);
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
	unk_0xA2CF1D8BA5F3BD69(-90f, -1488f, -50f, 55f, -1470f, 50f, 1);
	unk_0xED55513146C2792B("WORLD_VEHICLE_DRIVE_SOLO", 1);
	func_280(&uLocal_96, 0);
	unk_0xE29F0AC6C728DD9C("random@escape_paparazzi@standing@");
	unk_0xE29F0AC6C728DD9C("random@paparazzi@pap_anims");
	unk_0xE29F0AC6C728DD9C("random@paparazzi@peek");
	unk_0xE29F0AC6C728DD9C("random@paparazzi@trans");
	unk_0xE29F0AC6C728DD9C("random@paparazzi@wait");
	unk_0xE29F0AC6C728DD9C("veh@std@ps@idle_panic");
	unk_0xE29F0AC6C728DD9C("veh@low@front_ps@idle_panic");
	unk_0xE29F0AC6C728DD9C(sLocal_373);
	unk_0xD1622C66EC50A005();
	if (func_217())
	{
		unk_0xB1E35D138037D248(1f);
	}
	if (unk_0x746960881FB19A89(iLocal_85) && !unk_0x3E0478C40AB5B38D(iLocal_85))
	{
		if (unk_0x6AAACE62C58880BC(iLocal_85))
		{
			unk_0x1FA92C26AB9467D3(iLocal_85);
		}
		if (unk_0x827151D7B70CB853(iLocal_85, 1))
		{
			if (!unk_0x7E4B3ADE683EE23B(iLocal_85))
			{
				unk_0xF811299AF81DB581(iLocal_85, 0, 0);
			}
		}
	}
	func_269(-1);
	unk_0x6B4C4F6AAE56C4E9();
	unk_0x85EEFE5F20EFE4F4(0);
	unk_0x60DAE84D0B296FD2(joaat("vader"), 0);
	unk_0x60DAE84D0B296FD2(joaat("surano"), 0);
	unk_0x60DAE84D0B296FD2(joaat("cavalcade2"), 0);
	unk_0xD643E324F7E6A17B(uLocal_364, 0);
	unk_0xD643E324F7E6A17B(uLocal_365, 0);
	unk_0xD643E324F7E6A17B(uLocal_366, 0);
	unk_0xCF023D488D3EAE4D(Vector(93.8361f, 92.1704f, 246.1673f) + Vector(6f, 6f, 6f), Vector(93.8361f, 92.1704f, 246.1673f) - Vector(6f, 6f, 6f), 1, 1);
	if (Global_24682)
	{
		unk_0xDD74AAB135833BB7("AC_STOP");
	}
	func_268();
	unk_0xE60DEFFB2A853900();
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
		unk_0x50809CE263545545(0, 0);
		Global_97349 = unk_0x17103F66FBB44C3C();
		func_272(30000);
		StringCopy(&cVar0, func_271(Global_97347, 1), 64);
		if (func_95(Global_97347) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_97346, 64);
		}
		unk_0xB87D4A9CC02132A5(&cVar0, Global_97344, (unk_0x17103F66FBB44C3C() - Global_97345), 0);
	}
	else if (unk_0x94E72F17611BCD3C(Global_97354, 0) && Global_97358.f_28192.f_2 < 3)
	{
		unk_0xF76EE56D3E7DAF1B(&Global_97354, 0);
	}
	func_270(&Global_24503);
	Global_97348 = 0;
	func_223(-1);
}

void func_270(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_34875)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_34874 = 0;
	Global_34876 = 0;
	Global_34913 = 15;
	Global_54747 = 0;
	Global_54748 = 0;
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
	Global_35464 = (unk_0x17103F66FBB44C3C() + iParam0);
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
	Global_97358.f_28192.f_43[iParam0] = *uParam1;
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
		if (unk_0x94E72F17611BCD3C((*uParam0)[iVar0 /*2*/], 30))
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
	if (unk_0x94E72F17611BCD3C(uParam0, 30))
	{
		switch (func_211(iParam0))
		{
			case 0:
				unk_0x0880E86251A44B7F(uParam2);
				break;
			
			case 1:
				unk_0xE29F0AC6C728DD9C(sParam1);
				break;
			
			case 2:
				unk_0xB3D0E4FD85A02F35(sParam1);
				break;
			
			case 3:
				unk_0x4B48A2F5324596EE(sParam1);
				break;
			
			case 4:
				unk_0x6AC537DA214AB66E(uParam2, sParam1);
				break;
			
			case 5:
				unk_0x39881B5994C9278A(sParam1);
				break;
			
			case 6:
				unk_0xD1622C66EC50A005();
				break;
			
			case 7:
				unk_0x901BBA88CB2E9BDA(uParam2);
				break;
			
			case 8:
				unk_0x84FBD0BE7CDBEEA2(uParam2, unk_0x94E72F17611BCD3C(iParam0, 26));
				break;
			
			case 9:
				unk_0xC3CD8798C7C83A3D();
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

