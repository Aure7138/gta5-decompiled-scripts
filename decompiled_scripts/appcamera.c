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
	unk_0x330AFE43E1483B3F();
	if (unk_0xB8EB22F9350F13DC() == 0)
	{
		fLocal_77 = 1f;
	}
	else
	{
		fLocal_77 = 0.7f;
	}
	if (!func_135())
	{
		Global_2594042 = 99;
		Global_2594043 = 99;
		iLocal_57 = 99;
	}
	else
	{
		Global_2594042 = 0;
		Global_2594043 = 0;
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
	func_134();
	if (func_133(1, 1, !iLocal_64, 1))
	{
		iLocal_64 = 1;
	}
	func_132();
	iLocal_112 = unk_0x3DF2C10FD29336A3();
	if (Global_14388 == 0)
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
	Global_16778 = 0;
	Global_16779 = 0;
	if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
	{
		if (unk_0xB761218A37B51027(unk_0x17B5CC8A8615737D()))
		{
			Global_16778 = 1;
		}
		if (unk_0xC06793848501358C())
		{
			Global_16778 = 1;
		}
		if (unk_0x45CD66F0A131E554(unk_0xF566689615D97192(unk_0x17B5CC8A8615737D()), 0))
		{
			Global_16778 = 1;
		}
		if (unk_0x780A193B53AF21CF(unk_0x17B5CC8A8615737D(), 78, 1))
		{
			Global_16778 = 1;
		}
		if (unk_0xA66773CB22F42448(unk_0x17B5CC8A8615737D()))
		{
			Global_16778 = 1;
		}
		if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
		{
			if (iLocal_131 == 1)
			{
				Global_16778 = 1;
			}
			uLocal_149 = unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0);
			if ((unk_0x0324EEB10F81965F(uLocal_149) == joaat("rhino") || unk_0x0324EEB10F81965F(iLocal_149) == joaat("cutter")) || unk_0x0324EEB10F81965F(iLocal_149) == joaat("submersible"))
			{
				Global_16778 = 1;
			}
			else if (unk_0x17206B315923243C(iLocal_149, -1, 0) == unk_0x17B5CC8A8615737D())
			{
				if (unk_0x2BB7527A68E10019(iLocal_149) > 0f)
				{
					if (!Global_69702)
					{
						if (!func_131())
						{
							unk_0x736D228B743132A9(unk_0x17B5CC8A8615737D(), iLocal_149, 6, 4000);
						}
					}
				}
			}
		}
	}
	if (Global_69702)
	{
		if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
		{
			unk_0x4536CA73A019CB85(unk_0xBE369BE1BC57A796(), 0);
		}
	}
	unk_0x21E7933CCC7B3724(&Global_2313, 21);
	func_130(0);
	unk_0xEB79FECD9022AAF0(&Global_2313, 17);
	if (Global_14385 == 0)
	{
		func_129();
	}
	else
	{
		uLocal_140 = unk_0xB50E108F09B8EC7A("camera_gallery");
		uLocal_141 = unk_0xB50E108F09B8EC7A("instructional_buttons");
		while (!unk_0xFF84A94166FBB351(uLocal_140) || !unk_0xFF84A94166FBB351(uLocal_141))
		{
			unk_0x4EDE34FBADD967A6(0);
			unk_0xF6EFB598FD123B39();
			unk_0xD1BB2AD73E7FC3A7(0, 25, 1);
		}
		if (Global_69702)
		{
			iLocal_144 = 2;
		}
		else
		{
			switch (func_128())
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
		func_127(uLocal_140, "DISPLAY_VIEW", unk_0xBBDA792448DB5A89(iLocal_144), -1082130432, -1082130432, -1082130432, -1082130432);
		func_126(uLocal_140, "CLOSE_SHUTTER");
		unk_0xEAC9A8A194DF8F91(Global_14424, "DISPLAY_VIEW");
		unk_0xDF18CF55301CEB8B(16);
		unk_0x44983883E630A945();
	}
	Local_78 = { Global_14403 };
	Local_81 = { Global_14396[Global_14388 /*3*/] };
	Global_16779 = 1;
	iLocal_118 = 1;
	iLocal_119 = 1;
	iLocal_120 = 1;
	iLocal_121 = 1;
	iLocal_122 = 1;
	iLocal_123 = 1;
	iLocal_124 = 0;
	iLocal_125 = 0;
	if (Global_14443.f_1 > 3)
	{
		Global_14443.f_1 = 8;
	}
	if (iLocal_131 == 0)
	{
		unk_0x21E7933CCC7B3724(&Global_2315, 3);
	}
	func_124();
	unk_0x4ED9ECF3735CB826(4);
	if (unk_0xA97EA4AF4A03DC2E())
	{
	}
	if (Global_1633501.f_102723)
	{
	}
	if (Global_1633501.f_102725 == 1)
	{
		iLocal_156 = 1;
	}
	if (iLocal_156 == 1)
	{
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		unk_0x28EAA5C7C54BD253(0, Global_14412);
		unk_0x28EAA5C7C54BD253(0, 186);
		unk_0xF6EFB598FD123B39();
		unk_0xD1BB2AD73E7FC3A7(0, 25, 1);
		unk_0xD1BB2AD73E7FC3A7(0, 0, 1);
		if (!Global_101700.f_13010.f_81)
		{
			if (!unk_0x48B8265059381CD0(Global_2595318, 13))
			{
				if (!unk_0x9E123D5FF2973C60())
				{
					if (!unk_0x48B8265059381CD0(Global_2314, 28))
					{
						if (iLocal_128 && iLocal_131 == 0)
						{
							unk_0xEB79FECD9022AAF0(&Global_2595318, 13);
							Global_101700.f_13010.f_81 = 1;
							func_123("CELL_FOC_HLP", -1);
						}
					}
				}
			}
		}
		if (!unk_0x95DBE123BC2DB80B())
		{
			if (Global_1633501.f_102722 == 0 && Global_1633501.f_102723 == 0)
			{
				unk_0x0E544F498B88F47B(15, 0f, -0.0375f);
			}
			unk_0xE57F94EA937AAD99(7);
			func_122();
			if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
			{
				unk_0x0E21DA99F698AF06(unk_0x17B5CC8A8615737D(), 200, 1);
			}
			unk_0xD1BB2AD73E7FC3A7(0, 44, 1);
			unk_0xD1BB2AD73E7FC3A7(0, 47, 1);
			unk_0xD1BB2AD73E7FC3A7(0, 91, 1);
			unk_0xD1BB2AD73E7FC3A7(0, 92, 1);
			unk_0xD1BB2AD73E7FC3A7(0, 68, 1);
			if (iLocal_150 == 0)
			{
				unk_0x28EAA5C7C54BD253(0, Global_14416);
			}
			unk_0x28EAA5C7C54BD253(0, Global_14413);
			if (unk_0x25BD4C26D84038CD() || unk_0x46EEE08565CE19CA())
			{
				iLocal_130 = 1;
				Global_14443.f_1 = 3;
				unk_0xD278B72A700DC2DC(0);
			}
			if (unk_0x485F411081A645B0())
			{
				Global_14443.f_1 = 3;
				unk_0xD278B72A700DC2DC(0);
			}
			if (unk_0x48B8265059381CD0(Global_2314, 3))
			{
				Global_14443.f_1 = 3;
				unk_0xD278B72A700DC2DC(0);
			}
			if (unk_0x63C468D583002D23())
			{
				if (func_111())
				{
					Global_14443.f_1 = 3;
					unk_0xD278B72A700DC2DC(0);
				}
			}
			if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
			{
				if (unk_0x6A67A9A75CEBC97E(unk_0x17B5CC8A8615737D(), 0))
				{
					Global_14443.f_1 = 3;
					unk_0xD278B72A700DC2DC(0);
				}
				if ((unk_0x780A193B53AF21CF(unk_0x17B5CC8A8615737D(), 78, 1) || unk_0xA4FEB0448027296A(unk_0xBE369BE1BC57A796())) || unk_0xE58A1B5558D2DC66(unk_0xBE369BE1BC57A796()))
				{
					if (func_110())
					{
					}
					else
					{
						Global_14443.f_1 = 3;
						unk_0xD278B72A700DC2DC(0);
					}
				}
				if (unk_0x7F4AE93855973529(unk_0x17B5CC8A8615737D()) || unk_0xC3B1F1C9A58948C2(unk_0x17B5CC8A8615737D()))
				{
					if (Global_69702 == 1)
					{
						Global_14443.f_1 = 3;
					}
				}
				if (unk_0xA77EE6C138A588EB(unk_0x17B5CC8A8615737D()))
				{
					if (unk_0x36A9D1BD116D3378(unk_0x17B5CC8A8615737D()) > 0.3f)
					{
						Global_14443.f_1 = 3;
					}
				}
				if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
				{
					func_109();
					iLocal_149 = unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0);
					if (unk_0x2BB7527A68E10019(iLocal_149) < 0f)
					{
						func_107(0);
					}
					if (iLocal_115 == 1)
					{
						if (iLocal_116 == 1)
						{
							if (!unk_0x4C3947D350B9E253())
							{
								func_107(0);
							}
						}
						else if (!unk_0x4C3947D350B9E253())
						{
							iLocal_116 = 1;
							unk_0x4EDE34FBADD967A6(0);
							unk_0xF6EFB598FD123B39();
						}
					}
				}
				else if (Global_69702 == 0)
				{
					if (unk_0x48B8265059381CD0(Global_2313, 18))
					{
						func_106();
						if ((Global_14443 == 0 || Global_14443 == 1) || Global_14443 == 2)
						{
							if (!unk_0xF2AD8EF337DD09CD(unk_0x17B5CC8A8615737D()))
							{
								if (unk_0xD4337557D3DEFC11(unk_0x17B5CC8A8615737D()) == 2)
								{
								}
								else
								{
									Global_14443.f_1 = 3;
									unk_0xD278B72A700DC2DC(0);
								}
							}
						}
					}
				}
			}
			if (iLocal_142)
			{
				func_105();
			}
			if (Global_14443.f_1 < 4)
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
							if (Global_14443.f_1 > 3)
							{
								if (iLocal_150)
								{
									func_103();
									if (Global_16783 == 0 && Global_16780 == 6)
									{
										unk_0x2B3976C5A4017270(0, 1);
										unk_0xF9E752009D9D07AB();
										iLocal_150 = 0;
										func_102();
										if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
										{
											Local_67 = { unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1) };
										}
										func_101();
										iLocal_109++;
										if (func_135())
										{
											func_127(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
										}
										else
										{
											func_127(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
										}
										iLocal_132 = 0;
										iLocal_133 = 0;
										iLocal_134 = 0;
										iLocal_127 = 0;
										func_100();
									}
									if (Global_16780 == 0)
									{
										iLocal_150 = 0;
										unk_0xF9E752009D9D07AB();
										if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
										{
											Local_67 = { unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1) };
										}
										func_99();
										iLocal_132 = 0;
										iLocal_133 = 0;
										iLocal_134 = 0;
										iLocal_127 = 0;
										func_100();
										if (func_135())
										{
											if (Global_2594043 == 0)
											{
												if (!unk_0x48B8265059381CD0(Global_2595318, 2))
												{
													func_127(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
											}
										}
										else if (!unk_0x48B8265059381CD0(Global_2595318, 2))
										{
											func_127(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
										}
										func_98();
										func_97(1);
									}
								}
								else if (Global_14443.f_1 != 9)
								{
									if (Global_16779 == 1)
									{
										if (Global_16778 == 0)
										{
											func_96();
										}
									}
									else if ((Global_2921 - Global_2920) > Global_2922)
									{
										if (func_95(2, Global_14411, 0))
										{
											if (func_94() && iLocal_127)
											{
											}
											else if (iLocal_127 == 0)
											{
												unk_0xD278B72A700DC2DC(0);
												unk_0x2EB37CDED0E516F3(iLocal_112);
												iLocal_143 = 0;
												if (Global_16778 == 0)
												{
													func_101();
													Global_16778 = 1;
													unk_0x2B3976C5A4017270(0, 1);
													iLocal_128 = 0;
													iLocal_118 = 1;
													iLocal_119 = 1;
													iLocal_120 = 1;
													iLocal_121 = 1;
													iLocal_122 = 1;
													iLocal_123 = 1;
													func_93(0, 0);
													func_97(0);
													iLocal_115 = 0;
													func_92();
													iLocal_142 = 0;
													func_90(0, 1);
													func_127(Global_14424, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
											}
										}
									}
									if (iLocal_101 == 0)
									{
										if (unk_0x9E123D5FF2973C60())
										{
											func_89();
											iLocal_101 = 1;
										}
									}
									else if (!unk_0x9E123D5FF2973C60())
									{
										func_89();
										iLocal_101 = 0;
									}
									if (iLocal_102 == 0)
									{
										if (unk_0x48B8265059381CD0(Global_2313, 28))
										{
											func_89();
											iLocal_102 = 1;
										}
									}
									else if (!unk_0x48B8265059381CD0(Global_2313, 28))
									{
										func_89();
										iLocal_102 = 0;
									}
									if (Global_16778 == 1)
									{
										func_82();
									}
									else if (Global_14443.f_1 > 4)
									{
										if (iLocal_124 == 1 && iLocal_125 == 0)
										{
											func_78();
										}
										if (iLocal_124 == 0 && iLocal_125 == 1)
										{
											func_99();
											if (iLocal_136 == 1 || iLocal_136 == 0)
											{
												if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
												{
													if (!unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
													{
														func_126(uLocal_140, "CLOSE_SHUTTER");
														iLocal_135 = unk_0x94E3E074F38DF86C();
														while (unk_0x94E3E074F38DF86C() < (iLocal_135 + iLocal_137) && Global_14443.f_1 > 3)
														{
															func_122();
															func_105();
															func_77();
															unk_0xF6EFB598FD123B39();
															unk_0x4EDE34FBADD967A6(0);
														}
													}
												}
												if (func_135())
												{
													if (Global_2594043 == 0)
													{
														if (!unk_0x48B8265059381CD0(Global_2595318, 2))
														{
															func_127(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
														}
													}
												}
												else if (!unk_0x48B8265059381CD0(Global_2595318, 2))
												{
													func_127(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
												func_105();
												func_122();
												iLocal_132 = 0;
												iLocal_133 = 0;
												iLocal_134 = 0;
												iLocal_127 = 0;
												func_100();
												iLocal_136 = 0;
												func_126(uLocal_140, "OPEN_SHUTTER");
											}
											func_98();
											func_97(1);
											func_76();
										}
									}
									if (iLocal_143 == 1)
									{
										func_73();
									}
									if (iLocal_129)
									{
										if (unk_0xC9D9444186B5A374() > 500)
										{
											iLocal_128 = 1;
											iLocal_129 = 0;
											unk_0xEB79FECD9022AAF0(&Global_2313, 18);
											if (Global_16778 == 0)
											{
												func_90(1, 1);
											}
										}
									}
									if (iLocal_127 == 0)
									{
										if (iLocal_128 && Global_16778 == 0)
										{
											if ((iLocal_130 == 0 && iLocal_125 == 0) && Global_16781 == 0)
											{
												func_10();
											}
										}
										else
										{
											func_77();
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
					if (Global_14443.f_1 > 3)
					{
						if (Global_16779 == 1)
						{
							if (Global_16778 == 0)
							{
								func_96();
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
					unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "CELL_CAM_FW_1", iLocal_152, "CELL_CAM_FW_2", 0, -1, "", "", 1);
				}
				if (iLocal_155 == 2)
				{
					unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "ERROR_NO_SC_CAMERAPHONE", iLocal_152, "", 0, -1, "", "", 1);
				}
				if (iLocal_155 == 6)
				{
					unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "SC_ERROR_BANNED", iLocal_152, "", 0, -1, "", "", 1);
				}
				if (iLocal_155 == 3)
				{
					unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "ERROR_UPDATE_SC_CAMERAPHONE", iLocal_152, "", 0, -1, "", "", 1);
				}
				if (iLocal_155 == 7)
				{
					if (unk_0xB15049400DCD8DC9() || unk_0x8EA3D5407E9F4AF0())
					{
						unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "CELL_CAM_TEMP_3X", iLocal_152, "", 0, -1, "", "", 1);
					}
					if (unk_0xF20D8448F6AFC86C() || unk_0x7C2F31E78C33DE0F())
					{
						unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "CELL_CAM_TEMP_3P", iLocal_152, "", 0, -1, "", "", 1);
					}
					if (unk_0xEF4E5E47AF0D4480())
					{
						unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "CELL_CAM_TEMP_30", iLocal_152, "", 0, -1, "", "", 1);
					}
				}
				if (iLocal_155 == 4)
				{
					unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "CELL_CAM_CCW_1", iLocal_152, "CELL_CAM_CCW_2", 0, -1, "", "", 1);
				}
				if (iLocal_155 == 5)
				{
					iVar0 = unk_0xDE66F722C23AD184();
					switch (iVar0)
					{
						case -1:
							unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "HUD_AGE_I", iLocal_152, "", 0, -1, "", "", 1);
							break;
						
						case 0:
							unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "HUD_AGE_P", iLocal_152, "", 0, -1, "", "", 1);
							break;
						
						case 1:
							unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "HUD_AGE_C", iLocal_152, "", 0, -1, "", "", 1);
							break;
						
						case 2:
							unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "HUD_AGE_T", iLocal_152, "", 0, -1, "", "", 1);
							break;
						
						default:
							unk_0xDC38CC1E35B6A5D7("CELL_CAM_ALERT", "HUD_AGE_P", iLocal_152, "", 0, -1, "", "", 1);
							break;
						}
				}
				if (iLocal_155 == 0)
				{
				}
				if (iLocal_155 == 2 || iLocal_155 == 3)
				{
					if (unk_0x4B972043966C2EB8(2, 202))
					{
						iLocal_153 = 0;
						iLocal_155 = 0;
						func_90(0, 1);
					}
					if (unk_0x4B972043966C2EB8(2, 201))
					{
						iLocal_154 = 1;
					}
					if (iLocal_154 == 1)
					{
						if (unk_0x164D7B6E326ECB2A(2, 201))
						{
							iLocal_153 = 0;
							iLocal_155 = 0;
							func_90(0, 1);
							iLocal_154 = 0;
							unk_0xD4B482DFF2BF13A2("Gallery");
							unk_0x5607262F74817902();
						}
					}
				}
				else if (iLocal_155 == 7)
				{
					if (unk_0x7C2F31E78C33DE0F())
					{
						if (unk_0x4B972043966C2EB8(2, 201))
						{
							iLocal_153 = 0;
							iLocal_155 = 0;
							func_90(0, 1);
							iLocal_111 = 0;
						}
					}
					else if (unk_0x4B972043966C2EB8(2, 202))
					{
						iLocal_153 = 0;
						iLocal_155 = 0;
						func_90(0, 1);
						iLocal_111 = 0;
					}
					if (!unk_0x7C2F31E78C33DE0F())
					{
						if (unk_0x4B972043966C2EB8(2, Global_14415))
						{
							iLocal_153 = 0;
							iLocal_155 = 0;
							func_90(0, 1);
							if (unk_0x48B8265059381CD0(Global_2314, 28))
							{
								iLocal_111 = 0;
							}
							else
							{
								iLocal_111 = 2;
							}
							iLocal_107 = unk_0x94E3E074F38DF86C();
							unk_0xEFC67FF618C4DD5F(1);
						}
					}
				}
				else if (unk_0x4B972043966C2EB8(2, 201))
				{
					iLocal_153 = 0;
					iLocal_155 = 0;
					func_90(0, 1);
				}
			}
		}
		iLocal_108 = unk_0x94E3E074F38DF86C();
		if (func_3() || iLocal_130)
		{
			func_1(0);
			func_93(0, 0);
			func_97(0);
			iLocal_115 = 0;
			func_92();
			Global_16778 = 0;
			Global_16779 = 0;
			Global_16781 = 0;
			unk_0x33CBABDFE7B17924(&uLocal_140);
			unk_0x33CBABDFE7B17924(&uLocal_141);
			unk_0xD278B72A700DC2DC(0);
			if (Global_14606 == 1)
			{
				unk_0xEB79FECD9022AAF0(&Global_2313, 17);
			}
			else
			{
				unk_0x21E7933CCC7B3724(&Global_2313, 17);
			}
			unk_0x2B3976C5A4017270(0, 1);
			unk_0x4536CA73A019CB85(unk_0xBE369BE1BC57A796(), 1);
			unk_0x21E7933CCC7B3724(&Global_2315, 3);
			unk_0x21E7933CCC7B3724(&Global_2595318, 3);
			unk_0x81118A143DD8B493(15);
			Global_16782 = 1;
			unk_0x2EB37CDED0E516F3(iLocal_112);
			unk_0xB47CC6339ADB0B67(iLocal_112);
			unk_0xF9E752009D9D07AB();
			func_92();
			unk_0x34B12E3900246AE0(0);
			unk_0x0BD8DDF2D6EF16AA(0);
			unk_0x399BB4C7486EE39D(1f);
			if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
			{
				unk_0xF2F66822E1357C31(unk_0x17B5CC8A8615737D(), "Mood_Normal_1", 0);
				unk_0xE81FB651EA53A574(unk_0x17B5CC8A8615737D());
			}
			if (Global_2594043 > 0 && Global_2594043 < 13)
			{
				unk_0xC07032666ADF86BE(sLocal_33[Global_2594043]);
			}
			unk_0x21E7933CCC7B3724(&Global_2313, 18);
			func_90(0, 1);
			if (func_133(0, 1, iLocal_64, 1))
			{
				iLocal_64 = 0;
			}
			unk_0x921053BAF754303D();
		}
	}
}

void func_1(int iParam0)
{
	if (func_2())
	{
		if (iParam0 == 1)
		{
			unk_0xA9A95EAF30673444(1);
		}
		else if (Global_14443.f_1 > 3)
		{
			unk_0xA9A95EAF30673444(0);
		}
	}
}

int func_2()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69702)
	{
		return 0;
	}
	iVar2 = 0;
	uVar0 = unk_0xB2CED41F4337ED8B();
	iVar1 = unk_0xB866C0EABE959340(uVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_2595532 || iVar2)
	{
		return 1;
	}
	return 1;
}

