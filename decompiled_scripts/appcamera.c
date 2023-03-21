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
	char* sLocal_19[13] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	char* sLocal_33[13] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_47 = 0;
	char* sLocal_48[7] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	bool bLocal_62 = 0;
	bool bLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	struct<3> Local_67 = { 0, 0, 0 } ;
	struct<3> Local_70 = { 0, 0, 0 } ;
	float fLocal_73 = 0f;
	float fLocal_74 = 0f;
	float fLocal_75 = 0f;
	float fLocal_76 = 0f;
	float fLocal_77 = 0f;
	struct<3> Local_78 = { 0, 0, 0 } ;
	struct<3> Local_81 = { 0, 0, 0 } ;
	struct<3> Local_84 = { 0, 0, 0 } ;
	struct<3> Local_87 = { 0, 0, 0 } ;
	struct<3> Local_90 = { 0, 0, 0 } ;
	struct<3> Local_93 = { 0, 0, 0 } ;
	float fLocal_96 = 0f;
	float fLocal_97 = 0f;
	float fLocal_98 = 0f;
	float fLocal_99 = 0f;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	float fLocal_114 = 0f;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	char cLocal_145[16] = "";
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	float fLocal_157 = 0f;
	float fLocal_158 = 0f;
	float fLocal_159 = 0f;
	float fLocal_160 = 0f;
	float fLocal_161 = 0f;
	float fLocal_162 = 0f;
	float fLocal_163 = 0f;
	float fLocal_164 = 0f;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
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
	iLocal_59 = 1;
	bLocal_62 = true;
	bLocal_63 = true;
	fLocal_73 = 0f;
	fLocal_74 = 172f;
	fLocal_77 = 0.7f;
	iLocal_137 = 1200;
	iLocal_138 = 1200;
	iLocal_139 = 166;
	fLocal_157 = 0.5f;
	fLocal_158 = 0.85f;
	fLocal_159 = 0.5f;
	fLocal_160 = -0.25f;
	fLocal_161 = 0.25f;
	fLocal_162 = 0.3f;
	fLocal_163 = 0.3f;
	fLocal_164 = 0.075f;
	unk_0xEE998050210A7287();
	if (unk_0xE7A981467BC975BA() == 0)
	{
		fLocal_77 = 1f;
	}
	else
	{
		fLocal_77 = 0.7f;
	}
	if (!func_141())
	{
		Global_4265867 = 99;
		Global_4265868 = 99;
		iLocal_57 = 99;
	}
	else
	{
		Global_4265867 = 0;
		Global_4265868 = 0;
	}
	sLocal_19[0] = "No_Filter";
	sLocal_19[1] = "phone_cam1";
	sLocal_19[2] = "phone_cam2";
	sLocal_19[3] = "phone_cam3";
	sLocal_19[4] = "phone_cam4";
	sLocal_19[5] = "phone_cam5";
	sLocal_19[6] = "phone_cam6";
	sLocal_19[7] = "phone_cam7";
	sLocal_19[8] = "phone_cam8";
	sLocal_19[9] = "phone_cam9";
	sLocal_19[10] = "phone_cam10";
	sLocal_19[11] = "phone_cam11";
	sLocal_19[12] = "phone_cam12";
	sLocal_33[0] = "No_Border";
	sLocal_33[1] = "frame1";
	sLocal_33[2] = "frame2";
	sLocal_33[3] = "frame3";
	sLocal_33[4] = "frame4";
	sLocal_33[5] = "frame5";
	sLocal_33[6] = "frame6";
	sLocal_33[7] = "frame7";
	sLocal_33[8] = "frame8";
	sLocal_33[9] = "frame9";
	sLocal_33[10] = "frame10";
	sLocal_33[11] = "frame11";
	sLocal_33[12] = "frame12";
	sLocal_48[0] = "No_Expression";
	sLocal_48[1] = "mood_Aiming_1";
	sLocal_48[2] = "mood_Happy_1";
	sLocal_48[3] = "mood_smug_1";
	sLocal_48[4] = "mood_Injured_1";
	sLocal_48[5] = "mood_sulk_1";
	sLocal_48[6] = "mood_Angry_1";
	func_140();
	if (func_139(1, 1, !iLocal_64, 1))
	{
		iLocal_64 = 1;
	}
	func_138();
	iLocal_112 = unk_0x2D524E0AFDB169D5();
	if (Global_14398 == 0)
	{
		fLocal_96 = 0.207f;
		fLocal_97 = 0.158f;
		fLocal_98 = 0.207f;
		fLocal_99 = 0.335f;
	}
	else
	{
		fLocal_96 = 0.24f;
		fLocal_97 = 0.258f;
		fLocal_98 = 0.24f;
		fLocal_99 = 0.435f;
	}
	Global_16789 = 0;
	Global_16790 = 0;
	if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		if (unk_0x772591EF354C2D16(unk_0x18F7BE9ACB7D08F4()))
		{
			Global_16789 = 1;
		}
		if (unk_0xEBE0D797E0110BDE())
		{
			Global_16789 = 1;
		}
		if (unk_0xC4B84EB67F78C1F0(unk_0x9EA0BBD07AFF816B(unk_0x18F7BE9ACB7D08F4()), 0))
		{
			Global_16789 = 1;
		}
		if (unk_0x637828192EF718F7(unk_0x18F7BE9ACB7D08F4(), 78, 1))
		{
			Global_16789 = 1;
		}
		if (unk_0x1EAAFC8E35F1C540(unk_0x18F7BE9ACB7D08F4()))
		{
			Global_16789 = 1;
		}
		if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			if (iLocal_131 == 1)
			{
				Global_16789 = 1;
			}
			uLocal_149 = unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0);
			if ((((unk_0x4F69FBD64CDF125B(uLocal_149) == joaat("rhino") || unk_0x4F69FBD64CDF125B(iLocal_149) == joaat("cutter")) || unk_0x4F69FBD64CDF125B(iLocal_149) == joaat("submersible")) || unk_0x4F69FBD64CDF125B(iLocal_149) == joaat("khanjali")) || (unk_0x4F69FBD64CDF125B(iLocal_149) == joaat("barrage") && unk_0xF8DAA7AB81AFC008(iLocal_149, func_137(unk_0x18F7BE9ACB7D08F4(), 1))))
			{
				Global_16789 = 1;
			}
			else if (unk_0x4983F8C51A0C0AF3(iLocal_149, -1, 0) == unk_0x18F7BE9ACB7D08F4())
			{
				if (unk_0x39B21DBADBAFCF25(iLocal_149) > 0f)
				{
					if (!Global_70852)
					{
						if (!func_136())
						{
							unk_0x3A40A65D5EFEA1B4(unk_0x18F7BE9ACB7D08F4(), iLocal_149, 6, 4000);
						}
					}
				}
			}
		}
	}
	if (Global_70852)
	{
		if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
		{
			unk_0x18CC4D2059027150(unk_0x8CFC7D6E1DA5D304(), 0);
		}
	}
	unk_0x62148293B793073B(&Global_2323, 21);
	func_135(0);
	unk_0xD2A9C3F486236CC5(&Global_2323, 17);
	if (Global_14395 == 0)
	{
		func_134();
	}
	else
	{
		uLocal_140 = unk_0xBD7D7877C82BE42F("camera_gallery");
		uLocal_141 = unk_0xBD7D7877C82BE42F("instructional_buttons");
		while (!unk_0x5C716BBF766E1C70(uLocal_140) || !unk_0x5C716BBF766E1C70(uLocal_141))
		{
			unk_0x4EDE34FBADD967A6(0);
			unk_0x0A4CB1D4A63A7528();
			unk_0x9C7EE7DE7041A3F4(0, 25, 1);
		}
		if (Global_70852)
		{
			iLocal_144 = 2;
		}
		else
		{
			switch (func_133())
			{
				case 0:
					iLocal_144 = 2;
					break;
				
				case 2:
					iLocal_144 = 2;
					break;
				
				case 3:
					iLocal_144 = 2;
					break;
				}
		}
		func_132(uLocal_140, "DISPLAY_VIEW", unk_0xBBDA792448DB5A89(iLocal_144), -1082130432, -1082130432, -1082130432, -1082130432);
		func_131(uLocal_140, "CLOSE_SHUTTER");
		unk_0x76F4FB5EFF5BDED5(Global_14434, "DISPLAY_VIEW");
		unk_0x22DD5585E00B80C3(16);
		unk_0xE2B30EB9B14EEAB2();
	}
	Local_78 = { Global_14413 };
	Local_81 = { Global_14406[Global_14398 /*3*/] };
	Global_16790 = 1;
	iLocal_118 = 1;
	iLocal_119 = 1;
	iLocal_120 = 1;
	iLocal_121 = 1;
	iLocal_122 = 1;
	iLocal_123 = 1;
	iLocal_124 = 0;
	iLocal_125 = 0;
	if (Global_14453.f_1 > 3)
	{
		Global_14453.f_1 = 8;
	}
	if (iLocal_131 == 0)
	{
		unk_0x62148293B793073B(&Global_2325, 3);
	}
	func_129();
	unk_0x31B38BBC4423BEAF(4);
	if (unk_0xB0FEF3B32F7F051B())
	{
	}
	if (Global_1646129.f_133159)
	{
	}
	if (Global_1646129.f_133161 == 1)
	{
		iLocal_156 = 1;
	}
	if (iLocal_156 == 1)
	{
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		unk_0xFCBDBEB257C6D3FB(0, Global_14422);
		unk_0xFCBDBEB257C6D3FB(0, 186);
		unk_0x0A4CB1D4A63A7528();
		unk_0x9C7EE7DE7041A3F4(0, 25, 1);
		unk_0x9C7EE7DE7041A3F4(0, 0, 1);
		if (!Global_104551.f_14021.f_81)
		{
			if (!unk_0xB03A1684359C50A1(Global_4267143, 13))
			{
				if (!unk_0x622E10ED992CEB95())
				{
					if (!unk_0xB03A1684359C50A1(Global_2324, 28))
					{
						if (iLocal_128 && iLocal_131 == 0)
						{
							unk_0xD2A9C3F486236CC5(&Global_4267143, 13);
							Global_104551.f_14021.f_81 = 1;
							func_128("CELL_FOC_HLP", -1);
						}
					}
				}
			}
		}
		if (!unk_0xC83C302702976DCB())
		{
			if (Global_1646129.f_133158 == 0 && Global_1646129.f_133159 == 0)
			{
				unk_0x83B36F3602F99423(15, 0f, -0.0375f);
			}
			unk_0xE05212008FE9A018(7);
			func_127();
			if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
			{
				unk_0xB05E48165A6F6058(unk_0x18F7BE9ACB7D08F4(), 200, 1);
			}
			unk_0x9C7EE7DE7041A3F4(0, 44, 1);
			unk_0x9C7EE7DE7041A3F4(0, 47, 1);
			unk_0x9C7EE7DE7041A3F4(0, 91, 1);
			unk_0x9C7EE7DE7041A3F4(0, 92, 1);
			unk_0x9C7EE7DE7041A3F4(0, 68, 1);
			if (iLocal_150 == 0)
			{
				unk_0xFCBDBEB257C6D3FB(0, Global_14426);
			}
			unk_0xFCBDBEB257C6D3FB(0, Global_14423);
			if (unk_0xEC0ECEF2AF3FDA8D() || unk_0xBC13F084F3B1B544())
			{
				iLocal_130 = 1;
				Global_14453.f_1 = 3;
				unk_0xDF94C6DB72E69D64(0);
			}
			if (unk_0x0F0887D98558C496())
			{
				Global_14453.f_1 = 3;
				unk_0xDF94C6DB72E69D64(0);
			}
			if (unk_0xB03A1684359C50A1(Global_2324, 3))
			{
				Global_14453.f_1 = 3;
				unk_0xDF94C6DB72E69D64(0);
			}
			if (unk_0x44243F2E2F58B8E3())
			{
				if (func_116())
				{
					Global_14453.f_1 = 3;
					unk_0xDF94C6DB72E69D64(0);
				}
			}
			if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
			{
				if (unk_0x0124A4A09C18BD80(unk_0x18F7BE9ACB7D08F4(), 0))
				{
					Global_14453.f_1 = 3;
					unk_0xDF94C6DB72E69D64(0);
				}
				if ((unk_0x637828192EF718F7(unk_0x18F7BE9ACB7D08F4(), 78, 1) || unk_0x869BE9FEE7F5316B(unk_0x8CFC7D6E1DA5D304())) || unk_0xE655C0A22E4886E8(unk_0x8CFC7D6E1DA5D304()))
				{
					if (func_115())
					{
					}
					else
					{
						Global_14453.f_1 = 3;
						unk_0xDF94C6DB72E69D64(0);
					}
				}
				if (unk_0x0B90D19A63676F41(unk_0x18F7BE9ACB7D08F4()) || unk_0xDDA45FDD097F5240(unk_0x18F7BE9ACB7D08F4()))
				{
					if (Global_70852 == 1)
					{
						Global_14453.f_1 = 3;
					}
				}
				if (unk_0xE1F715CDDC50FD7F(unk_0x18F7BE9ACB7D08F4()))
				{
					if (unk_0xEED1A4324E97E6A8(unk_0x18F7BE9ACB7D08F4()) > 0.3f)
					{
						Global_14453.f_1 = 3;
					}
				}
				if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
				{
					func_114();
					iLocal_149 = unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0);
					if (unk_0x39B21DBADBAFCF25(iLocal_149) < 0f)
					{
						func_112(0);
					}
					if (iLocal_115 == 1)
					{
						if (iLocal_116 == 1)
						{
							if (!unk_0x97053ED4CB580A02())
							{
								func_112(0);
							}
						}
						else if (!unk_0x97053ED4CB580A02())
						{
							iLocal_116 = 1;
							unk_0x4EDE34FBADD967A6(0);
							unk_0x0A4CB1D4A63A7528();
						}
					}
				}
				else if (Global_70852 == 0)
				{
					if (unk_0xB03A1684359C50A1(Global_2323, 18))
					{
						func_111();
						if ((Global_14453 == 0 || Global_14453 == 1) || Global_14453 == 2)
						{
							if (!unk_0x9023110A7C5BFF64(unk_0x18F7BE9ACB7D08F4()))
							{
								if (unk_0xA0F074EA9E24102C(unk_0x18F7BE9ACB7D08F4()) == 2)
								{
								}
								else
								{
									Global_14453.f_1 = 3;
									unk_0xDF94C6DB72E69D64(0);
								}
							}
						}
					}
				}
			}
			if (iLocal_142)
			{
				func_110();
			}
			if (Global_14453.f_1 < 4)
			{
			}
			if (iLocal_153 == 0)
			{
				if (iLocal_103 == 0)
				{
					if (iLocal_104 == 0)
					{
						if (iLocal_111 == 0)
						{
							if (Global_14453.f_1 > 3)
							{
								if (iLocal_150)
								{
									func_108();
									if (Global_16794 == 0 && Global_16791 == 6)
									{
										unk_0x02207C8103E68CB0(0, 1);
										unk_0x3D889DC768CF362B();
										iLocal_150 = 0;
										func_107();
										if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
										{
											Local_67 = { unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1) };
										}
										func_106();
										iLocal_109++;
										if (func_141())
										{
											func_132(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
										}
										else
										{
											func_132(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
										}
										iLocal_132 = 0;
										iLocal_133 = 0;
										iLocal_134 = 0;
										iLocal_127 = 0;
										func_101();
									}
									if (Global_16791 == 0)
									{
										iLocal_150 = 0;
										unk_0x3D889DC768CF362B();
										if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
										{
											Local_67 = { unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1) };
										}
										func_100();
										iLocal_132 = 0;
										iLocal_133 = 0;
										iLocal_134 = 0;
										iLocal_127 = 0;
										func_101();
										if (func_141())
										{
											if (Global_4265868 == 0)
											{
												if (!unk_0xB03A1684359C50A1(Global_4267143, 2))
												{
													func_132(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
											}
										}
										else if (!unk_0xB03A1684359C50A1(Global_4267143, 2))
										{
											func_132(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
										}
										func_99();
										func_98(1);
									}
								}
								else if (Global_14453.f_1 != 9)
								{
									if (Global_16790 == 1)
									{
										if (Global_16789 == 0)
										{
											func_97();
										}
									}
									else if ((Global_2931 - Global_2930) > Global_2932)
									{
										if (func_96(2, Global_14421, 0))
										{
											if (func_95() && iLocal_127)
											{
											}
											else if (iLocal_127 == 0)
											{
												unk_0xDF94C6DB72E69D64(0);
												unk_0xEF5B50EACBB40FA0(iLocal_112);
												iLocal_143 = 0;
												if (Global_16789 == 0)
												{
													func_106();
													Global_16789 = 1;
													unk_0x02207C8103E68CB0(0, 1);
													iLocal_128 = 0;
													iLocal_118 = 1;
													iLocal_119 = 1;
													iLocal_120 = 1;
													iLocal_121 = 1;
													iLocal_122 = 1;
													iLocal_123 = 1;
													func_94(0, 0);
													func_98(0);
													iLocal_115 = 0;
													func_93();
													iLocal_142 = 0;
													func_91(0, 1);
													func_132(Global_14434, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
											}
										}
									}
									if (iLocal_101 == 0)
									{
										if (unk_0x622E10ED992CEB95())
										{
											func_90();
											iLocal_101 = 1;
										}
									}
									else if (!unk_0x622E10ED992CEB95())
									{
										func_90();
										iLocal_101 = 0;
									}
									if (iLocal_102 == 0)
									{
										if (unk_0xB03A1684359C50A1(Global_2323, 28))
										{
											func_90();
											iLocal_102 = 1;
										}
									}
									else if (!unk_0xB03A1684359C50A1(Global_2323, 28))
									{
										func_90();
										iLocal_102 = 0;
									}
									if (Global_16789 == 1)
									{
										func_83();
									}
									else if (Global_14453.f_1 > 4)
									{
										if (iLocal_124 == 1 && iLocal_125 == 0)
										{
											func_79();
										}
										if (iLocal_124 == 0 && iLocal_125 == 1)
										{
											func_100();
											if (iLocal_136 == 1 || iLocal_136 == 0)
											{
												if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
												{
													if (!unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
													{
														func_131(uLocal_140, "CLOSE_SHUTTER");
														iLocal_135 = unk_0x5AFB8ED811F05E4D();
														while (unk_0x5AFB8ED811F05E4D() < (iLocal_135 + iLocal_137) && Global_14453.f_1 > 3)
														{
															func_127();
															func_110();
															func_78();
															unk_0x0A4CB1D4A63A7528();
															unk_0x4EDE34FBADD967A6(0);
														}
													}
												}
												if (func_141())
												{
													if (Global_4265868 == 0)
													{
														if (!unk_0xB03A1684359C50A1(Global_4267143, 2))
														{
															func_132(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
														}
													}
												}
												else if (!unk_0xB03A1684359C50A1(Global_4267143, 2))
												{
													func_132(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
												func_110();
												func_127();
												iLocal_132 = 0;
												iLocal_133 = 0;
												iLocal_134 = 0;
												iLocal_127 = 0;
												func_101();
												iLocal_136 = 0;
												func_131(uLocal_140, "OPEN_SHUTTER");
											}
											func_99();
											func_98(1);
											func_77();
										}
									}
									if (iLocal_143 == 1)
									{
										func_74();
									}
									if (iLocal_129)
									{
										if (unk_0xC9D9444186B5A374() > 500)
										{
											iLocal_128 = 1;
											iLocal_129 = 0;
											unk_0xD2A9C3F486236CC5(&Global_2323, 18);
											if (Global_16789 == 0)
											{
												func_91(1, 1);
											}
										}
									}
									if (iLocal_127 == 0)
									{
										if (iLocal_128 && Global_16789 == 0)
										{
											if ((iLocal_130 == 0 && iLocal_125 == 0) && Global_16792 == 0)
											{
												func_10();
											}
										}
										else
										{
											func_78();
										}
									}
									else if (iLocal_124 == 0)
									{
										func_5();
									}
								}
							}
						}
					}
				}
				else
				{
					if (Global_14453.f_1 > 3)
					{
						if (Global_16790 == 1)
						{
							if (Global_16789 == 0)
							{
								func_97();
							}
						}
					}
					func_4();
				}
			}
			else
			{
				if (iLocal_155 == 1)
				{
					unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "CELL_CAM_FW_1", iLocal_152, "CELL_CAM_FW_2", false, -1, "", "", true, 0);
				}
				if (iLocal_155 == 2)
				{
					unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "ERROR_NO_SC_CAMERAPHONE", iLocal_152, "", false, -1, "", "", true, 0);
				}
				if (iLocal_155 == 6)
				{
					unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "SC_ERROR_BANNED", iLocal_152, "", false, -1, "", "", true, 0);
				}
				if (iLocal_155 == 3)
				{
					unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "ERROR_UPDATE_SC_CAMERAPHONE", iLocal_152, "", false, -1, "", "", true, 0);
				}
				if (iLocal_155 == 7)
				{
					if (unk_0x35D499EE14C3D367() || unk_0x929A0C5D6A986B4F())
					{
						unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "CELL_CAM_TEMP_3X", iLocal_152, "", false, -1, "", "", true, 0);
					}
					if (unk_0xC57A05B38A912073() || unk_0x0A8A596EB9C068FA())
					{
						unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "CELL_CAM_TEMP_3P", iLocal_152, "", false, -1, "", "", true, 0);
					}
					if (unk_0xC339C5C5B5E8BC5B())
					{
						unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "CELL_CAM_TEMP_30", iLocal_152, "", false, -1, "", "", true, 0);
					}
				}
				if (iLocal_155 == 4)
				{
					unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "CELL_CAM_CCW_1", iLocal_152, "CELL_CAM_CCW_2", false, -1, "", "", true, 0);
				}
				if (iLocal_155 == 5)
				{
					iVar0 = unk_0x6303BA853B29156F();
					switch (iVar0)
					{
						case -1:
							unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "HUD_AGE_I", iLocal_152, "", false, -1, "", "", true, 0);
							break;
						
						case 0:
							unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "HUD_AGE_P", iLocal_152, "", false, -1, "", "", true, 0);
							break;
						
						case 1:
							unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "HUD_AGE_C", iLocal_152, "", false, -1, "", "", true, 0);
							break;
						
						case 2:
							unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "HUD_AGE_T", iLocal_152, "", false, -1, "", "", true, 0);
							break;
						
						default:
							unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "HUD_AGE_P", iLocal_152, "", false, -1, "", "", true, 0);
							break;
						}
				}
				if (iLocal_155 == 0)
				{
				}
				if (iLocal_155 == 2 || iLocal_155 == 3)
				{
					if (unk_0xFC0C00F9DE2AEC93(2, 202))
					{
						iLocal_153 = 0;
						iLocal_155 = 0;
						func_91(0, 1);
					}
					if (unk_0xFC0C00F9DE2AEC93(2, 201))
					{
						iLocal_154 = 1;
					}
					if (iLocal_154 == 1)
					{
						if (unk_0x3469AD51EA8B9583(2, 201))
						{
							iLocal_153 = 0;
							iLocal_155 = 0;
							func_91(0, 1);
							iLocal_154 = 0;
							unk_0xE32D07449DB4A554("Gallery");
							unk_0x7C8966B150D1B332();
						}
					}
				}
				else if (iLocal_155 == 7)
				{
					if (unk_0x0A8A596EB9C068FA())
					{
						if (unk_0xFC0C00F9DE2AEC93(2, 201))
						{
							iLocal_153 = 0;
							iLocal_155 = 0;
							func_91(0, 1);
							iLocal_111 = 0;
						}
					}
					else if (unk_0xFC0C00F9DE2AEC93(2, 202))
					{
						iLocal_153 = 0;
						iLocal_155 = 0;
						func_91(0, 1);
						iLocal_111 = 0;
					}
					if (!unk_0x0A8A596EB9C068FA())
					{
						if (unk_0xFC0C00F9DE2AEC93(2, Global_14425))
						{
							iLocal_153 = 0;
							iLocal_155 = 0;
							func_91(0, 1);
							if (unk_0xB03A1684359C50A1(Global_2324, 28))
							{
								iLocal_111 = 0;
							}
							else
							{
								iLocal_111 = 2;
							}
							iLocal_107 = unk_0x5AFB8ED811F05E4D();
							unk_0xEA4C0FEA5D3F7821(1);
						}
					}
				}
				else if (unk_0xFC0C00F9DE2AEC93(2, 201))
				{
					iLocal_153 = 0;
					iLocal_155 = 0;
					func_91(0, 1);
				}
			}
		}
		iLocal_108 = unk_0x5AFB8ED811F05E4D();
		if (func_3() || iLocal_130)
		{
			func_1(0);
			func_94(0, 0);
			func_98(0);
			iLocal_115 = 0;
			func_93();
			Global_16789 = 0;
			Global_16790 = 0;
			Global_16792 = 0;
			unk_0xEBE532BFFE618875(&uLocal_140);
			unk_0xEBE532BFFE618875(&uLocal_141);
			unk_0xDF94C6DB72E69D64(0);
			if (Global_14617 == 1)
			{
				unk_0xD2A9C3F486236CC5(&Global_2323, 17);
			}
			else
			{
				unk_0x62148293B793073B(&Global_2323, 17);
			}
			unk_0x02207C8103E68CB0(0, 1);
			unk_0x18CC4D2059027150(unk_0x8CFC7D6E1DA5D304(), 1);
			unk_0x62148293B793073B(&Global_2325, 3);
			unk_0x62148293B793073B(&Global_4267143, 3);
			unk_0xB9C0BA93B50CE575(15);
			Global_16793 = 1;
			unk_0xEF5B50EACBB40FA0(iLocal_112);
			unk_0x906C6BAB7E9BD0FF(iLocal_112);
			unk_0x3D889DC768CF362B();
			func_93();
			unk_0xA6898777F29180B6(0);
			unk_0x9307D3CB12E020EE(0);
			unk_0x132D69A00C3836BE(1f);
			if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
			{
				unk_0x34361AF8000A26ED(unk_0x18F7BE9ACB7D08F4(), "Mood_Normal_1", 0);
				unk_0x22DBDF4F57796736(unk_0x18F7BE9ACB7D08F4());
			}
			if (Global_4265868 > 0 && Global_4265868 < 13)
			{
				unk_0x1D492DC0B64A955F(sLocal_33[Global_4265868]);
			}
			unk_0x62148293B793073B(&Global_2323, 18);
			func_91(0, 1);
			if (func_139(0, 1, iLocal_64, 1))
			{
				iLocal_64 = 0;
			}
			unk_0x810C5D6462DD69E6();
		}
	}
}

void func_1(int iParam0)
{
	if (func_2())
	{
		if (iParam0 == 1)
		{
			unk_0x600C19AFDF8673C9(1);
		}
		else if (Global_14453.f_1 > 3)
		{
			unk_0x600C19AFDF8673C9(0);
		}
	}
}

int func_2()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (Global_70852)
	{
		return 0;
	}
	iVar2 = 0;
	uVar0 = unk_0xEBE31BF57A0E4641();
	iVar1 = unk_0xC345D9AB8BB3AB24(uVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_4267357 || iVar2)
	{
		return 1;
	}
	return 1;
}

int func_3()
{
	if (((Global_14453.f_1 == 1 || Global_14453.f_1 == 3) || Global_14453.f_1 == 0) || Global_14397 == 1)
	{
		Global_14440 = 1;
		return 1;
	}
	return 0;
}