int func_3()
{
	if (((Global_14443.f_1 == 1 || Global_14443.f_1 == 3) || Global_14443.f_1 == 0) || Global_14387 == 1)
	{
		Global_14430 = 1;
		return 1;
	}
	return 0;
}

void func_4()
{
	iLocal_106 = unk_0x84CF4F3B0C6CB3D3(0);
	switch (iLocal_106)
	{
		case 0:
			iLocal_103 = 0;
			iLocal_109 = unk_0x43D8A0731E72FA43();
			iLocal_110 = unk_0x3440CECCDD2E858C();
			if (iLocal_104 == 1)
			{
				if (iLocal_127 == 0)
				{
					if (unk_0xFF84A94166FBB351(uLocal_140))
					{
						if (func_135())
						{
							if (Global_2594043 == 0)
							{
								if (!unk_0x48B8265059381CD0(Global_2595318, 2))
								{
									func_127(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
								}
							}
							func_127(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
						}
						else
						{
							if (!unk_0x48B8265059381CD0(Global_2595318, 2))
							{
								func_127(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							func_127(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
						}
					}
				}
				else if (unk_0xFF84A94166FBB351(uLocal_140))
				{
					func_127(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_127(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
				}
				iLocal_104 = 0;
			}
			unk_0xF9E752009D9D07AB();
			break;
		
		case 1:
			if (!unk_0xDFA02D404FFEF5F2())
			{
				unk_0x67D9DFC4D91122DD("CELL_SPINNER2");
				unk_0x168CD266B6A65426(1);
			}
			break;
		
		case 2:
			if (unk_0x48B8265059381CD0(Global_2314, 28))
			{
				iLocal_103 = 0;
				iLocal_109 = 0;
				iLocal_110 = 0;
			}
			else
			{
				Global_14443.f_1 = 3;
				Global_16782 = 1;
			}
			unk_0xF9E752009D9D07AB();
			break;
	}
}

void func_5()
{
	if (func_95(2, Global_14412, 0))
	{
		func_1(0);
		if (unk_0x48B8265059381CD0(Global_2314, 28))
		{
			unk_0xD278B72A700DC2DC(0);
			unk_0x5AE11BC36633DE4E(0);
			func_102();
			iLocal_127 = 0;
			if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
			{
				Local_67 = { unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1) };
			}
			func_101();
			iLocal_136 = 1;
		}
		else if (func_9())
		{
			if (unk_0x48B8265059381CD0(Global_2314, 14))
			{
				func_123("CELL_299", -1);
			}
			else
			{
				func_101();
				func_8();
			}
		}
		else
		{
			iLocal_153 = 1;
			func_90(1, 1);
		}
	}
	if (unk_0x48B8265059381CD0(Global_2313, 22))
	{
		func_1(0);
		while (unk_0x83666F9FB8FEBD4B() < 2000)
		{
			unk_0x4EDE34FBADD967A6(0);
			func_122();
			unk_0xF6EFB598FD123B39();
			func_77();
			func_109();
			func_105();
		}
		unk_0xD278B72A700DC2DC(0);
		func_102();
		unk_0x5AE11BC36633DE4E(0);
		iLocal_127 = 0;
		if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
		{
			Local_67 = { unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1) };
		}
		func_100();
		func_101();
	}
	if (func_95(2, Global_14416, 0))
	{
		func_1(0);
		if (func_94() || unk_0x48B8265059381CD0(Global_2314, 28))
		{
		}
		else
		{
			unk_0xD278B72A700DC2DC(0);
			unk_0x5AE11BC36633DE4E(0);
			iLocal_136 = 1;
			func_102();
			iLocal_127 = 0;
			if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
			{
				Local_67 = { unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1) };
			}
			func_101();
		}
	}
	if (unk_0x48B8265059381CD0(Global_2313, 28))
	{
		if (func_95(2, Global_14415, 0))
		{
			func_1(0);
			unk_0xD278B72A700DC2DC(0);
			unk_0x3B74F775E3152331(0, 0);
			unk_0x4EDE34FBADD967A6(0);
			unk_0xF6EFB598FD123B39();
			func_122();
			unk_0x4EDE34FBADD967A6(0);
			unk_0xF6EFB598FD123B39();
			func_122();
			unk_0x1DD8BA0EFD3C15DB();
			unk_0xE6AE9213B5C9CC57();
			Global_16782 = 1;
			iLocal_143 = 0;
			iLocal_126 = 0;
			func_90(0, 1);
			Global_16778 = 1;
			unk_0x2B3976C5A4017270(0, 1);
			iLocal_128 = 0;
			iLocal_118 = 1;
			iLocal_119 = 1;
			iLocal_120 = 1;
			iLocal_121 = 1;
			iLocal_122 = 1;
			iLocal_123 = 1;
			func_6();
			iLocal_127 = 0;
			if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
			{
				Local_67 = { unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1) };
			}
			func_93(0, 0);
			func_97(0);
			iLocal_115 = 0;
			func_92();
			unk_0xEB79FECD9022AAF0(&Global_2313, 9);
			iLocal_142 = 0;
			func_127(Global_14424, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
}

void func_6()
{
	if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
	{
		unk_0x4988C48537D1AE4F(-1, "Menu_Accept", &Global_14432, 1);
		func_7();
	}
}

void func_7()
{
	if (func_2())
	{
		unk_0xCC21A1BB2C60F0A4(5);
	}
}

void func_8()
{
	iLocal_150 = 1;
	Global_16783 = 1;
	unk_0x2B3976C5A4017270(0, 1);
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
	if (Global_14443.f_1 < 4)
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
	
	if (unk_0xF23B2033129FFCF0(2))
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
		func_68();
		func_64();
		func_63();
		fLocal_73 = unk_0x45CFDDB22B94FC64();
		fLocal_74 = unk_0x186514F64CF090E1();
		if (iLocal_133 == 0)
		{
			if (unk_0x79888727131C6854(2, iVar0) && !unk_0x79888727131C6854(2, iVar1))
			{
				iLocal_133 = 1;
				func_127(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_127(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (unk_0x48B8265059381CD0(Global_2313, 28))
				{
					func_61(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x38DDA814F2E19659(0, 177, 1), "CELL_281");
					func_61(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x38DDA814F2E19659(2, 179, 1), "CELL_287");
					func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x38DDA814F2E19659(2, 178, 1), "CELL_CAM_SELFIE_2");
				}
				else
				{
					func_61(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x38DDA814F2E19659(0, 176, 1), "CELL_280");
					func_61(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x38DDA814F2E19659(0, 177, 1), "CELL_281");
					func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x38DDA814F2E19659(2, 178, 1), "CELL_CAM_SELFIE_2");
				}
				func_60();
				unk_0xEAC9A8A194DF8F91(uLocal_141, "SET_MAX_WIDTH");
				unk_0x584CF9CAE83942E5(fLocal_77);
				unk_0x44983883E630A945();
				func_127(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else if (!unk_0x79888727131C6854(2, iVar0) || unk_0x79888727131C6854(2, iVar1))
		{
			iLocal_133 = 0;
			func_100();
		}
		if (iLocal_134 == 0)
		{
			if (unk_0x79888727131C6854(2, iVar1) && !unk_0x79888727131C6854(2, iVar0))
			{
				iLocal_134 = 1;
				func_127(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_127(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (unk_0x48B8265059381CD0(Global_2313, 28))
				{
					func_61(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x38DDA814F2E19659(0, 177, 1), "CELL_281");
					func_61(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x38DDA814F2E19659(2, 179, 1), "CELL_287");
				}
				else
				{
					func_61(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x38DDA814F2E19659(0, 176, 1), "CELL_280");
					func_61(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x38DDA814F2E19659(0, 177, 1), "CELL_281");
				}
				func_59();
				unk_0xEAC9A8A194DF8F91(uLocal_141, "SET_MAX_WIDTH");
				unk_0x584CF9CAE83942E5(fLocal_77);
				unk_0x44983883E630A945();
				func_127(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else if (!unk_0x79888727131C6854(2, iVar1) || unk_0x79888727131C6854(2, iVar0))
		{
			iLocal_134 = 0;
			func_100();
		}
	}
	else
	{
		unk_0xCA3F0B618E8962EA(0, 2, 1);
		unk_0xCA3F0B618E8962EA(0, 1, 1);
	}
	if (unk_0x987367D2EDB45658(2))
	{
		func_100();
	}
	func_109();
	if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
	{
		unk_0x0E21DA99F698AF06(unk_0x17B5CC8A8615737D(), 200, 1);
	}
	if (unk_0x4B972043966C2EB8(2, 183) && iLocal_156 == 0)
	{
		unk_0x4988C48537D1AE4F(-1, "Menu_Navigate", &Global_14432, 1);
		if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
		{
			if (!unk_0xD4337557D3DEFC11(unk_0x17B5CC8A8615737D()) == 2)
			{
				if (unk_0x48B8265059381CD0(Global_2595318, 2))
				{
					unk_0x21E7933CCC7B3724(&Global_2595318, 2);
					if (!unk_0x48B8265059381CD0(Global_2595318, 2))
					{
						func_127(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					}
				}
				else
				{
					unk_0xEB79FECD9022AAF0(&Global_2595318, 2);
					func_127(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
		}
	}
	if (iLocal_131)
	{
		if (iLocal_132 == 1)
		{
			iLocal_132 = 0;
			unk_0xEAC9A8A194DF8F91(uLocal_140, "SET_FOCUS_LOCK");
			unk_0x14ED5B5B8289F2FC(0);
			func_58("CELL_FOCUS");
			unk_0x14ED5B5B8289F2FC(1);
			unk_0x44983883E630A945();
		}
		if (!func_57(14))
		{
			if (unk_0x48B8265059381CD0(Global_2595318, 10))
			{
				if ((Global_69702 == 0 && unk_0x82F1A060D8F4583B(joaat("pi_menu")) > 0) && func_56())
				{
					unk_0xEAC9A8A194DF8F91(uLocal_140, "SET_FOCUS_LOCK");
					unk_0x14ED5B5B8289F2FC(1);
					unk_0xDCEB60B79ECB219E("CELL_ACTTL");
					unk_0xBAB00B98D1E61BEE(unk_0xC7E52B74A3B4973C(&Global_2596034));
					unk_0x1798EBF9408190D3();
					unk_0x14ED5B5B8289F2FC(0);
					unk_0x44983883E630A945();
					unk_0x21E7933CCC7B3724(&Global_2595318, 10);
				}
			}
		}
		else if (unk_0x48B8265059381CD0(Global_2595318, 10))
		{
			unk_0x21E7933CCC7B3724(&Global_2595318, 10);
		}
		iLocal_66 = unk_0x94E3E074F38DF86C();
		if ((iLocal_66 - iLocal_65) > 1500)
		{
			if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
			{
				Local_70 = { unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1) };
				if (unk_0x3DC4639D5F23DEA2(Local_70, Local_67, 1) > 5f)
				{
					Global_14443.f_1 = 3;
					unk_0xD278B72A700DC2DC(0);
				}
				iLocal_65 = unk_0x94E3E074F38DF86C();
			}
		}
	}
	else if (iLocal_132)
	{
		if (!unk_0x79888727131C6854(0, 182))
		{
			unk_0x4988C48537D1AE4F(-1, "Menu_Navigate", &Global_14432, 1);
			iLocal_132 = 0;
			unk_0xEAC9A8A194DF8F91(uLocal_140, "SET_FOCUS_LOCK");
			unk_0x14ED5B5B8289F2FC(0);
			func_58("CELL_FOCUS");
			unk_0x14ED5B5B8289F2FC(1);
			unk_0x44983883E630A945();
		}
	}
	else if (unk_0x79888727131C6854(0, 182))
	{
		unk_0x4988C48537D1AE4F(-1, "Menu_Navigate", &Global_14432, 1);
		iLocal_132 = 1;
		if (!func_57(14))
		{
			unk_0xEAC9A8A194DF8F91(uLocal_140, "SET_FOCUS_LOCK");
			unk_0x14ED5B5B8289F2FC(1);
			func_58("CELL_FOCUS");
			unk_0x14ED5B5B8289F2FC(1);
			unk_0x44983883E630A945();
		}
	}
	if (func_135())
	{
		if (unk_0x4B972043966C2EB8(2, 186) && iLocal_156 == 0)
		{
			if (iLocal_131)
			{
				iLocal_57++;
				if (iLocal_57 > 0 && iLocal_57 < 7)
				{
					if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
					{
						unk_0x4988C48537D1AE4F(-1, "Menu_Navigate", &Global_14432, 1);
						unk_0xF2F66822E1357C31(unk_0x17B5CC8A8615737D(), "Mood_Normal_1", 0);
						unk_0xE81FB651EA53A574(unk_0x17B5CC8A8615737D());
						if (Global_14443 == 0)
						{
							iVar4 = 0;
							iVar2 = unk_0xB50239D338267F95(unk_0x17B5CC8A8615737D(), 0);
							if (iVar2 == 20 || iVar2 == 14)
							{
								iVar4 = 1;
							}
							iVar3 = unk_0xB50239D338267F95(unk_0x17B5CC8A8615737D(), 1);
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
											unk_0xF2F66822E1357C31(unk_0x17B5CC8A8615737D(), sLocal_48[iLocal_57], 0);
										}
									}
								}
								else
								{
									unk_0xF2F66822E1357C31(unk_0x17B5CC8A8615737D(), sLocal_48[iLocal_57], 0);
								}
							}
							else
							{
								unk_0xF2F66822E1357C31(unk_0x17B5CC8A8615737D(), sLocal_48[iLocal_57], 0);
							}
						}
						else
						{
							unk_0xF2F66822E1357C31(unk_0x17B5CC8A8615737D(), sLocal_48[iLocal_57], 0);
						}
					}
				}
				if (iLocal_57 == 7 || iLocal_57 > 7)
				{
					iLocal_57 = 0;
				}
				if (iLocal_57 == 0)
				{
					if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
					{
						unk_0xF2F66822E1357C31(unk_0x17B5CC8A8615737D(), "Mood_Normal_1", 0);
						unk_0xE81FB651EA53A574(unk_0x17B5CC8A8615737D());
						unk_0x4988C48537D1AE4F(-1, "Menu_Navigate", &Global_14432, 1);
					}
				}
			}
		}
		if (unk_0x4B972043966C2EB8(2, 185) && iLocal_156 == 0)
		{
			if (iLocal_131)
			{
				if (bLocal_62 == 1)
				{
					unk_0x4988C48537D1AE4F(-1, "Menu_Navigate", &Global_14432, 1);
					if (iLocal_61 == 0)
					{
						iLocal_61 = 1;
						iLocal_60 = 1;
						if (unk_0x6A7B0D91FD88D9EE(sLocal_19[Global_2594042], "phone_cam12DUMMY"))
						{
						}
						else
						{
							unk_0x34B12E3900246AE0(1);
							unk_0x0BD8DDF2D6EF16AA(1);
						}
					}
					else
					{
						iLocal_61 = 0;
						iLocal_60 = 0;
						unk_0x34B12E3900246AE0(0);
						unk_0x0BD8DDF2D6EF16AA(0);
					}
				}
			}
			else if (bLocal_63 == 1)
			{
				if (iLocal_60 == 0)
				{
					iLocal_60 = 1;
					iLocal_61 = 1;
					unk_0x34B12E3900246AE0(1);
					unk_0x0BD8DDF2D6EF16AA(1);
				}
				else
				{
					iLocal_60 = 0;
					iLocal_61 = 0;
					unk_0x34B12E3900246AE0(0);
					unk_0x0BD8DDF2D6EF16AA(0);
				}
			}
		}
	}
	if (iLocal_59 == 1)
	{
		if (unk_0x4B972043966C2EB8(0, 172) && iLocal_156 == 0)
		{
			if (func_135())
			{
				Global_2594043++;
				unk_0x4988C48537D1AE4F(-1, "Menu_Navigate", &Global_14432, 1);
			}
			if (Global_2594043 == 13)
			{
				func_97(0);
				unk_0x399BB4C7486EE39D(1f);
				unk_0xC07032666ADF86BE(sLocal_33[(Global_2594043 - 1)]);
				Global_2594043 = 0;
				func_55();
				if (iLocal_47 == 1)
				{
					unk_0x21E7933CCC7B3724(&Global_2595318, 2);
					iLocal_47 = 0;
					func_127(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
			if (Global_2594043 > 0 && Global_2594043 < 13)
			{
				iLocal_59 = 0;
				iLocal_58 = 0;
				unk_0xA6AD245AF4469018(sLocal_33[Global_2594043], 0);
			}
		}
	}
	if (Global_2594043 > 0)
	{
		if (iLocal_59 == 0)
		{
			if (unk_0xE0B615EF03FE4422(sLocal_33[Global_2594043]))
			{
				iLocal_58 = 1;
				iLocal_59 = 1;
				if (!unk_0x7EBC0D12B8F1FC9E())
				{
					func_97(1);
				}
				if (iLocal_47 == 0)
				{
					if (!unk_0x48B8265059381CD0(Global_2595318, 2))
					{
						iLocal_47 = 1;
					}
				}
				unk_0xEB79FECD9022AAF0(&Global_2595318, 2);
				func_127(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				unk_0x399BB4C7486EE39D(0.25f);
				unk_0x87F887F297700AFC(sLocal_33[Global_2594043], 0);
			}
		}
		if (iLocal_58 == 1)
		{
			if (Global_2594043 == 1 || Global_2594043 == 3)
			{
			}
			if (Global_2594043 == 2 || Global_2594043 == 4)
			{
			}
		}
	}
	if (unk_0x4B972043966C2EB8(0, 173) && iLocal_156 == 0)
	{
		if (func_135())
		{
			func_92();
			Global_2594042++;
			unk_0x4988C48537D1AE4F(-1, "Menu_Navigate", &Global_14432, 1);
		}
		if (Global_2594042 == 13)
		{
			Global_2594042 = 0;
		}
		if (Global_2594042 == 0)
		{
			if (func_135())
			{
				func_92();
			}
		}
		else
		{
			func_98();
		}
		func_54();
	}
	if (unk_0x698C9A4C14BF3957(0, 184) && iLocal_156 == 0)
	{
		if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
		{
			if (!unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0) && !unk_0xD4337557D3DEFC11(unk_0x17B5CC8A8615737D()) == 2)
			{
				Local_67 = { unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1) };
				unk_0x4988C48537D1AE4F(-1, "Menu_Navigate", &Global_14432, 1);
				func_127(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_126(uLocal_140, "CLOSE_SHUTTER");
				iLocal_135 = unk_0x94E3E074F38DF86C();
				while (unk_0x94E3E074F38DF86C() < (iLocal_135 + iLocal_139) && Global_14443.f_1 > 3)
				{
					func_122();
					func_105();
					func_77();
					unk_0xF6EFB598FD123B39();
					unk_0x4EDE34FBADD967A6(0);
				}
				if (iLocal_131 == 0)
				{
					unk_0x2EB37CDED0E516F3(iLocal_112);
					iLocal_131 = 1;
					func_53(1);
					func_52();
					unk_0xEB79FECD9022AAF0(&Global_2315, 3);
					iLocal_65 = unk_0x94E3E074F38DF86C();
				}
				else
				{
					iLocal_133 = 0;
					iLocal_134 = 0;
					func_53(0);
					iLocal_131 = 0;
					unk_0x21E7933CCC7B3724(&Global_2315, 3);
				}
				iLocal_135 = unk_0x94E3E074F38DF86C();
				while (unk_0x94E3E074F38DF86C() < (iLocal_135 + iLocal_137) && Global_14443.f_1 > 3)
				{
					func_122();
					func_105();
					func_77();
					unk_0xF6EFB598FD123B39();
					unk_0x4EDE34FBADD967A6(0);
				}
				func_126(uLocal_140, "OPEN_SHUTTER");
				if (func_135())
				{
					if (Global_2594043 == 0)
					{
						if (!unk_0x48B8265059381CD0(Global_2595318, 2))
						{
							func_127(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						}
					}
				}
				else if (!unk_0x48B8265059381CD0(Global_2595318, 2))
				{
					func_127(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_105();
				func_122();
				if (unk_0x48B8265059381CD0(Global_2313, 28))
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
			if (unk_0x4B972043966C2EB8(0, 40) || unk_0x4B972043966C2EB8(0, 41))
			{
				fLocal_114 = unk_0x6EC62956F36764D4();
				if (fLocal_114 > 1f && fLocal_114 < 4.5f)
				{
					if (unk_0x7DFE463FA760D738(iLocal_112))
					{
						unk_0x4988C48537D1AE4F(iLocal_112, "Camera_Zoom", &Global_14432, 1);
					}
				}
				else
				{
					unk_0x2EB37CDED0E516F3(iLocal_112);
				}
				iLocal_113 = 1;
			}
		}
		else if (unk_0x79888727131C6854(0, 40) || unk_0x79888727131C6854(0, 41))
		{
			fLocal_114 = unk_0x6EC62956F36764D4();
			if (fLocal_114 > 1f && fLocal_114 < 4.5f)
			{
				if (unk_0x7DFE463FA760D738(iLocal_112))
				{
					unk_0x4988C48537D1AE4F(iLocal_112, "Camera_Zoom", &Global_14432, 1);
				}
			}
			else
			{
				unk_0x2EB37CDED0E516F3(iLocal_112);
			}
		}
		else
		{
			unk_0x2EB37CDED0E516F3(iLocal_112);
		}
	}
	if (func_95(2, Global_14412, 0))
	{
		fLocal_75 = unk_0x45CFDDB22B94FC64();
		fLocal_76 = unk_0x186514F64CF090E1();
		unk_0x3B74F775E3152331(0, 0);
		unk_0xEB79FECD9022AAF0(&Global_2313, 21);
		unk_0x2EB37CDED0E516F3(iLocal_112);
		iLocal_127 = 1;
		func_127(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_127(uLocal_140, "SHOW_REMAINING_PHOTOS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		unk_0x4988C48537D1AE4F(-1, "Camera_Shoot", &Global_14432, 1);
		func_126(uLocal_140, "CLOSE_SHUTTER");
		Local_84 = { -90.3f, 0f, 90f };
		unk_0xE018C448439E147D(Local_84, 0);
		if (!func_135())
		{
			func_92();
		}
		Global_16781 = 1;
		unk_0x2B3976C5A4017270(0, 1);
		while (Global_16780 < 6 && Global_14443.f_1 > 3)
		{
			func_122();
			func_105();
			func_77();
			func_109();
			unk_0xF6EFB598FD123B39();
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xA08986FC1C702729(0, 0);
		if (Global_14385)
		{
			func_1(1);
		}
		iLocal_135 = unk_0x94E3E074F38DF86C();
		while (unk_0x94E3E074F38DF86C() < (iLocal_135 + iLocal_138) && Global_14443.f_1 > 3)
		{
			func_122();
			func_105();
			func_77();
			unk_0xF6EFB598FD123B39();
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xC1B1E9A034A63A62(0);
		func_126(uLocal_140, "OPEN_SHUTTER");
		unk_0x21E7933CCC7B3724(&Global_2313, 21);
		func_100();
		if (Global_14443.f_1 > 3)
		{
			if (Global_69702)
			{
				func_20(1081, 1, -1);
				func_19();
				func_16(23, 0);
			}
			else
			{
				switch (func_11())
				{
					case 0:
						unk_0xBA7C565ADABC4947(joaat("sp0_no_photos_taken"), 1f);
						break;
					
					case 1:
						unk_0xBA7C565ADABC4947(joaat("sp1_no_photos_taken"), 1f);
						break;
					
					case 2:
						unk_0xBA7C565ADABC4947(joaat("sp2_no_photos_taken"), 1f);
						break;
				}
				func_19();
			}
			func_97(0);
		}
		func_105();
	}
	if (unk_0x48B8265059381CD0(Global_2313, 28))
	{
		if (func_95(2, Global_14415, 0))
		{
			unk_0x3B74F775E3152331(0, 0);
			unk_0x4EDE34FBADD967A6(0);
			unk_0xF6EFB598FD123B39();
			func_122();
			unk_0x4EDE34FBADD967A6(0);
			unk_0xF6EFB598FD123B39();
			func_122();
			unk_0x1DD8BA0EFD3C15DB();
			unk_0xE6AE9213B5C9CC57();
			Global_16782 = 1;
			iLocal_143 = 0;
			iLocal_126 = 1;
			Global_16778 = 1;
			unk_0x2B3976C5A4017270(0, 1);
			iLocal_128 = 0;
			iLocal_118 = 1;
			iLocal_119 = 1;
			iLocal_120 = 1;
			iLocal_121 = 1;
			iLocal_122 = 1;
			iLocal_123 = 1;
			func_6();
			iLocal_127 = 0;
			if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
			{
				Local_67 = { unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1) };
			}
			func_93(0, 0);
			func_97(0);
			iLocal_115 = 0;
			func_92();
			unk_0xEB79FECD9022AAF0(&Global_2313, 9);
			unk_0xD278B72A700DC2DC(0);
			iLocal_142 = 0;
			func_127(Global_14424, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
}

int func_11()
{
	func_12();
	return Global_101700.f_2095.f_539.f_3549;
}

void func_12()
{
	int iVar0;
	
	if (unk_0x23E9113C762466ED(unk_0x17B5CC8A8615737D()))
	{
		if (func_15(Global_101700.f_2095.f_539.f_3549) != unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()))
		{
			iVar0 = func_14(unk_0x17B5CC8A8615737D());
			if (func_13(iVar0) && (!func_57(14) || Global_100652))
			{
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_13(Global_101700.f_2095.f_539.f_3549))
				{
					Global_101700.f_2095.f_539.f_3550 = Global_101700.f_2095.f_539.f_3549;
				}
				Global_101700.f_2095.f_539.f_3551 = iVar0;
				Global_101700.f_2095.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101700.f_2095.f_539.f_3549 != 145)
			{
				Global_101700.f_2095.f_539.f_3551 = Global_101700.f_2095.f_539.f_3549;
			}
			return;
		}
	}
	Global_101700.f_2095.f_539.f_3549 = 145;
}

bool func_13(int iParam0)
{
	return iParam0 < 3;
}

int func_14(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x23E9113C762466ED(iParam0))
	{
		iVar1 = unk_0x0324EEB10F81965F(iParam0);
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
		return Global_101700.f_27009[iParam0 /*29*/];
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
		Global_2452429[iVar0] = iParam0;
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
		if (Global_2452429[iVar1] == 0)
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
	if (Global_1315221)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315233) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
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
	Global_14380 = { Global_14396[Global_14388 /*3*/] };
	func_90(0, 1);
	func_93(0, 0);
	func_97(0);
	iLocal_115 = 0;
	func_92();
	if (!unk_0x48B8265059381CD0(Global_2314, 28))
	{
		if (unk_0xA97EA4AF4A03DC2E() == 0)
		{
			if (unk_0xB15049400DCD8DC9())
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
	
	iVar0 = Global_2503826[iParam0 /*3*/][func_25(uParam2)];
	if (iVar0 != 0)
	{
		unk_0x731753D8494ABECD(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 782:
			Global_1363219[func_25(uParam2)] = iParam1;
			break;
		
		case 783:
			Global_1363225[func_25(uParam2)] = iParam1;
			break;
		
		case 784:
			Global_1363231[func_25(uParam2)] = iParam1;
			break;
		
		case 785:
			Global_1363237[func_25(uParam2)] = iParam1;
			break;
		
		case 772:
			Global_1363195[func_25(uParam2)] = iParam1;
			break;
		
		case 773:
			Global_1363201[func_25(uParam2)] = iParam1;
			break;
		
		case 774:
			Global_1363207[func_25(uParam2)] = iParam1;
			break;
		
		case 775:
			Global_1363213[func_25(uParam2)] = iParam1;
			break;
		
		case 762:
			Global_1363171[func_25(uParam2)] = iParam1;
			break;
		
		case 763:
			Global_1363177[func_25(uParam2)] = iParam1;
			break;
		
		case 764:
			Global_1363183[func_25(uParam2)] = iParam1;
			break;
		
		case 765:
			Global_1363189[func_25(uParam2)] = iParam1;
			break;
		
		case 752:
			Global_1363243[func_25(uParam2)] = iParam1;
			break;
		
		case 753:
			Global_1363249[func_25(uParam2)] = iParam1;
			break;
		
		case 754:
			Global_1363255[func_25(uParam2)] = iParam1;
			break;
		
		case 755:
			Global_1363261[func_25(uParam2)] = iParam1;
			break;
		
		case 1298:
			Global_1363267[func_25(uParam2)] = iParam1;
			break;
		
		case 634:
			Global_1363273[func_25(uParam2)] = iParam1;
			break;
		
		case 1273:
			Global_1363279[func_25(uParam2)] = iParam1;
			break;
		
		case 1870:
			Global_2524277[0 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 2261:
			Global_2524277[1 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 2911:
			Global_2524277[2 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3040:
			Global_2524277[3 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 5886:
			Global_2524348[func_25(uParam2)] = iParam1;
			break;
		
		case 759:
			Global_1363285[func_25(uParam2)] = iParam1;
			break;
		
		case 760:
			Global_1363291[func_25(uParam2)] = iParam1;
			break;
		
		case 761:
			Global_1363297[func_25(uParam2)] = iParam1;
			break;
		
		case 1231:
			Global_1363303[func_25(uParam2)] = iParam1;
			break;
		
		case 3035:
			Global_2524311[0 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3036:
			Global_2524311[1 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3037:
			Global_2524311[2 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3038:
			Global_2524311[3 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3039:
			Global_2524311[4 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3618:
			Global_2524351[0 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3619:
			Global_2524351[1 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3620:
			Global_2524351[2 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3621:
			Global_2524351[3 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3622:
			Global_2524351[4 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3623:
			Global_2524367[0 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3624:
			Global_2524367[1 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3625:
			Global_2524367[2 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3626:
			Global_2524367[3 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3627:
			Global_2524367[4 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3203:
			Global_2524311[5 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3209:
			Global_2524277[4 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2524383[func_25(uParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2524392[func_25(uParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2524386[func_25(uParam2)] = iParam1;
			break;
		
		case 3648:
			Global_2524395[func_25(uParam2)] = iParam1;
			break;
		
		case 3649:
			Global_2524389[func_25(uParam2)] = iParam1;
			break;
		
		case 3650:
			Global_2524398[func_25(uParam2)] = iParam1;
			break;
		
		case 3671:
			Global_2524401[func_25(uParam2)] = iParam1;
			break;
		
		case 3211:
			Global_2524311[6 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3212:
			Global_2524277[5 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3216:
			Global_2524311[7 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3214:
			Global_2524277[6 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3991:
			Global_2524311[8 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3992:
			Global_2524277[7 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3994:
			Global_2524311[9 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3995:
			Global_2524277[8 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3997:
			Global_2524311[10 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3998:
			Global_2524277[9 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 4000:
			Global_2524311[11 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 4001:
			Global_2524277[10 /*3*/][func_25(uParam2)] = iParam1;
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
	iVar0 = Global_2503826[iParam0 /*3*/][func_25(uParam2)];
	if (iVar0 != 0)
	{
		unk_0x731753D8494ABECD(iVar0, iParam1, iParam3);
	}
}

int func_23(int iParam0)
{
	if (Global_1363152)
	{
		switch (iParam0)
		{
			case 782:
			case 783:
			case 784:
			case 785:
			case 772:
			case 773:
			case 774:
			case 775:
			case 762:
			case 763:
			case 764:
			case 765:
			case 752:
			case 753:
			case 754:
			case 755:
			case 1298:
			case 634:
			case 1273:
			case 759:
			case 760:
			case 761:
			case 1231:
			case 1870:
			case 2261:
			case 2911:
			case 3040:
			case 5886:
			case 3035:
			case 3036:
			case 3037:
			case 3038:
			case 3039:
			case 3214:
			case 3216:
			case 3618:
			case 3619:
			case 3620:
			case 3621:
			case 3622:
			case 3623:
			case 3624:
			case 3625:
			case 3626:
			case 3627:
			case 3209:
			case 3203:
			case 3645:
			case 3646:
			case 3647:
			case 3648:
			case 3649:
			case 3650:
			case 3671:
			case 3212:
			case 3211:
			case 3992:
			case 3991:
			case 3995:
			case 3994:
			case 3998:
			case 3997:
			case 4001:
			case 4000:
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
	uVar0 = Global_2503826[iParam0 /*3*/][func_25(uParam1)];
	if (unk_0x7FE4F330D3D74809(uVar0, &uVar1, -1))
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
			Global_2503539 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2503539 = 1;
		}
	}
	return iVar0;
}

var func_26()
{
	return Global_1312735;
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
		func_127(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_127(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_61(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x38DDA814F2E19659(0, 177, 1), "CELL_281");
		func_61(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x38DDA814F2E19659(0, 176, 1), "CELL_280");
		if (iLocal_131)
		{
			if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
			{
				if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0) || unk_0xD4337557D3DEFC11(unk_0x17B5CC8A8615737D()) == 2)
				{
					if (unk_0xF23B2033129FFCF0(2) || unk_0x7C2F31E78C33DE0F())
					{
						func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x38DDA814F2E19659(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x38DDA814F2E19659(0, 184, 1), "CELL_SP_2NP_XB");
					}
				}
				else if ((Global_69702 == 0 && unk_0x82F1A060D8F4583B(joaat("pi_menu")) > 0) && func_56())
				{
					func_47();
				}
				else
				{
					if (unk_0xF23B2033129FFCF0(2) || unk_0x7C2F31E78C33DE0F())
					{
						func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x38DDA814F2E19659(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x38DDA814F2E19659(0, 184, 1), "CELL_SP_2NP_XB");
					}
					func_61(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x38DDA814F2E19659(2, 183, 1), "CELL_GRID");
					func_61(uLocal_141, "SET_DATA_SLOT", 4f, unk_0x9AF1671E53EE8CE7(0, 1, 1), "CELL_285");
					if (func_135())
					{
						func_46(5f);
						func_45(6f);
						if (func_29(1))
						{
							func_28(7f);
							if (bLocal_62)
							{
								func_61(uLocal_141, "SET_DATA_SLOT", 8f, unk_0x38DDA814F2E19659(2, 185, 1), "CELL_DEPTH");
							}
						}
						else if (bLocal_62)
						{
							func_61(uLocal_141, "SET_DATA_SLOT", 7f, unk_0x38DDA814F2E19659(2, 185, 1), "CELL_DEPTH");
						}
					}
				}
			}
		}
		else if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
		{
			if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0) || unk_0xD4337557D3DEFC11(unk_0x17B5CC8A8615737D()) == 2)
			{
				if (!unk_0xD4337557D3DEFC11(unk_0x17B5CC8A8615737D()) == 2)
				{
					func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x9AF1671E53EE8CE7(0, 1, 1), "CELL_285");
					func_61(uLocal_141, "SET_DATA_SLOT", 4f, unk_0x38DDA814F2E19659(2, 183, 1), "CELL_GRID");
					func_61(uLocal_141, "SET_DATA_SLOT", 5f, unk_0x38DDA814F2E19659(0, 39, 1), "CELL_284");
					if (func_135())
					{
						func_46(6f);
						func_45(7f);
						if (bLocal_63)
						{
							func_61(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x38DDA814F2E19659(0, 182, 1), "CELL_FOCUS");
						}
						func_61(uLocal_141, "SET_DATA_SLOT", 8f, unk_0x38DDA814F2E19659(2, 185, 1), "CELL_DEPTH");
					}
				}
				else
				{
					func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x9AF1671E53EE8CE7(0, 1, 1), "CELL_285");
					if (func_135())
					{
						func_46(3f);
						func_45(4f);
						func_61(uLocal_141, "SET_DATA_SLOT", 8f, unk_0x38DDA814F2E19659(2, 185, 1), "CELL_DEPTH");
					}
				}
			}
			else
			{
				if (unk_0xF23B2033129FFCF0(2) || unk_0x7C2F31E78C33DE0F())
				{
					func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x38DDA814F2E19659(0, 184, 1), "CELL_SP_1NP_XB");
				}
				else
				{
					func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x38DDA814F2E19659(0, 184, 1), "CELL_SP_1NP_XB");
				}
				if (!unk_0xD4337557D3DEFC11(unk_0x17B5CC8A8615737D()) == 2)
				{
					func_61(uLocal_141, "SET_DATA_SLOT", 4f, unk_0x38DDA814F2E19659(2, 183, 1), "CELL_GRID");
					func_61(uLocal_141, "SET_DATA_SLOT", 5f, unk_0x9AF1671E53EE8CE7(0, 1, 1), "CELL_285");
					func_61(uLocal_141, "SET_DATA_SLOT", 6f, unk_0x38DDA814F2E19659(0, 39, 1), "CELL_284");
					if (func_135())
					{
						func_46(7f);
						func_45(8f);
						if (bLocal_63)
						{
							func_61(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x38DDA814F2E19659(0, 182, 1), "CELL_FOCUS");
						}
						func_61(uLocal_141, "SET_DATA_SLOT", 9f, unk_0x38DDA814F2E19659(2, 185, 1), "CELL_DEPTH");
					}
				}
				else
				{
					func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x9AF1671E53EE8CE7(0, 1, 1), "CELL_285");
					if (func_135())
					{
						func_46(3f);
						func_45(4f);
						func_61(uLocal_141, "SET_DATA_SLOT", 5f, unk_0x38DDA814F2E19659(2, 185, 1), "CELL_DEPTH");
					}
				}
			}
		}
		unk_0xEAC9A8A194DF8F91(uLocal_141, "SET_MAX_WIDTH");
		unk_0x584CF9CAE83942E5(fLocal_77);
		unk_0x44983883E630A945();
		func_127(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_28(float fParam0)
{
	func_61(uLocal_141, "SET_DATA_SLOT", fParam0, unk_0x38DDA814F2E19659(0, 174, 1), "CELL_ACTION");
}

int func_29(int iParam0)
{
	if (unk_0x63C468D583002D23())
	{
		if (func_44(Global_2524899, Global_2524900))
		{
			if (iParam0 == 0 || !func_30(Global_2524899, Global_2524900, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_30(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	return func_31(unk_0x17B5CC8A8615737D(), iParam0, iParam1, bParam2, bParam3, bParam4);
}

int func_31(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	var uVar0;
	var uVar5;
	var uVar10;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	
	uVar0 = 4;
	uVar5 = 4;
	uVar10 = 4;
	if (iParam1 == 0)
	{
		iVar18 = 3;
	}
	else if (bParam3)
	{
		iVar18 = 1;
	}
	else if (bParam4)
	{
		iVar18 = 2;
	}
	else
	{
		iVar18 = 0;
	}
	func_39(iParam1, iParam2, &uVar0, &uVar5, &uVar10, iVar18, bParam5);
	if (!unk_0xA929B2923D14E2F8(iParam0, 0))
	{
		if (unk_0x0324EEB10F81965F(iParam0) == joaat("mp_f_freemode_01"))
		{
			iVar15 = func_38(iParam0);
			if (!iVar15 == -1)
			{
				if (func_37(&uVar0, iVar15))
				{
					return 1;
				}
			}
		}
		else
		{
			iVar16 = func_36(iParam0);
			if (!iVar16 == -1)
			{
				if (func_34(&uVar5, iVar16))
				{
					return 1;
				}
			}
		}
		if (unk_0x63C468D583002D23())
		{
			iVar17 = func_33(iParam0);
			if (!iVar17 == 0)
			{
				if (func_32(&uVar10, iVar17))
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
	if (unk_0x48B8265059381CD0((*uParam0)[iVar0], (iParam1 - iVar0 * 32)))
	{
		return 1;
	}
	return 0;
}

var func_33(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0xC72E4A160D2D5004(iParam0, 1);
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
	if (unk_0x48B8265059381CD0((*uParam0)[iVar0], (iParam1 - iVar0 * 32)))
	{
		return 1;
	}
	return 0;
}

var func_36(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0xB50239D338267F95(iParam0, 0);
	return uVar0;
}

bool func_37(var uParam0, int iParam1)
{
	return func_35(uParam0, iParam1);
}

var func_38(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0xB50239D338267F95(iParam0, 0);
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
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							break;
						
						case 1:
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							break;
						
						case 2:
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
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
						func_42(uParam3, 62, 1);
						func_40(uParam2, 16, 1);
						func_40(uParam2, 47, 1);
						func_40(uParam2, 48, 1);
						func_40(uParam2, 18, 1);
						func_40(uParam2, 37, 1);
						func_40(uParam2, 46, 1);
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
						func_42(uParam3, 62, 1);
						func_40(uParam2, 18, 1);
						func_40(uParam2, 49, 1);
						func_40(uParam2, 50, 1);
						func_40(uParam2, 51, 1);
						func_40(uParam2, 52, 1);
						func_40(uParam2, 62, 1);
						func_40(uParam2, 37, 1);
						func_40(uParam2, 46, 1);
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
						func_42(uParam3, 62, 1);
						func_42(uParam3, 20, 1);
						func_42(uParam3, 26, 1);
						func_42(uParam3, 27, 1);
						func_42(uParam3, 32, 1);
						func_42(uParam3, 33, 1);
						func_42(uParam3, 37, 1);
						func_42(uParam3, 39, 1);
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
						func_40(uParam2, 21, 1);
						func_40(uParam2, 26, 1);
						func_40(uParam2, 27, 1);
						func_40(uParam2, 28, 1);
						func_40(uParam2, 32, 1);
						func_40(uParam2, 36, 1);
						func_40(uParam2, 38, 1);
						func_40(uParam2, 55, 1);
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
						func_42(uParam3, 62, 1);
						func_40(uParam2, 18, 1);
						func_40(uParam2, 49, 1);
						func_40(uParam2, 50, 1);
						func_40(uParam2, 51, 1);
						func_40(uParam2, 52, 1);
						func_40(uParam2, 62, 1);
						func_40(uParam2, 37, 1);
						func_40(uParam2, 46, 1);
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
							func_40(uParam2, 2, 1);
							func_40(uParam2, 20, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_43(uParam4, 33, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 31, 1);
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
							func_40(uParam2, 2, 1);
							func_40(uParam2, 20, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_43(uParam4, 28, 1);
							func_43(uParam4, 33, 1);
							func_43(uParam4, 8, 1);
							func_43(uParam4, 31, 1);
							func_43(uParam4, 43, 1);
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
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
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
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
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
					func_43(uParam4, 92, 1);
					func_43(uParam4, 93, 1);
					func_43(uParam4, 94, 1);
					func_43(uParam4, 96, 1);
					func_43(uParam4, 97, 1);
					func_43(uParam4, 98, 1);
					func_43(uParam4, 100, 1);
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
					func_43(uParam4, 92, 1);
					func_43(uParam4, 93, 1);
					func_43(uParam4, 94, 1);
					func_43(uParam4, 96, 1);
					func_43(uParam4, 97, 1);
					func_43(uParam4, 98, 1);
					func_43(uParam4, 100, 1);
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
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
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
							func_42(uParam3, 20, 1);
							func_42(uParam3, 26, 1);
							func_42(uParam3, 27, 1);
							func_42(uParam3, 32, 1);
							func_42(uParam3, 33, 1);
							func_42(uParam3, 37, 1);
							func_42(uParam3, 39, 1);
							func_42(uParam3, 55, 1);
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
							func_40(uParam2, 21, 1);
							func_40(uParam2, 26, 1);
							func_40(uParam2, 27, 1);
							func_40(uParam2, 28, 1);
							func_40(uParam2, 32, 1);
							func_40(uParam2, 36, 1);
							func_40(uParam2, 38, 1);
							func_40(uParam2, 55, 1);
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
							func_42(uParam3, 19, 1);
							func_42(uParam3, 20, 1);
							func_42(uParam3, 26, 1);
							func_42(uParam3, 27, 1);
							func_42(uParam3, 32, 1);
							func_42(uParam3, 33, 1);
							func_42(uParam3, 37, 1);
							func_42(uParam3, 39, 1);
							func_42(uParam3, 55, 1);
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
							break;
						
						case 2:
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 39, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 38, 1);
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
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
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
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
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
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
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
							func_42(uParam3, 47, 1);
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
	if (bParam2)
	{
		unk_0xEB79FECD9022AAF0(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
	else
	{
		unk_0x21E7933CCC7B3724(uParam0[iVar0], (iParam1 - iVar0 * 32));
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
	if (bParam2)
	{
		unk_0xEB79FECD9022AAF0(uParam0[iVar0], (iParam1 - (32 * iVar0)));
	}
	else
	{
		unk_0x21E7933CCC7B3724(uParam0[iVar0], (iParam1 - iVar0 * 32));
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
	func_61(uLocal_141, "SET_DATA_SLOT", fParam0, unk_0x38DDA814F2E19659(0, 172, 1), "CELL_BORDER");
}

void func_46(float fParam0)
{
	if (Global_1760863 == 1)
	{
		fParam0 = -1f;
	}
	func_61(uLocal_141, "SET_DATA_SLOT", fParam0, unk_0x38DDA814F2E19659(0, 173, 1), "CELL_FILTER");
}

void func_47()
{
	if (unk_0xF23B2033129FFCF0(2) || unk_0x7C2F31E78C33DE0F())
	{
		func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x38DDA814F2E19659(0, 184, 1), "CELL_SP_2NP_XB");
	}
	else
	{
		func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x38DDA814F2E19659(0, 184, 1), "CELL_SP_2NP_XB");
	}
	func_61(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x38DDA814F2E19659(0, 183, 1), "CELL_GRID");
	func_61(uLocal_141, "SET_DATA_SLOT", 4f, unk_0x9AF1671E53EE8CE7(0, 1, 1), "CELL_285");
	func_46(5f);
	func_45(6f);
	func_48(7f);
	func_28(8f);
	if (bLocal_62)
	{
		func_61(uLocal_141, "SET_DATA_SLOT", 9f, unk_0x38DDA814F2E19659(2, 185, 1), "CELL_DEPTH");
	}
	if (!func_57(14))
	{
		if ((Global_69702 == 0 && unk_0x82F1A060D8F4583B(joaat("pi_menu")) > 0) && func_56())
		{
			unk_0xEAC9A8A194DF8F91(uLocal_140, "SET_FOCUS_LOCK");
			unk_0x14ED5B5B8289F2FC(1);
			unk_0xDCEB60B79ECB219E("CELL_ACTTL");
			unk_0xBAB00B98D1E61BEE(unk_0xC7E52B74A3B4973C(&Global_2596034));
			unk_0x1798EBF9408190D3();
			unk_0x14ED5B5B8289F2FC(0);
			unk_0x44983883E630A945();
		}
	}
}

void func_48(float fParam0)
{
	func_61(uLocal_141, "SET_DATA_SLOT", fParam0, unk_0x38DDA814F2E19659(0, 175, 1), "CELL_ACCYC");
}

void func_49()
{
	func_127(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_127(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_61(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x38DDA814F2E19659(0, 39, 1), "CELL_284");
	func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x9AF1671E53EE8CE7(0, 1, 1), "CELL_285");
	func_61(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x38DDA814F2E19659(0, 177, 1), "CELL_281");
	func_61(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x38DDA814F2E19659(0, 176, 1), "CELL_280");
	unk_0xEAC9A8A194DF8F91(uLocal_141, "SET_MAX_WIDTH");
	unk_0x584CF9CAE83942E5(fLocal_77);
	unk_0x44983883E630A945();
	func_127(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
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
		func_127(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_127(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_61(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x38DDA814F2E19659(0, 177, 1), "CELL_281");
		func_61(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x38DDA814F2E19659(2, 179, 1), "CELL_287");
		if (iLocal_131)
		{
			if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
			{
				if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0) || unk_0xD4337557D3DEFC11(unk_0x17B5CC8A8615737D()) == 2)
				{
					if (unk_0xF23B2033129FFCF0(2) || unk_0x7C2F31E78C33DE0F())
					{
						func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x38DDA814F2E19659(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x38DDA814F2E19659(0, 184, 1), "CELL_SP_2NP_XB");
					}
					if (func_135())
					{
						func_46(3f);
						func_45(4f);
					}
				}
				else if ((Global_69702 == 0 && unk_0x82F1A060D8F4583B(joaat("pi_menu")) > 0) && func_56())
				{
					func_47();
				}
				else
				{
					if (unk_0xF23B2033129FFCF0(2) || unk_0x7C2F31E78C33DE0F())
					{
						func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x38DDA814F2E19659(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x38DDA814F2E19659(0, 184, 1), "CELL_SP_2NP_XB");
					}
					func_61(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x38DDA814F2E19659(2, 183, 1), "CELL_GRID");
					func_61(uLocal_141, "SET_DATA_SLOT", 4f, unk_0x9AF1671E53EE8CE7(0, 1, 1), "CELL_285");
					if (func_135())
					{
						func_46(5f);
						func_45(6f);
						if (func_29(1))
						{
							func_28(7f);
							if (bLocal_62)
							{
								func_61(uLocal_141, "SET_DATA_SLOT", 8f, unk_0x38DDA814F2E19659(2, 185, 1), "CELL_DEPTH");
							}
						}
						else if (bLocal_62)
						{
							func_61(uLocal_141, "SET_DATA_SLOT", 7f, unk_0x38DDA814F2E19659(2, 185, 1), "CELL_DEPTH");
						}
					}
				}
			}
		}
		else if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
		{
			if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0) || unk_0xD4337557D3DEFC11(unk_0x17B5CC8A8615737D()) == 2)
			{
				if (!unk_0xD4337557D3DEFC11(unk_0x17B5CC8A8615737D()) == 2)
				{
					func_61(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x38DDA814F2E19659(2, 183, 1), "CELL_GRID");
					func_61(uLocal_141, "SET_DATA_SLOT", 4f, unk_0x9AF1671E53EE8CE7(0, 1, 1), "CELL_285");
					func_61(uLocal_141, "SET_DATA_SLOT", 5f, unk_0x38DDA814F2E19659(0, 39, 1), "CELL_284");
					if (func_135())
					{
						func_46(6f);
						func_45(7f);
						func_61(uLocal_141, "SET_DATA_SLOT", 8f, unk_0x38DDA814F2E19659(2, 185, 1), "CELL_DEPTH");
					}
				}
				else
				{
					func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x9AF1671E53EE8CE7(0, 1, 1), "CELL_285");
					if (func_135())
					{
						func_46(3f);
						func_45(4f);
						func_61(uLocal_141, "SET_DATA_SLOT", 5f, unk_0x38DDA814F2E19659(2, 185, 1), "CELL_DEPTH");
					}
				}
			}
			else if (!unk_0xD4337557D3DEFC11(unk_0x17B5CC8A8615737D()) == 2)
			{
				if (unk_0xF23B2033129FFCF0(2) || unk_0x7C2F31E78C33DE0F())
				{
					func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x38DDA814F2E19659(0, 184, 1), "CELL_SP_1NP_XB");
				}
				else
				{
					func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x38DDA814F2E19659(0, 184, 1), "CELL_SP_1NP_XB");
				}
				func_61(uLocal_141, "SET_DATA_SLOT", 4f, unk_0x38DDA814F2E19659(2, 183, 1), "CELL_GRID");
				func_61(uLocal_141, "SET_DATA_SLOT", 5f, unk_0x9AF1671E53EE8CE7(0, 1, 1), "CELL_285");
				func_61(uLocal_141, "SET_DATA_SLOT", 6f, unk_0x38DDA814F2E19659(0, 39, 1), "CELL_284");
				if (func_135())
				{
					func_46(7f);
					func_45(8f);
					if (bLocal_63)
					{
						func_61(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x38DDA814F2E19659(0, 182, 1), "CELL_FOCUS");
					}
					func_61(uLocal_141, "SET_DATA_SLOT", 9f, unk_0x38DDA814F2E19659(2, 185, 1), "CELL_DEPTH");
				}
				else
				{
					if (unk_0xF23B2033129FFCF0(2) || unk_0x7C2F31E78C33DE0F())
					{
						func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x38DDA814F2E19659(0, 184, 1), "CELL_SP_1NP_XB");
					}
					else
					{
						func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x38DDA814F2E19659(0, 184, 1), "CELL_SP_1NP_XB");
					}
					func_61(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x9AF1671E53EE8CE7(0, 1, 1), "CELL_285");
					if (func_135())
					{
						func_46(4f);
						func_45(5f);
						func_61(uLocal_141, "SET_DATA_SLOT", 6f, unk_0x38DDA814F2E19659(2, 185, 1), "CELL_DEPTH");
					}
				}
			}
		}
		unk_0xEAC9A8A194DF8F91(uLocal_141, "SET_MAX_WIDTH");
		unk_0x584CF9CAE83942E5(fLocal_77);
		unk_0x44983883E630A945();
		func_127(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_51()
{
	func_127(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_127(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_61(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x38DDA814F2E19659(0, 39, 1), "CELL_284");
	func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x9AF1671E53EE8CE7(0, 1, 1), "CELL_285");
	func_61(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x38DDA814F2E19659(2, 179, 1), "CELL_287");
	func_61(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x38DDA814F2E19659(0, 177, 1), "CELL_281");
	unk_0xEAC9A8A194DF8F91(uLocal_141, "SET_MAX_WIDTH");
	unk_0x584CF9CAE83942E5(fLocal_77);
	unk_0x44983883E630A945();
	func_127(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_52()
{
	if (iLocal_131)
	{
		unk_0x503F20CB07C55470(fLocal_73, 1065353216);
		unk_0xBA7CD73403732191(fLocal_74);
	}
}

void func_53(int iParam0)
{
	if (iLocal_156 == 1)
	{
		return;
	}
	if (Global_1633501.f_102722 == 1)
	{
	}
	else if (Global_1633501.f_102723 == 1)
	{
	}
	else
	{
		unk_0x1F85777FBABA1F1A(iParam0);
	}
}

void func_54()
{
	if (iLocal_61 == 1)
	{
		if (unk_0x6A7B0D91FD88D9EE(sLocal_19[Global_2594042], "phone_cam12DUMMY"))
		{
			unk_0x34B12E3900246AE0(0);
			unk_0x0BD8DDF2D6EF16AA(0);
		}
		else
		{
			unk_0x34B12E3900246AE0(1);
			unk_0x0BD8DDF2D6EF16AA(1);
		}
	}
}

void func_55()
{
	func_127(uLocal_140, "SHOW_REMAINING_PHOTOS", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (!func_135())
	{
		if (Global_1760863 == 0)
		{
			unk_0x7B0FD4D19F705700("phone_cam");
		}
	}
}

int func_56()
{
	if (func_57(14))
	{
		if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
		{
			if ((unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()) == Global_101700.f_27009[0 /*29*/] || unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()) == Global_101700.f_27009[1 /*29*/]) || unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()) == Global_101700.f_27009[2 /*29*/])
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
	return Global_35781 == iParam0;
}

void func_58(char* sParam0)
{
	unk_0xDCEB60B79ECB219E(sParam0);
	unk_0x1798EBF9408190D3();
}

void func_59()
{
	if (unk_0xF23B2033129FFCF0(2) || unk_0x7C2F31E78C33DE0F())
	{
		func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x38DDA814F2E19659(0, 184, 1), "CELL_SP_2NP_XB");
	}
	else
	{
		func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x38DDA814F2E19659(0, 184, 1), "CELL_SP_2NP_XB");
	}
	if (unk_0xF23B2033129FFCF0(2))
	{
		func_61(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x38DDA814F2E19659(0, 30, 1), "CELL_RT_RSTICK");
		func_61(uLocal_141, "SET_DATA_SLOT", 4f, unk_0x9AF1671E53EE8CE7(2, 1, 1), "CELL_RT_LSTICK");
	}
	else
	{
		func_61(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x38DDA814F2E19659(0, 1, 1), "CELL_RT_RSTICK");
		func_61(uLocal_141, "SET_DATA_SLOT", 4f, unk_0x9AF1671E53EE8CE7(2, 0, 1), "CELL_RT_LSTICK");
	}
}

void func_60()
{
	if (unk_0xF23B2033129FFCF0(2) || unk_0x7C2F31E78C33DE0F())
	{
		func_61(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x38DDA814F2E19659(0, 184, 1), "CELL_SP_2NP_XB");
	}
	else
	{
		func_61(uLocal_141, "SET_DATA_SLOT", 3f, unk_0x38DDA814F2E19659(0, 184, 1), "CELL_SP_2NP_XB");
	}
	func_61(uLocal_141, "SET_DATA_SLOT", 4f, unk_0x9AF1671E53EE8CE7(0, 1, 1), "CELL_LT_RSTICK");
	if (func_57(14))
	{
		func_61(uLocal_141, "SET_DATA_SLOT", 5f, unk_0x38DDA814F2E19659(2, 30, 1), "CELL_LT_LSTICK");
	}
	else
	{
		func_61(uLocal_141, "SET_DATA_SLOT", 5f, unk_0x38DDA814F2E19659(0, 39, 1), "CELL_LT_LSTICKZ");
		func_61(uLocal_141, "SET_DATA_SLOT", 6f, unk_0x38DDA814F2E19659(2, 30, 1), "CELL_LT_LSTICK");
	}
}

void func_61(var uParam0, char* sParam1, float fParam2, var uParam3, char* sParam4)
{
	unk_0xEAC9A8A194DF8F91(uParam0, sParam1);
	unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam2));
	if (!unk_0x9C88EB7B70229335(uParam3))
	{
		func_62(uParam3);
	}
	if (!unk_0x9C88EB7B70229335(sParam4))
	{
		func_58(sParam4);
	}
	unk_0x44983883E630A945();
}

void func_62(var uParam0)
{
	unk_0x0A7B7FF9E4F6CAA7(uParam0);
}

void func_63()
{
	if (Global_69702)
	{
		switch (Global_16862)
		{
			case 0:
				if (unk_0xF23B2033129FFCF0(2))
				{
					func_123("CELL_CAM_SELFIE_0_KM", -1);
				}
				else
				{
					func_123("CELL_CAM_SELFIE_0", -1);
				}
				Global_16862++;
				break;
			
			case 1:
				if (!unk_0x9E123D5FF2973C60())
				{
					if (unk_0xF23B2033129FFCF0(2))
					{
						func_123("CELL_CAM_SELFIE_1_KM", -1);
					}
					else
					{
						func_123("CELL_CAM_SELFIE_1", -1);
					}
					Global_16862++;
				}
				break;
			
			case 2:
				break;
		}
	}
	else
	{
		switch (Global_16861)
		{
			case 0:
				if (unk_0xF23B2033129FFCF0(2))
				{
					func_123("CELL_CAM_SELFIE_0_KM", -1);
				}
				else
				{
					func_123("CELL_CAM_SELFIE_0", -1);
				}
				Global_16861++;
				break;
			
			case 1:
				if (!unk_0x9E123D5FF2973C60())
				{
					if (unk_0xF23B2033129FFCF0(2))
					{
						func_123("CELL_CAM_SELFIE_1_KM", -1);
					}
					else
					{
						func_123("CELL_CAM_SELFIE_1", -1);
					}
					Global_16861++;
				}
				break;
			
			case 2:
				break;
			}
	}
}

void func_64()
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
	
	if (unk_0xF23B2033129FFCF0(2))
	{
		iVar9 = 179;
		iVar10 = 21;
	}
	else
	{
		iVar9 = 228;
		iVar10 = 229;
	}
	if (unk_0x79888727131C6854(2, iVar10) && !unk_0x79888727131C6854(2, iVar9))
	{
		unk_0xD1BB2AD73E7FC3A7(0, 2, 1);
		unk_0xD1BB2AD73E7FC3A7(0, 1, 1);
		iVar0 = unk_0xF34EE736CF047844(unk_0xBD25D98B49ED9766(0, 30)) * 127;
		iVar1 = unk_0xF34EE736CF047844(unk_0xBD25D98B49ED9766(0, 31)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0xBD25D98B49ED9766(0, 1)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0xBD25D98B49ED9766(0, 2)) * 127;
		if (unk_0xF23B2033129FFCF0(2))
		{
			if (unk_0x049F77DED8AE0AF4(iVar0) > 28 || unk_0x049F77DED8AE0AF4(iVar1) > 28)
			{
				fVar6 = ((IntToFloat(iVar0) / 128f) * fLocal_164);
			}
		}
		else if (unk_0x049F77DED8AE0AF4(iVar2) > 28 || unk_0x049F77DED8AE0AF4(iVar3) > 28)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_164);
		}
		if (unk_0xF23B2033129FFCF0(2))
		{
			fVar7 = unk_0xBD25D98B49ED9766(0, 290);
			fVar8 = unk_0xBD25D98B49ED9766(0, 291);
			if (unk_0xD652E15466D1EA3C())
			{
				fVar8 = (fVar8 * -1f);
			}
			fVar4 = (fVar4 + fVar7);
			fVar5 = (fVar5 - fVar8);
		}
		else if (unk_0x049F77DED8AE0AF4(iVar0) > 28 || unk_0x049F77DED8AE0AF4(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_164);
			fVar5 = ((IntToFloat(-iVar1) / 128f) * fLocal_164);
		}
		func_67(fVar5);
		func_66(fVar6);
		func_65(fVar4);
	}
	else if (!unk_0x79888727131C6854(2, iVar9))
	{
		unk_0xCA3F0B618E8962EA(0, 2, 1);
		unk_0xCA3F0B618E8962EA(0, 1, 1);
	}
}

void func_65(float fParam0)
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
	unk_0xF51C3780592D14F3(fLocal_161);
}

void func_66(float fParam0)
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
	unk_0xDECE621ECFD0419F(fLocal_162);
}

void func_67(float fParam0)
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
	unk_0xE62F183581E95B41(fLocal_163);
}

void func_68()
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
	
	if (unk_0xF23B2033129FFCF0(2))
	{
		iVar10 = 179;
		iVar11 = 178;
		if (unk_0x79888727131C6854(2, iVar10))
		{
			if (unk_0x4B972043966C2EB8(2, 178))
			{
				unk_0x4FED8BD67CB8B802(0.5f);
				unk_0xB984313AD1C7DDDE(0.85f);
				unk_0x5C13AC0C88BCC0CB(0.5f);
				unk_0x5A2ED5711938A509(-0.25f);
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
	if (unk_0x79888727131C6854(2, iVar10) && !unk_0x79888727131C6854(2, iVar11))
	{
		if (unk_0x4B972043966C2EB8(2, 178))
		{
			unk_0x4FED8BD67CB8B802(0.5f);
			unk_0xB984313AD1C7DDDE(0.85f);
			unk_0x5C13AC0C88BCC0CB(0.5f);
			unk_0x5A2ED5711938A509(-0.25f);
			fLocal_157 = 0.5f;
			fLocal_158 = 0.85f;
			fLocal_159 = 0.5f;
			fLocal_160 = -0.25f;
		}
		unk_0xD1BB2AD73E7FC3A7(0, 2, 1);
		unk_0xD1BB2AD73E7FC3A7(0, 1, 1);
		iVar0 = unk_0xF34EE736CF047844(unk_0xBD25D98B49ED9766(0, 30)) * 127;
		iVar1 = unk_0xF34EE736CF047844(unk_0xBD25D98B49ED9766(0, 31)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0xBD25D98B49ED9766(0, 1)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0xBD25D98B49ED9766(0, 2)) * 127;
		if (unk_0xF23B2033129FFCF0(2))
		{
			iVar1 = unk_0xF34EE736CF047844(unk_0xBD25D98B49ED9766(0, 39)) * 127;
			fVar8 = unk_0xBD25D98B49ED9766(0, 290);
			fVar9 = unk_0xBD25D98B49ED9766(0, 291);
			if (unk_0xD652E15466D1EA3C())
			{
				fVar9 = (fVar9 * -1f);
			}
			fVar6 = (fVar6 + fVar8);
			fVar7 = (fVar7 - fVar9);
		}
		else if (unk_0x049F77DED8AE0AF4(iVar2) > 15 || unk_0x049F77DED8AE0AF4(iVar3) > 15)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_164);
			fVar7 = ((IntToFloat(-iVar3) / 128f) * fLocal_164);
		}
		if (unk_0x049F77DED8AE0AF4(iVar0) > 28 || unk_0x049F77DED8AE0AF4(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_164);
			fVar5 = ((IntToFloat(iVar1) / 128f) * fLocal_164);
		}
		func_72(fVar6);
		func_71(fVar7);
		func_70(fVar4);
		if (!func_57(14))
		{
			func_69(fVar5);
		}
	}
	else if (!unk_0x9E3D293A990C1BEF(2, iVar11))
	{
		unk_0xCA3F0B618E8962EA(0, 2, 1);
		unk_0xCA3F0B618E8962EA(0, 1, 1);
	}
	if (!unk_0x9E3D293A990C1BEF(2, iVar10) && !unk_0x9E3D293A990C1BEF(2, iVar11))
	{
		iVar0 = unk_0xF34EE736CF047844(unk_0xBD25D98B49ED9766(0, 30)) * 127;
		iVar1 = unk_0xF34EE736CF047844(unk_0xBD25D98B49ED9766(0, 31)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0xBD25D98B49ED9766(0, 290)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0xBD25D98B49ED9766(0, 291)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0xBD25D98B49ED9766(0, 294)) * 127;
		iVar2 = unk_0xF34EE736CF047844(unk_0xBD25D98B49ED9766(0, 295)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0xBD25D98B49ED9766(0, 292)) * 127;
		iVar3 = unk_0xF34EE736CF047844(unk_0xBD25D98B49ED9766(0, 293)) * 127;
		if (unk_0x049F77DED8AE0AF4(iVar2) > 28 || unk_0x049F77DED8AE0AF4(iVar3) > 28)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_164);
			fVar7 = ((IntToFloat(-iVar3) / 128f) * fLocal_164);
		}
		if (unk_0x049F77DED8AE0AF4(iVar0) > 28 || unk_0x049F77DED8AE0AF4(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_164);
			fVar5 = ((IntToFloat(iVar1) / 128f) * fLocal_164);
		}
		if (!func_57(14))
		{
			func_69(fVar5);
		}
	}
}

void func_69(float fParam0)
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
	unk_0x5C13AC0C88BCC0CB(fLocal_159);
}

void func_70(float fParam0)
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
	unk_0x5A2ED5711938A509(fLocal_160);
}

void func_71(float fParam0)
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
	unk_0xB984313AD1C7DDDE(fLocal_158);
}

void func_72(float fParam0)
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
	unk_0x4FED8BD67CB8B802(fLocal_157);
}

void func_73()
{
	if (Global_69962 || Global_69963)
	{
		return;
	}
	if (iLocal_124 == 0)
	{
		if (!iLocal_150)
		{
			if (Global_1633501.f_102722 == 0 && Global_1633501.f_102723 == 0)
			{
				unk_0x90101FEE397F4A7E(uLocal_141, 255, 255, 255, 0, 0);
			}
		}
	}
	if (iLocal_127 == 0)
	{
		if (Global_14385)
		{
			if (Global_14604)
			{
				if (iLocal_150 == 0)
				{
					if (Global_14443.f_1 > 3)
					{
					}
				}
			}
		}
		else
		{
			func_75(255, 255, 255, 255);
			func_74(0.059f, 0.644f, "CELL_284", 0);
			func_75(255, 255, 255, 255);
			func_74(0.165f, 0.644f, "CELL_285", 0);
			func_75(255, 255, 255, 255);
			func_74(0.275f, 0.75f, "CELL_280", 0);
			func_75(255, 255, 255, 255);
			func_74(0.275f, 0.83f, "CELL_281", 0);
		}
	}
	else if (Global_14385)
	{
	}
	else
	{
		func_75(255, 255, 255, 255);
		func_74(0.275f, 0.75f, "CELL_287", 0);
		func_75(255, 255, 255, 255);
		func_74(0.275f, 0.79f, "CELL_286", 0);
		func_75(255, 255, 255, 255);
		func_74(0.275f, 0.83f, "CELL_281", 0);
	}
}

void func_74(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	unk_0x169EAB5A8FBE845B(sParam2);
	unk_0x30122BDF124C9221(fParam0, fParam1, iParam3);
}

void func_75(int iParam0, int iParam1, int iParam2, int iParam3)
{
	unk_0xF52EFF0C6EF215CB(0.4f, 0.4f);
	unk_0x403F622BEAB190B9(0, 0, 0, 0, 0);
	unk_0x815C87228CF5C384(1, 0, 0, 0, 205);
	unk_0xA37B016FED0FD14C(1);
	unk_0x6C65E322B18B5D28(0);
	unk_0x95F5FAE83A0364F7(iParam0, iParam1, iParam2, iParam3);
}

void func_76()
{
	unk_0x503F20CB07C55470(fLocal_75, 1065353216);
	unk_0xBA7CD73403732191(fLocal_76);
}

void func_77()
{
	unk_0xD1BB2AD73E7FC3A7(0, 25, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 44, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 3, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 4, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 5, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 6, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 1, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 2, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 39, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 47, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 56, 1);
}

void func_78()
{
	Local_87 = { Global_14396[Global_14388 /*3*/] };
	if (Global_14385)
	{
		if (func_81())
		{
			unk_0x4EA69F96033BA4FB(&Local_93);
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
		if (unk_0x48B8265059381CD0(Global_2315, 4))
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
		if (func_81() == 0)
		{
			if (unk_0x48B8265059381CD0(Global_2315, 4))
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
			Local_87 = { Global_14389[Global_14388 /*3*/] };
		}
		Local_81 = { Local_87 };
		iLocal_123 = 0;
		iLocal_122 = 0;
		iLocal_121 = 0;
		unk_0xBB4FC17174B4A105(Local_81);
		if ((iLocal_121 == 0 && iLocal_122 == 0) && iLocal_123 == 0)
		{
			iLocal_124 = 0;
			Local_84 = { -90.3f, 0f, 90f };
			unk_0xE018C448439E147D(Local_84, 0);
			if (!unk_0x48B8265059381CD0(Global_2313, 22))
			{
				if (unk_0x48B8265059381CD0(Global_2313, 28))
				{
					StringCopy(&cLocal_145, "CELL_294", 16);
					func_80();
				}
				else
				{
					StringCopy(&cLocal_145, "CELL_293", 16);
					func_79();
				}
				iLocal_100 = 2;
			}
		}
	}
}

void func_79()
{
	func_127(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_127(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (unk_0x48B8265059381CD0(Global_2314, 28))
	{
		func_61(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x38DDA814F2E19659(0, 176, 1), "CELL_286");
	}
	else
	{
		func_61(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x38DDA814F2E19659(2, 178, 1), "CELL_277");
		func_61(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x38DDA814F2E19659(0, 176, 1), "CELL_GALSAVE");
	}
	unk_0xEAC9A8A194DF8F91(uLocal_141, "SET_MAX_WIDTH");
	unk_0x584CF9CAE83942E5(fLocal_77);
	unk_0x44983883E630A945();
	func_127(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_80()
{
	func_127(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_127(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (unk_0x48B8265059381CD0(Global_2314, 28))
	{
		func_61(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x38DDA814F2E19659(2, 179, 1), "CELL_287");
		func_61(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x38DDA814F2E19659(0, 176, 1), "CELL_286");
	}
	else
	{
		func_61(uLocal_141, "SET_DATA_SLOT", 2f, unk_0x38DDA814F2E19659(2, 179, 1), "CELL_287");
		func_61(uLocal_141, "SET_DATA_SLOT", 1f, unk_0x38DDA814F2E19659(2, 178, 1), "CELL_277");
		func_61(uLocal_141, "SET_DATA_SLOT", 0f, unk_0x38DDA814F2E19659(0, 176, 1), "CELL_GALSAVE");
	}
	unk_0xEAC9A8A194DF8F91(uLocal_141, "SET_MAX_WIDTH");
	unk_0x584CF9CAE83942E5(fLocal_77);
	unk_0x44983883E630A945();
	func_127(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

int func_81()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
	{
		if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
		{
			if (Global_14386 == 0)
			{
				if (Global_1628 != 128)
				{
					if (!unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
					{
						if (Global_15745 != 2)
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
		if (unk_0x6A67A9A75CEBC97E(unk_0x17B5CC8A8615737D(), 0))
		{
			return 0;
		}
		if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
		{
			if (!unk_0xC448AAB174DBB233())
			{
				if (unk_0xA77EE6C138A588EB(unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0)))
				{
					return 0;
				}
			}
		}
		if (((unk_0x5FD7D852A3EAF133(unk_0x17B5CC8A8615737D()) || unk_0x3AD4FC6271B0E925(unk_0x17B5CC8A8615737D())) || unk_0xA4FEB0448027296A(unk_0xBE369BE1BC57A796())) || unk_0x73D75E5206725CCD(unk_0x17B5CC8A8615737D()))
		{
			return 0;
		}
		if (Global_100748)
		{
			return 0;
		}
	}
	if (Global_69702)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0xB2CED41F4337ED8B();
	iVar1 = unk_0xB866C0EABE959340(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || unk_0xC448AAB174DBB233()))
	{
		iVar2 = 1;
		if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
		{
			if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
			{
				iVar3 = unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0);
				if ((((((((unk_0xD28959FE5BC2D14D(unk_0x0324EEB10F81965F(iVar3)) || unk_0x4A0388DBE0CE87AA(unk_0x0324EEB10F81965F(iVar3))) || unk_0xBA3A0947FBDD9ADD(unk_0x0324EEB10F81965F(iVar3))) || unk_0x0324EEB10F81965F(iVar3) == joaat("seashark")) || unk_0x0324EEB10F81965F(iVar3) == joaat("seashark2")) || unk_0x0324EEB10F81965F(iVar3) == joaat("rhino")) || unk_0x0324EEB10F81965F(iVar3) == joaat("submersible")) || unk_0x0324EEB10F81965F(iVar3) == joaat("submersible2")) || unk_0x0324EEB10F81965F(iVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_2595532 || iVar2 == 1)
	{
		if (unk_0x82F1A060D8F4583B(joaat("apptrackify")) > 0 || Global_101700.f_13010.f_89)
		{
			if (unk_0x82F1A060D8F4583B(joaat("michael2")) > 0)
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

void func_82()
{
	unk_0xD1BB2AD73E7FC3A7(0, 47, 1);
	unk_0x28EAA5C7C54BD253(0, Global_14413);
	Local_84 = { Global_14403 };
	Local_87 = { Global_14396[Global_14388 /*3*/] };
	if (func_81())
	{
		unk_0xD48D02F749616B61(&Local_90, 0);
		Local_84 = { Local_90 };
		unk_0x4EA69F96033BA4FB(&Local_93);
		Local_87 = { Local_93 };
		iLocal_118 = 0;
		iLocal_119 = 0;
		iLocal_120 = 0;
		iLocal_121 = 0;
		iLocal_122 = 0;
		iLocal_123 = 0;
	}
	if (Global_14385)
	{
		func_127(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_53(0);
		iLocal_131 = 0;
		if (unk_0x48B8265059381CD0(Global_2313, 30))
		{
			iLocal_118 = 0;
			iLocal_119 = 0;
			iLocal_120 = 0;
			func_83();
		}
		if (iLocal_121)
		{
			if (unk_0x48B8265059381CD0(Global_2313, 9))
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
			if (func_81() == 0)
			{
				unk_0xE018C448439E147D(Local_78, 0);
				unk_0xBB4FC17174B4A105(Local_81);
			}
			func_90(0, 1);
		}
		else if (func_81() == 0)
		{
			unk_0xE018C448439E147D(Local_78, 0);
			unk_0xBB4FC17174B4A105(Local_81);
		}
		if ((iLocal_118 == 0 && iLocal_119 == 0) && iLocal_120 == 0)
		{
			func_83();
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
			func_83();
		}
	}
	unk_0xE018C448439E147D(Local_78, 0);
}

void func_83()
{
	func_1(0);
	if (func_81() == 0)
	{
		if (unk_0x48B8265059381CD0(Global_2313, 30))
		{
			unk_0xBB4FC17174B4A105(Global_14389[Global_14388 /*3*/]);
		}
		else
		{
			unk_0xBB4FC17174B4A105(Global_14396[Global_14388 /*3*/]);
		}
		Local_78 = { Local_84 };
		unk_0xE018C448439E147D(Local_78, 0);
	}
	Global_16778 = 0;
	func_93(0, 0);
	func_97(0);
	iLocal_115 = 0;
	func_92();
	Global_14430 = 1;
	Global_16781 = 0;
	if (Global_14443.f_1 > 4)
	{
		Global_14443.f_1 = 6;
		Global_14421 = 1;
		func_84();
	}
	if (unk_0xFF84A94166FBB351(uLocal_140))
	{
		func_126(uLocal_140, "SHUTDOWN_MOVIE");
	}
	unk_0x4EDE34FBADD967A6(0);
	unk_0xF6EFB598FD123B39();
	unk_0x33CBABDFE7B17924(&uLocal_141);
	unk_0x33CBABDFE7B17924(&uLocal_140);
	if (Global_14606 == 1)
	{
		unk_0xEB79FECD9022AAF0(&Global_2313, 17);
	}
	else
	{
		unk_0x21E7933CCC7B3724(&Global_2313, 17);
	}
	unk_0x21E7933CCC7B3724(&Global_2313, 18);
	unk_0x21E7933CCC7B3724(&Global_2313, 21);
	unk_0x2B3976C5A4017270(0, 1);
	unk_0x21E7933CCC7B3724(&Global_2315, 3);
	unk_0x21E7933CCC7B3724(&Global_2595318, 3);
	unk_0xD278B72A700DC2DC(0);
	unk_0x4536CA73A019CB85(unk_0xBE369BE1BC57A796(), 1);
	unk_0x81118A143DD8B493(15);
	Global_16782 = 1;
	unk_0x2EB37CDED0E516F3(iLocal_112);
	unk_0xB47CC6339ADB0B67(iLocal_112);
	unk_0xF9E752009D9D07AB();
	if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
	{
		unk_0xF2F66822E1357C31(unk_0x17B5CC8A8615737D(), "Mood_Normal_1", 0);
		unk_0xE81FB651EA53A574(unk_0x17B5CC8A8615737D());
	}
	func_92();
	unk_0x34B12E3900246AE0(0);
	unk_0x0BD8DDF2D6EF16AA(0);
	unk_0x399BB4C7486EE39D(1f);
	if (Global_2594043 > 0 && Global_2594043 < 13)
	{
		unk_0xC07032666ADF86BE(sLocal_33[Global_2594043]);
	}
	func_90(0, 1);
	if (func_133(0, 1, iLocal_64, 1))
	{
		iLocal_64 = 0;
	}
	unk_0x921053BAF754303D();
}

void func_84()
{
	struct<3> Var0;
	
	if (Global_14426 == 1)
	{
		return;
	}
	if (Global_14443.f_1 < 4)
	{
		return;
	}
	while (!unk_0xFF84A94166FBB351(Global_14424))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	switch (Global_14443.f_1)
	{
		case 6:
			func_127(Global_14424, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_88(Global_2918);
			if (Global_2918 == 1)
			{
				func_127(Global_14424, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14447), -1082130432, -1082130432, -1082130432);
				Global_14423 = Global_14447;
			}
			else
			{
				func_127(Global_14424, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14448), -1082130432, -1082130432, -1082130432);
				Global_14423 = Global_14448;
			}
			if (Global_14431)
			{
				func_87(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_87(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_87(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_87(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_14606 == 0)
			{
				func_87(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x21E7933CCC7B3724(&Global_2313, 17);
			}
			else if (Global_69702)
			{
				func_87(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x21E7933CCC7B3724(&Global_2313, 17);
			}
			else
			{
				if (Global_14605 == 1)
				{
					if (Global_14431)
					{
						func_87(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_87(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_14431)
				{
					func_87(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_87(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				unk_0xEB79FECD9022AAF0(&Global_2313, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_127(Global_14424, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_87(Global_14424, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_87(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x21E7933CCC7B3724(&Global_2313, 17);
			if (unk_0x48B8265059381CD0(Global_2313, 20))
			{
				func_87(Global_14424, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14431)
			{
				func_87(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14386)
				{
					func_87(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_87(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_14442 == 1)
			{
				func_86();
				func_127(Global_14424, "SET_THEME", unk_0xBBDA792448DB5A89(Global_101700.f_13010[Global_14443 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_15758)
				{
					unk_0xEAC9A8A194DF8F91(Global_14424, "SET_DATA_SLOT");
					unk_0xDF18CF55301CEB8B(4);
					unk_0xDF18CF55301CEB8B(0);
					unk_0xDF18CF55301CEB8B(2);
					unk_0xDCEB60B79ECB219E("CELL_CONDFON");
					unk_0xBAB00B98D1E61BEE(&Global_15760);
					unk_0x1798EBF9408190D3();
					func_58("CELL_300");
					func_58("CELL_217");
					func_58("CELL_217");
					unk_0x44983883E630A945();
				}
				else if (Global_101700.f_27009[Global_1628 /*29*/].f_24[Global_14443] == 0)
				{
					func_87(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_117[Global_1628 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_87(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(2), -1f, -1f, &(Global_101700.f_27009[Global_1628 /*29*/].f_3), &(Global_101700.f_27009[Global_1628 /*29*/].f_7), "CELL_217", &(Global_101700.f_27009[Global_1628 /*29*/].f_3), 0);
				}
				func_127(Global_14424, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_15745 == 4 || Global_15745 == 3)
			{
				func_127(Global_14424, "SET_THEME", unk_0xBBDA792448DB5A89(Global_101700.f_13010[Global_14443 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_86();
				if (Global_15758)
				{
					unk_0xEAC9A8A194DF8F91(Global_14424, "SET_DATA_SLOT");
					unk_0xDF18CF55301CEB8B(4);
					unk_0xDF18CF55301CEB8B(0);
					unk_0xDF18CF55301CEB8B(2);
					unk_0xDCEB60B79ECB219E("CELL_CONDFON");
					unk_0xBAB00B98D1E61BEE(&Global_15760);
					unk_0x1798EBF9408190D3();
					func_58("CELL_300");
					func_58("CELL_219");
					func_58("CELL_219");
					unk_0x44983883E630A945();
				}
				else
				{
					if (Global_16003)
					{
						StringCopy(&Var0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&Var0, "CELL_211", 24);
					}
					if (Global_101700.f_27009[Global_1628 /*29*/].f_24[Global_14443] == 0)
					{
						func_127(Global_14424, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_87(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_117[Global_1628 /*10*/].f_4), "CELL_300", &Var0, "CELL_195", 0);
					}
					else
					{
						func_127(Global_14424, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_87(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(4), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(3), -1f, -1f, &(Global_101700.f_27009[Global_1628 /*29*/].f_3), &(Global_101700.f_27009[Global_1628 /*29*/].f_7), &Var0, &(Global_101700.f_27009[Global_1628 /*29*/].f_3), 0);
					}
				}
				func_127(Global_14424, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_85();
			break;
		
		default:
			break;
	}
}

void func_85()
{
	if (unk_0xFF84A94166FBB351(Global_14424))
	{
		if (Global_14442 == 1)
		{
			if (Global_14431)
			{
				func_87(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_87(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_15792)
			{
				func_87(Global_14424, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (unk_0x48B8265059381CD0(Global_2313, 20))
			{
				func_87(Global_14424, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14431)
			{
				func_87(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_87(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_87(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x21E7933CCC7B3724(&Global_2313, 17);
		}
		else
		{
			func_87(Global_14424, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_87(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x21E7933CCC7B3724(&Global_2313, 17);
			if (unk_0x48B8265059381CD0(Global_2313, 20))
			{
				func_87(Global_14424, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14431)
			{
				func_87(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14386)
				{
					func_87(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_87(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_86()
{
	if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
	{
		if (Global_14443 == 0)
		{
			switch (Global_101700.f_13010[Global_14443 /*20*/].f_6)
			{
				case 1:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 0);
					break;
				
				case 2:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 1);
					break;
				
				case 3:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 2);
					break;
				
				case 4:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 3);
					break;
				
				case 5:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 4);
					break;
				
				case 6:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 5);
					break;
				
				case 7:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_14443 == 1)
		{
			switch (Global_101700.f_13010[Global_14443 /*20*/].f_6)
			{
				case 1:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 6);
					break;
				
				case 2:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 0);
					break;
				
				case 3:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 1);
					break;
				
				case 4:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 2);
					break;
				
				case 5:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 3);
					break;
				
				case 6:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 4);
					break;
				
				case 7:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_14443 == 2)
		{
			switch (Global_101700.f_13010[Global_14443 /*20*/].f_6)
			{
				case 1:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 5);
					break;
				
				case 2:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 6);
					break;
				
				case 3:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 1);
					break;
				
				case 4:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 0);
					break;
				
				case 5:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 2);
					break;
				
				case 6:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 3);
					break;
				
				case 7:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_14443 == 3)
		{
			switch (Global_2595530)
			{
				case 1:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 0);
					break;
				
				case 2:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 1);
					break;
				
				case 3:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 2);
					break;
				
				case 4:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 3);
					break;
				
				case 5:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 4);
					break;
				
				case 6:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 5);
					break;
				
				case 7:
					unk_0x4C97AC11E3D49677(unk_0xBE369BE1BC57A796(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_87(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0xEAC9A8A194DF8F91(uParam0, sParam1);
	unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x9C88EB7B70229335(sParam7))
	{
		func_58(sParam7);
	}
	if (!unk_0x9C88EB7B70229335(iParam8))
	{
		func_58(iParam8);
	}
	if (!unk_0x9C88EB7B70229335(iParam9))
	{
		func_58(iParam9);
	}
	if (!unk_0x9C88EB7B70229335(iParam10))
	{
		func_58(iParam10);
	}
	if (!unk_0x9C88EB7B70229335(iParam11))
	{
		func_58(iParam11);
	}
	unk_0x44983883E630A945();
}

void func_88(int iParam0)
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
	
	Global_16813 = 0;
	Global_2918 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2882[iVar0] = 0;
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
				if (iParam0 == Global_2320[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2320[iVar1 /*15*/].f_4)
					{
						if (Global_2882[iVar0] == 0)
						{
							Global_2846[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0x48B8265059381CD0(Global_2314, 3))
								{
									iVar2 = 42;
									Global_14608 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14608 = 0;
								}
								unk_0xEAC9A8A194DF8F91(Global_14424, "SET_DATA_SLOT");
								unk_0xDF18CF55301CEB8B(1);
								unk_0xDF18CF55301CEB8B(iVar0);
								unk_0xDF18CF55301CEB8B(Global_2320[iVar1 /*15*/].f_10);
								unk_0xDF18CF55301CEB8B(0);
								func_58(&(Global_2320[iVar1 /*15*/]));
								unk_0xDF18CF55301CEB8B(iVar2);
								unk_0x44983883E630A945();
							}
							if (Global_2452520)
							{
								if (iVar1 == 14)
								{
									func_87(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16808), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2882[iVar0] = 1;
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
				if (iParam0 == Global_2320[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2320[iVar1 /*15*/].f_4)
					{
						if (Global_2882[iVar0] == 0)
						{
							Global_2846[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_101700.f_13100[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_101700.f_13100[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_101700.f_13100[iVar3 /*104*/].f_99[Global_14443] == 1)
											{
												Global_16813++;
											}
										}
									}
									iVar3++;
								}
								func_87(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16813), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_69702)
								{
									iVar4 = 0;
									iVar4 = Global_2594052;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_2594053[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_2594053[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_2594053[iVar5 /*104*/].f_99[Global_14443] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_87(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14443)
									{
										case 0:
											iVar6 = Global_36917;
											break;
										
										case 1:
											iVar6 = Global_36918;
											break;
										
										case 2:
											iVar6 = Global_36919;
											break;
										
										default:
											break;
									}
									func_87(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar6), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_87(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16808), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0xEAC9A8A194DF8F91(Global_14424, "SET_DATA_SLOT");
								unk_0xDF18CF55301CEB8B(1);
								unk_0xDF18CF55301CEB8B(iVar0);
								unk_0xDF18CF55301CEB8B(Global_2320[iVar1 /*15*/].f_10);
								unk_0xDF18CF55301CEB8B(0);
								func_58(&(Global_2320[iVar1 /*15*/]));
								unk_0xDF18CF55301CEB8B(Global_2319);
								unk_0x44983883E630A945();
							}
							else if (iVar1 == 2)
							{
								if (unk_0x48B8265059381CD0(Global_2314, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0xEAC9A8A194DF8F91(Global_14424, "SET_DATA_SLOT");
								unk_0xDF18CF55301CEB8B(1);
								unk_0xDF18CF55301CEB8B(iVar0);
								unk_0xDF18CF55301CEB8B(Global_2320[iVar1 /*15*/].f_10);
								unk_0xDF18CF55301CEB8B(0);
								func_58(&(Global_2320[iVar1 /*15*/]));
								unk_0xDF18CF55301CEB8B(iVar7);
								unk_0x44983883E630A945();
							}
							else if (iVar1 == 3)
							{
								if (unk_0x48B8265059381CD0(Global_2314, 3))
								{
									iVar8 = 42;
									Global_14608 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14608 = 0;
								}
								unk_0xEAC9A8A194DF8F91(Global_14424, "SET_DATA_SLOT");
								unk_0xDF18CF55301CEB8B(1);
								unk_0xDF18CF55301CEB8B(iVar0);
								unk_0xDF18CF55301CEB8B(Global_2320[iVar1 /*15*/].f_10);
								unk_0xDF18CF55301CEB8B(0);
								func_58(&(Global_2320[iVar1 /*15*/]));
								unk_0xDF18CF55301CEB8B(iVar8);
								unk_0x44983883E630A945();
							}
							else if (iVar1 == 8)
							{
								unk_0xEAC9A8A194DF8F91(Global_14424, "SET_DATA_SLOT");
								unk_0xDF18CF55301CEB8B(1);
								unk_0xDF18CF55301CEB8B(iVar0);
								unk_0xDF18CF55301CEB8B(Global_2320[iVar1 /*15*/].f_10);
								unk_0xDF18CF55301CEB8B(0);
								func_58(&(Global_2320[iVar1 /*15*/]));
								unk_0xDF18CF55301CEB8B(42);
								unk_0x44983883E630A945();
							}
							else if ((iVar1 == 23 && unk_0x6A7B0D91FD88D9EE(&(Global_2320[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0x48B8265059381CD0(Global_2314, 6))
							{
								unk_0xEAC9A8A194DF8F91(Global_14424, "SET_DATA_SLOT");
								unk_0xDF18CF55301CEB8B(1);
								unk_0xDF18CF55301CEB8B(iVar0);
								unk_0xDF18CF55301CEB8B(Global_2320[iVar1 /*15*/].f_10);
								unk_0xDF18CF55301CEB8B(0);
								func_58(&(Global_2320[iVar1 /*15*/]));
								unk_0xDF18CF55301CEB8B(42);
								unk_0x44983883E630A945();
							}
							else if (Global_2320[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1618161.f_1;
								func_87(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar9), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_87(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2882[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_89()
{
	switch (iLocal_100)
	{
		case 1:
			unk_0x2B3976C5A4017270(0, 1);
			if (unk_0x48B8265059381CD0(Global_2313, 28))
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
			if (!unk_0x48B8265059381CD0(Global_2313, 22))
			{
				unk_0x2B3976C5A4017270(0, 1);
				if (unk_0x48B8265059381CD0(Global_2313, 28))
				{
					StringCopy(&cLocal_145, "CELL_294", 16);
					func_80();
				}
				else
				{
					StringCopy(&cLocal_145, "CELL_293", 16);
					func_79();
				}
				iLocal_100 = 2;
			}
			break;
		
		default:
			break;
	}
}

void func_90(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_91(0))
		{
			Global_14604 = 1;
			if (bParam1)
			{
				unk_0x4EA69F96033BA4FB(&Global_14380);
			}
			Global_14371 = { Global_14389[Global_14388 /*3*/] };
			unk_0xBB4FC17174B4A105(Global_14371);
		}
	}
	else if (Global_14604 == 1)
	{
		Global_14604 = 0;
		Global_14371 = { Global_14396[Global_14388 /*3*/] };
		if (bParam1)
		{
			unk_0xBB4FC17174B4A105(Global_14380);
		}
		else
		{
			unk_0xBB4FC17174B4A105(Global_14371);
		}
	}
}

int func_91(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0x48B8265059381CD0(Global_2313, 14))
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
	if (unk_0x82F1A060D8F4583B(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_92()
{
	if ((Global_1633501.f_102722 == 0 && Global_1633501.f_102723 == 0) && Global_1760863 == 0)
	{
		unk_0xC1AB7E5821CAB578();
	}
}

void func_93(int iParam0, int iParam1)
{
	if (Global_1633501.f_102722 == 1)
	{
	}
	else if (Global_1633501.f_102723 == 1)
	{
	}
	else
	{
		unk_0xA08986FC1C702729(iParam0, iParam1);
	}
}

int func_94()
{
	if (unk_0x48B8265059381CD0(Global_2313, 15))
	{
		return 1;
	}
	return 0;
}

int func_95(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x4B972043966C2EB8(iParam0, uParam1) || (iParam2 == 1 && unk_0x698C9A4C14BF3957(iParam0, iParam1)))
	{
		if (unk_0xEF4E5E47AF0D4480())
		{
			if (unk_0x8F013F929677E75D() == 0 || (unk_0x349B6C82BE3EF6DD() && unk_0xF23B2033129FFCF0(2)))
			{
				return 0;
			}
		}
		if (unk_0x95DBE123BC2DB80B() || unk_0x1CB39616BED2D488())
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

void func_96()
{
	if (Global_14385)
	{
		Local_84 = { -90.3f, 0f, 90f };
		Local_87 = { 1.5f, 0f, -17f };
		if (func_81())
		{
			unk_0xD48D02F749616B61(&Local_90, 0);
			Local_84 = { Local_90 };
			unk_0x4EA69F96033BA4FB(&Local_93);
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
		if (func_81() == 0)
		{
			unk_0xE018C448439E147D(Local_78, 0);
			unk_0xBB4FC17174B4A105(Local_81);
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
		unk_0xE018C448439E147D(Local_78, 0);
	}
	if (Global_14385)
	{
		if (((((iLocal_118 == 0 && iLocal_119 == 0) && iLocal_120 == 0) && iLocal_121 == 0) && iLocal_122 == 0) && iLocal_123 == 0)
		{
			if (func_81())
			{
			}
			else
			{
				Local_78 = { Local_84 };
				unk_0xE018C448439E147D(Local_78, 0);
				Local_81 = { Local_87 };
				unk_0xBB4FC17174B4A105(Local_81);
			}
			if (iLocal_103 == 0)
			{
				Global_16779 = 0;
				func_93(1, 1);
				iLocal_115 = 1;
				func_97(1);
				func_55();
				func_98();
				func_53(0);
				unk_0xC1B1E9A034A63A62(0);
				iLocal_142 = 1;
				iLocal_143 = 1;
				func_105();
				func_127(uLocal_140, "DISPLAY_VIEW", unk_0xBBDA792448DB5A89(iLocal_144), -1082130432, -1082130432, -1082130432, -1082130432);
				if (!unk_0x48B8265059381CD0(Global_2595318, 2))
				{
					func_127(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_127(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
				func_129();
			}
		}
	}
	else if ((iLocal_118 == 0 && iLocal_119 == 0) && iLocal_120 == 0)
	{
		Local_78 = { Local_84 };
		unk_0xE018C448439E147D(Local_78, 0);
		Global_16779 = 0;
	}
}

void func_97(bool bParam0)
{
	if (func_135())
	{
		if (bParam0)
		{
			if (!unk_0x7EBC0D12B8F1FC9E())
			{
				unk_0x1D24E4EE14E45829(1);
				if (Global_2594043 > 0 && Global_2594043 < 99)
				{
					unk_0x87F887F297700AFC(sLocal_33[Global_2594043], 0);
					unk_0x399BB4C7486EE39D(0.25f);
				}
			}
		}
		else if (unk_0x7EBC0D12B8F1FC9E())
		{
			unk_0x1D24E4EE14E45829(0);
		}
	}
}

void func_98()
{
	if (Global_2594042 > 0 && Global_2594042 < 99)
	{
		if (Global_1760863 == 0)
		{
			unk_0x7B0FD4D19F705700(sLocal_19[Global_2594042]);
		}
	}
}

void func_99()
{
	if (Global_14385)
	{
		iLocal_125 = 0;
		func_55();
		func_90(1, 1);
		func_93(1, 1);
		iLocal_115 = 1;
		Global_16782 = 1;
	}
}

void func_100()
{
	if (iLocal_127 == 0)
	{
		if (unk_0x48B8265059381CD0(Global_2313, 28))
		{
			StringCopy(&cLocal_145, "CELL_296", 16);
			func_50();
		}
		else
		{
			StringCopy(&cLocal_145, "CELL_295", 16);
			func_27();
		}
		if (unk_0x6A7B0D91FD88D9EE(&cLocal_145, "DUMMYCOMPARISON"))
		{
			fLocal_98 = fLocal_99;
			fLocal_96 = fLocal_97;
			fLocal_99 = fLocal_98;
			fLocal_97 = fLocal_96;
		}
		iLocal_100 = 1;
	}
}

void func_101()
{
	if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
	{
		unk_0x4988C48537D1AE4F(-1, "Menu_Back", &Global_14432, 1);
	}
}

void func_102()
{
	unk_0x3B74F775E3152331(0, 0);
	iLocal_121 = 1;
	iLocal_122 = 1;
	iLocal_123 = 1;
	iLocal_124 = 0;
	iLocal_125 = 1;
}

void func_103()
{
	func_104();
}

void func_104()
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

void func_105()
{
	if (Global_14443.f_1 > 3)
	{
		if (!unk_0x95DBE123BC2DB80B())
		{
			unk_0x50F4FD9686DBDC91(uLocal_140, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, 0);
		}
	}
}

void func_106()
{
	if (func_57(14))
	{
		if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
		{
			if (unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()) == Global_101700.f_27009[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()) == Global_101700.f_27009[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()) == Global_101700.f_27009[2 /*29*/])
			{
				Global_14443 = 2;
			}
			else
			{
				Global_14443 = 0;
			}
		}
	}
	else
	{
		Global_14443 = func_11();
		if (Global_14443 == 145)
		{
			Global_14443 = 3;
		}
		if (Global_69702)
		{
			Global_14443 = 3;
		}
		if (Global_14443 > 3)
		{
			Global_14443 = 3;
		}
	}
}

void func_107(int iParam0)
{
	if (Global_14604)
	{
		func_90(0, 0);
	}
	if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
	{
		unk_0xEB79FECD9022AAF0(&Global_2314, 16);
	}
	if (unk_0x3ED8A07C6FA41E1B())
	{
		unk_0x660E8E7836E95077(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1)
	{
		unk_0xEB79FECD9022AAF0(&Global_2313, 30);
	}
	else
	{
		unk_0x21E7933CCC7B3724(&Global_2313, 30);
	}
	if (!func_108())
	{
		Global_14443.f_1 = 3;
	}
}

int func_108()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_109()
{
	unk_0xD1BB2AD73E7FC3A7(0, 0, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 56, 1);
	if (iLocal_150 == 0)
	{
		unk_0x28EAA5C7C54BD253(0, Global_14416);
		unk_0x28EAA5C7C54BD253(0, Global_14413);
		unk_0xD1BB2AD73E7FC3A7(0, 278, 1);
		unk_0xD1BB2AD73E7FC3A7(0, 279, 1);
		unk_0xD1BB2AD73E7FC3A7(0, 280, 1);
		unk_0xD1BB2AD73E7FC3A7(0, 281, 1);
		unk_0xD1BB2AD73E7FC3A7(0, 282, 1);
		unk_0xD1BB2AD73E7FC3A7(0, 282, 1);
		unk_0xD1BB2AD73E7FC3A7(0, 284, 1);
		unk_0xD1BB2AD73E7FC3A7(0, 285, 1);
		unk_0xD1BB2AD73E7FC3A7(0, 69, 1);
		unk_0xD1BB2AD73E7FC3A7(0, 70, 1);
		unk_0xD1BB2AD73E7FC3A7(0, 114, 1);
		unk_0xD1BB2AD73E7FC3A7(0, 71, 1);
		unk_0xD1BB2AD73E7FC3A7(0, 72, 1);
		unk_0xD1BB2AD73E7FC3A7(0, 74, 1);
		unk_0xD1BB2AD73E7FC3A7(0, 75, 1);
		unk_0xD1BB2AD73E7FC3A7(0, 76, 1);
		unk_0xD1BB2AD73E7FC3A7(0, 73, 1);
		unk_0xD1BB2AD73E7FC3A7(0, 77, 1);
		unk_0xD1BB2AD73E7FC3A7(0, 78, 1);
		unk_0xD1BB2AD73E7FC3A7(0, 286, 1);
		unk_0xD1BB2AD73E7FC3A7(0, 287, 1);
		unk_0xD1BB2AD73E7FC3A7(0, 79, 1);
		unk_0xD1BB2AD73E7FC3A7(0, 80, 1);
		unk_0xD1BB2AD73E7FC3A7(0, 81, 1);
		unk_0xD1BB2AD73E7FC3A7(0, 82, 1);
		unk_0xD1BB2AD73E7FC3A7(0, 86, 1);
		unk_0xD1BB2AD73E7FC3A7(0, 59, 1);
		unk_0xD1BB2AD73E7FC3A7(0, 60, 1);
		unk_0xD1BB2AD73E7FC3A7(0, 61, 1);
		unk_0xD1BB2AD73E7FC3A7(0, 62, 1);
		unk_0xD1BB2AD73E7FC3A7(0, 63, 1);
		unk_0xD1BB2AD73E7FC3A7(0, 64, 1);
		unk_0xD1BB2AD73E7FC3A7(0, 87, 1);
		unk_0xD1BB2AD73E7FC3A7(0, 88, 1);
		unk_0xD1BB2AD73E7FC3A7(0, 89, 1);
		unk_0xD1BB2AD73E7FC3A7(0, 90, 1);
		unk_0xD1BB2AD73E7FC3A7(0, 107, 1);
		unk_0xD1BB2AD73E7FC3A7(0, 108, 1);
		unk_0xD1BB2AD73E7FC3A7(0, 109, 1);
		unk_0xD1BB2AD73E7FC3A7(0, 110, 1);
		unk_0xD1BB2AD73E7FC3A7(0, 111, 1);
		unk_0xD1BB2AD73E7FC3A7(0, 112, 1);
		unk_0xD1BB2AD73E7FC3A7(0, 113, 1);
		unk_0xD1BB2AD73E7FC3A7(0, 114, 1);
		unk_0xD1BB2AD73E7FC3A7(0, 91, 1);
		unk_0xD1BB2AD73E7FC3A7(0, 92, 1);
		unk_0xD1BB2AD73E7FC3A7(0, 68, 1);
		unk_0xD1BB2AD73E7FC3A7(0, 102, 1);
		unk_0xD1BB2AD73E7FC3A7(0, 136, 1);
		unk_0xD1BB2AD73E7FC3A7(0, 137, 1);
		unk_0xD1BB2AD73E7FC3A7(0, 138, 1);
		unk_0xD1BB2AD73E7FC3A7(0, 139, 1);
		unk_0xD1BB2AD73E7FC3A7(0, 102, 1);
	}
}

int func_110()
{
	var uVar0;
	
	if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
	{
		if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
		{
			uVar0 = unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0);
			if (unk_0xC0FA8EEF6413F866(uVar0, -1, 0))
			{
				return 1;
			}
			else if (!unk_0x17206B315923243C(uVar0, -1, 0) == unk_0x17B5CC8A8615737D())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_111()
{
	bool bVar0;
	var uVar1;
	
	func_118(&bVar0, &uVar1);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315210 == 0)
	{
		if (!unk_0x63C468D583002D23())
		{
			return 1;
		}
	}
	if (func_117())
	{
		return 1;
	}
	if (Global_2454747)
	{
		return 1;
	}
	if (func_116())
	{
		return 1;
	}
	if (func_115(157))
	{
		if (!func_114())
		{
			return 1;
		}
	}
	if (func_115(155))
	{
		return 1;
	}
	if (!unk_0x6C119F3638AC7ABE())
	{
		return 1;
	}
	if (func_112() != 0)
	{
		if (unk_0x82F1A060D8F4583B(func_112()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_112()
{
	switch (func_113())
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

int func_113()
{
	return Global_25190;
}

bool func_114()
{
	return Global_2443134.f_577;
}

int func_115(int iParam0)
{
	if (unk_0x08E5392A79D45DEE(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_116()
{
	return Global_2452525;
}

bool func_117()
{
	return Global_2443134.f_572;
}

void func_118(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x45FF610AA845AFAA(1))
	{
		iVar1 = unk_0x93A2B1A9173BC03D(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0x91015F07066D5841(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 381:
					func_119(iVar0);
					break;
				
				case 2:
					unk_0x91015F07066D5841(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 55)
					{
						*uParam0 = 1;
					}
					else if (Var4.f_2 == 32)
					{
						*uParam1 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_119(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	if (unk_0x91015F07066D5841(1, iParam0, &Var0, 3))
	{
		if (func_121(Var0.f_1, 1, 1))
		{
			iVar3 = unk_0xDF7CE83326F434E9(Var0.f_1);
			if (unk_0x23E9113C762466ED(iVar3))
			{
				if (unk_0xFD0FE723227D5AB6(iVar3, 0))
				{
					iVar4 = unk_0x60604E51E30D25B8(iVar3, 0);
					if (unk_0x4AFDA497DA0BF602(iVar4, Var0.f_2) && unk_0x9A0AB9C5586EA71E())
					{
						if (func_120(iVar4, &bVar5))
						{
							unk_0x7DCEC4E83315DC12(iVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x921CF98C637B0043(&iVar4);
						}
					}
				}
			}
		}
	}
}

int func_120(int iParam0, var uParam1)
{
	if (unk_0x23E9113C762466ED(iParam0))
	{
		if (!unk_0xC26429B504BA534D(iParam0))
		{
			if (unk_0xFB2400809D8DC8C7(iParam0))
			{
				if (!unk_0x3B548F49528B5FA7(unk_0x0324EEB10F81965F(iParam0)))
				{
					unk_0xF0F77C99098F999B(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0x45CA7F42CA715849(iParam0, 0))
		{
			if (unk_0xC38F0FBE1914783C(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_121(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		if (unk_0x7268A1112372AA44(uParam0))
		{
			if (bParam1)
			{
				if (!unk_0xCF7855B965948E97(uParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2433125.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_122()
{
	if (iLocal_156 == 1)
	{
		unk_0xE57F94EA937AAD99(7);
		unk_0xE57F94EA937AAD99(1);
		unk_0xE57F94EA937AAD99(3);
		unk_0xE57F94EA937AAD99(4);
		unk_0xE57F94EA937AAD99(6);
		unk_0xE57F94EA937AAD99(8);
		unk_0xE57F94EA937AAD99(9);
		unk_0xE57F94EA937AAD99(2);
	}
	else
	{
		unk_0x6F9E2FAA0B24988A();
	}
}

void func_123(char* sParam0, int iParam1)
{
	unk_0x252D021C9D92DBA9(sParam0);
	unk_0x8B1500AADBA665BD(0, 0, 1, iParam1);
}

void func_124()
{
	if (func_125())
	{
		unk_0x6088BF5438A2766D();
		if (unk_0x4DC9345F61161BC6(0))
		{
			iLocal_103 = 1;
			iLocal_111 = 0;
		}
		else
		{
			Global_16782 = 1;
			Global_14443.f_1 = 3;
			unk_0xF9E752009D9D07AB();
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
				if (unk_0xFF84A94166FBB351(uLocal_140))
				{
					if (func_135())
					{
						if (Global_2594043 == 0)
						{
							if (!unk_0x48B8265059381CD0(Global_2595318, 2))
							{
								func_127(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
						}
						func_127(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
					}
					else
					{
						if (!unk_0x48B8265059381CD0(Global_2595318, 2))
						{
							func_127(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						}
						func_127(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
					}
				}
			}
			else if (unk_0xFF84A94166FBB351(uLocal_140))
			{
				func_127(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_127(uLocal_140, "SET_REMAINING_PHOTOS", unk_0xBBDA792448DB5A89(iLocal_109), unk_0xBBDA792448DB5A89(iLocal_110), -1082130432, -1082130432, -1082130432);
			}
			iLocal_104 = 0;
		}
		iLocal_111 = 0;
		unk_0xF9E752009D9D07AB();
	}
}

int func_125()
{
	if (Global_1633501.f_102722 == 1)
	{
		if (Global_69702)
		{
			return 0;
		}
	}
	if (Global_1633501.f_102723 == 1)
	{
		if (Global_69702)
		{
			return 0;
		}
	}
	if (unk_0xB15049400DCD8DC9() || unk_0xF20D8448F6AFC86C())
	{
		if (unk_0x48B8265059381CD0(Global_2314, 28))
		{
			return 0;
		}
	}
	return 1;
}

void func_126(var uParam0, char* sParam1)
{
	unk_0xEAC9A8A194DF8F91(uParam0, sParam1);
	unk_0x44983883E630A945();
}

void func_127(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0xEAC9A8A194DF8F91(uParam0, sParam1);
	unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0x44983883E630A945();
}

int func_128()
{
	if (Global_69702)
	{
		Global_14443 = 3;
	}
	else
	{
		Global_14443 = func_11();
	}
	if (Global_14443 > 3)
	{
		Global_14443 = 3;
	}
	return Global_101700.f_13010[Global_14443 /*20*/].f_7;
}

void func_129()
{
	if (Global_14443.f_1 > 3)
	{
		Global_14443.f_1 = 8;
	}
	Global_16781 = 0;
	iLocal_127 = 0;
	if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
	{
		Local_67 = { unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1) };
	}
	if (Global_14385)
	{
		while (unk_0x83666F9FB8FEBD4B() < iLocal_137)
		{
			unk_0x4EDE34FBADD967A6(0);
			func_105();
			func_77();
			unk_0xF6EFB598FD123B39();
		}
		func_126(uLocal_140, "OPEN_SHUTTER");
		func_122();
		func_100();
		iLocal_129 = 1;
		unk_0x5AE11BC36633DE4E(0);
	}
	else
	{
		func_93(1, 1);
		func_97(1);
		func_55();
		func_98();
		func_53(0);
		iLocal_115 = 1;
	}
}

void func_130(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xEB79FECD9022AAF0(&Global_2313, 15);
	}
	else
	{
		unk_0x21E7933CCC7B3724(&Global_2313, 15);
	}
}

bool func_131()
{
	return Global_1315210;
}

void func_132()
{
}

int func_133(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xEF4E5E47AF0D4480())
	{
		if (unk_0x5E9889CF18601D1C() != iParam0 && bParam2)
		{
			unk_0xCE7A426067C66E84(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_134()
{
	if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
	{
		if (unk_0x4BF0D40F31431B8F(unk_0x17B5CC8A8615737D()))
		{
			unk_0x4C1D7D2B3355D863(unk_0x17B5CC8A8615737D(), 0, 0);
			unk_0x4FED8BD67CB8B802(fLocal_157);
			unk_0xB984313AD1C7DDDE(fLocal_158);
			unk_0x5C13AC0C88BCC0CB(fLocal_159);
		}
		else
		{
			unk_0x4FED8BD67CB8B802(fLocal_157);
			unk_0xB984313AD1C7DDDE(fLocal_158);
			unk_0x5C13AC0C88BCC0CB(fLocal_159);
		}
	}
	unk_0x5A2ED5711938A509(fLocal_160);
	unk_0xF51C3780592D14F3(fLocal_161);
	unk_0xDECE621ECFD0419F(fLocal_162);
	unk_0xE62F183581E95B41(fLocal_163);
	func_52();
}

int func_135()
{
	if (iLocal_56 == 0)
	{
		iLocal_56 = 1;
	}
	return 1;
}