void func_4()
{
	iLocal_106 = unk_0x3EBD6169F986CB7C(0);
	switch (iLocal_106)
	{
		case 0:
			iLocal_103 = 0;
			iLocal_109 = unk_0x9C41B8A5FCCCD20E();
			iLocal_110 = unk_0x20004D600F95103E();
			if (iLocal_104 == 1)
			{
				if (iLocal_127 == 0)
				{
					if (unk_0x5C716BBF766E1C70(uLocal_140))
					{
						if (func_141())
						{
							if (Global_4265868 == 0)
							{
								if (!unk_0xB03A1684359C50A1(Global_4267143, 2))
								{
									func_132(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
								}
							}
							func_132(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
						}
						else
						{
							if (!unk_0xB03A1684359C50A1(Global_4267143, 2))
							{
								func_132(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							func_132(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
						}
					}
				}
				else if (unk_0x5C716BBF766E1C70(uLocal_140))
				{
					func_132(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_132(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
				}
				iLocal_104 = 0;
			}
			unk_0x3D889DC768CF362B();
			break;
		
		case 1:
			if (!unk_0xB6F37A1DE53937FA())
			{
				unk_0x050C400D3EE57D3C("CELL_SPINNER2");
				unk_0x022533BB19481F62(1);
			}
			break;
		
		case 2:
			if (unk_0xB03A1684359C50A1(Global_2324, 28))
			{
				iLocal_103 = 0;
				iLocal_109 = 0;
				iLocal_110 = 0;
			}
			else
			{
				Global_14453.f_1 = 3;
				Global_16793 = 1;
			}
			unk_0x3D889DC768CF362B();
			break;
	}
}

void func_5()
{
	if (func_96(2, Global_14422, 0))
	{
		func_1(0);
		if (unk_0xB03A1684359C50A1(Global_2324, 28))
		{
			unk_0xDF94C6DB72E69D64(0);
			unk_0x5AE11BC36633DE4E(0);
			func_107();
			iLocal_127 = 0;
			if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
			{
				Local_67 = { unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1) };
			}
			func_106();
			iLocal_136 = 1;
		}
		else if (func_9())
		{
			if (unk_0xB03A1684359C50A1(Global_2324, 14))
			{
				func_128("CELL_299", -1);
			}
			else
			{
				func_106();
				func_8();
			}
		}
		else
		{
			iLocal_153 = 1;
			func_91(1, 1);
		}
	}
	if (unk_0xB03A1684359C50A1(Global_2323, 22))
	{
		func_1(0);
		while (unk_0x83666F9FB8FEBD4B() < 2000)
		{
			unk_0x4EDE34FBADD967A6(0);
			func_127();
			unk_0x0A4CB1D4A63A7528();
			func_78();
			func_114();
			func_110();
		}
		unk_0xDF94C6DB72E69D64(0);
		func_107();
		unk_0x5AE11BC36633DE4E(0);
		iLocal_127 = 0;
		if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			Local_67 = { unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1) };
		}
		func_101();
		func_106();
	}
	if (func_96(2, Global_14426, 0))
	{
		func_1(0);
		if (func_95() || unk_0xB03A1684359C50A1(Global_2324, 28))
		{
		}
		else
		{
			unk_0xDF94C6DB72E69D64(0);
			unk_0x5AE11BC36633DE4E(0);
			iLocal_136 = 1;
			func_107();
			iLocal_127 = 0;
			if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
			{
				Local_67 = { unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1) };
			}
			func_106();
		}
	}
	if (unk_0xB03A1684359C50A1(Global_2323, 28))
	{
		if (func_96(2, Global_14425, 0))
		{
			func_1(0);
			unk_0xDF94C6DB72E69D64(0);
			unk_0x00D42A27C496D1E1(0, 0);
			unk_0x4EDE34FBADD967A6(0);
			unk_0x0A4CB1D4A63A7528();
			func_127();
			unk_0x4EDE34FBADD967A6(0);
			unk_0x0A4CB1D4A63A7528();
			func_127();
			unk_0xC88F908174E532C2();
			unk_0x1A6EA7CB62C2BE8F();
			Global_16793 = 1;
			iLocal_143 = 0;
			iLocal_126 = 0;
			func_91(0, 1);
			Global_16789 = 1;
			unk_0x02207C8103E68CB0(0, 1);
			iLocal_128 = 0;
			iLocal_118 = 1;
			iLocal_119 = 1;
			iLocal_120 = 1;
			iLocal_121 = 1;
			iLocal_122 = 1;
			iLocal_123 = 1;
			func_6();
			iLocal_127 = 0;
			if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
			{
				Local_67 = { unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1) };
			}
			func_94(0, 0);
			func_98(0);
			iLocal_115 = 0;
			func_93();
			if (!Global_2512581.f_5854)
			{
				unk_0xD2A9C3F486236CC5(&Global_2323, 9);
			}
			iLocal_142 = 0;
			func_132(Global_14434, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
}

void func_6()
{
	if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		unk_0x929C3CBA660376D5(-1, "Menu_Accept", &Global_14442, 1);
		func_7();
	}
}

void func_7()
{
	if (func_2())
	{
		unk_0xEAF61A994304092C(5);
	}
}

void func_8()
{
	iLocal_150 = 1;
	Global_16794 = 1;
	unk_0x02207C8103E68CB0(0, 1);
}

int func_9()
{
	if (iLocal_107 == iLocal_108)
	{
		if (iLocal_105)
		{
			iLocal_105 = 1;
		}
	}
	if (Global_14453.f_1 < 4)
	{
		return 0;
	}
	if (iLocal_109 == iLocal_110 || iLocal_109 > iLocal_110)
	{
		iLocal_155 = 1;
		iLocal_152 = 2;
		return 0;
	}
	return 1;
}

void func_10()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0xC9FF45E740135482(2))
	{
		iVar0 = 179;
		iVar1 = 21;
	}
	else
	{
		iVar0 = 228;
		iVar1 = 229;
	}
	if (iLocal_131)
	{
		func_69();
		func_65();
		func_64();
		fLocal_73 = unk_0xA9C318D2005E4CB0();
		fLocal_74 = unk_0xADEE81C720272CEB();
		if (iLocal_133 == 0)
		{
			if (unk_0x02EA7C5633421A0F(2, iVar0) && !unk_0x02EA7C5633421A0F(2, iVar1))
			{
				iLocal_133 = 1;
				func_132(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_132(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (unk_0xB03A1684359C50A1(Global_2323, 28))
				{
					func_62(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x305BC30EAC3E9BF4(0, 177, 1), "CELL_281");
					func_62(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x305BC30EAC3E9BF4(2, 179, 1), func_61());
					func_62(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x305BC30EAC3E9BF4(2, 178, 1), "CELL_CAM_SELFIE_2");
				}
				else
				{
					func_62(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x305BC30EAC3E9BF4(0, 176, 1), "CELL_280");
					func_62(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x305BC30EAC3E9BF4(0, 177, 1), "CELL_281");
					func_62(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x305BC30EAC3E9BF4(2, 178, 1), "CELL_CAM_SELFIE_2");
				}
				func_60();
				unk_0x76F4FB5EFF5BDED5(uLocal_141, "SET_MAX_WIDTH");
				unk_0x954263F3D07BEFC2(fLocal_77);
				unk_0xE2B30EB9B14EEAB2();
				func_132(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else if (!unk_0x02EA7C5633421A0F(2, iVar0) || unk_0x02EA7C5633421A0F(2, iVar1))
		{
			iLocal_133 = 0;
			func_101();
		}
		if (iLocal_134 == 0)
		{
			if (unk_0x02EA7C5633421A0F(2, iVar1) && !unk_0x02EA7C5633421A0F(2, iVar0))
			{
				iLocal_134 = 1;
				func_132(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_132(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (unk_0xB03A1684359C50A1(Global_2323, 28))
				{
					func_62(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x305BC30EAC3E9BF4(0, 177, 1), "CELL_281");
					func_62(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x305BC30EAC3E9BF4(2, 179, 1), func_61());
				}
				else
				{
					func_62(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x305BC30EAC3E9BF4(0, 176, 1), "CELL_280");
					func_62(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x305BC30EAC3E9BF4(0, 177, 1), "CELL_281");
				}
				func_59();
				unk_0x76F4FB5EFF5BDED5(uLocal_141, "SET_MAX_WIDTH");
				unk_0x954263F3D07BEFC2(fLocal_77);
				unk_0xE2B30EB9B14EEAB2();
				func_132(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else if (!unk_0x02EA7C5633421A0F(2, iVar1) || unk_0x02EA7C5633421A0F(2, iVar0))
		{
			iLocal_134 = 0;
			func_101();
		}
	}
	else
	{
		unk_0xB156023E2D4E4859(0, 2, 1);
		unk_0xB156023E2D4E4859(0, 1, 1);
	}
	if (unk_0x32085AF1EB302CDD(2))
	{
		func_101();
	}
	func_114();
	if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		unk_0xB05E48165A6F6058(unk_0x18F7BE9ACB7D08F4(), 200, 1);
	}
	if (unk_0xFC0C00F9DE2AEC93(2, 183) && iLocal_156 == 0)
	{
		unk_0x929C3CBA660376D5(-1, "Menu_Navigate", &Global_14442, 1);
		if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			if (!unk_0xA0F074EA9E24102C(unk_0x18F7BE9ACB7D08F4()) == 2)
			{
				if (unk_0xB03A1684359C50A1(Global_4267143, 2))
				{
					unk_0x62148293B793073B(&Global_4267143, 2);
					if (!unk_0xB03A1684359C50A1(Global_4267143, 2))
					{
						func_132(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					}
				}
				else
				{
					unk_0xD2A9C3F486236CC5(&Global_4267143, 2);
					func_132(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
		}
	}
	if (iLocal_131)
	{
		if (iLocal_132 == 1)
		{
			iLocal_132 = 0;
			unk_0x76F4FB5EFF5BDED5(uLocal_140, "SET_FOCUS_LOCK");
			unk_0xD6F1BD29497A51C8(0);
			func_58("CELL_FOCUS");
			unk_0xD6F1BD29497A51C8(1);
			unk_0xE2B30EB9B14EEAB2();
		}
		if (!func_57(14))
		{
			if (unk_0xB03A1684359C50A1(Global_4267143, 10))
			{
				if ((Global_70852 == 0 && unk_0xE7FAF8E78F7D3A73(joaat("pi_menu")) > 0) && func_56())
				{
					unk_0x76F4FB5EFF5BDED5(uLocal_140, "SET_FOCUS_LOCK");
					unk_0xD6F1BD29497A51C8(1);
					unk_0x0ECBA72FAFCEBA59("CELL_ACTTL");
					unk_0xB4179F7E88F4C4BF(unk_0xE883B8F5FA6A04DA(&Global_4268059));
					unk_0xC30401186AC91B01();
					unk_0xD6F1BD29497A51C8(0);
					unk_0xE2B30EB9B14EEAB2();
					unk_0x62148293B793073B(&Global_4267143, 10);
				}
			}
		}
		else if (unk_0xB03A1684359C50A1(Global_4267143, 10))
		{
			unk_0x62148293B793073B(&Global_4267143, 10);
		}
		iLocal_66 = unk_0x5AFB8ED811F05E4D();
		if ((iLocal_66 - iLocal_65) > 1500)
		{
			if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
			{
				Local_70 = { unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1) };
				if (unk_0x15EE504466B7BBD3(Local_70, Local_67, 1) > 5f)
				{
					Global_14453.f_1 = 3;
					unk_0xDF94C6DB72E69D64(0);
				}
				iLocal_65 = unk_0x5AFB8ED811F05E4D();
			}
		}
	}
	else if (iLocal_132)
	{
		if (!unk_0x02EA7C5633421A0F(0, 182))
		{
			unk_0x929C3CBA660376D5(-1, "Menu_Navigate", &Global_14442, 1);
			iLocal_132 = 0;
			unk_0x76F4FB5EFF5BDED5(uLocal_140, "SET_FOCUS_LOCK");
			unk_0xD6F1BD29497A51C8(0);
			func_58("CELL_FOCUS");
			unk_0xD6F1BD29497A51C8(1);
			unk_0xE2B30EB9B14EEAB2();
		}
	}
	else if (unk_0x02EA7C5633421A0F(0, 182))
	{
		unk_0x929C3CBA660376D5(-1, "Menu_Navigate", &Global_14442, 1);
		iLocal_132 = 1;
		if (!func_57(14))
		{
			unk_0x76F4FB5EFF5BDED5(uLocal_140, "SET_FOCUS_LOCK");
			unk_0xD6F1BD29497A51C8(1);
			func_58("CELL_FOCUS");
			unk_0xD6F1BD29497A51C8(1);
			unk_0xE2B30EB9B14EEAB2();
		}
	}
	if (func_141())
	{
		if (unk_0xFC0C00F9DE2AEC93(2, 186) && iLocal_156 == 0)
		{
			if (iLocal_131)
			{
				iLocal_57++;
				if (iLocal_57 > 0 && iLocal_57 < 7)
				{
					if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
					{
						unk_0x929C3CBA660376D5(-1, "Menu_Navigate", &Global_14442, 1);
						unk_0x34361AF8000A26ED(unk_0x18F7BE9ACB7D08F4(), "Mood_Normal_1", 0);
						unk_0x22DBDF4F57796736(unk_0x18F7BE9ACB7D08F4());
						if (Global_14453 == 0)
						{
							iVar4 = 0;
							iVar2 = unk_0x62B4434F66D8AEB5(unk_0x18F7BE9ACB7D08F4(), 0);
							if (iVar2 == 20 || iVar2 == 14)
							{
								iVar4 = 1;
							}
							iVar3 = unk_0x62B4434F66D8AEB5(unk_0x18F7BE9ACB7D08F4(), 1);
							if (iVar3 != -1)
							{
								iVar4 = 1;
							}
							if (iVar4 == 1)
							{
								if ((((iLocal_57 == 2 || iLocal_57 == 3) || iLocal_57 == 4) || iLocal_57 == 8) || iLocal_57 == 9)
								{
									if (iVar2 == -1 && iVar3 > -1)
									{
										if (iLocal_57 == 3)
										{
											unk_0x34361AF8000A26ED(unk_0x18F7BE9ACB7D08F4(), sLocal_48[iLocal_57], 0);
										}
									}
								}
								else
								{
									unk_0x34361AF8000A26ED(unk_0x18F7BE9ACB7D08F4(), sLocal_48[iLocal_57], 0);
								}
							}
							else
							{
								unk_0x34361AF8000A26ED(unk_0x18F7BE9ACB7D08F4(), sLocal_48[iLocal_57], 0);
							}
						}
						else
						{
							unk_0x34361AF8000A26ED(unk_0x18F7BE9ACB7D08F4(), sLocal_48[iLocal_57], 0);
						}
					}
				}
				if (iLocal_57 == 7 || iLocal_57 > 7)
				{
					iLocal_57 = 0;
				}
				if (iLocal_57 == 0)
				{
					if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
					{
						unk_0x34361AF8000A26ED(unk_0x18F7BE9ACB7D08F4(), "Mood_Normal_1", 0);
						unk_0x22DBDF4F57796736(unk_0x18F7BE9ACB7D08F4());
						unk_0x929C3CBA660376D5(-1, "Menu_Navigate", &Global_14442, 1);
					}
				}
			}
		}
		if (unk_0xFC0C00F9DE2AEC93(2, 185) && iLocal_156 == 0)
		{
			if (iLocal_131)
			{
				if (bLocal_62 == 1)
				{
					unk_0x929C3CBA660376D5(-1, "Menu_Navigate", &Global_14442, 1);
					if (iLocal_61 == 0)
					{
						iLocal_61 = 1;
						iLocal_60 = 1;
						if (unk_0x9D39145AD645E383(sLocal_19[Global_4265867], "phone_cam12DUMMY"))
						{
						}
						else
						{
							unk_0xA6898777F29180B6(1);
							unk_0x9307D3CB12E020EE(1);
						}
					}
					else
					{
						iLocal_61 = 0;
						iLocal_60 = 0;
						unk_0xA6898777F29180B6(0);
						unk_0x9307D3CB12E020EE(0);
					}
				}
			}
			else if (bLocal_63 == 1)
			{
				if (iLocal_60 == 0)
				{
					iLocal_60 = 1;
					iLocal_61 = 1;
					unk_0xA6898777F29180B6(1);
					unk_0x9307D3CB12E020EE(1);
				}
				else
				{
					iLocal_60 = 0;
					iLocal_61 = 0;
					unk_0xA6898777F29180B6(0);
					unk_0x9307D3CB12E020EE(0);
				}
			}
		}
	}
	if (iLocal_59 == 1)
	{
		if (unk_0xFC0C00F9DE2AEC93(0, 172) && iLocal_156 == 0)
		{
			if (func_141())
			{
				Global_4265868++;
				unk_0x929C3CBA660376D5(-1, "Menu_Navigate", &Global_14442, 1);
			}
			if (Global_4265868 == 13)
			{
				func_98(0);
				unk_0x132D69A00C3836BE(1f);
				unk_0x1D492DC0B64A955F(sLocal_33[(Global_4265868 - 1)]);
				Global_4265868 = 0;
				func_55();
				if (iLocal_47 == 1)
				{
					unk_0x62148293B793073B(&Global_4267143, 2);
					iLocal_47 = 0;
					func_132(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
			if (Global_4265868 > 0 && Global_4265868 < 13)
			{
				iLocal_59 = 0;
				iLocal_58 = 0;
				unk_0x1E7BE791ACBDDC05(sLocal_33[Global_4265868], 0);
			}
		}
	}
	if (Global_4265868 > 0)
	{
		if (iLocal_59 == 0)
		{
			if (unk_0x1865CC0DAB5F6A86(sLocal_33[Global_4265868]))
			{
				iLocal_58 = 1;
				iLocal_59 = 1;
				if (!unk_0x52598E4DDEF81D6E())
				{
					func_98(1);
				}
				if (iLocal_47 == 0)
				{
					if (!unk_0xB03A1684359C50A1(Global_4267143, 2))
					{
						iLocal_47 = 1;
					}
				}
				unk_0xD2A9C3F486236CC5(&Global_4267143, 2);
				func_132(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				unk_0x132D69A00C3836BE(0.25f);
				unk_0xE7E84151A624209B(sLocal_33[Global_4265868], 0);
			}
		}
		if (iLocal_58 == 1)
		{
			if (Global_4265868 == 1 || Global_4265868 == 3)
			{
			}
			if (Global_4265868 == 2 || Global_4265868 == 4)
			{
			}
		}
	}
	if (unk_0xFC0C00F9DE2AEC93(0, 173) && iLocal_156 == 0)
	{
		if (func_141())
		{
			func_93();
			Global_4265867++;
			unk_0x929C3CBA660376D5(-1, "Menu_Navigate", &Global_14442, 1);
		}
		if (Global_4265867 == 13)
		{
			Global_4265867 = 0;
		}
		if (Global_4265867 == 0)
		{
			if (func_141())
			{
				func_93();
			}
		}
		else
		{
			func_99();
		}
		func_54();
	}
	if (unk_0x3199F4F904C324F9(0, 184) && iLocal_156 == 0)
	{
		if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			if (!unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0) && !unk_0xA0F074EA9E24102C(unk_0x18F7BE9ACB7D08F4()) == 2)
			{
				Local_67 = { unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1) };
				unk_0x929C3CBA660376D5(-1, "Menu_Navigate", &Global_14442, 1);
				func_132(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_131(uLocal_140, "CLOSE_SHUTTER");
				iLocal_135 = unk_0x5AFB8ED811F05E4D();
				while (unk_0x5AFB8ED811F05E4D() < (iLocal_135 + iLocal_139) && Global_14453.f_1 > 3)
				{
					func_127();
					func_110();
					func_78();
					unk_0x0A4CB1D4A63A7528();
					unk_0x4EDE34FBADD967A6(0);
				}
				if (iLocal_131 == 0)
				{
					unk_0xEF5B50EACBB40FA0(iLocal_112);
					iLocal_131 = 1;
					func_53(1);
					func_52();
					unk_0xD2A9C3F486236CC5(&Global_2325, 3);
					iLocal_65 = unk_0x5AFB8ED811F05E4D();
				}
				else
				{
					iLocal_133 = 0;
					iLocal_134 = 0;
					func_53(0);
					iLocal_131 = 0;
					unk_0x62148293B793073B(&Global_2325, 3);
				}
				iLocal_135 = unk_0x5AFB8ED811F05E4D();
				while (unk_0x5AFB8ED811F05E4D() < (iLocal_135 + iLocal_137) && Global_14453.f_1 > 3)
				{
					func_127();
					func_110();
					func_78();
					unk_0x0A4CB1D4A63A7528();
					unk_0x4EDE34FBADD967A6(0);
				}
				func_131(uLocal_140, "OPEN_SHUTTER");
				if (func_141())
				{
					if (Global_4265868 == 0)
					{
						if (!unk_0xB03A1684359C50A1(Global_4267143, 2))
						{
							func_132(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						}
					}
				}
				else if (!unk_0xB03A1684359C50A1(Global_4267143, 2))
				{
					func_132(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_110();
				func_127();
				if (unk_0xB03A1684359C50A1(Global_2323, 28))
				{
					StringCopy(&cLocal_145, "CELL_296", 16);
					func_50();
				}
				else
				{
					StringCopy(&cLocal_145, "CELL_295", 16);
					func_27();
				}
			}
		}
	}
	if (iLocal_131 == 0)
	{
		if (iLocal_113 == 0)
		{
			if (unk_0xFC0C00F9DE2AEC93(0, 40) || unk_0xFC0C00F9DE2AEC93(0, 41))
			{
				fLocal_114 = unk_0xF05287079A0FE944();
				if (fLocal_114 > 1f && fLocal_114 < 4.5f)
				{
					if (unk_0x688DCBE66AEC44C4(iLocal_112))
					{
						unk_0x929C3CBA660376D5(iLocal_112, "Camera_Zoom", &Global_14442, 1);
					}
				}
				else
				{
					unk_0xEF5B50EACBB40FA0(iLocal_112);
				}
				iLocal_113 = 1;
			}
		}
		else if (unk_0x02EA7C5633421A0F(0, 40) || unk_0x02EA7C5633421A0F(0, 41))
		{
			fLocal_114 = unk_0xF05287079A0FE944();
			if (fLocal_114 > 1f && fLocal_114 < 4.5f)
			{
				if (unk_0x688DCBE66AEC44C4(iLocal_112))
				{
					unk_0x929C3CBA660376D5(iLocal_112, "Camera_Zoom", &Global_14442, 1);
				}
			}
			else
			{
				unk_0xEF5B50EACBB40FA0(iLocal_112);
			}
		}
		else
		{
			unk_0xEF5B50EACBB40FA0(iLocal_112);
		}
	}
	if (func_96(2, Global_14422, 0))
	{
		fLocal_75 = unk_0xA9C318D2005E4CB0();
		fLocal_76 = unk_0xADEE81C720272CEB();
		unk_0x00D42A27C496D1E1(0, 0);
		unk_0xD2A9C3F486236CC5(&Global_2323, 21);
		unk_0xEF5B50EACBB40FA0(iLocal_112);
		iLocal_127 = 1;
		func_132(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_132(uLocal_140, "SHOW_REMAINING_PHOTOS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		unk_0x929C3CBA660376D5(-1, "Camera_Shoot", &Global_14442, 1);
		func_131(uLocal_140, "CLOSE_SHUTTER");
		Local_84 = { -90.3f, 0f, 90f };
		unk_0xA4EB4F11347C8C00(Local_84, 0);
		if (!func_141())
		{
			func_93();
		}
		Global_16792 = 1;
		unk_0x02207C8103E68CB0(0, 1);
		while (Global_16791 < 6 && Global_14453.f_1 > 3)
		{
			func_127();
			func_110();
			func_78();
			func_114();
			unk_0x0A4CB1D4A63A7528();
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x50E1313C0E98C567(0, 0);
		if (Global_14395)
		{
			func_1(1);
		}
		iLocal_135 = unk_0x5AFB8ED811F05E4D();
		while (unk_0x5AFB8ED811F05E4D() < (iLocal_135 + iLocal_138) && Global_14453.f_1 > 3)
		{
			func_127();
			func_110();
			func_78();
			unk_0x0A4CB1D4A63A7528();
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xC1B1E9A034A63A62(0);
		func_131(uLocal_140, "OPEN_SHUTTER");
		unk_0x62148293B793073B(&Global_2323, 21);
		func_101();
		if (Global_14453.f_1 > 3)
		{
			if (Global_70852)
			{
				func_20(1083, 1, -1);
				func_19();
				func_16(23, 0);
			}
			else
			{
				switch (func_11())
				{
					case 0:
						unk_0x7D959E9172E2A11E(joaat("sp0_no_photos_taken"), 1f);
						break;
					
					case 1:
						unk_0x7D959E9172E2A11E(joaat("sp1_no_photos_taken"), 1f);
						break;
					
					case 2:
						unk_0x7D959E9172E2A11E(joaat("sp2_no_photos_taken"), 1f);
						break;
				}
				func_19();
			}
			func_98(0);
		}
		func_110();
	}
	if (unk_0xB03A1684359C50A1(Global_2323, 28))
	{
		if (func_96(2, Global_14425, 0))
		{
			unk_0x00D42A27C496D1E1(0, 0);
			unk_0x4EDE34FBADD967A6(0);
			unk_0x0A4CB1D4A63A7528();
			func_127();
			unk_0x4EDE34FBADD967A6(0);
			unk_0x0A4CB1D4A63A7528();
			func_127();
			unk_0xC88F908174E532C2();
			unk_0x1A6EA7CB62C2BE8F();
			Global_16793 = 1;
			iLocal_143 = 0;
			iLocal_126 = 1;
			Global_16789 = 1;
			unk_0x02207C8103E68CB0(0, 1);
			iLocal_128 = 0;
			iLocal_118 = 1;
			iLocal_119 = 1;
			iLocal_120 = 1;
			iLocal_121 = 1;
			iLocal_122 = 1;
			iLocal_123 = 1;
			func_6();
			iLocal_127 = 0;
			if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
			{
				Local_67 = { unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1) };
			}
			func_94(0, 0);
			func_98(0);
			iLocal_115 = 0;
			func_93();
			if (!Global_2512581.f_5854)
			{
				unk_0xD2A9C3F486236CC5(&Global_2323, 9);
			}
			unk_0xDF94C6DB72E69D64(0);
			iLocal_142 = 0;
			func_132(Global_14434, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
}

int func_11()
{
	func_12();
	return Global_104551.f_2353.f_539.f_4301;
}

void func_12()
{
	int iVar0;
	
	if (unk_0x31F12808DC47A9E5(unk_0x18F7BE9ACB7D08F4()))
	{
		if (func_15(Global_104551.f_2353.f_539.f_4301) != unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()))
		{
			iVar0 = func_14(unk_0x18F7BE9ACB7D08F4());
			if (func_13(iVar0) && (!func_57(14) || Global_103502))
			{
				if (Global_104551.f_2353.f_539.f_4301 != iVar0 && func_13(Global_104551.f_2353.f_539.f_4301))
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

bool func_13(int iParam0)
{
	return iParam0 < 3;
}

int func_14(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x31F12808DC47A9E5(iParam0))
	{
		iVar1 = unk_0x4F69FBD64CDF125B(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_15(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_15(int iParam0)
{
	if (func_13(iParam0))
	{
		return Global_104551.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_16(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_18(iParam0, iParam1))
	{
		iVar0 = func_17();
		Global_2456686[iVar0] = iParam0;
	}
}

int func_17()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2456686[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_18(int iParam0, var uParam1)
{
	if (Global_1312842)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312854) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_19()
{
	iLocal_121 = 1;
	iLocal_122 = 1;
	iLocal_123 = 1;
	iLocal_124 = 1;
	iLocal_125 = 0;
	Global_14390 = { Global_14406[Global_14398 /*3*/] };
	func_91(0, 1);
	func_94(0, 0);
	func_98(0);
	iLocal_115 = 0;
	func_93();
	if (!unk_0xB03A1684359C50A1(Global_2324, 28))
	{
		if (unk_0xB0FEF3B32F7F051B() == 0)
		{
			if (unk_0x35D499EE14C3D367())
			{
				if (iLocal_117 == 0)
				{
					iLocal_117 = 1;
				}
			}
		}
	}
}

void func_20(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_24(iParam0, func_25(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_23(iParam0))
	{
		func_22(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_21(iParam0, iVar0, iParam2, 1);
	}
}

void func_21(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2522855[iParam0 /*3*/][func_25(uParam2)];
	if (iVar0 != 0)
	{
		unk_0xD92C8D8AF3C67820(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 784:
			Global_1367820[func_25(uParam2)] = iParam1;
			break;
		
		case 785:
			Global_1367826[func_25(uParam2)] = iParam1;
			break;
		
		case 786:
			Global_1367832[func_25(uParam2)] = iParam1;
			break;
		
		case 787:
			Global_1367838[func_25(uParam2)] = iParam1;
			break;
		
		case 774:
			Global_1367796[func_25(uParam2)] = iParam1;
			break;
		
		case 775:
			Global_1367802[func_25(uParam2)] = iParam1;
			break;
		
		case 776:
			Global_1367808[func_25(uParam2)] = iParam1;
			break;
		
		case 777:
			Global_1367814[func_25(uParam2)] = iParam1;
			break;
		
		case 764:
			Global_1367772[func_25(uParam2)] = iParam1;
			break;
		
		case 765:
			Global_1367778[func_25(uParam2)] = iParam1;
			break;
		
		case 766:
			Global_1367784[func_25(uParam2)] = iParam1;
			break;
		
		case 767:
			Global_1367790[func_25(uParam2)] = iParam1;
			break;
		
		case 754:
			Global_1367844[func_25(uParam2)] = iParam1;
			break;
		
		case 755:
			Global_1367850[func_25(uParam2)] = iParam1;
			break;
		
		case 756:
			Global_1367856[func_25(uParam2)] = iParam1;
			break;
		
		case 757:
			Global_1367862[func_25(uParam2)] = iParam1;
			break;
		
		case 1300:
			Global_1367868[func_25(uParam2)] = iParam1;
			break;
		
		case 636:
			Global_1367874[func_25(uParam2)] = iParam1;
			break;
		
		case 1275:
			Global_1367880[func_25(uParam2)] = iParam1;
			break;
		
		case 1873:
			Global_2548958[0 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 2264:
			Global_2548958[1 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 2918:
			Global_2548958[2 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3047:
			Global_2548958[3 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 7050:
			Global_2549041[func_25(uParam2)] = iParam1;
			break;
		
		case 761:
			Global_1367886[func_25(uParam2)] = iParam1;
			break;
		
		case 762:
			Global_1367892[func_25(uParam2)] = iParam1;
			break;
		
		case 763:
			Global_1367898[func_25(uParam2)] = iParam1;
			break;
		
		case 1233:
			Global_1367904[func_25(uParam2)] = iParam1;
			break;
		
		case 3042:
			Global_2548998[0 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3043:
			Global_2548998[1 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3044:
			Global_2548998[2 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3045:
			Global_2548998[3 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3046:
			Global_2548998[4 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3625:
			Global_2549044[0 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3626:
			Global_2549044[1 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3627:
			Global_2549044[2 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3628:
			Global_2549044[3 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3629:
			Global_2549044[4 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3630:
			Global_2549060[0 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3631:
			Global_2549060[1 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3632:
			Global_2549060[2 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3633:
			Global_2549060[3 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3634:
			Global_2549060[4 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3210:
			Global_2548998[5 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3216:
			Global_2548958[4 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3652:
			Global_2549076[func_25(uParam2)] = iParam1;
			break;
		
		case 3653:
			Global_2549085[func_25(uParam2)] = iParam1;
			break;
		
		case 3654:
			Global_2549079[func_25(uParam2)] = iParam1;
			break;
		
		case 3655:
			Global_2549088[func_25(uParam2)] = iParam1;
			break;
		
		case 3656:
			Global_2549082[func_25(uParam2)] = iParam1;
			break;
		
		case 3657:
			Global_2549091[func_25(uParam2)] = iParam1;
			break;
		
		case 3678:
			Global_2549094[func_25(uParam2)] = iParam1;
			break;
		
		case 3218:
			Global_2548998[6 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3219:
			Global_2548958[5 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2548998[7 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2548958[6 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 4002:
			Global_2548998[8 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 4003:
			Global_2548958[7 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 4005:
			Global_2548998[9 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 4006:
			Global_2548958[8 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 4008:
			Global_2548998[10 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 4009:
			Global_2548958[9 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 4011:
			Global_2548998[11 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 4012:
			Global_2548958[10 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6092:
			Global_2548998[12 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6093:
			Global_2548958[11 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6150:
			Global_2548998[13 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6151:
			Global_2548958[12 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_22(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2522855[iParam0 /*3*/][func_25(uParam2)];
	if (iVar0 != 0)
	{
		unk_0xD92C8D8AF3C67820(iVar0, iParam1, iParam3);
	}
}

int func_23(int iParam0)
{
	if (Global_1367753)
	{
		switch (iParam0)
		{
			case 784:
			case 785:
			case 786:
			case 787:
			case 774:
			case 775:
			case 776:
			case 777:
			case 764:
			case 765:
			case 766:
			case 767:
			case 754:
			case 755:
			case 756:
			case 757:
			case 1300:
			case 636:
			case 1275:
			case 761:
			case 762:
			case 763:
			case 1233:
			case 1873:
			case 2264:
			case 2918:
			case 3047:
			case 7050:
			case 3042:
			case 3043:
			case 3044:
			case 3045:
			case 3046:
			case 3221:
			case 3223:
			case 3625:
			case 3626:
			case 3627:
			case 3628:
			case 3629:
			case 3630:
			case 3631:
			case 3632:
			case 3633:
			case 3634:
			case 3216:
			case 3210:
			case 3652:
			case 3653:
			case 3654:
			case 3655:
			case 3656:
			case 3657:
			case 3678:
			case 3219:
			case 3218:
			case 4003:
			case 4002:
			case 4006:
			case 4005:
			case 4009:
			case 4008:
			case 4012:
			case 4011:
			case 6093:
			case 6092:
			case 6151:
			case 6150:
				return 1;
				break;
			}
	}
	return 0;
}

int func_24(int iParam0, var uParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2522855[iParam0 /*3*/][func_25(uParam1)];
	if (unk_0xD194C635833AC189(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_25(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_26();
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

var func_26()
{
	return Global_1312736;
}

void func_27()
{
	if (iLocal_156 == 1)
	{
		func_49();
		return;
	}
	if (iLocal_133 == 0 && iLocal_134 == 0)
	{
		func_132(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_132(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_62(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x305BC30EAC3E9BF4(0, 177, 1), "CELL_281");
		func_62(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x305BC30EAC3E9BF4(0, 176, 1), "CELL_280");
		if (iLocal_131)
		{
			if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
			{
				if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0) || unk_0xA0F074EA9E24102C(unk_0x18F7BE9ACB7D08F4()) == 2)
				{
					if (unk_0xC9FF45E740135482(2) || unk_0x0A8A596EB9C068FA())
					{
						func_62(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x305BC30EAC3E9BF4(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_62(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x305BC30EAC3E9BF4(0, 184, 1), "CELL_SP_2NP_XB");
					}
				}
				else if ((Global_70852 == 0 && unk_0xE7FAF8E78F7D3A73(joaat("pi_menu")) > 0) && func_56())
				{
					func_47();
				}
				else
				{
					if (unk_0xC9FF45E740135482(2) || unk_0x0A8A596EB9C068FA())
					{
						func_62(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x305BC30EAC3E9BF4(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_62(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x305BC30EAC3E9BF4(0, 184, 1), "CELL_SP_2NP_XB");
					}
					func_62(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x305BC30EAC3E9BF4(2, 183, 1), "CELL_GRID");
					func_62(uLocal_141, "SET_DATA_SLOT", 4f, unk_0x33206AC5E51B4373(0, 1, 1), "CELL_285");
					if (func_141())
					{
						func_46(5f);
						func_45(6f);
						if (func_29(1))
						{
							func_28(7f);
							if (bLocal_62)
							{
								func_62(uLocal_141, "SET_DATA_SLOT", 8f, unk_0x305BC30EAC3E9BF4(2, 185, 1), "CELL_DEPTH");
							}
						}
						else if (bLocal_62)
						{
							func_62(uLocal_141, "SET_DATA_SLOT", 7f, unk_0x305BC30EAC3E9BF4(2, 185, 1), "CELL_DEPTH");
						}
					}
				}
			}
		}
		else if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0) || unk_0xA0F074EA9E24102C(unk_0x18F7BE9ACB7D08F4()) == 2)
			{
				if (!unk_0xA0F074EA9E24102C(unk_0x18F7BE9ACB7D08F4()) == 2)
				{
					func_62(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x33206AC5E51B4373(0, 1, 1), "CELL_285");
					func_62(uLocal_141, "SET_DATA_SLOT", 4f, unk_0x305BC30EAC3E9BF4(2, 183, 1), "CELL_GRID");
					func_62(uLocal_141, "SET_DATA_SLOT", 5f, unk_0x305BC30EAC3E9BF4(0, 39, 1), "CELL_284");
					if (func_141())
					{
						func_46(6f);
						func_45(7f);
						if (bLocal_63)
						{
							func_62(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x305BC30EAC3E9BF4(0, 182, 1), "CELL_FOCUS");
						}
						func_62(uLocal_141, "SET_DATA_SLOT", 8f, unk_0x305BC30EAC3E9BF4(2, 185, 1), "CELL_DEPTH");
					}
				}
				else
				{
					func_62(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x33206AC5E51B4373(0, 1, 1), "CELL_285");
					if (func_141())
					{
						func_46(3f);
						func_45(4f);
						func_62(uLocal_141, "SET_DATA_SLOT", 8f, unk_0x305BC30EAC3E9BF4(2, 185, 1), "CELL_DEPTH");
					}
				}
			}
			else
			{
				if (unk_0xC9FF45E740135482(2) || unk_0x0A8A596EB9C068FA())
				{
					func_62(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x305BC30EAC3E9BF4(0, 184, 1), "CELL_SP_1NP_XB");
				}
				else
				{
					func_62(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x305BC30EAC3E9BF4(0, 184, 1), "CELL_SP_1NP_XB");
				}
				if (!unk_0xA0F074EA9E24102C(unk_0x18F7BE9ACB7D08F4()) == 2)
				{
					func_62(uLocal_141, "SET_DATA_SLOT", 4f, unk_0x305BC30EAC3E9BF4(2, 183, 1), "CELL_GRID");
					func_62(uLocal_141, "SET_DATA_SLOT", 5f, unk_0x33206AC5E51B4373(0, 1, 1), "CELL_285");
					func_62(uLocal_141, "SET_DATA_SLOT", 6f, unk_0x305BC30EAC3E9BF4(0, 39, 1), "CELL_284");
					if (func_141())
					{
						func_46(7f);
						func_45(8f);
						if (bLocal_63)
						{
							func_62(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x305BC30EAC3E9BF4(0, 182, 1), "CELL_FOCUS");
						}
						func_62(uLocal_141, "SET_DATA_SLOT", 9f, unk_0x305BC30EAC3E9BF4(2, 185, 1), "CELL_DEPTH");
					}
				}
				else
				{
					func_62(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x33206AC5E51B4373(0, 1, 1), "CELL_285");
					if (func_141())
					{
						func_46(3f);
						func_45(4f);
						func_62(uLocal_141, "SET_DATA_SLOT", 5f, unk_0x305BC30EAC3E9BF4(2, 185, 1), "CELL_DEPTH");
					}
				}
			}
		}
		unk_0x76F4FB5EFF5BDED5(uLocal_141, "SET_MAX_WIDTH");
		unk_0x954263F3D07BEFC2(fLocal_77);
		unk_0xE2B30EB9B14EEAB2();
		func_132(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_28(float fParam0)
{
	func_62(uLocal_141, "SET_DATA_SLOT", fParam0, unk_0x305BC30EAC3E9BF4(0, 174, 1), "CELL_ACTION");
}

int func_29(int iParam0)
{
	if (unk_0x44243F2E2F58B8E3())
	{
		if (func_44(Global_4194378, Global_4194379))
		{
			if (iParam0 == 0 || !func_30(Global_4194378, Global_4194379, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_30(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	return func_31(unk_0x18F7BE9ACB7D08F4(), iParam0, iParam1, bParam2, bParam3, bParam4);
}

int func_31(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	var uVar0;
	var uVar5;
	var uVar10;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	
	uVar0 = 4;
	uVar5 = 4;
	uVar10 = 5;
	if (iParam1 == 0)
	{
		iVar19 = 3;
	}
	else if (bParam3)
	{
		iVar19 = 1;
	}
	else if (bParam4)
	{
		iVar19 = 2;
	}
	else
	{
		iVar19 = 0;
	}
	func_39(iParam1, iParam2, &uVar0, &uVar5, &uVar10, iVar19, bParam5);
	if (!unk_0x74C2FE037DFC8B4A(iParam0, 0))
	{
		if (unk_0x4F69FBD64CDF125B(iParam0) == joaat("mp_f_freemode_01"))
		{
			iVar16 = func_38(iParam0);
			if (!iVar16 == -1)
			{
				if (func_37(&uVar0, iVar16))
				{
					return 1;
				}
			}
		}
		else
		{
			iVar17 = func_36(iParam0);
			if (!iVar17 == -1)
			{
				if (func_34(&uVar5, iVar17))
				{
					return 1;
				}
			}
		}
		if (unk_0x44243F2E2F58B8E3())
		{
			iVar18 = func_33(iParam0);
			if (!iVar18 == 0)
			{
				if (func_32(&uVar10, iVar18))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_32(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return 0;
	}
	if (unk_0xB03A1684359C50A1((*uParam0)[iVar0], (iParam1 - iVar0 * 32)))
	{
		return 1;
	}
	return 0;
}

var func_33(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x6363507A3F1C0EFE(iParam0, 1);
	return uVar0;
}

bool func_34(var uParam0, int iParam1)
{
	return func_35(uParam0, iParam1);
}

int func_35(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return 0;
	}
	if (unk_0xB03A1684359C50A1((*uParam0)[iVar0], (iParam1 - iVar0 * 32)))
	{
		return 1;
	}
	return 0;
}

var func_36(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x62B4434F66D8AEB5(iParam0, 0);
	return uVar0;
}

bool func_37(var uParam0, int iParam1)
{
	return func_35(uParam0, iParam1);
}

var func_38(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x62B4434F66D8AEB5(iParam0, 0);
	return uVar0;
}

void func_39(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	func_43(uParam4, 91, 1);
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					switch (iParam5)
					{
						case 0:
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							break;
						
						case 1:
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							break;
						
						case 2:
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							break;
					}
					break;
			}
			break;
		
		case 0:
			switch (iParam1)
			{
				case 6:
				case 26:
					if (bParam6)
					{
						func_42(uParam3, 16, 1);
						func_42(uParam3, 48, 1);
						func_42(uParam3, 49, 1);
						func_42(uParam3, 18, 1);
						func_42(uParam3, 50, 1);
						func_42(uParam3, 51, 1);
						func_42(uParam3, 52, 1);
						func_42(uParam3, 53, 1);
						func_42(uParam3, 38, 1);
						func_42(uParam3, 47, 1);
						func_42(uParam3, 111, 1);
						func_42(uParam3, 62, 1);
						func_40(uParam2, 16, 1);
						func_40(uParam2, 47, 1);
						func_40(uParam2, 48, 1);
						func_40(uParam2, 18, 1);
						func_40(uParam2, 37, 1);
						func_40(uParam2, 46, 1);
						func_40(uParam2, 110, 1);
					}
					func_43(uParam4, 3, 1);
					func_43(uParam4, 4, 1);
					func_43(uParam4, 5, 1);
					func_43(uParam4, 6, 1);
					func_43(uParam4, 7, 1);
					func_43(uParam4, 8, 1);
					func_43(uParam4, 9, 1);
					func_43(uParam4, 12, 1);
					func_43(uParam4, 14, 1);
					func_43(uParam4, 15, 1);
					func_43(uParam4, 16, 1);
					func_43(uParam4, 17, 1);
					func_43(uParam4, 18, 1);
					func_43(uParam4, 19, 1);
					func_43(uParam4, 20, 1);
					func_43(uParam4, 59, 1);
					func_43(uParam4, 60, 1);
					func_43(uParam4, 61, 1);
					func_43(uParam4, 62, 1);
					func_43(uParam4, 62, 1);
					func_43(uParam4, 63, 1);
					func_43(uParam4, 64, 1);
					func_43(uParam4, 65, 1);
					func_43(uParam4, 66, 1);
					func_43(uParam4, 67, 1);
					func_43(uParam4, 68, 1);
					func_43(uParam4, 69, 1);
					func_43(uParam4, 70, 1);
					func_43(uParam4, 71, 1);
					func_43(uParam4, 72, 1);
					func_43(uParam4, 21, 1);
					func_43(uParam4, 22, 1);
					func_43(uParam4, 23, 1);
					func_43(uParam4, 24, 1);
					func_43(uParam4, 25, 1);
					func_43(uParam4, 26, 1);
					func_43(uParam4, 36, 1);
					func_43(uParam4, 46, 1);
					func_43(uParam4, 38, 1);
					func_43(uParam4, 28, 1);
					func_43(uParam4, 10, 1);
					func_43(uParam4, 33, 1);
					func_43(uParam4, 92, 1);
					func_43(uParam4, 93, 1);
					func_43(uParam4, 94, 1);
					func_43(uParam4, 96, 1);
					func_43(uParam4, 97, 1);
					func_43(uParam4, 98, 1);
					func_43(uParam4, 100, 1);
					func_43(uParam4, 103, 1);
					func_43(uParam4, 104, 1);
					func_43(uParam4, 105, 1);
					func_43(uParam4, 106, 1);
					func_43(uParam4, 107, 1);
					func_43(uParam4, 108, 1);
					func_43(uParam4, 110, 1);
					func_43(uParam4, 112, 1);
					func_43(uParam4, 115, 1);
					func_43(uParam4, 116, 1);
					break;
				
				case 1:
					if (bParam6)
					{
						func_42(uParam3, 16, 1);
						func_42(uParam3, 48, 1);
						func_42(uParam3, 49, 1);
						func_42(uParam3, 18, 1);
						func_42(uParam3, 50, 1);
						func_42(uParam3, 51, 1);
						func_42(uParam3, 52, 1);
						func_42(uParam3, 53, 1);
						func_42(uParam3, 38, 1);
						func_42(uParam3, 47, 1);
						func_42(uParam3, 111, 1);
						func_42(uParam3, 62, 1);
						func_40(uParam2, 18, 1);
						func_40(uParam2, 49, 1);
						func_40(uParam2, 50, 1);
						func_40(uParam2, 51, 1);
						func_40(uParam2, 52, 1);
						func_40(uParam2, 62, 1);
						func_40(uParam2, 37, 1);
						func_40(uParam2, 46, 1);
						func_40(uParam2, 110, 1);
					}
					func_43(uParam4, 9, 1);
					func_43(uParam4, 12, 1);
					func_43(uParam4, 13, 1);
					func_43(uParam4, 17, 1);
					func_43(uParam4, 18, 1);
					func_43(uParam4, 19, 1);
					func_43(uParam4, 20, 1);
					func_43(uParam4, 59, 1);
					func_43(uParam4, 60, 1);
					func_43(uParam4, 61, 1);
					func_43(uParam4, 62, 1);
					func_43(uParam4, 62, 1);
					func_43(uParam4, 63, 1);
					func_43(uParam4, 64, 1);
					func_43(uParam4, 65, 1);
					func_43(uParam4, 66, 1);
					func_43(uParam4, 67, 1);
					func_43(uParam4, 68, 1);
					func_43(uParam4, 69, 1);
					func_43(uParam4, 70, 1);
					func_43(uParam4, 71, 1);
					func_43(uParam4, 72, 1);
					func_43(uParam4, 21, 1);
					func_43(uParam4, 22, 1);
					func_43(uParam4, 23, 1);
					func_43(uParam4, 24, 1);
					func_43(uParam4, 25, 1);
					func_43(uParam4, 26, 1);
					func_43(uParam4, 36, 1);
					func_43(uParam4, 46, 1);
					func_43(uParam4, 38, 1);
					func_43(uParam4, 29, 1);
					func_43(uParam4, 28, 1);
					func_43(uParam4, 8, 1);
					func_43(uParam4, 10, 1);
					func_43(uParam4, 31, 1);
					func_43(uParam4, 33, 1);
					func_43(uParam4, 34, 1);
					func_43(uParam4, 92, 1);
					func_43(uParam4, 93, 1);
					func_43(uParam4, 94, 1);
					func_43(uParam4, 96, 1);
					func_43(uParam4, 97, 1);
					func_43(uParam4, 98, 1);
					func_43(uParam4, 100, 1);
					func_43(uParam4, 103, 1);
					func_43(uParam4, 104, 1);
					func_43(uParam4, 105, 1);
					func_43(uParam4, 106, 1);
					func_43(uParam4, 107, 1);
					func_43(uParam4, 108, 1);
					break;
				
				case 10:
					func_43(uParam4, 28, 1);
					break;
				
				case 12:
					if (bParam6)
					{
						func_42(uParam3, 3, 1);
						func_42(uParam3, 4, 1);
						func_42(uParam3, 6, 1);
						func_42(uParam3, 10, 1);
						func_42(uParam3, 54, 1);
						func_42(uParam3, 55, 1);
						func_42(uParam3, 56, 1);
						func_42(uParam3, 13, 1);
						func_42(uParam3, 16, 1);
						func_42(uParam3, 48, 1);
						func_42(uParam3, 49, 1);
						func_42(uParam3, 18, 1);
						func_42(uParam3, 50, 1);
						func_42(uParam3, 51, 1);
						func_42(uParam3, 52, 1);
						func_42(uParam3, 53, 1);
						func_42(uParam3, 38, 1);
						func_42(uParam3, 47, 1);
						func_42(uParam3, 111, 1);
						func_42(uParam3, 62, 1);
						func_42(uParam3, 20, 1);
						func_42(uParam3, 26, 1);
						func_42(uParam3, 27, 1);
						func_42(uParam3, 32, 1);
						func_42(uParam3, 33, 1);
						func_42(uParam3, 37, 1);
						func_42(uParam3, 39, 1);
						func_42(uParam3, 106, 1);
						func_42(uParam3, 114, 1);
						func_42(uParam3, 116, 1);
						func_42(uParam3, 117, 1);
						func_42(uParam3, 118, 1);
						func_42(uParam3, 119, 1);
						func_40(uParam2, 3, 1);
						func_40(uParam2, 4, 1);
						func_40(uParam2, 6, 1);
						func_40(uParam2, 8, 1);
						func_40(uParam2, 9, 1);
						func_40(uParam2, 10, 1);
						func_40(uParam2, 53, 1);
						func_40(uParam2, 56, 1);
						func_40(uParam2, 55, 1);
						func_40(uParam2, 13, 1);
						func_40(uParam2, 18, 1);
						func_40(uParam2, 49, 1);
						func_40(uParam2, 50, 1);
						func_40(uParam2, 51, 1);
						func_40(uParam2, 52, 1);
						func_40(uParam2, 62, 1);
						func_40(uParam2, 37, 1);
						func_40(uParam2, 46, 1);
						func_40(uParam2, 110, 1);
						func_40(uParam2, 21, 1);
						func_40(uParam2, 26, 1);
						func_40(uParam2, 27, 1);
						func_40(uParam2, 28, 1);
						func_40(uParam2, 32, 1);
						func_40(uParam2, 36, 1);
						func_40(uParam2, 38, 1);
						func_40(uParam2, 55, 1);
						func_40(uParam2, 14, 1);
						func_40(uParam2, 105, 1);
						func_40(uParam2, 113, 1);
						func_40(uParam2, 114, 1);
						func_40(uParam2, 115, 1);
						func_40(uParam2, 116, 1);
						func_40(uParam2, 117, 1);
					}
					func_43(uParam4, 2, 1);
					func_43(uParam4, 3, 1);
					func_43(uParam4, 4, 1);
					func_43(uParam4, 14, 1);
					func_43(uParam4, 15, 1);
					func_43(uParam4, 16, 1);
					func_43(uParam4, 9, 1);
					func_43(uParam4, 10, 1);
					func_43(uParam4, 12, 1);
					func_43(uParam4, 13, 1);
					func_43(uParam4, 17, 1);
					func_43(uParam4, 18, 1);
					func_43(uParam4, 19, 1);
					func_43(uParam4, 20, 1);
					func_43(uParam4, 59, 1);
					func_43(uParam4, 60, 1);
					func_43(uParam4, 61, 1);
					func_43(uParam4, 62, 1);
					func_43(uParam4, 62, 1);
					func_43(uParam4, 63, 1);
					func_43(uParam4, 64, 1);
					func_43(uParam4, 65, 1);
					func_43(uParam4, 66, 1);
					func_43(uParam4, 67, 1);
					func_43(uParam4, 68, 1);
					func_43(uParam4, 69, 1);
					func_43(uParam4, 70, 1);
					func_43(uParam4, 71, 1);
					func_43(uParam4, 72, 1);
					func_43(uParam4, 21, 1);
					func_43(uParam4, 22, 1);
					func_43(uParam4, 23, 1);
					func_43(uParam4, 24, 1);
					func_43(uParam4, 25, 1);
					func_43(uParam4, 26, 1);
					func_43(uParam4, 36, 1);
					func_43(uParam4, 46, 1);
					func_43(uParam4, 38, 1);
					func_43(uParam4, 29, 1);
					func_43(uParam4, 28, 1);
					func_43(uParam4, 8, 1);
					func_43(uParam4, 31, 1);
					func_43(uParam4, 32, 1);
					func_43(uParam4, 33, 1);
					func_43(uParam4, 34, 1);
					func_43(uParam4, 92, 1);
					func_43(uParam4, 93, 1);
					func_43(uParam4, 94, 1);
					func_43(uParam4, 96, 1);
					func_43(uParam4, 97, 1);
					func_43(uParam4, 98, 1);
					func_43(uParam4, 100, 1);
					func_43(uParam4, 103, 1);
					func_43(uParam4, 104, 1);
					func_43(uParam4, 105, 1);
					func_43(uParam4, 106, 1);
					func_43(uParam4, 107, 1);
					func_43(uParam4, 108, 1);
					func_43(uParam4, 110, 1);
					func_43(uParam4, 112, 1);
					break;
				
				case 15:
					if (bParam6)
					{
						func_42(uParam3, 16, 1);
						func_42(uParam3, 48, 1);
						func_42(uParam3, 49, 1);
						func_42(uParam3, 18, 1);
						func_42(uParam3, 50, 1);
						func_42(uParam3, 51, 1);
						func_42(uParam3, 52, 1);
						func_42(uParam3, 53, 1);
						func_42(uParam3, 38, 1);
						func_42(uParam3, 47, 1);
						func_42(uParam3, 111, 1);
						func_42(uParam3, 62, 1);
						func_40(uParam2, 18, 1);
						func_40(uParam2, 49, 1);
						func_40(uParam2, 50, 1);
						func_40(uParam2, 51, 1);
						func_40(uParam2, 52, 1);
						func_40(uParam2, 62, 1);
						func_40(uParam2, 37, 1);
						func_40(uParam2, 46, 1);
						func_40(uParam2, 110, 1);
						func_40(uParam2, 19, 1);
					}
					func_43(uParam4, 3, 1);
					func_43(uParam4, 6, 1);
					func_43(uParam4, 8, 1);
					func_43(uParam4, 9, 1);
					func_43(uParam4, 10, 1);
					func_43(uParam4, 13, 1);
					func_43(uParam4, 17, 1);
					func_43(uParam4, 18, 1);
					func_43(uParam4, 19, 1);
					func_43(uParam4, 20, 1);
					func_43(uParam4, 59, 1);
					func_43(uParam4, 60, 1);
					func_43(uParam4, 61, 1);
					func_43(uParam4, 62, 1);
					func_43(uParam4, 62, 1);
					func_43(uParam4, 63, 1);
					func_43(uParam4, 64, 1);
					func_43(uParam4, 65, 1);
					func_43(uParam4, 66, 1);
					func_43(uParam4, 67, 1);
					func_43(uParam4, 68, 1);
					func_43(uParam4, 69, 1);
					func_43(uParam4, 70, 1);
					func_43(uParam4, 71, 1);
					func_43(uParam4, 72, 1);
					func_43(uParam4, 21, 1);
					func_43(uParam4, 22, 1);
					func_43(uParam4, 23, 1);
					func_43(uParam4, 24, 1);
					func_43(uParam4, 25, 1);
					func_43(uParam4, 26, 1);
					func_43(uParam4, 36, 1);
					func_43(uParam4, 46, 1);
					func_43(uParam4, 38, 1);
					func_43(uParam4, 29, 1);
					func_43(uParam4, 28, 1);
					func_43(uParam4, 31, 1);
					func_43(uParam4, 32, 1);
					func_43(uParam4, 33, 1);
					func_43(uParam4, 34, 1);
					func_43(uParam4, 92, 1);
					func_43(uParam4, 93, 1);
					func_43(uParam4, 94, 1);
					func_43(uParam4, 96, 1);
					func_43(uParam4, 97, 1);
					func_43(uParam4, 98, 1);
					func_43(uParam4, 100, 1);
					func_43(uParam4, 103, 1);
					func_43(uParam4, 104, 1);
					func_43(uParam4, 105, 1);
					func_43(uParam4, 106, 1);
					func_43(uParam4, 107, 1);
					func_43(uParam4, 108, 1);
					func_43(uParam4, 110, 1);
					func_43(uParam4, 112, 1);
					func_43(uParam4, 115, 1);
					func_43(uParam4, 116, 1);
					break;
				
				case 18:
					if (bParam6)
					{
						func_42(uParam3, 4, 1);
					}
					break;
				
				case 17:
					func_43(uParam4, 9, 1);
					break;
				
				case 19:
					if (bParam6)
					{
						func_42(uParam3, 16, 1);
						func_42(uParam3, 48, 1);
						func_42(uParam3, 49, 1);
						func_42(uParam3, 18, 1);
						func_42(uParam3, 50, 1);
						func_42(uParam3, 51, 1);
						func_42(uParam3, 52, 1);
						func_42(uParam3, 53, 1);
						func_42(uParam3, 38, 1);
						func_42(uParam3, 47, 1);
						func_42(uParam3, 111, 1);
						func_42(uParam3, 62, 1);
						func_40(uParam2, 16, 1);
						func_40(uParam2, 47, 1);
						func_40(uParam2, 48, 1);
						func_40(uParam2, 18, 1);
						func_40(uParam2, 49, 1);
						func_40(uParam2, 50, 1);
						func_40(uParam2, 51, 1);
						func_40(uParam2, 52, 1);
						func_40(uParam2, 62, 1);
						func_40(uParam2, 37, 1);
						func_40(uParam2, 46, 1);
						func_40(uParam2, 110, 1);
					}
					func_43(uParam4, 9, 1);
					func_43(uParam4, 10, 1);
					func_43(uParam4, 18, 1);
					func_43(uParam4, 19, 1);
					func_43(uParam4, 20, 1);
					func_43(uParam4, 59, 1);
					func_43(uParam4, 60, 1);
					func_43(uParam4, 61, 1);
					func_43(uParam4, 62, 1);
					func_43(uParam4, 62, 1);
					func_43(uParam4, 63, 1);
					func_43(uParam4, 64, 1);
					func_43(uParam4, 65, 1);
					func_43(uParam4, 66, 1);
					func_43(uParam4, 67, 1);
					func_43(uParam4, 68, 1);
					func_43(uParam4, 69, 1);
					func_43(uParam4, 70, 1);
					func_43(uParam4, 71, 1);
					func_43(uParam4, 72, 1);
					func_43(uParam4, 21, 1);
					func_43(uParam4, 22, 1);
					func_43(uParam4, 23, 1);
					func_43(uParam4, 24, 1);
					func_43(uParam4, 25, 1);
					func_43(uParam4, 26, 1);
					func_43(uParam4, 36, 1);
					func_43(uParam4, 46, 1);
					func_43(uParam4, 38, 1);
					func_43(uParam4, 29, 1);
					func_43(uParam4, 8, 1);
					func_43(uParam4, 92, 1);
					func_43(uParam4, 93, 1);
					func_43(uParam4, 94, 1);
					func_43(uParam4, 96, 1);
					func_43(uParam4, 97, 1);
					func_43(uParam4, 98, 1);
					func_43(uParam4, 100, 1);
					func_43(uParam4, 103, 1);
					func_43(uParam4, 104, 1);
					func_43(uParam4, 105, 1);
					func_43(uParam4, 106, 1);
					func_43(uParam4, 107, 1);
					func_43(uParam4, 108, 1);
					break;
				
				case 21:
					if (bParam6)
					{
						func_42(uParam3, 3, 1);
						func_42(uParam3, 7, 1);
						func_42(uParam3, 0, 1);
						func_42(uParam3, 12, 1);
						func_42(uParam3, 13, 1);
						func_42(uParam3, 15, 1);
						func_42(uParam3, 16, 1);
						func_42(uParam3, 48, 1);
						func_42(uParam3, 49, 1);
						func_42(uParam3, 17, 1);
						func_42(uParam3, 18, 1);
						func_42(uParam3, 50, 1);
						func_42(uParam3, 51, 1);
						func_42(uParam3, 52, 1);
						func_42(uParam3, 53, 1);
						func_42(uParam3, 38, 1);
						func_42(uParam3, 47, 1);
						func_42(uParam3, 111, 1);
						func_42(uParam3, 62, 1);
						func_42(uParam3, 20, 1);
						func_42(uParam3, 21, 1);
						func_42(uParam3, 25, 1);
						func_42(uParam3, 26, 1);
						func_42(uParam3, 27, 1);
						func_42(uParam3, 30, 1);
						func_42(uParam3, 31, 1);
						func_42(uParam3, 32, 1);
						func_42(uParam3, 33, 1);
						func_42(uParam3, 39, 1);
						func_42(uParam3, 37, 1);
						func_42(uParam3, 55, 1);
						func_40(uParam2, 0, 1);
						func_40(uParam2, 2, 1);
						func_40(uParam2, 3, 1);
						func_40(uParam2, 4, 1);
						func_40(uParam2, 6, 1);
						func_40(uParam2, 7, 1);
						func_40(uParam2, 8, 1);
						func_40(uParam2, 11, 1);
						func_40(uParam2, 13, 1);
						func_40(uParam2, 15, 1);
						func_40(uParam2, 16, 1);
						func_40(uParam2, 47, 1);
						func_40(uParam2, 48, 1);
						func_40(uParam2, 17, 1);
						func_40(uParam2, 18, 1);
						func_40(uParam2, 49, 1);
						func_40(uParam2, 50, 1);
						func_40(uParam2, 51, 1);
						func_40(uParam2, 52, 1);
						func_40(uParam2, 62, 1);
						func_40(uParam2, 37, 1);
						func_40(uParam2, 46, 1);
						func_40(uParam2, 110, 1);
						func_40(uParam2, 19, 1);
						func_40(uParam2, 20, 1);
						func_40(uParam2, 21, 1);
						func_40(uParam2, 22, 1);
						func_40(uParam2, 54, 1);
						func_40(uParam2, 24, 1);
						func_40(uParam2, 26, 1);
						func_40(uParam2, 27, 1);
						func_40(uParam2, 28, 1);
						func_40(uParam2, 30, 1);
						func_40(uParam2, 31, 1);
						func_40(uParam2, 32, 1);
						func_40(uParam2, 38, 1);
						func_40(uParam2, 36, 1);
					}
					func_43(uParam4, 3, 1);
					func_43(uParam4, 3, 1);
					func_43(uParam4, 4, 1);
					func_43(uParam4, 14, 1);
					func_43(uParam4, 15, 1);
					func_43(uParam4, 16, 1);
					func_43(uParam4, 8, 1);
					func_43(uParam4, 9, 1);
					func_43(uParam4, 10, 1);
					func_43(uParam4, 12, 1);
					func_43(uParam4, 13, 1);
					func_43(uParam4, 17, 1);
					func_43(uParam4, 18, 1);
					func_43(uParam4, 19, 1);
					func_43(uParam4, 20, 1);
					func_43(uParam4, 59, 1);
					func_43(uParam4, 60, 1);
					func_43(uParam4, 61, 1);
					func_43(uParam4, 62, 1);
					func_43(uParam4, 62, 1);
					func_43(uParam4, 63, 1);
					func_43(uParam4, 64, 1);
					func_43(uParam4, 65, 1);
					func_43(uParam4, 66, 1);
					func_43(uParam4, 67, 1);
					func_43(uParam4, 68, 1);
					func_43(uParam4, 69, 1);
					func_43(uParam4, 70, 1);
					func_43(uParam4, 71, 1);
					func_43(uParam4, 72, 1);
					func_43(uParam4, 21, 1);
					func_43(uParam4, 22, 1);
					func_43(uParam4, 23, 1);
					func_43(uParam4, 24, 1);
					func_43(uParam4, 25, 1);
					func_43(uParam4, 26, 1);
					func_43(uParam4, 36, 1);
					func_43(uParam4, 46, 1);
					func_43(uParam4, 38, 1);
					func_43(uParam4, 29, 1);
					func_43(uParam4, 28, 1);
					func_43(uParam4, 31, 1);
					func_43(uParam4, 33, 1);
					func_43(uParam4, 34, 1);
					func_43(uParam4, 92, 1);
					func_43(uParam4, 93, 1);
					func_43(uParam4, 94, 1);
					func_43(uParam4, 96, 1);
					func_43(uParam4, 97, 1);
					func_43(uParam4, 98, 1);
					func_43(uParam4, 100, 1);
					func_43(uParam4, 103, 1);
					func_43(uParam4, 104, 1);
					func_43(uParam4, 105, 1);
					func_43(uParam4, 106, 1);
					func_43(uParam4, 107, 1);
					func_43(uParam4, 108, 1);
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 3:
					switch (iParam5)
					{
						case 0:
							func_42(uParam3, 13, 1);
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 2, 1);
							func_40(uParam2, 20, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_43(uParam4, 33, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 31, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 75, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
						
						case 1:
							func_42(uParam3, 4, 1);
							func_42(uParam3, 13, 1);
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 2, 1);
							func_40(uParam2, 20, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_43(uParam4, 28, 1);
							func_43(uParam4, 33, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 31, 1);
							func_43(uParam4, 43, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 75, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
						
						case 2:
							func_42(uParam3, 13, 1);
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 39, 1);
							func_40(uParam2, 2, 1);
							func_40(uParam2, 20, 1);
							func_40(uParam2, 38, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 10, 1);
							func_43(uParam4, 13, 1);
							func_43(uParam4, 19, 1);
							func_43(uParam4, 20, 1);
							func_43(uParam4, 59, 1);
							func_43(uParam4, 60, 1);
							func_43(uParam4, 61, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 63, 1);
							func_43(uParam4, 64, 1);
							func_43(uParam4, 65, 1);
							func_43(uParam4, 66, 1);
							func_43(uParam4, 67, 1);
							func_43(uParam4, 68, 1);
							func_43(uParam4, 69, 1);
							func_43(uParam4, 70, 1);
							func_43(uParam4, 71, 1);
							func_43(uParam4, 72, 1);
							func_43(uParam4, 21, 1);
							func_43(uParam4, 22, 1);
							func_43(uParam4, 23, 1);
							func_43(uParam4, 24, 1);
							func_43(uParam4, 25, 1);
							func_43(uParam4, 26, 1);
							func_43(uParam4, 28, 1);
							func_43(uParam4, 33, 1);
							func_43(uParam4, 31, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 75, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
					}
					break;
				
				case 5:
				case 24:
					switch (iParam5)
					{
						case 0:
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_42(uParam3, 62, 1);
							func_40(uParam2, 16, 1);
							func_40(uParam2, 47, 1);
							func_40(uParam2, 48, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_43(uParam4, 1, 1);
							func_43(uParam4, 2, 1);
							func_43(uParam4, 3, 1);
							func_43(uParam4, 4, 1);
							func_43(uParam4, 5, 1);
							func_43(uParam4, 7, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 9, 1);
							func_43(uParam4, 10, 1);
							func_43(uParam4, 12, 1);
							func_43(uParam4, 13, 1);
							func_43(uParam4, 14, 1);
							func_43(uParam4, 15, 1);
							func_43(uParam4, 16, 1);
							func_43(uParam4, 17, 1);
							func_43(uParam4, 18, 1);
							func_43(uParam4, 19, 1);
							func_43(uParam4, 20, 1);
							func_43(uParam4, 59, 1);
							func_43(uParam4, 60, 1);
							func_43(uParam4, 61, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 63, 1);
							func_43(uParam4, 64, 1);
							func_43(uParam4, 65, 1);
							func_43(uParam4, 66, 1);
							func_43(uParam4, 67, 1);
							func_43(uParam4, 68, 1);
							func_43(uParam4, 69, 1);
							func_43(uParam4, 70, 1);
							func_43(uParam4, 71, 1);
							func_43(uParam4, 72, 1);
							func_43(uParam4, 21, 1);
							func_43(uParam4, 22, 1);
							func_43(uParam4, 23, 1);
							func_43(uParam4, 24, 1);
							func_43(uParam4, 25, 1);
							func_43(uParam4, 26, 1);
							func_43(uParam4, 36, 1);
							func_43(uParam4, 46, 1);
							func_43(uParam4, 38, 1);
							func_43(uParam4, 28, 1);
							func_43(uParam4, 33, 1);
							func_43(uParam4, 43, 1);
							func_43(uParam4, 29, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_43(uParam4, 110, 1);
							func_43(uParam4, 112, 1);
							func_43(uParam4, 115, 1);
							func_43(uParam4, 116, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
						
						case 1:
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 16, 1);
							func_40(uParam2, 47, 1);
							func_40(uParam2, 48, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 9, 1);
							func_43(uParam4, 20, 1);
							func_43(uParam4, 59, 1);
							func_43(uParam4, 60, 1);
							func_43(uParam4, 61, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 63, 1);
							func_43(uParam4, 64, 1);
							func_43(uParam4, 65, 1);
							func_43(uParam4, 66, 1);
							func_43(uParam4, 67, 1);
							func_43(uParam4, 68, 1);
							func_43(uParam4, 69, 1);
							func_43(uParam4, 70, 1);
							func_43(uParam4, 71, 1);
							func_43(uParam4, 72, 1);
							func_43(uParam4, 21, 1);
							func_43(uParam4, 22, 1);
							func_43(uParam4, 23, 1);
							func_43(uParam4, 24, 1);
							func_43(uParam4, 25, 1);
							func_43(uParam4, 26, 1);
							func_43(uParam4, 36, 1);
							func_43(uParam4, 46, 1);
							func_43(uParam4, 38, 1);
							func_43(uParam4, 28, 1);
							func_43(uParam4, 33, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_43(uParam4, 110, 1);
							func_43(uParam4, 112, 1);
							func_43(uParam4, 115, 1);
							func_43(uParam4, 116, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
						
						case 2:
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_43(uParam4, 4, 1);
							func_43(uParam4, 5, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 9, 1);
							func_43(uParam4, 10, 1);
							func_43(uParam4, 12, 1);
							func_43(uParam4, 14, 1);
							func_43(uParam4, 15, 1);
							func_43(uParam4, 16, 1);
							func_43(uParam4, 17, 1);
							func_43(uParam4, 18, 1);
							func_43(uParam4, 19, 1);
							func_43(uParam4, 20, 1);
							func_43(uParam4, 59, 1);
							func_43(uParam4, 60, 1);
							func_43(uParam4, 61, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 63, 1);
							func_43(uParam4, 64, 1);
							func_43(uParam4, 65, 1);
							func_43(uParam4, 66, 1);
							func_43(uParam4, 67, 1);
							func_43(uParam4, 68, 1);
							func_43(uParam4, 69, 1);
							func_43(uParam4, 70, 1);
							func_43(uParam4, 71, 1);
							func_43(uParam4, 72, 1);
							func_43(uParam4, 21, 1);
							func_43(uParam4, 22, 1);
							func_43(uParam4, 23, 1);
							func_43(uParam4, 24, 1);
							func_43(uParam4, 25, 1);
							func_43(uParam4, 26, 1);
							func_43(uParam4, 36, 1);
							func_43(uParam4, 46, 1);
							func_43(uParam4, 38, 1);
							func_43(uParam4, 28, 1);
							func_43(uParam4, 33, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_43(uParam4, 110, 1);
							func_43(uParam4, 112, 1);
							func_43(uParam4, 115, 1);
							func_43(uParam4, 116, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
					}
					break;
				
				case 29:
					switch (iParam5)
					{
						case 0:
							func_42(uParam3, 66, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 77, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_43(uParam4, 124, 1);
							func_43(uParam4, 125, 1);
							func_43(uParam4, 126, 1);
							func_43(uParam4, 127, 1);
							func_43(uParam4, 128, 1);
							func_43(uParam4, 129, 1);
							func_43(uParam4, 130, 1);
							func_43(uParam4, 131, 1);
							break;
						
						case 1:
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_43(uParam4, 9, 1);
							func_43(uParam4, 10, 1);
							func_43(uParam4, 12, 1);
							func_43(uParam4, 17, 1);
							func_43(uParam4, 18, 1);
							func_43(uParam4, 19, 1);
							func_43(uParam4, 20, 1);
							func_43(uParam4, 59, 1);
							func_43(uParam4, 60, 1);
							func_43(uParam4, 61, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 63, 1);
							func_43(uParam4, 64, 1);
							func_43(uParam4, 65, 1);
							func_43(uParam4, 66, 1);
							func_43(uParam4, 67, 1);
							func_43(uParam4, 68, 1);
							func_43(uParam4, 69, 1);
							func_43(uParam4, 70, 1);
							func_43(uParam4, 71, 1);
							func_43(uParam4, 72, 1);
							func_43(uParam4, 21, 1);
							func_43(uParam4, 22, 1);
							func_43(uParam4, 23, 1);
							func_43(uParam4, 24, 1);
							func_43(uParam4, 25, 1);
							func_43(uParam4, 26, 1);
							func_43(uParam4, 36, 1);
							func_43(uParam4, 46, 1);
							func_43(uParam4, 38, 1);
							func_43(uParam4, 29, 1);
							func_43(uParam4, 28, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 31, 1);
							func_43(uParam4, 32, 1);
							func_43(uParam4, 33, 1);
							func_43(uParam4, 34, 1);
							func_43(uParam4, 43, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_43(uParam4, 124, 1);
							func_43(uParam4, 125, 1);
							func_43(uParam4, 126, 1);
							func_43(uParam4, 127, 1);
							func_43(uParam4, 128, 1);
							func_43(uParam4, 129, 1);
							func_43(uParam4, 130, 1);
							func_43(uParam4, 131, 1);
							break;
					}
					break;
				
				case 30:
					func_42(uParam3, 67, 1);
					func_42(uParam3, 68, 1);
					func_42(uParam3, 69, 1);
					func_42(uParam3, 70, 1);
					func_42(uParam3, 71, 1);
					func_42(uParam3, 72, 1);
					func_42(uParam3, 73, 1);
					func_42(uParam3, 74, 1);
					func_42(uParam3, 78, 1);
					func_42(uParam3, 79, 1);
					func_42(uParam3, 80, 1);
					func_42(uParam3, 81, 1);
					func_42(uParam3, 82, 1);
					func_42(uParam3, 91, 1);
					func_42(uParam3, 92, 1);
					func_40(uParam2, 66, 1);
					func_40(uParam2, 67, 1);
					func_40(uParam2, 68, 1);
					func_40(uParam2, 69, 1);
					func_40(uParam2, 70, 1);
					func_40(uParam2, 71, 1);
					func_40(uParam2, 72, 1);
					func_40(uParam2, 73, 1);
					func_40(uParam2, 77, 1);
					func_40(uParam2, 78, 1);
					func_40(uParam2, 79, 1);
					func_40(uParam2, 80, 1);
					func_40(uParam2, 81, 1);
					func_40(uParam2, 90, 1);
					func_40(uParam2, 91, 1);
					func_42(uParam3, 38, 1);
					func_42(uParam3, 47, 1);
					func_42(uParam3, 111, 1);
					func_40(uParam2, 37, 1);
					func_40(uParam2, 46, 1);
					func_40(uParam2, 110, 1);
					func_43(uParam4, 92, 1);
					func_43(uParam4, 93, 1);
					func_43(uParam4, 94, 1);
					func_43(uParam4, 96, 1);
					func_43(uParam4, 97, 1);
					func_43(uParam4, 98, 1);
					func_43(uParam4, 100, 1);
					func_43(uParam4, 103, 1);
					func_43(uParam4, 104, 1);
					func_43(uParam4, 105, 1);
					func_43(uParam4, 106, 1);
					func_43(uParam4, 107, 1);
					func_43(uParam4, 108, 1);
					func_43(uParam4, 124, 1);
					func_43(uParam4, 125, 1);
					func_43(uParam4, 126, 1);
					func_43(uParam4, 127, 1);
					func_43(uParam4, 128, 1);
					func_43(uParam4, 129, 1);
					func_43(uParam4, 130, 1);
					func_43(uParam4, 131, 1);
					break;
				
				case 31:
					func_42(uParam3, 67, 1);
					func_42(uParam3, 68, 1);
					func_42(uParam3, 69, 1);
					func_42(uParam3, 70, 1);
					func_42(uParam3, 71, 1);
					func_42(uParam3, 72, 1);
					func_42(uParam3, 73, 1);
					func_42(uParam3, 74, 1);
					func_42(uParam3, 78, 1);
					func_42(uParam3, 79, 1);
					func_42(uParam3, 80, 1);
					func_42(uParam3, 81, 1);
					func_42(uParam3, 82, 1);
					func_42(uParam3, 91, 1);
					func_42(uParam3, 92, 1);
					func_40(uParam2, 66, 1);
					func_40(uParam2, 67, 1);
					func_40(uParam2, 68, 1);
					func_40(uParam2, 69, 1);
					func_40(uParam2, 70, 1);
					func_40(uParam2, 71, 1);
					func_40(uParam2, 72, 1);
					func_40(uParam2, 73, 1);
					func_40(uParam2, 77, 1);
					func_40(uParam2, 78, 1);
					func_40(uParam2, 79, 1);
					func_40(uParam2, 80, 1);
					func_40(uParam2, 81, 1);
					func_40(uParam2, 90, 1);
					func_40(uParam2, 91, 1);
					func_42(uParam3, 38, 1);
					func_42(uParam3, 47, 1);
					func_42(uParam3, 111, 1);
					func_40(uParam2, 37, 1);
					func_40(uParam2, 46, 1);
					func_40(uParam2, 110, 1);
					func_43(uParam4, 92, 1);
					func_43(uParam4, 93, 1);
					func_43(uParam4, 94, 1);
					func_43(uParam4, 96, 1);
					func_43(uParam4, 97, 1);
					func_43(uParam4, 98, 1);
					func_43(uParam4, 100, 1);
					func_43(uParam4, 103, 1);
					func_43(uParam4, 104, 1);
					func_43(uParam4, 105, 1);
					func_43(uParam4, 106, 1);
					func_43(uParam4, 107, 1);
					func_43(uParam4, 108, 1);
					func_43(uParam4, 124, 1);
					func_43(uParam4, 125, 1);
					func_43(uParam4, 126, 1);
					func_43(uParam4, 127, 1);
					func_43(uParam4, 128, 1);
					func_43(uParam4, 129, 1);
					func_43(uParam4, 130, 1);
					func_43(uParam4, 131, 1);
					break;
				
				case 32:
				case 33:
				case 34:
					switch (iParam5)
					{
						case 0:
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_43(uParam4, 9, 1);
							func_43(uParam4, 10, 1);
							func_43(uParam4, 12, 1);
							func_43(uParam4, 17, 1);
							func_43(uParam4, 18, 1);
							func_43(uParam4, 19, 1);
							func_43(uParam4, 20, 1);
							func_43(uParam4, 59, 1);
							func_43(uParam4, 60, 1);
							func_43(uParam4, 61, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 63, 1);
							func_43(uParam4, 64, 1);
							func_43(uParam4, 65, 1);
							func_43(uParam4, 66, 1);
							func_43(uParam4, 67, 1);
							func_43(uParam4, 68, 1);
							func_43(uParam4, 69, 1);
							func_43(uParam4, 70, 1);
							func_43(uParam4, 71, 1);
							func_43(uParam4, 72, 1);
							func_43(uParam4, 21, 1);
							func_43(uParam4, 22, 1);
							func_43(uParam4, 23, 1);
							func_43(uParam4, 24, 1);
							func_43(uParam4, 25, 1);
							func_43(uParam4, 26, 1);
							func_43(uParam4, 36, 1);
							func_43(uParam4, 46, 1);
							func_43(uParam4, 38, 1);
							func_43(uParam4, 29, 1);
							func_43(uParam4, 28, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 31, 1);
							func_43(uParam4, 32, 1);
							func_43(uParam4, 33, 1);
							func_43(uParam4, 34, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_43(uParam4, 124, 1);
							func_43(uParam4, 125, 1);
							func_43(uParam4, 126, 1);
							func_43(uParam4, 127, 1);
							func_43(uParam4, 128, 1);
							func_43(uParam4, 129, 1);
							func_43(uParam4, 130, 1);
							func_43(uParam4, 131, 1);
							break;
						
						case 1:
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_43(uParam4, 124, 1);
							func_43(uParam4, 125, 1);
							func_43(uParam4, 126, 1);
							func_43(uParam4, 127, 1);
							func_43(uParam4, 128, 1);
							func_43(uParam4, 129, 1);
							func_43(uParam4, 130, 1);
							func_43(uParam4, 131, 1);
							break;
						
						case 2:
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_43(uParam4, 124, 1);
							func_43(uParam4, 125, 1);
							func_43(uParam4, 126, 1);
							func_43(uParam4, 127, 1);
							func_43(uParam4, 128, 1);
							func_43(uParam4, 129, 1);
							func_43(uParam4, 130, 1);
							func_43(uParam4, 131, 1);
							break;
					}
					break;
				
				case 10:
					switch (iParam5)
					{
						case 0:
							func_42(uParam3, 3, 1);
							func_42(uParam3, 4, 1);
							func_42(uParam3, 6, 1);
							func_42(uParam3, 10, 1);
							func_42(uParam3, 54, 1);
							func_42(uParam3, 55, 1);
							func_42(uParam3, 56, 1);
							func_42(uParam3, 13, 1);
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_42(uParam3, 20, 1);
							func_42(uParam3, 26, 1);
							func_42(uParam3, 27, 1);
							func_42(uParam3, 32, 1);
							func_42(uParam3, 33, 1);
							func_42(uParam3, 37, 1);
							func_42(uParam3, 39, 1);
							func_42(uParam3, 55, 1);
							func_42(uParam3, 106, 1);
							func_42(uParam3, 114, 1);
							func_42(uParam3, 116, 1);
							func_42(uParam3, 117, 1);
							func_42(uParam3, 118, 1);
							func_42(uParam3, 119, 1);
							func_40(uParam2, 3, 1);
							func_40(uParam2, 4, 1);
							func_40(uParam2, 6, 1);
							func_40(uParam2, 8, 1);
							func_40(uParam2, 9, 1);
							func_40(uParam2, 10, 1);
							func_40(uParam2, 53, 1);
							func_40(uParam2, 56, 1);
							func_40(uParam2, 55, 1);
							func_40(uParam2, 13, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_40(uParam2, 21, 1);
							func_40(uParam2, 26, 1);
							func_40(uParam2, 27, 1);
							func_40(uParam2, 28, 1);
							func_40(uParam2, 32, 1);
							func_40(uParam2, 36, 1);
							func_40(uParam2, 38, 1);
							func_40(uParam2, 55, 1);
							func_40(uParam2, 14, 1);
							func_40(uParam2, 105, 1);
							func_40(uParam2, 113, 1);
							func_40(uParam2, 114, 1);
							func_40(uParam2, 115, 1);
							func_40(uParam2, 116, 1);
							func_40(uParam2, 117, 1);
							func_43(uParam4, 3, 1);
							func_43(uParam4, 4, 1);
							func_43(uParam4, 14, 1);
							func_43(uParam4, 15, 1);
							func_43(uParam4, 16, 1);
							func_43(uParam4, 9, 1);
							func_43(uParam4, 10, 1);
							func_43(uParam4, 12, 1);
							func_43(uParam4, 13, 1);
							func_43(uParam4, 17, 1);
							func_43(uParam4, 18, 1);
							func_43(uParam4, 19, 1);
							func_43(uParam4, 20, 1);
							func_43(uParam4, 59, 1);
							func_43(uParam4, 60, 1);
							func_43(uParam4, 61, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 63, 1);
							func_43(uParam4, 64, 1);
							func_43(uParam4, 65, 1);
							func_43(uParam4, 66, 1);
							func_43(uParam4, 67, 1);
							func_43(uParam4, 68, 1);
							func_43(uParam4, 69, 1);
							func_43(uParam4, 70, 1);
							func_43(uParam4, 71, 1);
							func_43(uParam4, 72, 1);
							func_43(uParam4, 21, 1);
							func_43(uParam4, 22, 1);
							func_43(uParam4, 23, 1);
							func_43(uParam4, 24, 1);
							func_43(uParam4, 25, 1);
							func_43(uParam4, 26, 1);
							func_43(uParam4, 36, 1);
							func_43(uParam4, 46, 1);
							func_43(uParam4, 38, 1);
							func_43(uParam4, 29, 1);
							func_43(uParam4, 28, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 31, 1);
							func_43(uParam4, 32, 1);
							func_43(uParam4, 33, 1);
							func_43(uParam4, 34, 1);
							func_43(uParam4, 43, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_43(uParam4, 110, 1);
							func_43(uParam4, 112, 1);
							func_42(uParam3, 65, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 75, 1);
							func_42(uParam3, 76, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 64, 1);
							func_40(uParam2, 65, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 75, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							func_43(uParam4, 124, 1);
							func_43(uParam4, 125, 1);
							func_43(uParam4, 126, 1);
							func_43(uParam4, 127, 1);
							func_43(uParam4, 128, 1);
							func_43(uParam4, 129, 1);
							func_43(uParam4, 130, 1);
							func_43(uParam4, 131, 1);
							break;
						
						case 1:
							func_42(uParam3, 3, 1);
							func_42(uParam3, 4, 1);
							func_42(uParam3, 6, 1);
							func_42(uParam3, 13, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_42(uParam3, 19, 1);
							func_42(uParam3, 20, 1);
							func_42(uParam3, 26, 1);
							func_42(uParam3, 27, 1);
							func_42(uParam3, 32, 1);
							func_42(uParam3, 33, 1);
							func_42(uParam3, 37, 1);
							func_42(uParam3, 39, 1);
							func_42(uParam3, 55, 1);
							func_42(uParam3, 106, 1);
							func_42(uParam3, 114, 1);
							func_42(uParam3, 116, 1);
							func_42(uParam3, 117, 1);
							func_42(uParam3, 118, 1);
							func_42(uParam3, 119, 1);
							func_40(uParam2, 3, 1);
							func_40(uParam2, 4, 1);
							func_40(uParam2, 6, 1);
							func_40(uParam2, 8, 1);
							func_40(uParam2, 9, 1);
							func_40(uParam2, 10, 1);
							func_40(uParam2, 53, 1);
							func_40(uParam2, 56, 1);
							func_40(uParam2, 55, 1);
							func_40(uParam2, 11, 1);
							func_40(uParam2, 13, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_40(uParam2, 21, 1);
							func_40(uParam2, 22, 1);
							func_40(uParam2, 54, 1);
							func_40(uParam2, 26, 1);
							func_40(uParam2, 27, 1);
							func_40(uParam2, 28, 1);
							func_40(uParam2, 30, 1);
							func_40(uParam2, 31, 1);
							func_40(uParam2, 32, 1);
							func_40(uParam2, 36, 1);
							func_40(uParam2, 38, 1);
							func_40(uParam2, 55, 1);
							func_40(uParam2, 14, 1);
							func_40(uParam2, 105, 1);
							func_40(uParam2, 113, 1);
							func_40(uParam2, 114, 1);
							func_40(uParam2, 115, 1);
							func_40(uParam2, 116, 1);
							func_40(uParam2, 117, 1);
							func_43(uParam4, 2, 1);
							func_43(uParam4, 3, 1);
							func_43(uParam4, 4, 1);
							func_43(uParam4, 14, 1);
							func_43(uParam4, 15, 1);
							func_43(uParam4, 16, 1);
							func_43(uParam4, 9, 1);
							func_43(uParam4, 10, 1);
							func_43(uParam4, 12, 1);
							func_43(uParam4, 13, 1);
							func_43(uParam4, 17, 1);
							func_43(uParam4, 18, 1);
							func_43(uParam4, 19, 1);
							func_43(uParam4, 20, 1);
							func_43(uParam4, 59, 1);
							func_43(uParam4, 60, 1);
							func_43(uParam4, 61, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 63, 1);
							func_43(uParam4, 64, 1);
							func_43(uParam4, 65, 1);
							func_43(uParam4, 66, 1);
							func_43(uParam4, 67, 1);
							func_43(uParam4, 68, 1);
							func_43(uParam4, 69, 1);
							func_43(uParam4, 70, 1);
							func_43(uParam4, 71, 1);
							func_43(uParam4, 72, 1);
							func_43(uParam4, 21, 1);
							func_43(uParam4, 22, 1);
							func_43(uParam4, 23, 1);
							func_43(uParam4, 24, 1);
							func_43(uParam4, 25, 1);
							func_43(uParam4, 26, 1);
							func_43(uParam4, 36, 1);
							func_43(uParam4, 46, 1);
							func_43(uParam4, 38, 1);
							func_43(uParam4, 29, 1);
							func_43(uParam4, 28, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 31, 1);
							func_43(uParam4, 32, 1);
							func_43(uParam4, 33, 1);
							func_43(uParam4, 34, 1);
							func_43(uParam4, 43, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_43(uParam4, 110, 1);
							func_43(uParam4, 112, 1);
							func_42(uParam3, 65, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 75, 1);
							func_42(uParam3, 76, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 64, 1);
							func_40(uParam2, 65, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 75, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							func_43(uParam4, 124, 1);
							func_43(uParam4, 125, 1);
							func_43(uParam4, 126, 1);
							func_43(uParam4, 127, 1);
							func_43(uParam4, 128, 1);
							func_43(uParam4, 129, 1);
							func_43(uParam4, 130, 1);
							func_43(uParam4, 131, 1);
							break;
						
						case 2:
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_42(uParam3, 39, 1);
							func_42(uParam3, 106, 1);
							func_42(uParam3, 114, 1);
							func_42(uParam3, 116, 1);
							func_42(uParam3, 117, 1);
							func_42(uParam3, 118, 1);
							func_42(uParam3, 119, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_40(uParam2, 38, 1);
							func_40(uParam2, 14, 1);
							func_40(uParam2, 105, 1);
							func_40(uParam2, 113, 1);
							func_40(uParam2, 114, 1);
							func_40(uParam2, 115, 1);
							func_40(uParam2, 116, 1);
							func_40(uParam2, 117, 1);
							func_43(uParam4, 9, 1);
							func_43(uParam4, 10, 1);
							func_43(uParam4, 12, 1);
							func_43(uParam4, 18, 1);
							func_43(uParam4, 19, 1);
							func_43(uParam4, 20, 1);
							func_43(uParam4, 59, 1);
							func_43(uParam4, 60, 1);
							func_43(uParam4, 61, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 63, 1);
							func_43(uParam4, 64, 1);
							func_43(uParam4, 65, 1);
							func_43(uParam4, 66, 1);
							func_43(uParam4, 67, 1);
							func_43(uParam4, 68, 1);
							func_43(uParam4, 69, 1);
							func_43(uParam4, 70, 1);
							func_43(uParam4, 71, 1);
							func_43(uParam4, 72, 1);
							func_43(uParam4, 21, 1);
							func_43(uParam4, 22, 1);
							func_43(uParam4, 23, 1);
							func_43(uParam4, 24, 1);
							func_43(uParam4, 25, 1);
							func_43(uParam4, 26, 1);
							func_43(uParam4, 36, 1);
							func_43(uParam4, 46, 1);
							func_43(uParam4, 38, 1);
							func_43(uParam4, 29, 1);
							func_43(uParam4, 28, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 31, 1);
							func_43(uParam4, 32, 1);
							func_43(uParam4, 33, 1);
							func_43(uParam4, 34, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_43(uParam4, 110, 1);
							func_43(uParam4, 112, 1);
							func_42(uParam3, 65, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 75, 1);
							func_42(uParam3, 76, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 64, 1);
							func_40(uParam2, 65, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 75, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							func_43(uParam4, 124, 1);
							func_43(uParam4, 125, 1);
							func_43(uParam4, 126, 1);
							func_43(uParam4, 127, 1);
							func_43(uParam4, 128, 1);
							func_43(uParam4, 129, 1);
							func_43(uParam4, 130, 1);
							func_43(uParam4, 131, 1);
							break;
					}
					break;
				
				case 13:
					switch (iParam5)
					{
						case 0:
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_40(uParam2, 19, 1);
							func_43(uParam4, 2, 1);
							func_43(uParam4, 3, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 9, 1);
							func_43(uParam4, 10, 1);
							func_43(uParam4, 13, 1);
							func_43(uParam4, 17, 1);
							func_43(uParam4, 18, 1);
							func_43(uParam4, 19, 1);
							func_43(uParam4, 20, 1);
							func_43(uParam4, 59, 1);
							func_43(uParam4, 60, 1);
							func_43(uParam4, 61, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 63, 1);
							func_43(uParam4, 64, 1);
							func_43(uParam4, 65, 1);
							func_43(uParam4, 66, 1);
							func_43(uParam4, 67, 1);
							func_43(uParam4, 68, 1);
							func_43(uParam4, 69, 1);
							func_43(uParam4, 70, 1);
							func_43(uParam4, 71, 1);
							func_43(uParam4, 72, 1);
							func_43(uParam4, 21, 1);
							func_43(uParam4, 22, 1);
							func_43(uParam4, 23, 1);
							func_43(uParam4, 24, 1);
							func_43(uParam4, 25, 1);
							func_43(uParam4, 26, 1);
							func_43(uParam4, 36, 1);
							func_43(uParam4, 46, 1);
							func_43(uParam4, 38, 1);
							func_43(uParam4, 29, 1);
							func_43(uParam4, 28, 1);
							func_43(uParam4, 31, 1);
							func_43(uParam4, 32, 1);
							func_43(uParam4, 33, 1);
							func_43(uParam4, 34, 1);
							func_43(uParam4, 43, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_43(uParam4, 110, 1);
							func_43(uParam4, 112, 1);
							func_43(uParam4, 115, 1);
							func_43(uParam4, 116, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							func_43(uParam4, 124, 1);
							func_43(uParam4, 125, 1);
							func_43(uParam4, 126, 1);
							func_43(uParam4, 127, 1);
							func_43(uParam4, 128, 1);
							func_43(uParam4, 129, 1);
							func_43(uParam4, 130, 1);
							func_43(uParam4, 131, 1);
							break;
						
						case 1:
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_43(uParam4, 2, 1);
							func_43(uParam4, 7, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 9, 1);
							func_43(uParam4, 10, 1);
							func_43(uParam4, 13, 1);
							func_43(uParam4, 17, 1);
							func_43(uParam4, 18, 1);
							func_43(uParam4, 19, 1);
							func_43(uParam4, 20, 1);
							func_43(uParam4, 59, 1);
							func_43(uParam4, 60, 1);
							func_43(uParam4, 61, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 63, 1);
							func_43(uParam4, 64, 1);
							func_43(uParam4, 65, 1);
							func_43(uParam4, 66, 1);
							func_43(uParam4, 67, 1);
							func_43(uParam4, 68, 1);
							func_43(uParam4, 69, 1);
							func_43(uParam4, 70, 1);
							func_43(uParam4, 71, 1);
							func_43(uParam4, 72, 1);
							func_43(uParam4, 21, 1);
							func_43(uParam4, 22, 1);
							func_43(uParam4, 23, 1);
							func_43(uParam4, 24, 1);
							func_43(uParam4, 25, 1);
							func_43(uParam4, 26, 1);
							func_43(uParam4, 36, 1);
							func_43(uParam4, 46, 1);
							func_43(uParam4, 38, 1);
							func_43(uParam4, 29, 1);
							func_43(uParam4, 28, 1);
							func_43(uParam4, 31, 1);
							func_43(uParam4, 32, 1);
							func_43(uParam4, 33, 1);
							func_43(uParam4, 34, 1);
							func_43(uParam4, 43, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_43(uParam4, 110, 1);
							func_43(uParam4, 112, 1);
							func_43(uParam4, 115, 1);
							func_43(uParam4, 116, 1);
							func_43(uParam4, 124, 1);
							func_43(uParam4, 125, 1);
							func_43(uParam4, 126, 1);
							func_43(uParam4, 127, 1);
							func_43(uParam4, 128, 1);
							func_43(uParam4, 129, 1);
							func_43(uParam4, 130, 1);
							func_43(uParam4, 131, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
						
						case 2:
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_43(uParam4, 1, 1);
							func_43(uParam4, 2, 1);
							func_43(uParam4, 3, 1);
							func_43(uParam4, 5, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 9, 1);
							func_43(uParam4, 10, 1);
							func_43(uParam4, 13, 1);
							func_43(uParam4, 17, 1);
							func_43(uParam4, 18, 1);
							func_43(uParam4, 19, 1);
							func_43(uParam4, 20, 1);
							func_43(uParam4, 59, 1);
							func_43(uParam4, 60, 1);
							func_43(uParam4, 61, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 63, 1);
							func_43(uParam4, 64, 1);
							func_43(uParam4, 65, 1);
							func_43(uParam4, 66, 1);
							func_43(uParam4, 67, 1);
							func_43(uParam4, 68, 1);
							func_43(uParam4, 69, 1);
							func_43(uParam4, 70, 1);
							func_43(uParam4, 71, 1);
							func_43(uParam4, 72, 1);
							func_43(uParam4, 21, 1);
							func_43(uParam4, 22, 1);
							func_43(uParam4, 23, 1);
							func_43(uParam4, 24, 1);
							func_43(uParam4, 25, 1);
							func_43(uParam4, 26, 1);
							func_43(uParam4, 36, 1);
							func_43(uParam4, 46, 1);
							func_43(uParam4, 38, 1);
							func_43(uParam4, 29, 1);
							func_43(uParam4, 28, 1);
							func_43(uParam4, 31, 1);
							func_43(uParam4, 32, 1);
							func_43(uParam4, 33, 1);
							func_43(uParam4, 34, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_43(uParam4, 110, 1);
							func_43(uParam4, 112, 1);
							func_43(uParam4, 115, 1);
							func_43(uParam4, 116, 1);
							func_43(uParam4, 124, 1);
							func_43(uParam4, 125, 1);
							func_43(uParam4, 126, 1);
							func_43(uParam4, 127, 1);
							func_43(uParam4, 128, 1);
							func_43(uParam4, 129, 1);
							func_43(uParam4, 130, 1);
							func_43(uParam4, 131, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
					}
					break;
				
				case 16:
					switch (iParam5)
					{
						case 0:
							func_42(uParam3, 4, 1);
							break;
						
						case 1:
							func_43(uParam4, 43, 1);
							break;
						
						case 2:
							break;
					}
					break;
				
				case 23:
					switch (iParam5)
					{
						case 0:
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_43(uParam4, 110, 1);
							func_43(uParam4, 112, 1);
							func_43(uParam4, 124, 1);
							func_43(uParam4, 125, 1);
							func_43(uParam4, 126, 1);
							func_43(uParam4, 127, 1);
							func_43(uParam4, 128, 1);
							func_43(uParam4, 129, 1);
							func_43(uParam4, 130, 1);
							func_43(uParam4, 131, 1);
							break;
						
						case 1:
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_43(uParam4, 110, 1);
							func_43(uParam4, 112, 1);
							func_43(uParam4, 124, 1);
							func_43(uParam4, 125, 1);
							func_43(uParam4, 126, 1);
							func_43(uParam4, 127, 1);
							func_43(uParam4, 128, 1);
							func_43(uParam4, 129, 1);
							func_43(uParam4, 130, 1);
							func_43(uParam4, 131, 1);
							break;
						
						case 2:
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_43(uParam4, 110, 1);
							func_43(uParam4, 112, 1);
							func_43(uParam4, 124, 1);
							func_43(uParam4, 125, 1);
							func_43(uParam4, 126, 1);
							func_43(uParam4, 127, 1);
							func_43(uParam4, 128, 1);
							func_43(uParam4, 129, 1);
							func_43(uParam4, 130, 1);
							func_43(uParam4, 131, 1);
							break;
					}
					break;
				
				case 17:
					switch (iParam5)
					{
						case 0:
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 16, 1);
							func_40(uParam2, 47, 1);
							func_40(uParam2, 48, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_43(uParam4, 1, 1);
							func_43(uParam4, 2, 1);
							func_43(uParam4, 3, 1);
							func_43(uParam4, 5, 1);
							func_43(uParam4, 6, 1);
							func_43(uParam4, 7, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 9, 1);
							func_43(uParam4, 10, 1);
							func_43(uParam4, 13, 1);
							func_43(uParam4, 18, 1);
							func_43(uParam4, 19, 1);
							func_43(uParam4, 20, 1);
							func_43(uParam4, 59, 1);
							func_43(uParam4, 60, 1);
							func_43(uParam4, 61, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 63, 1);
							func_43(uParam4, 64, 1);
							func_43(uParam4, 65, 1);
							func_43(uParam4, 66, 1);
							func_43(uParam4, 67, 1);
							func_43(uParam4, 68, 1);
							func_43(uParam4, 69, 1);
							func_43(uParam4, 70, 1);
							func_43(uParam4, 71, 1);
							func_43(uParam4, 72, 1);
							func_43(uParam4, 21, 1);
							func_43(uParam4, 22, 1);
							func_43(uParam4, 23, 1);
							func_43(uParam4, 24, 1);
							func_43(uParam4, 25, 1);
							func_43(uParam4, 26, 1);
							func_43(uParam4, 36, 1);
							func_43(uParam4, 46, 1);
							func_43(uParam4, 38, 1);
							func_43(uParam4, 29, 1);
							func_43(uParam4, 28, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
						
						case 1:
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 16, 1);
							func_40(uParam2, 47, 1);
							func_40(uParam2, 48, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_43(uParam4, 1, 1);
							func_43(uParam4, 2, 1);
							func_43(uParam4, 3, 1);
							func_43(uParam4, 5, 1);
							func_43(uParam4, 6, 1);
							func_43(uParam4, 7, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 9, 1);
							func_43(uParam4, 10, 1);
							func_43(uParam4, 13, 1);
							func_43(uParam4, 18, 1);
							func_43(uParam4, 19, 1);
							func_43(uParam4, 20, 1);
							func_43(uParam4, 59, 1);
							func_43(uParam4, 60, 1);
							func_43(uParam4, 61, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 63, 1);
							func_43(uParam4, 64, 1);
							func_43(uParam4, 65, 1);
							func_43(uParam4, 66, 1);
							func_43(uParam4, 67, 1);
							func_43(uParam4, 68, 1);
							func_43(uParam4, 69, 1);
							func_43(uParam4, 70, 1);
							func_43(uParam4, 71, 1);
							func_43(uParam4, 72, 1);
							func_43(uParam4, 21, 1);
							func_43(uParam4, 22, 1);
							func_43(uParam4, 23, 1);
							func_43(uParam4, 24, 1);
							func_43(uParam4, 25, 1);
							func_43(uParam4, 26, 1);
							func_43(uParam4, 36, 1);
							func_43(uParam4, 46, 1);
							func_43(uParam4, 38, 1);
							func_43(uParam4, 29, 1);
							func_43(uParam4, 28, 1);
							func_43(uParam4, 43, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
						
						case 2:
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 16, 1);
							func_40(uParam2, 47, 1);
							func_40(uParam2, 48, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_43(uParam4, 1, 1);
							func_43(uParam4, 2, 1);
							func_43(uParam4, 3, 1);
							func_43(uParam4, 5, 1);
							func_43(uParam4, 6, 1);
							func_43(uParam4, 7, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 9, 1);
							func_43(uParam4, 10, 1);
							func_43(uParam4, 13, 1);
							func_43(uParam4, 18, 1);
							func_43(uParam4, 19, 1);
							func_43(uParam4, 20, 1);
							func_43(uParam4, 59, 1);
							func_43(uParam4, 60, 1);
							func_43(uParam4, 61, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 63, 1);
							func_43(uParam4, 64, 1);
							func_43(uParam4, 65, 1);
							func_43(uParam4, 66, 1);
							func_43(uParam4, 67, 1);
							func_43(uParam4, 68, 1);
							func_43(uParam4, 69, 1);
							func_43(uParam4, 70, 1);
							func_43(uParam4, 71, 1);
							func_43(uParam4, 72, 1);
							func_43(uParam4, 21, 1);
							func_43(uParam4, 22, 1);
							func_43(uParam4, 23, 1);
							func_43(uParam4, 24, 1);
							func_43(uParam4, 25, 1);
							func_43(uParam4, 26, 1);
							func_43(uParam4, 36, 1);
							func_43(uParam4, 46, 1);
							func_43(uParam4, 38, 1);
							func_43(uParam4, 29, 1);
							func_43(uParam4, 28, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
					}
					break;
				
				case 19:
					switch (iParam5)
					{
						case 0:
							func_42(uParam3, 3, 1);
							func_42(uParam3, 7, 1);
							func_42(uParam3, 0, 1);
							func_42(uParam3, 12, 1);
							func_42(uParam3, 13, 1);
							func_42(uParam3, 15, 1);
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 17, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_42(uParam3, 20, 1);
							func_42(uParam3, 21, 1);
							func_42(uParam3, 25, 1);
							func_42(uParam3, 26, 1);
							func_42(uParam3, 27, 1);
							func_42(uParam3, 30, 1);
							func_42(uParam3, 31, 1);
							func_42(uParam3, 32, 1);
							func_42(uParam3, 33, 1);
							func_42(uParam3, 39, 1);
							func_42(uParam3, 37, 1);
							func_40(uParam2, 0, 1);
							func_40(uParam2, 2, 1);
							func_40(uParam2, 3, 1);
							func_40(uParam2, 4, 1);
							func_40(uParam2, 6, 1);
							func_40(uParam2, 7, 1);
							func_40(uParam2, 8, 1);
							func_40(uParam2, 11, 1);
							func_40(uParam2, 13, 1);
							func_40(uParam2, 15, 1);
							func_40(uParam2, 16, 1);
							func_40(uParam2, 47, 1);
							func_40(uParam2, 48, 1);
							func_40(uParam2, 17, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_40(uParam2, 19, 1);
							func_40(uParam2, 20, 1);
							func_40(uParam2, 21, 1);
							func_40(uParam2, 22, 1);
							func_40(uParam2, 54, 1);
							func_40(uParam2, 24, 1);
							func_40(uParam2, 26, 1);
							func_40(uParam2, 27, 1);
							func_40(uParam2, 28, 1);
							func_40(uParam2, 30, 1);
							func_40(uParam2, 31, 1);
							func_40(uParam2, 32, 1);
							func_40(uParam2, 38, 1);
							func_40(uParam2, 36, 1);
							func_43(uParam4, 1, 1);
							func_43(uParam4, 2, 1);
							func_43(uParam4, 3, 1);
							func_43(uParam4, 4, 1);
							func_43(uParam4, 14, 1);
							func_43(uParam4, 15, 1);
							func_43(uParam4, 16, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 9, 1);
							func_43(uParam4, 10, 1);
							func_43(uParam4, 13, 1);
							func_43(uParam4, 17, 1);
							func_43(uParam4, 18, 1);
							func_43(uParam4, 19, 1);
							func_43(uParam4, 20, 1);
							func_43(uParam4, 59, 1);
							func_43(uParam4, 60, 1);
							func_43(uParam4, 61, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 63, 1);
							func_43(uParam4, 64, 1);
							func_43(uParam4, 65, 1);
							func_43(uParam4, 66, 1);
							func_43(uParam4, 67, 1);
							func_43(uParam4, 68, 1);
							func_43(uParam4, 69, 1);
							func_43(uParam4, 70, 1);
							func_43(uParam4, 71, 1);
							func_43(uParam4, 72, 1);
							func_43(uParam4, 21, 1);
							func_43(uParam4, 22, 1);
							func_43(uParam4, 23, 1);
							func_43(uParam4, 24, 1);
							func_43(uParam4, 25, 1);
							func_43(uParam4, 26, 1);
							func_43(uParam4, 36, 1);
							func_43(uParam4, 46, 1);
							func_43(uParam4, 38, 1);
							func_43(uParam4, 29, 1);
							func_43(uParam4, 28, 1);
							func_43(uParam4, 31, 1);
							func_43(uParam4, 33, 1);
							func_43(uParam4, 34, 1);
							func_43(uParam4, 43, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_42(uParam3, 65, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 75, 1);
							func_42(uParam3, 76, 1);
							func_42(uParam3, 77, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 64, 1);
							func_40(uParam2, 65, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 75, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
						
						case 1:
							func_42(uParam3, 3, 1);
							func_42(uParam3, 7, 1);
							func_42(uParam3, 0, 1);
							func_42(uParam3, 12, 1);
							func_42(uParam3, 13, 1);
							func_42(uParam3, 15, 1);
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 17, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_42(uParam3, 20, 1);
							func_42(uParam3, 21, 1);
							func_42(uParam3, 25, 1);
							func_42(uParam3, 26, 1);
							func_42(uParam3, 27, 1);
							func_42(uParam3, 30, 1);
							func_42(uParam3, 31, 1);
							func_42(uParam3, 32, 1);
							func_42(uParam3, 33, 1);
							func_42(uParam3, 39, 1);
							func_40(uParam2, 0, 1);
							func_40(uParam2, 2, 1);
							func_40(uParam2, 3, 1);
							func_40(uParam2, 4, 1);
							func_40(uParam2, 6, 1);
							func_40(uParam2, 7, 1);
							func_40(uParam2, 11, 1);
							func_40(uParam2, 13, 1);
							func_40(uParam2, 15, 1);
							func_40(uParam2, 16, 1);
							func_40(uParam2, 47, 1);
							func_40(uParam2, 48, 1);
							func_40(uParam2, 17, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_40(uParam2, 19, 1);
							func_40(uParam2, 20, 1);
							func_40(uParam2, 21, 1);
							func_40(uParam2, 22, 1);
							func_40(uParam2, 54, 1);
							func_40(uParam2, 24, 1);
							func_40(uParam2, 38, 1);
							func_43(uParam4, 1, 1);
							func_43(uParam4, 2, 1);
							func_43(uParam4, 3, 1);
							func_43(uParam4, 4, 1);
							func_43(uParam4, 14, 1);
							func_43(uParam4, 15, 1);
							func_43(uParam4, 16, 1);
							func_43(uParam4, 6, 1);
							func_43(uParam4, 7, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 9, 1);
							func_43(uParam4, 10, 1);
							func_43(uParam4, 13, 1);
							func_43(uParam4, 17, 1);
							func_43(uParam4, 18, 1);
							func_43(uParam4, 19, 1);
							func_43(uParam4, 20, 1);
							func_43(uParam4, 59, 1);
							func_43(uParam4, 60, 1);
							func_43(uParam4, 61, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 63, 1);
							func_43(uParam4, 64, 1);
							func_43(uParam4, 65, 1);
							func_43(uParam4, 66, 1);
							func_43(uParam4, 67, 1);
							func_43(uParam4, 68, 1);
							func_43(uParam4, 69, 1);
							func_43(uParam4, 70, 1);
							func_43(uParam4, 71, 1);
							func_43(uParam4, 72, 1);
							func_43(uParam4, 21, 1);
							func_43(uParam4, 22, 1);
							func_43(uParam4, 23, 1);
							func_43(uParam4, 24, 1);
							func_43(uParam4, 25, 1);
							func_43(uParam4, 26, 1);
							func_43(uParam4, 36, 1);
							func_43(uParam4, 46, 1);
							func_43(uParam4, 38, 1);
							func_43(uParam4, 29, 1);
							func_43(uParam4, 28, 1);
							func_43(uParam4, 31, 1);
							func_43(uParam4, 33, 1);
							func_43(uParam4, 34, 1);
							func_43(uParam4, 43, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_42(uParam3, 65, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 75, 1);
							func_42(uParam3, 76, 1);
							func_42(uParam3, 77, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 64, 1);
							func_40(uParam2, 65, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 75, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
						
						case 2:
							func_42(uParam3, 1, 1);
							func_42(uParam3, 3, 1);
							func_42(uParam3, 4, 1);
							func_42(uParam3, 5, 1);
							func_42(uParam3, 7, 1);
							func_42(uParam3, 10, 1);
							func_42(uParam3, 54, 1);
							func_42(uParam3, 55, 1);
							func_42(uParam3, 56, 1);
							func_42(uParam3, 0, 1);
							func_42(uParam3, 12, 1);
							func_42(uParam3, 13, 1);
							func_42(uParam3, 15, 1);
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 17, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_42(uParam3, 20, 1);
							func_42(uParam3, 21, 1);
							func_42(uParam3, 25, 1);
							func_42(uParam3, 26, 1);
							func_42(uParam3, 27, 1);
							func_42(uParam3, 30, 1);
							func_42(uParam3, 31, 1);
							func_42(uParam3, 32, 1);
							func_42(uParam3, 33, 1);
							func_42(uParam3, 37, 1);
							func_42(uParam3, 39, 1);
							func_40(uParam2, 0, 1);
							func_40(uParam2, 1, 1);
							func_40(uParam2, 2, 1);
							func_40(uParam2, 3, 1);
							func_40(uParam2, 4, 1);
							func_40(uParam2, 5, 1);
							func_40(uParam2, 6, 1);
							func_40(uParam2, 7, 1);
							func_40(uParam2, 8, 1);
							func_40(uParam2, 9, 1);
							func_40(uParam2, 10, 1);
							func_40(uParam2, 53, 1);
							func_40(uParam2, 56, 1);
							func_40(uParam2, 55, 1);
							func_40(uParam2, 11, 1);
							func_40(uParam2, 12, 1);
							func_40(uParam2, 13, 1);
							func_40(uParam2, 14, 1);
							func_40(uParam2, 15, 1);
							func_40(uParam2, 16, 1);
							func_40(uParam2, 47, 1);
							func_40(uParam2, 48, 1);
							func_40(uParam2, 17, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_40(uParam2, 19, 1);
							func_40(uParam2, 20, 1);
							func_40(uParam2, 21, 1);
							func_40(uParam2, 22, 1);
							func_40(uParam2, 54, 1);
							func_40(uParam2, 23, 1);
							func_40(uParam2, 24, 1);
							func_40(uParam2, 26, 1);
							func_40(uParam2, 27, 1);
							func_40(uParam2, 28, 1);
							func_40(uParam2, 29, 1);
							func_40(uParam2, 30, 1);
							func_40(uParam2, 31, 1);
							func_40(uParam2, 32, 1);
							func_40(uParam2, 33, 1);
							func_40(uParam2, 36, 1);
							func_40(uParam2, 38, 1);
							func_40(uParam2, 55, 1);
							func_43(uParam4, 1, 1);
							func_43(uParam4, 2, 1);
							func_43(uParam4, 3, 1);
							func_43(uParam4, 3, 1);
							func_43(uParam4, 4, 1);
							func_43(uParam4, 14, 1);
							func_43(uParam4, 15, 1);
							func_43(uParam4, 16, 1);
							func_43(uParam4, 6, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 9, 1);
							func_43(uParam4, 10, 1);
							func_43(uParam4, 12, 1);
							func_43(uParam4, 13, 1);
							func_43(uParam4, 17, 1);
							func_43(uParam4, 18, 1);
							func_43(uParam4, 19, 1);
							func_43(uParam4, 20, 1);
							func_43(uParam4, 59, 1);
							func_43(uParam4, 60, 1);
							func_43(uParam4, 61, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 62, 1);
							func_43(uParam4, 63, 1);
							func_43(uParam4, 64, 1);
							func_43(uParam4, 65, 1);
							func_43(uParam4, 66, 1);
							func_43(uParam4, 67, 1);
							func_43(uParam4, 68, 1);
							func_43(uParam4, 69, 1);
							func_43(uParam4, 70, 1);
							func_43(uParam4, 71, 1);
							func_43(uParam4, 72, 1);
							func_43(uParam4, 21, 1);
							func_43(uParam4, 22, 1);
							func_43(uParam4, 23, 1);
							func_43(uParam4, 24, 1);
							func_43(uParam4, 25, 1);
							func_43(uParam4, 26, 1);
							func_43(uParam4, 36, 1);
							func_43(uParam4, 46, 1);
							func_43(uParam4, 38, 1);
							func_43(uParam4, 29, 1);
							func_43(uParam4, 28, 1);
							func_43(uParam4, 31, 1);
							func_43(uParam4, 33, 1);
							func_43(uParam4, 34, 1);
							func_43(uParam4, 32, 1);
							func_43(uParam4, 92, 1);
							func_43(uParam4, 93, 1);
							func_43(uParam4, 94, 1);
							func_43(uParam4, 96, 1);
							func_43(uParam4, 97, 1);
							func_43(uParam4, 98, 1);
							func_43(uParam4, 100, 1);
							func_43(uParam4, 103, 1);
							func_43(uParam4, 104, 1);
							func_43(uParam4, 105, 1);
							func_43(uParam4, 106, 1);
							func_43(uParam4, 107, 1);
							func_43(uParam4, 108, 1);
							func_42(uParam3, 65, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 75, 1);
							func_42(uParam3, 76, 1);
							func_42(uParam3, 77, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 64, 1);
							func_40(uParam2, 65, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 75, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
					}
					break;
				
				case 18:
					switch (iParam5)
					{
						case 0:
							break;
						
						case 1:
							func_40(uParam2, 2, 1);
							func_40(uParam2, 20, 1);
							break;
						
						case 2:
							break;
					}
					break;
				
				case 0:
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 8:
				case 10:
				case 12:
				case 14:
				case 18:
				case 22:
				case 25:
				case 29:
				case 33:
				case 19:
				case 21:
					func_39(2, 29, uParam2, uParam3, uParam4, 0, 0);
					break;
				
				case 31:
					func_39(2, 30, uParam2, uParam3, uParam4, 0, 0);
					break;
				
				case 16:
				case 26:
				case 30:
					break;
			}
			break;
	}
}

void func_40(var uParam0, int iParam1, bool bParam2)
{
	func_41(uParam0, iParam1, bParam2);
}

void func_41(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xD2A9C3F486236CC5(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
	else
	{
		unk_0x62148293B793073B(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
}

void func_42(var uParam0, int iParam1, bool bParam2)
{
	func_41(uParam0, iParam1, bParam2);
}

void func_43(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xD2A9C3F486236CC5(uParam0[iVar0], (iParam1 - (32 * iVar0)));
	}
	else
	{
		unk_0x62148293B793073B(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
}

int func_44(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 1:
				case 2:
				case 3:
				case 4:
				case 7:
				case 5:
				case 10:
				case 11:
				case 12:
				case 13:
				case 15:
				case 14:
				case 16:
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
				case 23:
				case 26:
				case 25:
				case 24:
					return 1;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_45(float fParam0)
{
	func_62(uLocal_141, "SET_DATA_SLOT", fParam0, unk_0x305BC30EAC3E9BF4(0, 172, 1), "CELL_BORDER");
}

void func_46(float fParam0)
{
	if (Global_1804687 == 1)
	{
		fParam0 = -1f;
	}
	func_62(uLocal_141, "SET_DATA_SLOT", fParam0, unk_0x305BC30EAC3E9BF4(0, 173, 1), "CELL_FILTER");
}

void func_47()
{
	if (unk_0xC9FF45E740135482(2) || unk_0x0A8A596EB9C068FA())
	{
		func_62(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x305BC30EAC3E9BF4(0, 184, 1), "CELL_SP_2NP_XB");
	}
	else
	{
		func_62(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x305BC30EAC3E9BF4(0, 184, 1), "CELL_SP_2NP_XB");
	}
	func_62(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x305BC30EAC3E9BF4(0, 183, 1), "CELL_GRID");
	func_62(uLocal_141, "SET_DATA_SLOT", 4f, unk_0x33206AC5E51B4373(0, 1, 1), "CELL_285");
	func_46(5f);
	func_45(6f);
	func_48(7f);
	func_28(8f);
	if (bLocal_62)
	{
		func_62(uLocal_141, "SET_DATA_SLOT", 9f, unk_0x305BC30EAC3E9BF4(2, 185, 1), "CELL_DEPTH");
	}
	if (!func_57(14))
	{
		if ((Global_70852 == 0 && unk_0xE7FAF8E78F7D3A73(joaat("pi_menu")) > 0) && func_56())
		{
			unk_0x76F4FB5EFF5BDED5(uLocal_140, "SET_FOCUS_LOCK");
			unk_0xD6F1BD29497A51C8(1);
			unk_0x0ECBA72FAFCEBA59("CELL_ACTTL");
			unk_0xB4179F7E88F4C4BF(unk_0xE883B8F5FA6A04DA(&Global_4268059));
			unk_0xC30401186AC91B01();
			unk_0xD6F1BD29497A51C8(0);
			unk_0xE2B30EB9B14EEAB2();
		}
	}
}

void func_48(float fParam0)
{
	func_62(uLocal_141, "SET_DATA_SLOT", fParam0, unk_0x305BC30EAC3E9BF4(0, 175, 1), "CELL_ACCYC");
}

void func_49()
{
	func_132(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_132(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_62(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x305BC30EAC3E9BF4(0, 39, 1), "CELL_284");
	func_62(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x33206AC5E51B4373(0, 1, 1), "CELL_285");
	func_62(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x305BC30EAC3E9BF4(0, 177, 1), "CELL_281");
	func_62(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x305BC30EAC3E9BF4(0, 176, 1), "CELL_280");
	unk_0x76F4FB5EFF5BDED5(uLocal_141, "SET_MAX_WIDTH");
	unk_0x954263F3D07BEFC2(fLocal_77);
	unk_0xE2B30EB9B14EEAB2();
	func_132(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_50()
{
	if (iLocal_156 == 1)
	{
		func_51();
		return;
	}
	if (iLocal_133 == 0 && iLocal_134 == 0)
	{
		func_132(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_132(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_62(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x305BC30EAC3E9BF4(0, 177, 1), "CELL_281");
		func_62(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x305BC30EAC3E9BF4(2, 179, 1), func_61());
		if (iLocal_131)
		{
			if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
			{
				if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0) || unk_0xA0F074EA9E24102C(unk_0x18F7BE9ACB7D08F4()) == 2)
				{
					if (unk_0xC9FF45E740135482(2) || unk_0x0A8A596EB9C068FA())
					{
						func_62(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x305BC30EAC3E9BF4(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_62(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x305BC30EAC3E9BF4(0, 184, 1), "CELL_SP_2NP_XB");
					}
					if (func_141())
					{
						func_46(3f);
						func_45(4f);
					}
				}
				else if ((Global_70852 == 0 && unk_0xE7FAF8E78F7D3A73(joaat("pi_menu")) > 0) && func_56())
				{
					func_47();
				}
				else
				{
					if (unk_0xC9FF45E740135482(2) || unk_0x0A8A596EB9C068FA())
					{
						func_62(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x305BC30EAC3E9BF4(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_62(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x305BC30EAC3E9BF4(0, 184, 1), "CELL_SP_2NP_XB");
					}
					func_62(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x305BC30EAC3E9BF4(2, 183, 1), "CELL_GRID");
					func_62(uLocal_141, "SET_DATA_SLOT", 4f, unk_0x33206AC5E51B4373(0, 1, 1), "CELL_285");
					if (func_141())
					{
						func_46(5f);
						func_45(6f);
						if (func_29(1))
						{
							func_28(7f);
							if (bLocal_62)
							{
								func_62(uLocal_141, "SET_DATA_SLOT", 8f, unk_0x305BC30EAC3E9BF4(2, 185, 1), "CELL_DEPTH");
							}
						}
						else if (bLocal_62)
						{
							func_62(uLocal_141, "SET_DATA_SLOT", 7f, unk_0x305BC30EAC3E9BF4(2, 185, 1), "CELL_DEPTH");
						}
					}
				}
			}
		}
		else if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0) || unk_0xA0F074EA9E24102C(unk_0x18F7BE9ACB7D08F4()) == 2)
			{
				if (!unk_0xA0F074EA9E24102C(unk_0x18F7BE9ACB7D08F4()) == 2)
				{
					func_62(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x305BC30EAC3E9BF4(2, 183, 1), "CELL_GRID");
					func_62(uLocal_141, "SET_DATA_SLOT", 4f, unk_0x33206AC5E51B4373(0, 1, 1), "CELL_285");
					func_62(uLocal_141, "SET_DATA_SLOT", 5f, unk_0x305BC30EAC3E9BF4(0, 39, 1), "CELL_284");
					if (func_141())
					{
						func_46(6f);
						func_45(7f);
						func_62(uLocal_141, "SET_DATA_SLOT", 8f, unk_0x305BC30EAC3E9BF4(2, 185, 1), "CELL_DEPTH");
					}
				}
				else
				{
					func_62(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x33206AC5E51B4373(0, 1, 1), "CELL_285");
					if (func_141())
					{
						func_46(3f);
						func_45(4f);
						func_62(uLocal_141, "SET_DATA_SLOT", 5f, unk_0x305BC30EAC3E9BF4(2, 185, 1), "CELL_DEPTH");
					}
				}
			}
			else if (!unk_0xA0F074EA9E24102C(unk_0x18F7BE9ACB7D08F4()) == 2)
			{
				if (unk_0xC9FF45E740135482(2) || unk_0x0A8A596EB9C068FA())
				{
					func_62(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x305BC30EAC3E9BF4(0, 184, 1), "CELL_SP_1NP_XB");
				}
				else
				{
					func_62(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x305BC30EAC3E9BF4(0, 184, 1), "CELL_SP_1NP_XB");
				}
				func_62(uLocal_141, "SET_DATA_SLOT", 4f, unk_0x305BC30EAC3E9BF4(2, 183, 1), "CELL_GRID");
				func_62(uLocal_141, "SET_DATA_SLOT", 5f, unk_0x33206AC5E51B4373(0, 1, 1), "CELL_285");
				func_62(uLocal_141, "SET_DATA_SLOT", 6f, unk_0x305BC30EAC3E9BF4(0, 39, 1), "CELL_284");
				if (func_141())
				{
					func_46(7f);
					func_45(8f);
					if (bLocal_63)
					{
						func_62(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x305BC30EAC3E9BF4(0, 182, 1), "CELL_FOCUS");
					}
					func_62(uLocal_141, "SET_DATA_SLOT", 9f, unk_0x305BC30EAC3E9BF4(2, 185, 1), "CELL_DEPTH");
				}
				else
				{
					if (unk_0xC9FF45E740135482(2) || unk_0x0A8A596EB9C068FA())
					{
						func_62(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x305BC30EAC3E9BF4(0, 184, 1), "CELL_SP_1NP_XB");
					}
					else
					{
						func_62(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x305BC30EAC3E9BF4(0, 184, 1), "CELL_SP_1NP_XB");
					}
					func_62(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x33206AC5E51B4373(0, 1, 1), "CELL_285");
					if (func_141())
					{
						func_46(4f);
						func_45(5f);
						func_62(uLocal_141, "SET_DATA_SLOT", 6f, unk_0x305BC30EAC3E9BF4(2, 185, 1), "CELL_DEPTH");
					}
				}
			}
		}
		unk_0x76F4FB5EFF5BDED5(uLocal_141, "SET_MAX_WIDTH");
		unk_0x954263F3D07BEFC2(fLocal_77);
		unk_0xE2B30EB9B14EEAB2();
		func_132(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_51()
{
	func_132(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_132(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_62(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x305BC30EAC3E9BF4(0, 39, 1), "CELL_284");
	func_62(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x33206AC5E51B4373(0, 1, 1), "CELL_285");
	func_62(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x305BC30EAC3E9BF4(2, 179, 1), func_61());
	func_62(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x305BC30EAC3E9BF4(0, 177, 1), "CELL_281");
	unk_0x76F4FB5EFF5BDED5(uLocal_141, "SET_MAX_WIDTH");
	unk_0x954263F3D07BEFC2(fLocal_77);
	unk_0xE2B30EB9B14EEAB2();
	func_132(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_52()
{
	if (iLocal_131)
	{
		unk_0x4CCECEB2EA5D6A82(fLocal_73, 1065353216);
		unk_0xA3F41A1968319181(fLocal_74);
	}
}

void func_53(int iParam0)
{
	if (iLocal_156 == 1)
	{
		return;
	}
	if (Global_1646129.f_133158 == 1)
	{
	}
	else if (Global_1646129.f_133159 == 1)
	{
	}
	else
	{
		unk_0x10A17E58A53A16DD(iParam0);
	}
}

void func_54()
{
	if (iLocal_61 == 1)
	{
		if (unk_0x9D39145AD645E383(sLocal_19[Global_4265867], "phone_cam12DUMMY"))
		{
			unk_0xA6898777F29180B6(0);
			unk_0x9307D3CB12E020EE(0);
		}
		else
		{
			unk_0xA6898777F29180B6(1);
			unk_0x9307D3CB12E020EE(1);
		}
	}
}

void func_55()
{
	func_132(uLocal_140, "SHOW_REMAINING_PHOTOS", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (!func_141())
	{
		if (Global_1804687 == 0)
		{
			unk_0x6DB92041811B9D9B("phone_cam");
		}
	}
}

int func_56()
{
	if (func_57(14))
	{
		if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			if ((unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()) == Global_104551.f_28020[0 /*29*/] || unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()) == Global_104551.f_28020[1 /*29*/]) || unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()) == Global_104551.f_28020[2 /*29*/])
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
	return 1;
}

bool func_57(int iParam0)
{
	return Global_35859 == iParam0;
}

void func_58(char* sParam0)
{
	unk_0x0ECBA72FAFCEBA59(sParam0);
	unk_0xC30401186AC91B01();
}

void func_59()
{
	if (unk_0xC9FF45E740135482(2) || unk_0x0A8A596EB9C068FA())
	{
		func_62(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x305BC30EAC3E9BF4(0, 184, 1), "CELL_SP_2NP_XB");
	}
	else
	{
		func_62(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x305BC30EAC3E9BF4(0, 184, 1), "CELL_SP_2NP_XB");
	}
	if (unk_0xC9FF45E740135482(2))
	{
		func_62(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x305BC30EAC3E9BF4(0, 30, 1), "CELL_RT_RSTICK");
		func_62(uLocal_141, "SET_DATA_SLOT", 4f, unk_0x33206AC5E51B4373(2, 1, 1), "CELL_RT_LSTICK");
	}
	else
	{
		func_62(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x305BC30EAC3E9BF4(0, 1, 1), "CELL_RT_RSTICK");
		func_62(uLocal_141, "SET_DATA_SLOT", 4f, unk_0x33206AC5E51B4373(2, 0, 1), "CELL_RT_LSTICK");
	}
}

void func_60()
{
	if (unk_0xC9FF45E740135482(2) || unk_0x0A8A596EB9C068FA())
	{
		func_62(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x305BC30EAC3E9BF4(0, 184, 1), "CELL_SP_2NP_XB");
	}
	else
	{
		func_62(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x305BC30EAC3E9BF4(0, 184, 1), "CELL_SP_2NP_XB");
	}
	func_62(uLocal_141, "SET_DATA_SLOT", 4f, unk_0x33206AC5E51B4373(0, 1, 1), "CELL_LT_RSTICK");
	if (func_57(14))
	{
		func_62(uLocal_141, "SET_DATA_SLOT", 5f, unk_0x305BC30EAC3E9BF4(2, 30, 1), "CELL_LT_LSTICK");
	}
	else
	{
		func_62(uLocal_141, "SET_DATA_SLOT", 5f, unk_0x305BC30EAC3E9BF4(0, 39, 1), "CELL_LT_LSTICKZ");
		func_62(uLocal_141, "SET_DATA_SLOT", 6f, unk_0x305BC30EAC3E9BF4(2, 30, 1), "CELL_LT_LSTICK");
	}
}

char* func_61()
{
	if (Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_33 == 233 && Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_176 == 9)
	{
		return "FHHUD_SENDLES";
	}
	return "CELL_287";
}

void func_62(var uParam0, char* sParam1, float fParam2, var uParam3, char* sParam4)
{
	unk_0x76F4FB5EFF5BDED5(uParam0, sParam1);
	unk_0x22DD5585E00B80C3(unk_0xF2DB717A73826179(fParam2));
	if (!unk_0xFAFFA408239A026B(uParam3))
	{
		func_63(uParam3);
	}
	if (!unk_0xFAFFA408239A026B(sParam4))
	{
		func_58(sParam4);
	}
	unk_0xE2B30EB9B14EEAB2();
}

void func_63(var uParam0)
{
	unk_0xC34A54899652DAAF(uParam0);
}

void func_64()
{
	if (Global_70852)
	{
		switch (Global_16873)
		{
			case 0:
				if (unk_0xC9FF45E740135482(2))
				{
					func_128("CELL_CAM_SELFIE_0_KM", -1);
				}
				else
				{
					func_128("CELL_CAM_SELFIE_0", -1);
				}
				Global_16873++;
				break;
			
			case 1:
				if (!unk_0x622E10ED992CEB95())
				{
					if (unk_0xC9FF45E740135482(2))
					{
						func_128("CELL_CAM_SELFIE_1_KM", -1);
					}
					else
					{
						func_128("CELL_CAM_SELFIE_1", -1);
					}
					Global_16873++;
				}
				break;
			
			case 2:
				break;
		}
	}
	else
	{
		switch (Global_16872)
		{
			case 0:
				if (unk_0xC9FF45E740135482(2))
				{
					func_128("CELL_CAM_SELFIE_0_KM", -1);
				}
				else
				{
					func_128("CELL_CAM_SELFIE_0", -1);
				}
				Global_16872++;
				break;
			
			case 1:
				if (!unk_0x622E10ED992CEB95())
				{
					if (unk_0xC9FF45E740135482(2))
					{
						func_128("CELL_CAM_SELFIE_1_KM", -1);
					}
					else
					{
						func_128("CELL_CAM_SELFIE_1", -1);
					}
					Global_16872++;
				}
				break;
			
			case 2:
				break;
			}
	}
}

void func_65()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	int iVar10;
	
	if (unk_0xC9FF45E740135482(2))
	{
		iVar9 = 179;
		iVar10 = 21;
	}
	else
	{
		iVar9 = 228;
		iVar10 = 229;
	}
	if (unk_0x02EA7C5633421A0F(2, iVar10) && !unk_0x02EA7C5633421A0F(2, iVar9))
	{
		unk_0x9C7EE7DE7041A3F4(0, 2, 1);
		unk_0x9C7EE7DE7041A3F4(0, 1, 1);
		iVar0 = unk_0xF34EE736CF047844(unk_0xA9B840C2F681E3E3(0, 30)) * 127;
		iVar1 = unk_0xF34EE736CF047844(unk_0xA9B840C2F681E3E3(0, 31)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0xA9B840C2F681E3E3(0, 1)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0xA9B840C2F681E3E3(0, 2)) * 127;
		if (unk_0xC9FF45E740135482(2))
		{
			if (unk_0x18DD02B781D4AD2F(iVar0) > 28 || unk_0x18DD02B781D4AD2F(iVar1) > 28)
			{
				fVar6 = ((IntToFloat(iVar0) / 128f) * fLocal_164);
			}
		}
		else if (unk_0x18DD02B781D4AD2F(iVar2) > 28 || unk_0x18DD02B781D4AD2F(iVar3) > 28)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_164);
		}
		if (unk_0xC9FF45E740135482(2))
		{
			fVar7 = unk_0xA9B840C2F681E3E3(0, 290);
			fVar8 = unk_0xA9B840C2F681E3E3(0, 291);
			if (unk_0xB6C47CF001207E12())
			{
				fVar8 = (fVar8 * -1f);
			}
			fVar4 = (fVar4 + fVar7);
			fVar5 = (fVar5 - fVar8);
		}
		else if (unk_0x18DD02B781D4AD2F(iVar0) > 28 || unk_0x18DD02B781D4AD2F(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_164);
			fVar5 = ((IntToFloat(-iVar1) / 128f) * fLocal_164);
		}
		func_68(fVar5);
		func_67(fVar6);
		func_66(fVar4);
	}
	else if (!unk_0x02EA7C5633421A0F(2, iVar9))
	{
		unk_0xB156023E2D4E4859(0, 2, 1);
		unk_0xB156023E2D4E4859(0, 1, 1);
	}
}

void func_66(float fParam0)
{
	fLocal_161 = (fLocal_161 + fParam0);
	if (fLocal_161 > 1f)
	{
		fLocal_161 = 1f;
	}
	else if (fLocal_161 < -1f)
	{
		fLocal_161 = -1f;
	}
	unk_0xC65DF546BBAE948B(fLocal_161);
}

void func_67(float fParam0)
{
	fLocal_162 = (fLocal_162 + fParam0);
	if (fLocal_162 > 1f)
	{
		fLocal_162 = 1f;
	}
	else if (fLocal_162 < -1f)
	{
		fLocal_162 = -1f;
	}
	unk_0x6EED4C34D2B4A6B2(fLocal_162);
}

void func_68(float fParam0)
{
	fLocal_163 = (fLocal_163 + fParam0);
	if (fLocal_163 > 1f)
	{
		fLocal_163 = 1f;
	}
	else if (fLocal_163 < -1f)
	{
		fLocal_163 = -1f;
	}
	unk_0xA6C7EDCADBBB8316(fLocal_163);
}

void func_69()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	
	if (unk_0xC9FF45E740135482(2))
	{
		iVar10 = 179;
		iVar11 = 178;
		if (unk_0x02EA7C5633421A0F(2, iVar10))
		{
			if (unk_0xFC0C00F9DE2AEC93(2, 178))
			{
				unk_0x1AD9E9CB65983F38(0.5f);
				unk_0x2D40F157BCBF34E4(0.85f);
				unk_0x4C01D28FA61916AF(0.5f);
				unk_0x317165FAA6694033(-0.25f);
				fLocal_157 = 0.5f;
				fLocal_158 = 0.85f;
				fLocal_159 = 0.5f;
				fLocal_160 = -0.25f;
			}
		}
	}
	else
	{
		iVar10 = 228;
		iVar11 = 229;
	}
	if (unk_0x02EA7C5633421A0F(2, iVar10) && !unk_0x02EA7C5633421A0F(2, iVar11))
	{
		if (unk_0xFC0C00F9DE2AEC93(2, 178))
		{
			unk_0x1AD9E9CB65983F38(0.5f);
			unk_0x2D40F157BCBF34E4(0.85f);
			unk_0x4C01D28FA61916AF(0.5f);
			unk_0x317165FAA6694033(-0.25f);
			fLocal_157 = 0.5f;
			fLocal_158 = 0.85f;
			fLocal_159 = 0.5f;
			fLocal_160 = -0.25f;
		}
		unk_0x9C7EE7DE7041A3F4(0, 2, 1);
		unk_0x9C7EE7DE7041A3F4(0, 1, 1);
		iVar0 = unk_0xF34EE736CF047844(unk_0xA9B840C2F681E3E3(0, 30)) * 127;
		iVar1 = unk_0xF34EE736CF047844(unk_0xA9B840C2F681E3E3(0, 31)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0xA9B840C2F681E3E3(0, 1)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0xA9B840C2F681E3E3(0, 2)) * 127;
		if (unk_0xC9FF45E740135482(2))
		{
			iVar1 = unk_0xF34EE736CF047844(unk_0xA9B840C2F681E3E3(0, 39)) * 127;
			fVar8 = unk_0xA9B840C2F681E3E3(0, 290);
			fVar9 = unk_0xA9B840C2F681E3E3(0, 291);
			if (unk_0xB6C47CF001207E12())
			{
				fVar9 = (fVar9 * -1f);
			}
			fVar6 = (fVar6 + fVar8);
			fVar7 = (fVar7 - fVar9);
		}
		else if (unk_0x18DD02B781D4AD2F(iVar2) > 15 || unk_0x18DD02B781D4AD2F(iVar3) > 15)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_164);
			fVar7 = ((IntToFloat(-iVar3) / 128f) * fLocal_164);
		}
		if (unk_0x18DD02B781D4AD2F(iVar0) > 28 || unk_0x18DD02B781D4AD2F(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_164);
			fVar5 = ((IntToFloat(iVar1) / 128f) * fLocal_164);
		}
		func_73(fVar6);
		func_72(fVar7);
		func_71(fVar4);
		if (!func_57(14))
		{
			func_70(fVar5);
		}
	}
	else if (!unk_0xBAEF57A3E716CC8D(2, iVar11))
	{
		unk_0xB156023E2D4E4859(0, 2, 1);
		unk_0xB156023E2D4E4859(0, 1, 1);
	}
	if (!unk_0xBAEF57A3E716CC8D(2, iVar10) && !unk_0xBAEF57A3E716CC8D(2, iVar11))
	{
		iVar0 = unk_0xF34EE736CF047844(unk_0xA9B840C2F681E3E3(0, 30)) * 127;
		iVar1 = unk_0xF34EE736CF047844(unk_0xA9B840C2F681E3E3(0, 31)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0xA9B840C2F681E3E3(0, 290)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0xA9B840C2F681E3E3(0, 291)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0xA9B840C2F681E3E3(0, 294)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0xA9B840C2F681E3E3(0, 295)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0xA9B840C2F681E3E3(0, 292)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0xA9B840C2F681E3E3(0, 293)) * 127;
		if (unk_0x18DD02B781D4AD2F(iVar2) > 28 || unk_0x18DD02B781D4AD2F(iVar3) > 28)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_164);
			fVar7 = ((IntToFloat(-iVar3) / 128f) * fLocal_164);
		}
		if (unk_0x18DD02B781D4AD2F(iVar0) > 28 || unk_0x18DD02B781D4AD2F(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_164);
			fVar5 = ((IntToFloat(iVar1) / 128f) * fLocal_164);
		}
		if (!func_57(14))
		{
			func_70(fVar5);
		}
	}
}

void func_70(float fParam0)
{
	fLocal_159 = (fLocal_159 + fParam0);
	if (fLocal_159 > 1f)
	{
		fLocal_159 = 1f;
	}
	else if (fLocal_159 < 0f)
	{
		fLocal_159 = 0f;
	}
	unk_0x4C01D28FA61916AF(fLocal_159);
}

void func_71(float fParam0)
{
	fLocal_160 = (fLocal_160 + fParam0);
	if (fLocal_160 > 1f)
	{
		fLocal_160 = 1f;
	}
	else if (fLocal_160 < -1f)
	{
		fLocal_160 = -1f;
	}
	unk_0x317165FAA6694033(fLocal_160);
}

void func_72(float fParam0)
{
	fLocal_158 = (fLocal_158 + fParam0);
	if (fLocal_158 > 1.5f)
	{
		fLocal_158 = 1.5f;
	}
	else if (fLocal_158 < 0.5f)
	{
		fLocal_158 = 0.5f;
	}
	unk_0x2D40F157BCBF34E4(fLocal_158);
}

void func_73(float fParam0)
{
	fLocal_157 = (fLocal_157 + fParam0);
	if (fLocal_157 > 2f)
	{
		fLocal_157 = 2f;
	}
	else if (fLocal_157 < -1.7f)
	{
		fLocal_157 = -1.7f;
	}
	unk_0x1AD9E9CB65983F38(fLocal_157);
}

void func_74()
{
	if (Global_71112 || Global_71113)
	{
		return;
	}
	if (iLocal_124 == 0)
	{
		if (!iLocal_150)
		{
			if (Global_1646129.f_133158 == 0 && Global_1646129.f_133159 == 0)
			{
				unk_0x5E70D9959D6F2350(uLocal_141, 255, 255, 255, 0, 0);
			}
		}
	}
	if (iLocal_127 == 0)
	{
		if (Global_14395)
		{
			if (Global_14615)
			{
				if (iLocal_150 == 0)
				{
					if (Global_14453.f_1 > 3)
					{
					}
				}
			}
		}
		else
		{
			func_76(255, 255, 255, 255);
			func_75(0.059f, 0.644f, "CELL_284", 0);
			func_76(255, 255, 255, 255);
			func_75(0.165f, 0.644f, "CELL_285", 0);
			func_76(255, 255, 255, 255);
			func_75(0.275f, 0.75f, "CELL_280", 0);
			func_76(255, 255, 255, 255);
			func_75(0.275f, 0.83f, "CELL_281", 0);
		}
	}
	else if (Global_14395)
	{
	}
	else
	{
		func_76(255, 255, 255, 255);
		func_75(0.275f, 0.75f, func_61(), 0);
		func_76(255, 255, 255, 255);
		func_75(0.275f, 0.79f, "CELL_286", 0);
		func_76(255, 255, 255, 255);
		func_75(0.275f, 0.83f, "CELL_281", 0);
	}
}

void func_75(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	unk_0xD74B746610C55548(sParam2);
	unk_0x5D7608D88BED248F(fParam0, fParam1, iParam3);
}

void func_76(int iParam0, int iParam1, int iParam2, int iParam3)
{
	unk_0x61EA61920DAA51B8(0.4f, 0.4f);
	unk_0xFA8404C1F8556E42(0, 0, 0, 0, 0);
	unk_0xF1BEA13DBF04FF12(1, 0, 0, 0, 205);
	unk_0xE0FBF66C0777A47B(1);
	unk_0x03FBCA33C223558B(0);
	unk_0xE14EBFD640A207D8(iParam0, iParam1, iParam2, iParam3);
}

void func_77()
{
	unk_0x4CCECEB2EA5D6A82(fLocal_75, 1065353216);
	unk_0xA3F41A1968319181(fLocal_76);
}

void func_78()
{
	unk_0x9C7EE7DE7041A3F4(0, 25, 1);
	unk_0x9C7EE7DE7041A3F4(0, 44, 1);
	unk_0x9C7EE7DE7041A3F4(0, 3, 1);
	unk_0x9C7EE7DE7041A3F4(0, 4, 1);
	unk_0x9C7EE7DE7041A3F4(0, 5, 1);
	unk_0x9C7EE7DE7041A3F4(0, 6, 1);
	unk_0x9C7EE7DE7041A3F4(0, 1, 1);
	unk_0x9C7EE7DE7041A3F4(0, 2, 1);
	unk_0x9C7EE7DE7041A3F4(0, 39, 1);
	unk_0x9C7EE7DE7041A3F4(0, 47, 1);
	unk_0x9C7EE7DE7041A3F4(0, 56, 1);
}

void func_79()
{
	Local_87 = { Global_14406[Global_14398 /*3*/] };
	if (Global_14395)
	{
		if (func_82())
		{
			unk_0xE0F240E99D061E79(&Local_93);
			Local_87 = { Local_93 };
			iLocal_121 = 0;
			iLocal_122 = 0;
			iLocal_123 = 0;
		}
		func_1(1);
		if (iLocal_121)
		{
			Local_81.f_0 = (Local_81.f_0 + 12f);
		}
		if (Local_81.f_0 > Local_87.f_0 || Local_81.f_0 == Local_87.f_0)
		{
			Local_81.f_0 = Local_87.f_0;
			iLocal_121 = 0;
		}
		if (iLocal_122)
		{
			Local_81.f_1 = (Local_81.f_1 - 6f);
		}
		if (unk_0xB03A1684359C50A1(Global_2325, 4))
		{
			if (Local_81.f_1 < (Local_87.f_1 + 15f) || Local_81.f_1 == (Local_87.f_1 + 15f))
			{
				Local_81.f_1 = (Local_87.f_1 + 15f);
				iLocal_122 = 0;
			}
		}
		else if (Local_81.f_1 < (Local_87.f_1 + 10f) || Local_81.f_1 == (Local_87.f_1 + 10f))
		{
			Local_81.f_1 = (Local_87.f_1 + 10f);
			iLocal_122 = 0;
		}
		if (iLocal_123)
		{
			Local_81.f_2 = (Local_81.f_2 - 10f);
		}
		if (Local_81.f_2 < Local_87.f_2 || Local_81.f_2 == Local_87.f_2)
		{
			Local_81.f_2 = Local_87.f_2;
			iLocal_123 = 0;
		}
		if (func_82() == 0)
		{
			if (unk_0xB03A1684359C50A1(Global_2325, 4))
			{
				Local_87.f_1 = (Local_87.f_1 + 15f);
			}
			else
			{
				Local_87.f_1 = (Local_87.f_1 + 10f);
			}
			Local_87.f_0 = (Local_87.f_0 - 14f);
		}
		else
		{
			Local_87 = { Global_14399[Global_14398 /*3*/] };
		}
		Local_81 = { Local_87 };
		iLocal_123 = 0;
		iLocal_122 = 0;
		iLocal_121 = 0;
		unk_0x1F7EA74AE820583A(Local_81);
		if ((iLocal_121 == 0 && iLocal_122 == 0) && iLocal_123 == 0)
		{
			iLocal_124 = 0;
			Local_84 = { -90.3f, 0f, 90f };
			unk_0xA4EB4F11347C8C00(Local_84, 0);
			if (!unk_0xB03A1684359C50A1(Global_2323, 22))
			{
				if (unk_0xB03A1684359C50A1(Global_2323, 28))
				{
					StringCopy(&cLocal_145, "CELL_294", 16);
					func_81();
				}
				else
				{
					StringCopy(&cLocal_145, "CELL_293", 16);
					func_80();
				}
				iLocal_100 = 2;
			}
		}
	}
}

void func_80()
{
	func_132(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_132(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (unk_0xB03A1684359C50A1(Global_2324, 28))
	{
		func_62(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x305BC30EAC3E9BF4(0, 176, 1), "CELL_286");
	}
	else
	{
		func_62(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x305BC30EAC3E9BF4(2, 178, 1), "CELL_277");
		func_62(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x305BC30EAC3E9BF4(0, 176, 1), "CELL_GALSAVE");
	}
	unk_0x76F4FB5EFF5BDED5(uLocal_141, "SET_MAX_WIDTH");
	unk_0x954263F3D07BEFC2(fLocal_77);
	unk_0xE2B30EB9B14EEAB2();
	func_132(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_81()
{
	func_132(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_132(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (unk_0xB03A1684359C50A1(Global_2324, 28))
	{
		func_62(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x305BC30EAC3E9BF4(2, 179, 1), func_61());
		func_62(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x305BC30EAC3E9BF4(0, 176, 1), "CELL_286");
	}
	else
	{
		func_62(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x305BC30EAC3E9BF4(2, 179, 1), func_61());
		func_62(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x305BC30EAC3E9BF4(2, 178, 1), "CELL_277");
		func_62(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x305BC30EAC3E9BF4(0, 176, 1), "CELL_GALSAVE");
	}
	unk_0x76F4FB5EFF5BDED5(uLocal_141, "SET_MAX_WIDTH");
	unk_0x954263F3D07BEFC2(fLocal_77);
	unk_0xE2B30EB9B14EEAB2();
	func_132(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

int func_82()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		if (Global_14453.f_1 == 10 || Global_14453.f_1 == 9)
		{
			if (Global_14396 == 0)
			{
				if (Global_1638 != 128)
				{
					if (!unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
					{
						if (Global_15756 != 2)
						{
						}
					}
				}
			}
		}
		if (func_57(14))
		{
			return 0;
		}
		if (unk_0x0124A4A09C18BD80(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			return 0;
		}
		if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			if (!unk_0xED0E852EE8DE36BB())
			{
				if (unk_0xE1F715CDDC50FD7F(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0)))
				{
					return 0;
				}
			}
		}
		if (((unk_0x00C9F17EF169BFC9(unk_0x18F7BE9ACB7D08F4()) || unk_0xB2F589E05EE3BB5E(unk_0x18F7BE9ACB7D08F4())) || unk_0x869BE9FEE7F5316B(unk_0x8CFC7D6E1DA5D304())) || unk_0x55C0B3D3EFAF48C6(unk_0x18F7BE9ACB7D08F4()))
		{
			return 0;
		}
		if (Global_103599)
		{
			return 0;
		}
	}
	if (Global_70852)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0xEBE31BF57A0E4641();
	iVar1 = unk_0xC345D9AB8BB3AB24(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || unk_0xED0E852EE8DE36BB()))
	{
		iVar2 = 1;
		if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
			{
				iVar3 = unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0);
				if ((((((((unk_0x422717A3330EA45D(unk_0x4F69FBD64CDF125B(iVar3)) || unk_0x93CA7A248A4D402A(unk_0x4F69FBD64CDF125B(iVar3))) || unk_0x309C05EAA86E194E(unk_0x4F69FBD64CDF125B(iVar3))) || unk_0x4F69FBD64CDF125B(iVar3) == joaat("seashark")) || unk_0x4F69FBD64CDF125B(iVar3) == joaat("seashark2")) || unk_0x4F69FBD64CDF125B(iVar3) == joaat("rhino")) || unk_0x4F69FBD64CDF125B(iVar3) == joaat("submersible")) || unk_0x4F69FBD64CDF125B(iVar3) == joaat("submersible2")) || unk_0x4F69FBD64CDF125B(iVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_4267357 || iVar2 == 1)
	{
		if (unk_0xE7FAF8E78F7D3A73(joaat("apptrackify")) > 0 || Global_104551.f_14021.f_89)
		{
			if (unk_0xE7FAF8E78F7D3A73(joaat("michael2")) > 0)
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

void func_83()
{
	unk_0x9C7EE7DE7041A3F4(0, 47, 1);
	unk_0xFCBDBEB257C6D3FB(0, Global_14423);
	Local_84 = { Global_14413 };
	Local_87 = { Global_14406[Global_14398 /*3*/] };
	if (func_82())
	{
		unk_0x7EE34484BCDD0236(&Local_90, 0);
		Local_84 = { Local_90 };
		unk_0xE0F240E99D061E79(&Local_93);
		Local_87 = { Local_93 };
		iLocal_118 = 0;
		iLocal_119 = 0;
		iLocal_120 = 0;
		iLocal_121 = 0;
		iLocal_122 = 0;
		iLocal_123 = 0;
	}
	if (Global_14395)
	{
		func_132(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_53(0);
		iLocal_131 = 0;
		if (unk_0xB03A1684359C50A1(Global_2323, 30))
		{
			iLocal_118 = 0;
			iLocal_119 = 0;
			iLocal_120 = 0;
			func_84();
		}
		if (iLocal_121)
		{
			if (unk_0xB03A1684359C50A1(Global_2323, 9))
			{
				Local_81.f_0 = (Local_81.f_0 + 2f);
			}
			else
			{
				Local_81.f_0 = (Local_81.f_0 + 12f);
			}
		}
		if (Local_81.f_0 > Local_87.f_0 || Local_81.f_0 == Local_87.f_0)
		{
			Local_81.f_0 = Local_87.f_0;
			iLocal_121 = 0;
		}
		if (iLocal_122)
		{
			Local_81.f_1 = (Local_81.f_1 - 6f);
		}
		if (Local_81.f_1 < Local_87.f_1 || Local_81.f_1 == Local_87.f_1)
		{
			Local_81.f_1 = Local_87.f_1;
			iLocal_122 = 0;
		}
		if (iLocal_123)
		{
			Local_81.f_2 = (Local_81.f_2 - 10f);
		}
		if (Local_81.f_2 < Local_87.f_2 || Local_81.f_2 == Local_87.f_2)
		{
			Local_81.f_2 = Local_87.f_2;
			iLocal_123 = 0;
		}
		if (iLocal_123 == 0)
		{
			if (iLocal_118)
			{
				Local_78.f_0 = (Local_78.f_0 + 1f);
			}
			if (Local_78.f_0 > Local_84.f_0 || Local_78.f_0 == Local_84.f_0)
			{
				Local_78.f_0 = Local_84.f_0;
				iLocal_118 = 0;
			}
			if (iLocal_119)
			{
				Local_78.f_1 = (Local_78.f_1 - 2f);
			}
			if (Local_78.f_1 < Local_84.f_1 || Local_78.f_1 == Local_84.f_1)
			{
				Local_78.f_1 = Local_84.f_1;
				iLocal_119 = 0;
			}
			if (iLocal_120)
			{
				Local_78.f_2 = (Local_78.f_2 - 14f);
			}
			if (Local_78.f_2 < Local_84.f_2 || Local_78.f_2 == Local_84.f_2)
			{
				Local_78.f_2 = Local_84.f_2;
				iLocal_120 = 0;
			}
		}
		if (iLocal_126)
		{
			Local_78 = { Local_84 };
			Local_81 = { Local_87 };
			iLocal_118 = 0;
			iLocal_119 = 0;
			iLocal_120 = 0;
			if (func_82() == 0)
			{
				unk_0xA4EB4F11347C8C00(Local_78, 0);
				unk_0x1F7EA74AE820583A(Local_81);
			}
			func_91(0, 1);
		}
		else if (func_82() == 0)
		{
			unk_0xA4EB4F11347C8C00(Local_78, 0);
			unk_0x1F7EA74AE820583A(Local_81);
		}
		if ((iLocal_118 == 0 && iLocal_119 == 0) && iLocal_120 == 0)
		{
			func_84();
		}
	}
	else
	{
		if (iLocal_118)
		{
			Local_78.f_0 = (Local_78.f_0 + 1f);
		}
		if (Local_78.f_0 > Local_84.f_0 || Local_78.f_0 == Local_84.f_0)
		{
			iLocal_118 = 0;
		}
		if (iLocal_119)
		{
			Local_78.f_1 = (Local_78.f_1 - 2f);
		}
		if (Local_78.f_1 < Local_84.f_1 || Local_78.f_1 == Local_84.f_1)
		{
			iLocal_119 = 0;
		}
		if (iLocal_120)
		{
			Local_78.f_2 = (Local_78.f_2 - 7f);
		}
		if (Local_78.f_2 < Local_84.f_2 || Local_78.f_2 == Local_84.f_2)
		{
			iLocal_120 = 0;
		}
		if ((iLocal_118 == 0 && iLocal_119 == 0) && iLocal_120 == 0)
		{
			func_84();
		}
	}
	unk_0xA4EB4F11347C8C00(Local_78, 0);
}

void func_84()
{
	func_1(0);
	if (func_82() == 0)
	{
		if (unk_0xB03A1684359C50A1(Global_2323, 30))
		{
			unk_0x1F7EA74AE820583A(Global_14399[Global_14398 /*3*/]);
		}
		else
		{
			unk_0x1F7EA74AE820583A(Global_14406[Global_14398 /*3*/]);
		}
		Local_78 = { Local_84 };
		unk_0xA4EB4F11347C8C00(Local_78, 0);
	}
	Global_16789 = 0;
	func_94(0, 0);
	func_98(0);
	iLocal_115 = 0;
	func_93();
	Global_14440 = 1;
	Global_16792 = 0;
	if (Global_14453.f_1 > 4)
	{
		Global_14453.f_1 = 6;
		Global_14431 = 1;
		func_85();
	}
	if (unk_0x5C716BBF766E1C70(uLocal_140))
	{
		func_131(uLocal_140, "SHUTDOWN_MOVIE");
	}
	unk_0x4EDE34FBADD967A6(0);
	unk_0x0A4CB1D4A63A7528();
	unk_0xEBE532BFFE618875(&uLocal_141);
	unk_0xEBE532BFFE618875(&uLocal_140);
	if (Global_14617 == 1)
	{
		unk_0xD2A9C3F486236CC5(&Global_2323, 17);
	}
	else
	{
		unk_0x62148293B793073B(&Global_2323, 17);
	}
	unk_0x62148293B793073B(&Global_2323, 18);
	unk_0x62148293B793073B(&Global_2323, 21);
	unk_0x02207C8103E68CB0(0, 1);
	unk_0x62148293B793073B(&Global_2325, 3);
	unk_0x62148293B793073B(&Global_4267143, 3);
	unk_0xDF94C6DB72E69D64(0);
	unk_0x18CC4D2059027150(unk_0x8CFC7D6E1DA5D304(), 1);
	unk_0xB9C0BA93B50CE575(15);
	Global_16793 = 1;
	unk_0xEF5B50EACBB40FA0(iLocal_112);
	unk_0x906C6BAB7E9BD0FF(iLocal_112);
	unk_0x3D889DC768CF362B();
	if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		unk_0x34361AF8000A26ED(unk_0x18F7BE9ACB7D08F4(), "Mood_Normal_1", 0);
		unk_0x22DBDF4F57796736(unk_0x18F7BE9ACB7D08F4());
	}
	func_93();
	unk_0xA6898777F29180B6(0);
	unk_0x9307D3CB12E020EE(0);
	unk_0x132D69A00C3836BE(1f);
	if (Global_4265868 > 0 && Global_4265868 < 13)
	{
		unk_0x1D492DC0B64A955F(sLocal_33[Global_4265868]);
	}
	func_91(0, 1);
	if (func_139(0, 1, iLocal_64, 1))
	{
		iLocal_64 = 0;
	}
	unk_0x810C5D6462DD69E6();
}

void func_85()
{
	struct<3> Var0;
	
	if (Global_14436 == 1)
	{
		return;
	}
	if (Global_14453.f_1 < 4)
	{
		return;
	}
	while (!unk_0x5C716BBF766E1C70(Global_14434))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	switch (Global_14453.f_1)
	{
		case 6:
			func_132(Global_14434, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_89(Global_2928);
			if (Global_2928 == 1)
			{
				func_132(Global_14434, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14457), -1082130432, -1082130432, -1082130432);
				Global_14433 = Global_14457;
			}
			else
			{
				func_132(Global_14434, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14458), -1082130432, -1082130432, -1082130432);
				Global_14433 = Global_14458;
			}
			if (Global_14441)
			{
				func_88(Global_14434, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_88(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_88(Global_14434, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_88(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_14617 == 0)
			{
				func_88(Global_14434, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x62148293B793073B(&Global_2323, 17);
			}
			else if (Global_70852)
			{
				func_88(Global_14434, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x62148293B793073B(&Global_2323, 17);
			}
			else
			{
				if (Global_14616 == 1)
				{
					if (Global_14441)
					{
						func_88(Global_14434, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_88(Global_14434, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_14441)
				{
					func_88(Global_14434, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_88(Global_14434, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				unk_0xD2A9C3F486236CC5(&Global_2323, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_132(Global_14434, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_88(Global_14434, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_88(Global_14434, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x62148293B793073B(&Global_2323, 17);
			if (unk_0xB03A1684359C50A1(Global_2323, 20))
			{
				func_88(Global_14434, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14441)
			{
				func_88(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14396)
				{
					func_88(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_88(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_14452 == 1)
			{
				func_87();
				func_132(Global_14434, "SET_THEME", unk_0xBBDA792448DB5A89(Global_104551.f_14021[Global_14453 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_15769)
				{
					unk_0x76F4FB5EFF5BDED5(Global_14434, "SET_DATA_SLOT");
					unk_0x22DD5585E00B80C3(4);
					unk_0x22DD5585E00B80C3(0);
					unk_0x22DD5585E00B80C3(2);
					unk_0x0ECBA72FAFCEBA59("CELL_CONDFON");
					unk_0xB4179F7E88F4C4BF(&Global_15771);
					unk_0xC30401186AC91B01();
					func_58("CELL_300");
					func_58("CELL_217");
					func_58("CELL_217");
					unk_0xE2B30EB9B14EEAB2();
				}
				else if (Global_104551.f_28020[Global_1638 /*29*/].f_24[Global_14453] == 0)
				{
					func_88(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_117[Global_1638 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_88(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_104551.f_28020[Global_1638 /*29*/].f_3), &(Global_104551.f_28020[Global_1638 /*29*/].f_7), "CELL_217", &(Global_104551.f_28020[Global_1638 /*29*/].f_3), 0);
				}
				func_132(Global_14434, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_15756 == 4 || Global_15756 == 3)
			{
				func_132(Global_14434, "SET_THEME", unk_0xBBDA792448DB5A89(Global_104551.f_14021[Global_14453 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_87();
				if (Global_15769)
				{
					unk_0x76F4FB5EFF5BDED5(Global_14434, "SET_DATA_SLOT");
					unk_0x22DD5585E00B80C3(4);
					unk_0x22DD5585E00B80C3(0);
					unk_0x22DD5585E00B80C3(2);
					unk_0x0ECBA72FAFCEBA59("CELL_CONDFON");
					unk_0xB4179F7E88F4C4BF(&Global_15771);
					unk_0xC30401186AC91B01();
					func_58("CELL_300");
					func_58("CELL_219");
					func_58("CELL_219");
					unk_0xE2B30EB9B14EEAB2();
				}
				else
				{
					if (Global_16014)
					{
						StringCopy(&Var0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&Var0, "CELL_211", 24);
					}
					if (Global_104551.f_28020[Global_1638 /*29*/].f_24[Global_14453] == 0)
					{
						func_132(Global_14434, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_88(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_117[Global_1638 /*10*/].f_4), "CELL_300", &Var0, "CELL_195", 0);
					}
					else
					{
						func_132(Global_14434, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_88(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_104551.f_28020[Global_1638 /*29*/].f_3), &(Global_104551.f_28020[Global_1638 /*29*/].f_7), &Var0, &(Global_104551.f_28020[Global_1638 /*29*/].f_3), 0);
					}
				}
				func_132(Global_14434, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_86();
			break;
		
		default:
			break;
	}
}

void func_86()
{
	if (unk_0x5C716BBF766E1C70(Global_14434))
	{
		if (Global_14452 == 1)
		{
			if (Global_14441)
			{
				func_88(Global_14434, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_88(Global_14434, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_15803)
			{
				func_88(Global_14434, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (unk_0xB03A1684359C50A1(Global_2323, 20))
			{
				func_88(Global_14434, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14441)
			{
				func_88(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_88(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_88(Global_14434, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x62148293B793073B(&Global_2323, 17);
		}
		else
		{
			func_88(Global_14434, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_88(Global_14434, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x62148293B793073B(&Global_2323, 17);
			if (unk_0xB03A1684359C50A1(Global_2323, 20))
			{
				func_88(Global_14434, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14441)
			{
				func_88(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14396)
				{
					func_88(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_88(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_87()
{
	if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		if (Global_14453 == 0)
		{
			switch (Global_104551.f_14021[Global_14453 /*20*/].f_6)
			{
				case 1:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 0);
					break;
				
				case 2:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 1);
					break;
				
				case 3:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 2);
					break;
				
				case 4:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 3);
					break;
				
				case 5:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 4);
					break;
				
				case 6:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 5);
					break;
				
				case 7:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_14453 == 1)
		{
			switch (Global_104551.f_14021[Global_14453 /*20*/].f_6)
			{
				case 1:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 6);
					break;
				
				case 2:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 0);
					break;
				
				case 3:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 1);
					break;
				
				case 4:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 2);
					break;
				
				case 5:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 3);
					break;
				
				case 6:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 4);
					break;
				
				case 7:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_14453 == 2)
		{
			switch (Global_104551.f_14021[Global_14453 /*20*/].f_6)
			{
				case 1:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 5);
					break;
				
				case 2:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 6);
					break;
				
				case 3:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 1);
					break;
				
				case 4:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 0);
					break;
				
				case 5:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 2);
					break;
				
				case 6:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 3);
					break;
				
				case 7:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_14453 == 3)
		{
			switch (Global_4267355)
			{
				case 1:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 0);
					break;
				
				case 2:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 1);
					break;
				
				case 3:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 2);
					break;
				
				case 4:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 3);
					break;
				
				case 5:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 4);
					break;
				
				case 6:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 5);
					break;
				
				case 7:
					unk_0xE84B3D1B69CD8703(unk_0x8CFC7D6E1DA5D304(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_88(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0x76F4FB5EFF5BDED5(uParam0, sParam1);
	unk_0x22DD5585E00B80C3(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x22DD5585E00B80C3(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x22DD5585E00B80C3(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x22DD5585E00B80C3(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x22DD5585E00B80C3(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0xFAFFA408239A026B(sParam7))
	{
		func_58(sParam7);
	}
	if (!unk_0xFAFFA408239A026B(iParam8))
	{
		func_58(iParam8);
	}
	if (!unk_0xFAFFA408239A026B(iParam9))
	{
		func_58(iParam9);
	}
	if (!unk_0xFAFFA408239A026B(iParam10))
	{
		func_58(iParam10);
	}
	if (!unk_0xFAFFA408239A026B(iParam11))
	{
		func_58(iParam11);
	}
	unk_0xE2B30EB9B14EEAB2();
}

void func_89(int iParam0)
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
	
	Global_16824 = 0;
	Global_2928 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2892[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_57(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2330[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2330[iVar1 /*15*/].f_4)
					{
						if (Global_2892[iVar0] == 0)
						{
							Global_2856[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0xB03A1684359C50A1(Global_2324, 3))
								{
									iVar2 = 42;
									Global_14619 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14619 = 0;
								}
								unk_0x76F4FB5EFF5BDED5(Global_14434, "SET_DATA_SLOT");
								unk_0x22DD5585E00B80C3(1);
								unk_0x22DD5585E00B80C3(iVar0);
								unk_0x22DD5585E00B80C3(Global_2330[iVar1 /*15*/].f_10);
								unk_0x22DD5585E00B80C3(0);
								func_58(&(Global_2330[iVar1 /*15*/]));
								unk_0x22DD5585E00B80C3(iVar2);
								unk_0xE2B30EB9B14EEAB2();
							}
							if (Global_2456776)
							{
								if (iVar1 == 14)
								{
									func_88(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2330[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16819), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2892[iVar0] = 1;
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
				if (iParam0 == Global_2330[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2330[iVar1 /*15*/].f_4)
					{
						if (Global_2892[iVar0] == 0)
						{
							Global_2856[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_104551.f_14111[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_104551.f_14111[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_104551.f_14111[iVar3 /*104*/].f_99[Global_14453] == 1)
											{
												Global_16824++;
											}
										}
									}
									iVar3++;
								}
								func_88(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2330[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16824), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_70852)
								{
									iVar4 = 0;
									iVar4 = Global_4265877;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4265878[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4265878[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4265878[iVar5 /*104*/].f_99[Global_14453] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_88(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2330[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14453)
									{
										case 0:
											iVar6 = Global_36996;
											break;
										
										case 1:
											iVar6 = Global_36997;
											break;
										
										case 2:
											iVar6 = Global_36998;
											break;
										
										default:
											break;
									}
									func_88(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2330[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar6), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_88(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2330[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16819), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x76F4FB5EFF5BDED5(Global_14434, "SET_DATA_SLOT");
								unk_0x22DD5585E00B80C3(1);
								unk_0x22DD5585E00B80C3(iVar0);
								unk_0x22DD5585E00B80C3(Global_2330[iVar1 /*15*/].f_10);
								unk_0x22DD5585E00B80C3(0);
								func_58(&(Global_2330[iVar1 /*15*/]));
								unk_0x22DD5585E00B80C3(Global_2329);
								unk_0xE2B30EB9B14EEAB2();
							}
							else if (iVar1 == 2)
							{
								if (unk_0xB03A1684359C50A1(Global_2324, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0x76F4FB5EFF5BDED5(Global_14434, "SET_DATA_SLOT");
								unk_0x22DD5585E00B80C3(1);
								unk_0x22DD5585E00B80C3(iVar0);
								unk_0x22DD5585E00B80C3(Global_2330[iVar1 /*15*/].f_10);
								unk_0x22DD5585E00B80C3(0);
								func_58(&(Global_2330[iVar1 /*15*/]));
								unk_0x22DD5585E00B80C3(iVar7);
								unk_0xE2B30EB9B14EEAB2();
							}
							else if (iVar1 == 3)
							{
								if (unk_0xB03A1684359C50A1(Global_2324, 3))
								{
									iVar8 = 42;
									Global_14619 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14619 = 0;
								}
								unk_0x76F4FB5EFF5BDED5(Global_14434, "SET_DATA_SLOT");
								unk_0x22DD5585E00B80C3(1);
								unk_0x22DD5585E00B80C3(iVar0);
								unk_0x22DD5585E00B80C3(Global_2330[iVar1 /*15*/].f_10);
								unk_0x22DD5585E00B80C3(0);
								func_58(&(Global_2330[iVar1 /*15*/]));
								unk_0x22DD5585E00B80C3(iVar8);
								unk_0xE2B30EB9B14EEAB2();
							}
							else if (iVar1 == 8)
							{
								unk_0x76F4FB5EFF5BDED5(Global_14434, "SET_DATA_SLOT");
								unk_0x22DD5585E00B80C3(1);
								unk_0x22DD5585E00B80C3(iVar0);
								unk_0x22DD5585E00B80C3(Global_2330[iVar1 /*15*/].f_10);
								unk_0x22DD5585E00B80C3(0);
								func_58(&(Global_2330[iVar1 /*15*/]));
								unk_0x22DD5585E00B80C3(42);
								unk_0xE2B30EB9B14EEAB2();
							}
							else if ((iVar1 == 23 && unk_0x9D39145AD645E383(&(Global_2330[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0xB03A1684359C50A1(Global_2324, 6))
							{
								unk_0x76F4FB5EFF5BDED5(Global_14434, "SET_DATA_SLOT");
								unk_0x22DD5585E00B80C3(1);
								unk_0x22DD5585E00B80C3(iVar0);
								unk_0x22DD5585E00B80C3(Global_2330[iVar1 /*15*/].f_10);
								unk_0x22DD5585E00B80C3(0);
								func_58(&(Global_2330[iVar1 /*15*/]));
								unk_0x22DD5585E00B80C3(42);
								unk_0xE2B30EB9B14EEAB2();
							}
							else if (Global_2330[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1626200.f_1;
								func_88(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2330[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar9), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_88(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2330[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2892[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_90()
{
	switch (iLocal_100)
	{
		case 1:
			unk_0x02207C8103E68CB0(0, 1);
			if (unk_0xB03A1684359C50A1(Global_2323, 28))
			{
				StringCopy(&cLocal_145, "CELL_296", 16);
				func_50();
			}
			else
			{
				StringCopy(&cLocal_145, "CELL_295", 16);
				func_27();
			}
			break;
		
		case 2:
			if (!unk_0xB03A1684359C50A1(Global_2323, 22))
			{
				unk_0x02207C8103E68CB0(0, 1);
				if (unk_0xB03A1684359C50A1(Global_2323, 28))
				{
					StringCopy(&cLocal_145, "CELL_294", 16);
					func_81();
				}
				else
				{
					StringCopy(&cLocal_145, "CELL_293", 16);
					func_80();
				}
				iLocal_100 = 2;
			}
			break;
		
		default:
			break;
	}
}

void func_91(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_92(0))
		{
			Global_14615 = 1;
			if (bParam1)
			{
				unk_0xE0F240E99D061E79(&Global_14390);
			}
			Global_14381 = { Global_14399[Global_14398 /*3*/] };
			unk_0x1F7EA74AE820583A(Global_14381);
		}
	}
	else if (Global_14615 == 1)
	{
		Global_14615 = 0;
		Global_14381 = { Global_14406[Global_14398 /*3*/] };
		if (bParam1)
		{
			unk_0x1F7EA74AE820583A(Global_14390);
		}
		else
		{
			unk_0x1F7EA74AE820583A(Global_14381);
		}
	}
}

int func_92(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14453.f_1 > 3)
		{
			if (unk_0xB03A1684359C50A1(Global_2323, 14))
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
	if (unk_0xE7FAF8E78F7D3A73(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14453.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_93()
{
	if ((Global_1646129.f_133158 == 0 && Global_1646129.f_133159 == 0) && Global_1804687 == 0)
	{
		unk_0x8D15A5FB83757D1A();
	}
}

void func_94(int iParam0, int iParam1)
{
	if (Global_1646129.f_133158 == 1)
	{
	}
	else if (Global_1646129.f_133159 == 1)
	{
	}
	else
	{
		unk_0x50E1313C0E98C567(iParam0, iParam1);
	}
}

int func_95()
{
	if (unk_0xB03A1684359C50A1(Global_2323, 15))
	{
		return 1;
	}
	return 0;
}

int func_96(int iParam0, int iParam1, int iParam2)
{
	if (unk_0xFC0C00F9DE2AEC93(iParam0, uParam1) || (iParam2 == 1 && unk_0x3199F4F904C324F9(iParam0, iParam1)))
	{
		if (unk_0xC339C5C5B5E8BC5B())
		{
			if (unk_0x73A445C7E1EAA5D2() == 0 || (unk_0x91A08229665C71F1() && unk_0xC9FF45E740135482(2)))
			{
				return 0;
			}
		}
		if (unk_0xC83C302702976DCB() || unk_0xF45F7A07410EF1F5())
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

void func_97()
{
	if (Global_14395)
	{
		Local_84 = { -90.3f, 0f, 90f };
		Local_87 = { 1.5f, 0f, -17f };
		if (func_82())
		{
			unk_0x7EE34484BCDD0236(&Local_90, 0);
			Local_84 = { Local_90 };
			unk_0xE0F240E99D061E79(&Local_93);
			Local_87 = { Local_93 };
			iLocal_118 = 0;
			iLocal_119 = 0;
			iLocal_120 = 0;
			iLocal_121 = 0;
			iLocal_122 = 0;
			iLocal_123 = 0;
		}
		if (iLocal_120 == 0)
		{
			if (iLocal_121)
			{
				Local_81.f_0 = (Local_81.f_0 - 14f);
			}
			if (Local_81.f_0 < Local_87.f_0 || Local_81.f_0 == Local_87.f_0)
			{
				iLocal_121 = 0;
			}
			if (iLocal_122)
			{
				Local_81.f_1 = (Local_81.f_1 + 7f);
			}
			if (Local_81.f_1 > Local_87.f_1 || Local_81.f_1 == Local_87.f_1)
			{
				iLocal_122 = 0;
			}
			if (iLocal_123)
			{
				Local_81.f_2 = (Local_81.f_2 + 12f);
			}
			if (Local_81.f_2 > Local_87.f_2 || Local_81.f_2 == Local_87.f_2)
			{
				iLocal_123 = 0;
			}
		}
		if (iLocal_118)
		{
			Local_78.f_0 = (Local_78.f_0 - 1f);
		}
		if (Local_78.f_0 < Local_84.f_0 || Local_78.f_0 == Local_84.f_0)
		{
			Local_78.f_0 = Local_84.f_0;
			iLocal_118 = 0;
		}
		if (iLocal_119)
		{
			Local_78.f_1 = (Local_78.f_1 - 0.5f);
		}
		if (Local_78.f_1 < Local_84.f_1 || Local_78.f_1 == Local_84.f_1)
		{
			Local_78.f_1 = Local_84.f_1;
			iLocal_119 = 0;
		}
		if (iLocal_120)
		{
			Local_78.f_2 = (Local_78.f_2 + 11f);
		}
		if (Local_78.f_2 > Local_84.f_2 || Local_78.f_2 == Local_84.f_2)
		{
			Local_78.f_2 = Local_84.f_2;
			iLocal_120 = 0;
		}
		if (func_82() == 0)
		{
			unk_0xA4EB4F11347C8C00(Local_78, 0);
			unk_0x1F7EA74AE820583A(Local_81);
		}
	}
	else
	{
		Local_84 = { -93.9f, 4.9f, 90.7f };
		if (iLocal_118)
		{
			Local_78.f_0 = (Local_78.f_0 - 1f);
		}
		if (Local_78.f_0 < Local_84.f_0 || Local_78.f_0 == Local_84.f_0)
		{
			iLocal_118 = 0;
		}
		if (iLocal_119)
		{
			Local_78.f_1 = (Local_78.f_1 + 2f);
		}
		if (Local_78.f_1 > Local_84.f_1 || Local_78.f_1 == Local_84.f_1)
		{
			iLocal_119 = 0;
		}
		if (iLocal_120)
		{
			Local_78.f_2 = (Local_78.f_2 + 7f);
		}
		if (Local_78.f_2 > Local_84.f_2 || Local_78.f_2 == Local_84.f_2)
		{
			iLocal_120 = 0;
		}
		unk_0xA4EB4F11347C8C00(Local_78, 0);
	}
	if (Global_14395)
	{
		if (((((iLocal_118 == 0 && iLocal_119 == 0) && iLocal_120 == 0) && iLocal_121 == 0) && iLocal_122 == 0) && iLocal_123 == 0)
		{
			if (func_82())
			{
			}
			else
			{
				Local_78 = { Local_84 };
				unk_0xA4EB4F11347C8C00(Local_78, 0);
				Local_81 = { Local_87 };
				unk_0x1F7EA74AE820583A(Local_81);
			}
			if (iLocal_103 == 0)
			{
				Global_16790 = 0;
				func_94(1, 1);
				iLocal_115 = 1;
				func_98(1);
				func_55();
				func_99();
				func_53(0);
				unk_0xC1B1E9A034A63A62(0);
				iLocal_142 = 1;
				iLocal_143 = 1;
				func_110();
				func_132(uLocal_140, "DISPLAY_VIEW", unk_0xBBDA792448DB5A89(iLocal_144), -1082130432, -1082130432, -1082130432, -1082130432);
				if (!unk_0xB03A1684359C50A1(Global_4267143, 2))
				{
					func_132(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_132(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
				func_134();
			}
		}
	}
	else if ((iLocal_118 == 0 && iLocal_119 == 0) && iLocal_120 == 0)
	{
		Local_78 = { Local_84 };
		unk_0xA4EB4F11347C8C00(Local_78, 0);
		Global_16790 = 0;
	}
}

void func_98(bool bParam0)
{
	if (func_141())
	{
		if (bParam0)
		{
			if (!unk_0x52598E4DDEF81D6E())
			{
				unk_0x39EF40A6038DFFD7(1);
				if (Global_4265868 > 0 && Global_4265868 < 99)
				{
					unk_0xE7E84151A624209B(sLocal_33[Global_4265868], 0);
					unk_0x132D69A00C3836BE(0.25f);
				}
			}
		}
		else if (unk_0x52598E4DDEF81D6E())
		{
			unk_0x39EF40A6038DFFD7(0);
		}
	}
}

void func_99()
{
	if (Global_4265867 > 0 && Global_4265867 < 99)
	{
		if (Global_1804687 == 0)
		{
			unk_0x6DB92041811B9D9B(sLocal_19[Global_4265867]);
		}
	}
}

void func_100()
{
	if (Global_14395)
	{
		iLocal_125 = 0;
		func_55();
		func_91(1, 1);
		func_94(1, 1);
		iLocal_115 = 1;
		Global_16793 = 1;
	}
}

void func_101()
{
	if (Global_1646129.f_133158 == 1 && func_102(1))
	{
		return;
	}
	if (iLocal_127 == 0)
	{
		if (unk_0xB03A1684359C50A1(Global_2323, 28))
		{
			StringCopy(&cLocal_145, "CELL_296", 16);
			func_50();
		}
		else
		{
			StringCopy(&cLocal_145, "CELL_295", 16);
			func_27();
		}
		if (unk_0x9D39145AD645E383(&cLocal_145, "DUMMYCOMPARISON"))
		{
			fLocal_98 = fLocal_99;
			fLocal_96 = fLocal_97;
			fLocal_99 = fLocal_98;
			fLocal_97 = fLocal_96;
		}
		iLocal_100 = 1;
	}
}

int func_102(int iParam0)
{
	if ((func_105() || func_104()) || (func_103() && iParam0))
	{
		return 1;
	}
	return 0;
}

var func_103()
{
	return Global_2447128.f_16;
}

var func_104()
{
	return Global_2447128.f_15;
}

var func_105()
{
	return Global_2447128.f_14;
}

void func_106()
{
	if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		unk_0x929C3CBA660376D5(-1, "Menu_Back", &Global_14442, 1);
	}
}

void func_107()
{
	unk_0x00D42A27C496D1E1(0, 0);
	iLocal_121 = 1;
	iLocal_122 = 1;
	iLocal_123 = 1;
	iLocal_124 = 0;
	iLocal_125 = 1;
}

void func_108()
{
	func_109();
}

void func_109()
{
	if (iLocal_151)
	{
		if (unk_0x83666F9FB8FEBD4B() > 50)
		{
			iLocal_151 = 0;
		}
	}
	if (iLocal_151 == 0)
	{
	}
}

void func_110()
{
	if (Global_14453.f_1 > 3)
	{
		if (!unk_0xC83C302702976DCB())
		{
			unk_0xC1C40A3B8772D9BA(uLocal_140, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, 0);
		}
	}
}

void func_111()
{
	if (func_57(14))
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
		Global_14453 = func_11();
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

void func_112(int iParam0)
{
	if (Global_14615)
	{
		func_91(0, 0);
	}
	if (Global_14453.f_1 == 10 || Global_14453.f_1 == 9)
	{
		unk_0xD2A9C3F486236CC5(&Global_2324, 16);
	}
	if (unk_0x36328FCBA2944E1F())
	{
		unk_0xBE97F4E2B659331B(0);
	}
	Global_15756 = 5;
	if (iParam0 == 1)
	{
		unk_0xD2A9C3F486236CC5(&Global_2323, 30);
	}
	else
	{
		unk_0x62148293B793073B(&Global_2323, 30);
	}
	if (!func_113())
	{
		Global_14453.f_1 = 3;
	}
}

int func_113()
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_114()
{
	unk_0x9C7EE7DE7041A3F4(0, 0, 1);
	unk_0x9C7EE7DE7041A3F4(0, 56, 1);
	if (iLocal_150 == 0)
	{
		unk_0xFCBDBEB257C6D3FB(0, Global_14426);
		unk_0xFCBDBEB257C6D3FB(0, Global_14423);
		unk_0x9C7EE7DE7041A3F4(0, 278, 1);
		unk_0x9C7EE7DE7041A3F4(0, 279, 1);
		unk_0x9C7EE7DE7041A3F4(0, 280, 1);
		unk_0x9C7EE7DE7041A3F4(0, 281, 1);
		unk_0x9C7EE7DE7041A3F4(0, 282, 1);
		unk_0x9C7EE7DE7041A3F4(0, 282, 1);
		unk_0x9C7EE7DE7041A3F4(0, 284, 1);
		unk_0x9C7EE7DE7041A3F4(0, 285, 1);
		unk_0x9C7EE7DE7041A3F4(0, 69, 1);
		unk_0x9C7EE7DE7041A3F4(0, 70, 1);
		unk_0x9C7EE7DE7041A3F4(0, 114, 1);
		unk_0x9C7EE7DE7041A3F4(0, 71, 1);
		unk_0x9C7EE7DE7041A3F4(0, 72, 1);
		unk_0x9C7EE7DE7041A3F4(0, 74, 1);
		unk_0x9C7EE7DE7041A3F4(0, 75, 1);
		unk_0x9C7EE7DE7041A3F4(0, 76, 1);
		unk_0x9C7EE7DE7041A3F4(0, 73, 1);
		unk_0x9C7EE7DE7041A3F4(0, 77, 1);
		unk_0x9C7EE7DE7041A3F4(0, 78, 1);
		unk_0x9C7EE7DE7041A3F4(0, 286, 1);
		unk_0x9C7EE7DE7041A3F4(0, 287, 1);
		unk_0x9C7EE7DE7041A3F4(0, 79, 1);
		unk_0x9C7EE7DE7041A3F4(0, 80, 1);
		unk_0x9C7EE7DE7041A3F4(0, 81, 1);
		unk_0x9C7EE7DE7041A3F4(0, 82, 1);
		unk_0x9C7EE7DE7041A3F4(0, 86, 1);
		unk_0x9C7EE7DE7041A3F4(0, 59, 1);
		unk_0x9C7EE7DE7041A3F4(0, 60, 1);
		unk_0x9C7EE7DE7041A3F4(0, 61, 1);
		unk_0x9C7EE7DE7041A3F4(0, 62, 1);
		unk_0x9C7EE7DE7041A3F4(0, 63, 1);
		unk_0x9C7EE7DE7041A3F4(0, 64, 1);
		unk_0x9C7EE7DE7041A3F4(0, 87, 1);
		unk_0x9C7EE7DE7041A3F4(0, 88, 1);
		unk_0x9C7EE7DE7041A3F4(0, 89, 1);
		unk_0x9C7EE7DE7041A3F4(0, 90, 1);
		unk_0x9C7EE7DE7041A3F4(0, 107, 1);
		unk_0x9C7EE7DE7041A3F4(0, 108, 1);
		unk_0x9C7EE7DE7041A3F4(0, 109, 1);
		unk_0x9C7EE7DE7041A3F4(0, 110, 1);
		unk_0x9C7EE7DE7041A3F4(0, 111, 1);
		unk_0x9C7EE7DE7041A3F4(0, 112, 1);
		unk_0x9C7EE7DE7041A3F4(0, 113, 1);
		unk_0x9C7EE7DE7041A3F4(0, 114, 1);
		unk_0x9C7EE7DE7041A3F4(0, 91, 1);
		unk_0x9C7EE7DE7041A3F4(0, 92, 1);
		unk_0x9C7EE7DE7041A3F4(0, 68, 1);
		unk_0x9C7EE7DE7041A3F4(0, 102, 1);
		unk_0x9C7EE7DE7041A3F4(0, 136, 1);
		unk_0x9C7EE7DE7041A3F4(0, 137, 1);
		unk_0x9C7EE7DE7041A3F4(0, 138, 1);
		unk_0x9C7EE7DE7041A3F4(0, 139, 1);
		unk_0x9C7EE7DE7041A3F4(0, 102, 1);
	}
}

int func_115()
{
	var uVar0;
	
	if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			uVar0 = unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0);
			if (unk_0x74B8CA477787A438(uVar0, -1, 0))
			{
				return 1;
			}
			else if (!unk_0x4983F8C51A0C0AF3(uVar0, -1, 0) == unk_0x18F7BE9ACB7D08F4())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_116()
{
	var uVar0;
	
	func_123(&uVar0);
	if (Global_1312831 == 0)
	{
		if (!unk_0x44243F2E2F58B8E3())
		{
			return 1;
		}
	}
	if (func_122())
	{
		return 1;
	}
	if (Global_2459011)
	{
		return 1;
	}
	if (func_121())
	{
		return 1;
	}
	if (func_120(157))
	{
		if (!func_119())
		{
			return 1;
		}
	}
	if (func_120(155))
	{
		return 1;
	}
	if (!unk_0xA1C84586015AE5DB())
	{
		return 1;
	}
	if (func_117() != 0)
	{
		if (unk_0xE7FAF8E78F7D3A73(func_117()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_117()
{
	switch (func_118())
	{
		case 0:
			return joaat("freemode");
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_118()
{
	return Global_25233;
}

bool func_119()
{
	return Global_2447128.f_586;
}

int func_120(int iParam0)
{
	if (unk_0xA1B200C8BB1289B7(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_121()
{
	return Global_2456781;
}

bool func_122()
{
	return Global_2447128.f_581;
}

void func_123(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x5B5D98FAAE6FEC3E(1))
	{
		iVar1 = unk_0xD8DDA9403FAEDB57(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0xF6A7C6FEAD04F4B3(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 1592539087:
					func_124(iVar0);
					break;
				
				case 1094813140:
					unk_0xF6A7C6FEAD04F4B3(1, iVar0, &Var4, 4);
					if (Var4.f_2 == 1903409068)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_124(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	if (unk_0xF6A7C6FEAD04F4B3(1, iParam0, &Var0, 3))
	{
		if (func_126(Var0.f_1, 1, 1))
		{
			iVar3 = unk_0x6604E096142B4B55(Var0.f_1);
			if (unk_0x31F12808DC47A9E5(iVar3))
			{
				if (unk_0x657B649BA2AD3582(iVar3, 0))
				{
					iVar4 = unk_0x5AD687C3474F04B4(iVar3, 0);
					if (unk_0xF7FC2DC5308754C4(iVar4, Var0.f_2) && unk_0xD8E9E28C65F6D7A9())
					{
						if (func_125(iVar4, &bVar5))
						{
							unk_0x02FFEDE7A52D9E18(iVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x4F5FF3F3FDCAB15D(&iVar4);
						}
					}
				}
			}
		}
	}
}

int func_125(int iParam0, var uParam1)
{
	if (unk_0x31F12808DC47A9E5(iParam0))
	{
		if (!unk_0x90D1FDC9D31B7BE1(iParam0))
		{
			if (unk_0x84E7E48409E0DA9F(iParam0))
			{
				if (!unk_0xA403D842C198CAFF(unk_0x4F69FBD64CDF125B(iParam0)))
				{
					unk_0x337F2213526139E0(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0xE54DCC6B21FDC95A(iParam0, 0))
		{
			if (unk_0x1800B99666D25740(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_126(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		if (unk_0x4AF13BCD120BCDBC(uParam0))
		{
			if (bParam1)
			{
				if (!unk_0x557001354138B7FB(uParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2436169.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_127()
{
	if (iLocal_156 == 1)
	{
		unk_0xE05212008FE9A018(7);
		unk_0xE05212008FE9A018(1);
		unk_0xE05212008FE9A018(3);
		unk_0xE05212008FE9A018(4);
		unk_0xE05212008FE9A018(6);
		unk_0xE05212008FE9A018(8);
		unk_0xE05212008FE9A018(9);
		unk_0xE05212008FE9A018(2);
	}
	else
	{
		unk_0x3F19B70555683951();
	}
}

void func_128(char* sParam0, int iParam1)
{
	unk_0x2202872EA73499C3(sParam0);
	unk_0xF764171B43EBA5E4(0, 0, 1, iParam1);
}

void func_129()
{
	if (func_130())
	{
		unk_0x80F8840DF2B0CE8E();
		if (unk_0x48CBE4624A53D5DF(0))
		{
			iLocal_103 = 1;
			iLocal_111 = 0;
		}
		else
		{
			Global_16793 = 1;
			Global_14453.f_1 = 3;
			unk_0x3D889DC768CF362B();
		}
	}
	else
	{
		iLocal_109 = 0;
		iLocal_110 = 0;
		if (iLocal_104 == 1)
		{
			if (iLocal_127 == 0)
			{
				if (unk_0x5C716BBF766E1C70(uLocal_140))
				{
					if (func_141())
					{
						if (Global_4265868 == 0)
						{
							if (!unk_0xB03A1684359C50A1(Global_4267143, 2))
							{
								func_132(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
						}
						func_132(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
					}
					else
					{
						if (!unk_0xB03A1684359C50A1(Global_4267143, 2))
						{
							func_132(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						}
						func_132(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
					}
				}
			}
			else if (unk_0x5C716BBF766E1C70(uLocal_140))
			{
				func_132(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_132(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
			}
			iLocal_104 = 0;
		}
		iLocal_111 = 0;
		unk_0x3D889DC768CF362B();
	}
}

int func_130()
{
	if (Global_1646129.f_133158 == 1)
	{
		if (Global_70852)
		{
			return 0;
		}
	}
	if (Global_1646129.f_133159 == 1)
	{
		if (Global_70852)
		{
			return 0;
		}
	}
	if (unk_0x35D499EE14C3D367() || unk_0xC57A05B38A912073())
	{
		if (unk_0xB03A1684359C50A1(Global_2324, 28))
		{
			return 0;
		}
	}
	return 1;
}

void func_131(var uParam0, char* sParam1)
{
	unk_0x76F4FB5EFF5BDED5(uParam0, sParam1);
	unk_0xE2B30EB9B14EEAB2();
}

void func_132(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x76F4FB5EFF5BDED5(uParam0, sParam1);
	unk_0x22DD5585E00B80C3(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x22DD5585E00B80C3(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x22DD5585E00B80C3(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x22DD5585E00B80C3(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x22DD5585E00B80C3(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xE2B30EB9B14EEAB2();
}

int func_133()
{
	if (Global_70852)
	{
		Global_14453 = 3;
	}
	else
	{
		Global_14453 = func_11();
	}
	if (Global_14453 > 3)
	{
		Global_14453 = 3;
	}
	return Global_104551.f_14021[Global_14453 /*20*/].f_7;
}

void func_134()
{
	if (Global_14453.f_1 > 3)
	{
		Global_14453.f_1 = 8;
	}
	Global_16792 = 0;
	iLocal_127 = 0;
	if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		Local_67 = { unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1) };
	}
	if (Global_14395)
	{
		while (unk_0x83666F9FB8FEBD4B() < iLocal_137)
		{
			unk_0x4EDE34FBADD967A6(0);
			func_110();
			func_78();
			unk_0x0A4CB1D4A63A7528();
		}
		func_131(uLocal_140, "OPEN_SHUTTER");
		func_127();
		func_101();
		iLocal_129 = 1;
		unk_0x5AE11BC36633DE4E(0);
	}
	else
	{
		func_94(1, 1);
		func_98(1);
		func_55();
		func_99();
		func_53(0);
		iLocal_115 = 1;
	}
}

void func_135(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xD2A9C3F486236CC5(&Global_2323, 15);
	}
	else
	{
		unk_0x62148293B793073B(&Global_2323, 15);
	}
}

bool func_136()
{
	return Global_1312831;
}

int func_137(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x0FAE113CE72ED842(iParam0))
	{
		if (unk_0x657B649BA2AD3582(iParam0, iParam1))
		{
			uVar0 = unk_0x5AD687C3474F04B4(iParam0, iParam1);
			if (unk_0x31F12808DC47A9E5(uVar0))
			{
				iVar1 = unk_0x80F48E43F37DD7DD(unk_0x4F69FBD64CDF125B(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0x74B8CA477787A438(iVar0, iVar3, 0))
					{
						if (unk_0x4983F8C51A0C0AF3(iVar0, iVar3, 0) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

void func_138()
{
}

int func_139(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xC339C5C5B5E8BC5B())
	{
		if (unk_0x511092EDBCB2F66B() != iParam0 && bParam2)
		{
			unk_0x0602616B0914EF8A(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_140()
{
	if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		if (unk_0x5F097B85CE09760A(unk_0x18F7BE9ACB7D08F4()))
		{
			unk_0xE560AD9B53AA9A85(unk_0x18F7BE9ACB7D08F4(), 0, 0);
			unk_0x1AD9E9CB65983F38(fLocal_157);
			unk_0x2D40F157BCBF34E4(fLocal_158);
			unk_0x4C01D28FA61916AF(fLocal_159);
		}
		else
		{
			unk_0x1AD9E9CB65983F38(fLocal_157);
			unk_0x2D40F157BCBF34E4(fLocal_158);
			unk_0x4C01D28FA61916AF(fLocal_159);
		}
	}
	unk_0x317165FAA6694033(fLocal_160);
	unk_0xC65DF546BBAE948B(fLocal_161);
	unk_0x6EED4C34D2B4A6B2(fLocal_162);
	unk_0xA6C7EDCADBBB8316(fLocal_163);
	func_52();
}

int func_141()
{
	if (iLocal_56 == 0)
	{
		iLocal_56 = 1;
	}
	return 1;
}

