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
	struct<3> Local_45 = { 0, 0, 0 } ;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	struct<16> Local_53 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<16> Local_69 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_85 = 0;
	var uLocal_86 = 0;
	struct<3> Local_87 = { 0, 0, 0 } ;
	struct<3> Local_90 = { 0, 0, 0 } ;
	float fLocal_93 = 0f;
	var uLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	char* sLocal_101 = NULL;
	float fLocal_102 = 0f;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	float fLocal_110 = 0f;
	struct<3> Local_111 = { 0, 0, 0 } ;
	struct<3> Local_114 = { 0, 0, 0 } ;
	float fLocal_117 = 0f;
	var uLocal_118 = 1;
	var uLocal_119 = 0;
	var uLocal_120 = 1;
	var uLocal_121 = 0;
	int iLocal_122 = 0;
	struct<3> Local_123 = { 0, 0, 0 } ;
	var uLocal_126 = 0;
	var uLocal_127 = 16;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	bool bLocal_296 = 0;
	int iLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
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
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
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
	Local_45 = { 500f, 500f, 500f };
	iLocal_96 = -1;
	iLocal_97 = 2050;
	iLocal_98 = -1;
	iLocal_99 = -1;
	sLocal_101 = "CC_SUBSTR";
	fLocal_102 = 125f;
	iLocal_103 = 1;
	iLocal_105 = 263;
	fLocal_117 = 4f;
	Local_90 = { ScriptParam_0.f_1[0 /*3*/] };
	Local_90 = { Local_90 };
	uLocal_86 = uLocal_86;
	Local_69 = { Local_69 };
	bVar0 = false;
	if (unk_0xBCA819F9975BEDFA(114))
	{
		func_138(1);
	}
	uLocal_85 = unk_0xDF7CE83326F434E9(unk_0xBE369BE1BC57A796());
	iLocal_95 = 0;
	func_136(&Global_100353, 0);
	func_130();
	unk_0x5611E2259EEF82EC(1);
	if (func_129(uLocal_94, 1))
	{
		iLocal_100 = 10;
	}
	else
	{
		iLocal_100 = 9;
	}
	while (!Global_31554)
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!func_129(uLocal_94, 8))
	{
		if (!func_127(iLocal_100))
		{
			if (func_126(0, iLocal_99))
			{
				func_138(0);
			}
			else
			{
				func_138(1);
			}
		}
	}
	if (iLocal_99 != -1)
	{
		if (!func_126(0, iLocal_99))
		{
			func_138(1);
		}
	}
	if (func_129(uLocal_94, 8388608))
	{
		func_138(1);
	}
	if (func_129(uLocal_94, 524288) && (func_125() && !func_124()))
	{
		func_138(1);
	}
	if (unk_0x82F1A060D8F4583B(unk_0xBDF22BDA553CBEE4()) > 1 && !func_129(uLocal_94, 4194304))
	{
		if (iLocal_105 != 263)
		{
			func_123(iLocal_105, 1, 0);
			iLocal_105 = 263;
		}
		func_122(10);
	}
	while (true)
	{
		if (Global_3)
		{
			func_138(1);
		}
		uLocal_85 = unk_0xDF7CE83326F434E9(unk_0xBE369BE1BC57A796());
		if (func_129(uLocal_94, 1048576))
		{
			if (unk_0xA929B2923D14E2F8(uLocal_85, 0))
			{
				func_138(1);
			}
		}
		if (unk_0x23E9113C762466ED(iLocal_85) && !unk_0xA929B2923D14E2F8(iLocal_85, 0))
		{
			Local_87 = { unk_0x57240623C1BC6E88(iLocal_85, 1) };
			fLocal_93 = unk_0xB7A628320EFF8E47(Local_87, ScriptParam_0.f_1[0 /*3*/]);
			fLocal_93 = fLocal_93;
			Local_111 = { Local_87 };
			Local_114 = { ScriptParam_0.f_1[0 /*3*/] };
			Local_111.f_2 = 0f;
			Local_114.f_2 = 0f;
			fLocal_110 = unk_0xB7A628320EFF8E47(Local_111, Local_114);
			switch (iLocal_95)
			{
				case 0:
					if (func_127(iLocal_100) || (func_129(uLocal_94, 16) && !func_129(uLocal_94, 524288)))
					{
						iLocal_98 = -1;
						func_118();
						func_122(1);
					}
					else
					{
						if (fLocal_110 > (fLocal_102 * fLocal_102))
						{
							if (iLocal_105 != 263)
							{
								func_123(iLocal_105, 1, 0);
								iLocal_105 = 263;
							}
							func_122(10);
						}
						if ((Local_87.f_2 - ScriptParam_0.f_1[0 /*3*/].f_2) > 500f)
						{
						}
					}
					break;
				
				case 1:
					if (func_116())
					{
						iLocal_103 = iLocal_103;
						func_122(3);
					}
					else
					{
						func_118();
					}
					break;
				
				case 3:
					if (unk_0x9AD8CE0019487D7C())
					{
						func_138(1);
						return;
					}
					if (!func_127(iLocal_100))
					{
						if (!func_129(uLocal_94, 8))
						{
							bVar1 = true;
							if (unk_0x6A7B0D91FD88D9EE(&(Global_91491.f_3), &Local_69))
							{
								Local_69 = { Local_53 };
								bVar1 = false;
							}
							if (bVar1)
							{
								func_138(0);
								break;
							}
						}
					}
					if (!func_129(uLocal_94, 4))
					{
						func_113();
						func_112(&uLocal_94, 4);
					}
					if (fLocal_110 > (fLocal_102 * fLocal_102) && !Global_91525)
					{
						if (iLocal_105 != 263)
						{
							if (func_111(6) && !func_110(iLocal_105))
							{
							}
							else
							{
								func_123(iLocal_105, 1, 0);
								iLocal_105 = 263;
							}
						}
						func_122(10);
					}
					else
					{
						Local_69 = { Local_53 };
						bVar2 = !func_129(uLocal_94, 64);
						func_136(&uLocal_94, 128);
						if (!func_109(3) && !Global_91525)
						{
							if (func_129(uLocal_94, 2097152))
							{
								if ((!func_129(uLocal_94, 1) || !unk_0x23E9113C762466ED(func_108())) && !Global_91525)
								{
									func_122(10);
									break;
								}
							}
						}
						if (func_129(uLocal_94, 524288) && (func_125() && !func_124()))
						{
							func_138(1);
						}
						if (func_107())
						{
							func_138(1);
						}
						if ((!func_99(6) || Global_100747) || func_98())
						{
							bVar2 = false;
						}
						if (func_129(uLocal_94, 1))
						{
							if (!func_97())
							{
								func_95(&uLocal_94, 128);
								bVar2 = false;
							}
						}
						if (func_94(1))
						{
							bVar2 = false;
						}
						if (Global_69702)
						{
							bVar2 = false;
						}
						if (func_93())
						{
							bVar2 = false;
						}
						if (unk_0xE9E6B5364105A000())
						{
							bVar2 = false;
						}
						if (func_92() || func_91(8, -1))
						{
							bVar2 = false;
						}
						if (!unk_0xD37F3675F4465D41(unk_0xBE369BE1BC57A796()))
						{
							bVar2 = false;
						}
						if (!unk_0x3F7E4FA3D49208FD(unk_0xBE369BE1BC57A796()))
						{
							bVar2 = false;
						}
						if (func_90(0) || func_89())
						{
							bVar2 = false;
						}
						if (bVar2)
						{
							if (!unk_0x1C34CE8087E3897C(iLocal_85, ScriptParam_0.f_1[0 /*3*/], fLocal_117, fLocal_117, 2f, 0, 1, iLocal_103))
							{
								bVar2 = false;
							}
							if (!unk_0x94A5DEE82C898FDF(unk_0xBE369BE1BC57A796()))
							{
								bVar2 = false;
							}
							if (bVar2)
							{
								unk_0x28EAA5C7C54BD253(0, 51);
								if (func_88(uLocal_86))
								{
									if (iLocal_96 == -1)
									{
										func_87(&iLocal_96, 4, sLocal_101, 0, 0, 0, 0);
										func_95(&uLocal_94, 2048);
									}
									else if (!func_129(uLocal_94, 2048) || !unk_0x9E123D5FF2973C60())
									{
										func_86(&iLocal_96);
										func_136(&uLocal_94, 2048);
									}
									if (func_84(iLocal_96, 1))
									{
										sLocal_101 = sLocal_101;
										func_86(&iLocal_96);
										func_136(&uLocal_94, 2048);
										unk_0xFCDDC89C28E82BB4(&Local_69);
										unk_0xC8C3338D4DBC00FE(unk_0xBE369BE1BC57A796(), 0, 56);
										func_122(5);
									}
								}
								else
								{
									sLocal_101 = sLocal_101;
									func_86(&iLocal_96);
									func_136(&uLocal_94, 2048);
									unk_0xFCDDC89C28E82BB4(&Local_69);
									unk_0xC8C3338D4DBC00FE(unk_0xBE369BE1BC57A796(), 0, 56);
									func_122(5);
								}
							}
						}
						if (!bVar2)
						{
							if (iLocal_96 != -1)
							{
								func_86(&iLocal_96);
								func_136(&uLocal_94, 2048);
								unk_0x2E2945F5602A744F(0);
							}
						}
					}
					func_81();
					break;
				
				case 5:
					unk_0x28EAA5C7C54BD253(0, 51);
					if (unk_0x32B1F051FF487881(&Local_69))
					{
						if (iLocal_96 != -1)
						{
							func_86(&iLocal_96);
						}
						iVar3 = 2;
						bVar0 = false;
						if (func_129(uLocal_94, 1))
						{
							if (func_111(6) || func_111(7))
							{
								iVar3 = 1;
								bVar0 = true;
							}
						}
						if (iVar3 != 1)
						{
							iVar3 = func_78(&iLocal_98, 6, iLocal_100, 0, 0);
						}
						if (iVar3 == 1)
						{
							if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
							{
								unk_0x9A03DB8A4DBF9E88(unk_0xBE369BE1BC57A796());
							}
							func_77();
							if (Global_36912)
							{
								func_68(unk_0x17B5CC8A8615737D());
							}
							unk_0xC8C3338D4DBC00FE(unk_0xBE369BE1BC57A796(), 1, 56);
							uLocal_52 = func_24();
							func_95(&uLocal_94, 2);
							func_122(6);
							func_20(&uLocal_107);
							if (iLocal_99 != -1)
							{
								func_19(iLocal_99);
								func_16(func_18(iLocal_99), 0, 0);
							}
						}
						else if (iVar3 == 2)
						{
							func_15();
						}
						else if (iVar3 == 0)
						{
							func_122(10);
						}
					}
					else
					{
						func_15();
					}
					break;
				
				case 6:
					if (func_129(Global_100353, 262144))
					{
						func_136(&Global_100353, 262144);
						func_14();
					}
					if (func_129(uLocal_94, 2097152))
					{
						if (!func_109(3) && !unk_0x1EFA84312BB8AA22(uLocal_52))
						{
							func_122(10);
						}
					}
					if (!unk_0x1EFA84312BB8AA22(uLocal_52))
					{
						unk_0xD7D18E1FDC28C12C(unk_0xF2DB717A73826179((func_10(&uLocal_107) * 1000f)), iLocal_99, 0);
						func_9(&uLocal_107);
						func_136(&uLocal_94, 256);
						func_8();
						if (bVar0)
						{
							func_136(&uLocal_94, 2);
						}
						else if (func_129(uLocal_94, 2))
						{
							if (func_129(Global_100353, 0))
							{
								func_7(&iLocal_98);
								iLocal_98 = -1;
								func_136(&uLocal_94, 2);
							}
							else
							{
								func_7(&iLocal_98);
								iLocal_98 = -1;
								func_136(&uLocal_94, 2);
							}
						}
						func_122(0);
						if (iLocal_99 != -1)
						{
							if (func_129(Global_100353, 0))
							{
								unk_0x7EAB099DE46EBC94(func_18(iLocal_99), 0, Global_91528, 0);
								func_6(func_18(iLocal_99), 0, Global_91528, 1, 0);
							}
							else
							{
								unk_0x7EAB099DE46EBC94(func_18(iLocal_99), 0, Global_91528, 0);
								func_6(func_18(iLocal_99), 0, Global_91528, 0, 0);
							}
						}
						func_5();
						func_136(&Global_100353, 0);
						if (func_129(uLocal_94, 16777216))
						{
							func_138(1);
						}
						if (iLocal_99 != -1)
						{
							if (Global_101700.f_8044)
							{
								if (!func_126(0, iLocal_99))
								{
									func_138(1);
								}
							}
						}
					}
					func_4();
					break;
				
				case 8:
					func_122(0);
					break;
				
				case 10:
					func_138(1);
					break;
				
				case 9:
					if (fLocal_110 > (fLocal_102 * fLocal_102))
					{
						if (iLocal_105 != 263)
						{
							func_123(iLocal_105, 1, 0);
							iLocal_105 = 263;
						}
						func_122(10);
					}
					break;
				
				case 7:
					func_2();
					if (iLocal_105 != 263)
					{
						func_123(iLocal_105, 0, 0);
					}
					if (iLocal_96 != -1)
					{
						func_86(&iLocal_96);
					}
					if (!unk_0x9C88EB7B70229335(sLocal_101))
					{
						if (func_1(sLocal_101))
						{
							unk_0x2E2945F5602A744F(1);
						}
					}
					func_122(4);
					break;
				
				case 4:
					if ((iLocal_104 % 150) == 0)
					{
						if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
						{
							if (iLocal_106 == 2)
							{
								if (iLocal_106 == 2)
								{
									if (func_127(iLocal_100) && func_126(0, iLocal_99))
									{
										func_130();
										if (iLocal_105 != 263)
										{
											func_123(iLocal_105, 1, 0);
										}
										func_122(0);
									}
								}
							}
							else if (iLocal_106 == 0)
							{
								if (fLocal_110 > (fLocal_102 * fLocal_102))
								{
									if (iLocal_105 != 263)
									{
										func_123(iLocal_105, 1, 0);
										iLocal_105 = 263;
									}
									func_122(10);
								}
							}
							else if (iLocal_106 == 1)
							{
								if (fLocal_110 > ((80f + 5f) * (80f + 5f)))
								{
									func_130();
									if (iLocal_105 != 263)
									{
										func_123(iLocal_105, 1, 0);
									}
									func_122(0);
								}
							}
						}
						else
						{
							func_123(iLocal_105, 1, 0);
						}
					}
					else
					{
						iLocal_104++;
					}
					break;
				}
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

bool func_1(char* sParam0)
{
	unk_0x1B345BEADF0C82A0(sParam0);
	return unk_0xCF2B4FB18449D099(0);
}

void func_2()
{
	func_3(&uLocal_118);
	func_3(&uLocal_120);
	unk_0xF9FFB9857F3120F8("pickup_object");
	unk_0xF9FFB9857F3120F8("oddjobs@basejump@ig_15");
}

void func_3(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			unk_0x924CDE68BA2ED3BA((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_4()
{
}

void func_5()
{
}

void func_6(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (unk_0x9C88EB7B70229335(&Global_88894))
	{
		return;
	}
	if (unk_0x8615D27AA923B8F4(sParam0, &Global_88894, 0, -1) != 0)
	{
		return;
	}
	unk_0xF3081BC2C9027A69(sParam0, iParam1, iParam2, iParam3, iParam4, Global_86001);
	StringCopy(&Global_88894, "", 64);
}

void func_7(int iParam0)
{
	if (*iParam0 == -1)
	{
		return;
	}
	if (!*iParam0 == Global_35743)
	{
		*iParam0 = -1;
		return;
	}
	*iParam0 = -1;
	Global_35742 = 0;
	Global_35744 = 0;
	Global_35781 = 15;
	Global_55819 = 0;
	Global_55820 = 0;
}

void func_8()
{
	char cVar0[24];
	
	if (unk_0xB15049400DCD8DC9() || unk_0x8EA3D5407E9F4AF0())
	{
		unk_0x21E9CCAA51709FD0(StackVal, 0, 0, 0);
	}
	else if (unk_0xF20D8448F6AFC86C() || unk_0x7C2F31E78C33DE0F())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		unk_0xCDDCD2630EF7A698(0, &cVar0);
	}
}

void func_9(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_10(var uParam0)
{
	if (func_13(uParam0))
	{
		if (func_12(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_11(unk_0x48B8265059381CD0(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_11(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = unk_0xBBDA792448DB5A89(unk_0x94E3E074F38DF86C());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x63C468D583002D23())
	{
		iVar2 = unk_0xCB150A8B81012128();
		fVar3 = unk_0xBBDA792448DB5A89(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (unk_0xBBDA792448DB5A89(unk_0x94E3E074F38DF86C()) / 1000f);
}

bool func_12(var uParam0)
{
	return unk_0x48B8265059381CD0(*uParam0, 2);
}

bool func_13(var uParam0)
{
	return unk_0x48B8265059381CD0(*uParam0, 1);
}

int func_14()
{
	return 1;
}

void func_15()
{
}

void func_16(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0x9C88EB7B70229335(&Global_88894))
	{
		unk_0xF3081BC2C9027A69(&Global_88894, 0, 0, 0, 1, 0);
		StringCopy(&Global_88894, "", 64);
	}
	StringCopy(&Global_88894, sParam0, 64);
	unk_0xCC9DF3F34EBA8E95(sParam0, iParam1, iParam2, func_17(0));
}

bool func_17(bool bParam0)
{
	if (!bParam0 && unk_0x82F1A060D8F4583B(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x48B8265059381CD0(Global_69950, 0);
}

char* func_18(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "OJBJ";
			break;
		
		case 1:
			return "MGDT";
			break;
		
		case 2:
			return "MGGF";
			break;
		
		case 3:
			return "OJHU";
			break;
		
		case 4:
			return "MGOR";
			break;
		
		case 5:
			return "MGPS";
			break;
		
		case 6:
			return "MGRP";
			break;
		
		case 7:
			return "MGSEA";
			break;
		
		case 8:
			return "MGSTR";
			break;
		
		case 9:
			return "MGSC";
			break;
		
		case 10:
			return "MGSP";
			break;
		
		case 11:
			return "MGSRm";
			break;
		
		case 12:
			return "OJTX";
			break;
		
		case 13:
			return "MGTN";
			break;
		
		case 14:
			return "OJTW";
			break;
		
		case 15:
			return "OJDA";
			break;
		
		case 16:
			return "OJDG";
			break;
		
		case 17:
			return "MGTR";
			break;
		
		case 18:
			return "MGYG";
			break;
		
		case 19:
			return "MGCR";
			break;
	}
	return "INVALID!";
}

void func_19(int iParam0)
{
	var uVar0;
	char cVar1[24];
	
	if (unk_0xB15049400DCD8DC9() || unk_0x8EA3D5407E9F4AF0())
	{
		uVar0 = iParam0;
		unk_0x21E9CCAA51709FD0(8, &uVar0, 1, 1);
	}
	else if (unk_0xF20D8448F6AFC86C() || unk_0x7C2F31E78C33DE0F())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0xCDDCD2630EF7A698(8, &cVar1);
	}
}

void func_20(var uParam0)
{
	if (!func_13(uParam0))
	{
		func_23(uParam0);
	}
	else
	{
		func_21(uParam0);
	}
}

void func_21(var uParam0)
{
	func_22(uParam0, 0f);
}

void func_22(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_11(unk_0x48B8265059381CD0(*uParam0, 4)) - fParam1);
	unk_0xEB79FECD9022AAF0(uParam0, 1);
	unk_0x21E7933CCC7B3724(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_23(var uParam0)
{
	if (!func_13(uParam0))
	{
		func_21(uParam0);
	}
}

int func_24()
{
	int iVar0;
	
	Global_101700.f_17926 = iLocal_122;
	switch (iLocal_122)
	{
		case 4:
		case 8:
			func_25(1);
			break;
		
		case 5:
		case 12:
		case 6:
			func_25(0);
			break;
		
		default:
			break;
	}
	if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
	{
		unk_0x0E21DA99F698AF06(unk_0x17B5CC8A8615737D(), 177, 1);
	}
	iVar0 = unk_0xB8BA7F44DF1575E1(&Local_53, &Local_123, 170, iLocal_97);
	unk_0x07481837BFD9C1CD(&Local_53);
	return iVar0;
}

void func_25(bool bParam0)
{
	var uVar0;
	var uVar3;
	var uVar4;
	var uVar5;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	float fVar15;
	bool bVar16;
	
	Var12 = { func_67(iLocal_122) };
	Var12 = { func_66(unk_0xD0FFB162F40A139C(Var12.f_2), unk_0x0BADBFA3B172435F(Var12.f_2), unk_0x5068AD03F32B859D(Var12.f_0)) };
	unk_0xAEA344F4AC19514E(func_65(iLocal_122), Var12, 5000f, 0);
	unk_0xC8C3338D4DBC00FE(unk_0xBE369BE1BC57A796(), 0, 256);
	unk_0xE418A8E16B02C0AC(0);
	unk_0x2D28D5B324F77D2D(0);
	func_63(1);
	if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
	{
		unk_0x0B25AB3A7FA0683C(unk_0x17B5CC8A8615737D(), joaat("weapon_unarmed"), 1);
		unk_0x0E21DA99F698AF06(unk_0x17B5CC8A8615737D(), 177, 1);
		if (unk_0x13B7ACE69D27E3E4(unk_0x17B5CC8A8615737D()) > 0.3f)
		{
			unk_0x3C1C089273A382C6(unk_0x17B5CC8A8615737D(), -1);
			while (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0) && unk_0x13B7ACE69D27E3E4(unk_0x17B5CC8A8615737D()) > 0.3f)
			{
				unk_0x4EDE34FBADD967A6(0);
				if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
				{
					unk_0x0E21DA99F698AF06(unk_0x17B5CC8A8615737D(), 177, 1);
				}
			}
		}
		if (unk_0x23E9113C762466ED(iLocal_297))
		{
			Var6 = { unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1) - unk_0x57240623C1BC6E88(iLocal_297, 0) };
			Var6.f_2 = 0f;
			fVar15 = unk_0x652D2EEEF1D3E62C(Var6);
			unk_0x86DD54980FE55567(&uVar3);
			if (fVar15 > 0.8f)
			{
				Var6 = { Var6 * FtoV((0.78f / fVar15)) };
				Var9 = { unk_0x57240623C1BC6E88(iLocal_297, 0) + Var6 };
				if (iLocal_122 == 12)
				{
					unk_0x084522380FECC554(0, Var9, 1f, 20000, 1048576000, 0, func_62(Var9, unk_0x57240623C1BC6E88(iLocal_297, 0)));
				}
				else
				{
					unk_0x9C16B2DABAEC929A(0, Var9, 1f, -1, func_62(Var9, unk_0x57240623C1BC6E88(iLocal_297, 0)), 1056964608);
				}
			}
			else if (fVar15 > 0.15f)
			{
				unk_0x3DB139C144156433(0, func_62(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), unk_0x57240623C1BC6E88(iLocal_297, 0)), 0);
			}
			unk_0xEB1EFACA68933402(0, "pickup_object", "pickup_low", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
			unk_0x007AE2AA9E15FA7B(uVar3);
			if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
			{
				unk_0x15848523A8959DBC(unk_0x17B5CC8A8615737D());
				unk_0x0E21DA99F698AF06(unk_0x17B5CC8A8615737D(), 177, 1);
				unk_0x00E85C3B3BD34B10(unk_0x17B5CC8A8615737D(), uVar3);
			}
			unk_0x08377FB2AE4C6899(&uVar3);
			func_63(1);
		}
	}
	func_23(&uLocal_293);
	while ((func_10(&uLocal_293) < 6f && !unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0)) && !unk_0x5132972D2BBC5A62(unk_0x17B5CC8A8615737D(), "pickup_object", "pickup_low", 3))
	{
		unk_0x0E21DA99F698AF06(unk_0x17B5CC8A8615737D(), 177, 1);
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0) && unk_0x5132972D2BBC5A62(unk_0x17B5CC8A8615737D(), "pickup_object", "pickup_low", 3))
	{
		unk_0x64E8BCBA7FB39814(unk_0x17B5CC8A8615737D(), "pickup_object", "pickup_low", 0.8f);
		bVar16 = true;
	}
	while ((func_10(&uLocal_293) < 6f && !unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0)) && unk_0x8E978F99E8F731CB(unk_0x17B5CC8A8615737D(), "pickup_object", "pickup_low") < 0.22f)
	{
		unk_0x0E21DA99F698AF06(unk_0x17B5CC8A8615737D(), 177, 1);
		if (!bVar16 && unk_0x5132972D2BBC5A62(unk_0x17B5CC8A8615737D(), "pickup_object", "pickup_low", 3))
		{
			unk_0x64E8BCBA7FB39814(unk_0x17B5CC8A8615737D(), "pickup_object", "pickup_low", 0.8f);
			bVar16 = true;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
	{
		if (!bVar16 && unk_0x5132972D2BBC5A62(unk_0x17B5CC8A8615737D(), "pickup_object", "pickup_low", 3))
		{
			unk_0x64E8BCBA7FB39814(unk_0x17B5CC8A8615737D(), "pickup_object", "pickup_low", 0.7f);
			bVar16 = true;
		}
		unk_0x0E21DA99F698AF06(unk_0x17B5CC8A8615737D(), 177, 1);
	}
	func_9(&uLocal_293);
	func_40();
	if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
	{
		if (func_35() == 0)
		{
			unk_0x2F933BB106547968(unk_0x17B5CC8A8615737D(), 9, 5, 0, 0);
		}
		else if (func_35() == 1)
		{
			unk_0x2F933BB106547968(unk_0x17B5CC8A8615737D(), 8, 1, 0, 0);
		}
		else if (func_35() == 2)
		{
			unk_0x2F933BB106547968(unk_0x17B5CC8A8615737D(), 8, 3, 0, 0);
		}
	}
	if (bParam0)
	{
		if (!func_33(func_34(iLocal_122)) && !unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
		{
			unk_0x15848523A8959DBC(unk_0x17B5CC8A8615737D());
			unk_0x084522380FECC554(unk_0x17B5CC8A8615737D(), func_34(iLocal_122), 1f, -1, 1048576000, 0, 1193033728);
		}
		if (unk_0x23E9113C762466ED(iLocal_297))
		{
			unk_0x1AAFEA627BB9C402(&iLocal_297);
		}
		uVar4 = unk_0x077CBD2E7E281022(26379945, func_32(iLocal_122), func_31(iLocal_122), func_30(iLocal_122), 1, 2);
		uVar5 = unk_0x077CBD2E7E281022(26379945, func_29(iLocal_122), func_28(iLocal_122), func_27(iLocal_122), 0, 2);
		unk_0x9274EF97A90581BE(1, 0, 3000, 1, 0, 0);
		unk_0xFC434AC9A9DBF766("HAND_SHAKE", 0.2f);
		func_23(&uVar0);
		while (func_10(&uVar0) < 1.5f)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x6530B35F40F7E78B(uVar5, uVar4, func_26(iLocal_122), 1, 1);
		func_21(&uVar0);
		while (func_10(&uVar0) < ((unk_0xBBDA792448DB5A89(func_26(iLocal_122)) / 1000f) + 0.3f))
		{
			if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
			{
				unk_0x0E21DA99F698AF06(unk_0x17B5CC8A8615737D(), 177, 1);
			}
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	else
	{
		Local_123.f_2 = iLocal_297;
	}
	if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
	{
		unk_0x0E21DA99F698AF06(unk_0x17B5CC8A8615737D(), 177, 1);
	}
}

int func_26(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 8:
			return 3500;
			break;
	}
	return 0;
}

float func_27(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 50f;
		
		case 8:
			return 50f;
		
		default:
	}
	return 60f;
}

Vector3 func_28(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 58.4197f, 0f, -47.9402f;
		
		case 8:
			return 47.6798f, 0f, -55.2921f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_29(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -119.8524f, -866.9928f, 42.3211f;
		
		case 8:
			return -846.0496f, 277.5203f, 92.9133f;
		
		default:
	}
	return 0f, 0f, 0f;
}

float func_30(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 50f;
		
		case 8:
			return 50f;
		
		default:
	}
	return 60f;
}

Vector3 func_31(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -4.0151f, 0f, -47.5544f;
		
		case 8:
			return 2.5127f, 0f, -55.2921f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_32(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -119.8524f, -866.9928f, 42.3211f;
		
		case 8:
			return -846.0496f, 277.5203f, 92.9133f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_33(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_34(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -83.4741f, -835.4191f, 39.5575f;
		
		case 8:
			return -772.8513f, 312.9656f, 84.6996f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_35()
{
	func_36();
	return Global_101700.f_2095.f_539.f_3549;
}

void func_36()
{
	int iVar0;
	
	if (unk_0x23E9113C762466ED(unk_0x17B5CC8A8615737D()))
	{
		if (func_39(Global_101700.f_2095.f_539.f_3549) != unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()))
		{
			iVar0 = func_38(unk_0x17B5CC8A8615737D());
			if (func_37(iVar0) && (!func_111(14) || Global_100652))
			{
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_37(Global_101700.f_2095.f_539.f_3549))
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

bool func_37(int iParam0)
{
	return iParam0 < 3;
}

int func_38(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x23E9113C762466ED(uParam0))
	{
		iVar1 = unk_0x0324EEB10F81965F(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_39(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_39(int iParam0)
{
	if (func_37(iParam0))
	{
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_40()
{
	struct<3> Var0;
	var uVar3;
	struct<3> Var4;
	var uVar7;
	var uVar8;
	
	if (unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
	{
		return;
	}
	unk_0xC8C3338D4DBC00FE(unk_0xBE369BE1BC57A796(), 0, 0);
	if (unk_0x23E9113C762466ED(iLocal_297))
	{
		unk_0x1AAFEA627BB9C402(&iLocal_297);
	}
	func_48(0, 0, 1);
	iLocal_297 = unk_0x89241A4EA7EE46D2(joaat("p_parachute_s"), func_47(iLocal_122), 1, 1, 0);
	unk_0x04A5FAE5B1EB8E28(iLocal_297, func_46(iLocal_122), 2, 1);
	func_41(&Var0, &uVar3);
	Var4 = { 0f, 0f, uVar3 };
	uVar7 = unk_0x356EABB012B22D07(Var0, Var4, 2);
	unk_0x9C8510D976CE0748(iLocal_297, uVar7, "puton_parachute_bag", "oddjobs@basejump@ig_15", 1000f, -1000f, 1, 1148846080);
	if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
	{
		unk_0x15848523A8959DBC(unk_0x17B5CC8A8615737D());
		unk_0xA17D768ED938600C(unk_0x17B5CC8A8615737D(), uVar7, "oddjobs@basejump@ig_15", "puton_parachute", 1000f, -1000f, 0, 0, 1148846080, 0);
	}
	unk_0x4988C48537D1AE4F(-1, "Grab_Parachute", "BASEJUMPS_SOUNDS", 1);
	uVar8 = unk_0xBD7A488D61CE4287("DEFAULT_ANIMATED_CAMERA", 0);
	unk_0x563AC676C8BDAD48(uVar8, uVar7, "puton_parachute_cam", "oddjobs@basejump@ig_15");
	unk_0xA652CA24468EC747(uVar8, 1);
	unk_0x9274EF97A90581BE(1, 0, 3000, 1, 0, 0);
	while (unk_0x96F65998C0685177(uVar7) < 0.6f)
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0xC8C3338D4DBC00FE(unk_0xBE369BE1BC57A796(), 1, 0);
}

void func_41(var uParam0, var uParam1)
{
	*uParam0 = { func_45(iLocal_122) };
	switch (iLocal_122)
	{
		case 5:
			*uParam1 = -1.8f;
			break;
		
		case 4:
			*uParam1 = func_44(func_62(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), *uParam0), -180f, 180f);
			if (*uParam1 > 0f)
			{
				*uParam1 = func_43(*uParam1, 111.6f);
			}
			else
			{
				*uParam1 = func_42(*uParam1, -104.04f);
			}
			break;
		
		case 8:
			*uParam1 = func_44(func_62(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), *uParam0), -180f, 180f);
			if (*uParam1 > 0f)
			{
				*uParam1 = func_43(*uParam1, 79.28f);
			}
			else
			{
				*uParam1 = func_42(*uParam1, -8f);
			}
			break;
		
		case 6:
			*uParam1 = func_44(func_62(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), *uParam0), -180f, 180f);
			break;
		
		case 12:
			*uParam1 = func_44(func_62(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), *uParam0), -180f, 180f);
			break;
	}
}

float func_42(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

float func_43(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

float func_44(float fParam0, float fParam1, float fParam2)
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

Vector3 func_45(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -829.3729f, -1289.817f, 4.0005f;
		
		case 1:
			return 1208.2f, 174.3914f, 80.1245f;
		
		case 2:
			return 2463.793f, 1509.956f, 35.0349f;
		
		case 3:
			return -274.6549f, 6633.898f, 7.1166f;
		
		case 4:
			return -92.35f, -854.3f, 39.571f;
		
		case 5:
			return -120.92f, -976.05f, 295.49f;
		
		case 6:
			return -1237.2f, 4540.75f, 184.75f;
		
		case 7:
			return -742.5269f, 4493.315f, 75.1444f;
		
		case 8:
			return -801.3582f, 298.8532f, 84.949f;
		
		case 9:
			return -1367.595f, 4381.943f, 41.132f;
		
		case 10:
			return 2517.931f, 4971.752f, 44.7082f;
		
		case 11:
			return 1054.534f, -179.6562f, 70.3066f;
		
		case 12:
			return -767.415f, 4331.792f, 147.682f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_46(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 12f, 0f, 12.77f;
		
		case 5:
			return 10f, 0f, -134.58f;
		
		case 6:
			return 76f, 0f, -89.95f;
		
		case 8:
			return 12f, 0f, 89.56f;
		
		case 12:
			return 0f, 75f, -22f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_47(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -92.25f, -854.28f, 39.85f;
		
		case 5:
			return -120.92f, -976.05f, 295.49f;
		
		case 6:
			return -1237.2f, 4540.75f, 184.75f;
		
		case 8:
			return -801.57f, 298.85f, 85.25f;
		
		case 12:
			return -767.415f, 4331.792f, 147.682f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_48(int iParam0, int iParam1, int iParam2)
{
	unk_0xC8C3338D4DBC00FE(unk_0x592069F95C314814(), 0, iParam0);
	if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
	{
		unk_0x8F088665928570EA(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), 15f);
	}
	unk_0x1DE6AC35EE6430C8(iParam1);
	func_60(0);
	func_50(1, 1, iParam2, 0);
	unk_0x2D28D5B324F77D2D(0);
	unk_0xE418A8E16B02C0AC(0);
	func_49(23, 1);
}

void func_49(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xEB79FECD9022AAF0(&Global_25434, iParam0);
	}
	else
	{
		unk_0x21E7933CCC7B3724(&Global_25434, iParam0);
	}
}

void func_50(bool bParam0, bool bParam1, var uParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0x75416EE69CE8B797(unk_0xBE369BE1BC57A796());
		unk_0xC8F90C1233866A01(unk_0xBE369BE1BC57A796(), 1);
		unk_0x60040905B2978982(unk_0xBE369BE1BC57A796(), 1);
		func_59(1);
		unk_0x9FB8515100F82AFB();
		unk_0xD57128A757C0216E();
		if (Global_14443.f_1 > 3)
		{
			if (unk_0x3ED8A07C6FA41E1B())
			{
				unk_0x660E8E7836E95077(0);
			}
			if (!func_58())
			{
				Global_14443.f_1 = 3;
			}
			Global_15745 = 5;
		}
		func_57(1, iParam3, uParam2, 0);
		Global_55828 = 1;
		Global_68134 = 1;
		Global_69700 = 1;
	}
	else
	{
		func_59(0);
		unk_0x42DE1068884C3BE9();
		Global_55828 = 0;
		if (bParam1)
		{
			unk_0x093227ED19D84FB6();
		}
		unk_0xC8F90C1233866A01(unk_0xBE369BE1BC57A796(), 0);
		unk_0x60040905B2978982(unk_0xBE369BE1BC57A796(), 0);
		func_57(0, iParam3, uParam2, 0);
		if (unk_0x63C468D583002D23())
		{
			if (((!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()) && !func_55(unk_0xBE369BE1BC57A796())) && !func_52(unk_0xBE369BE1BC57A796(), 0)) && !func_51())
			{
				unk_0xC6042F55A6EA17B2(unk_0x17B5CC8A8615737D(), 0);
			}
		}
		else if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()) && !func_55(unk_0xBE369BE1BC57A796()))
		{
			unk_0xC6042F55A6EA17B2(unk_0x17B5CC8A8615737D(), 0);
		}
		Global_69700 = 0;
	}
}

bool func_51()
{
	return unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_39.f_18, 14);
}

bool func_52(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xBE369BE1BC57A796())
	{
		bVar0 = func_53(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1591201[iParam0 /*602*/].f_203 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x7268A1112372AA44(iParam0))
		{
			bVar0 = unk_0xB58DEBB81964A4E9(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_53(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_54();
	}
	if (Global_1315213[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312729[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_54()
{
	return Global_1312735;
}

int func_55(int iParam0)
{
	if (func_52(iParam0, 0))
	{
		return 1;
	}
	if (func_56())
	{
		if (iParam0 == unk_0xBE369BE1BC57A796())
		{
			return 1;
		}
	}
	if (unk_0x48B8265059381CD0(Global_2421664[iParam0 /*358*/].f_198, 2))
	{
		return 1;
	}
	return 0;
}

bool func_56()
{
	return unk_0x48B8265059381CD0(Global_2359301, 3);
}

int func_57(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xEF4E5E47AF0D4480())
	{
		if (unk_0x5E9889CF18601D1C() != iParam0 && uParam2)
		{
			unk_0xCE7A426067C66E84(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_58()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_59(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xEB79FECD9022AAF0(&Global_2313, 13);
	}
	else
	{
		unk_0x21E7933CCC7B3724(&Global_2313, 13);
	}
}

void func_60(int iParam0)
{
	if (Global_14604)
	{
		func_61(0, 0);
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
	if (!func_58())
	{
		Global_14443.f_1 = 3;
	}
}

void func_61(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_90(0))
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

float func_62(struct<2> Param0, Vector3 vParam2, struct<2> Param3, Vector3 vParam5)
{
	return unk_0xC659BC2E3EDC150A((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

void func_63(bool bParam0)
{
	if (bParam0)
	{
		func_64();
		if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
		{
			unk_0xEB79FECD9022AAF0(&Global_2314, 16);
		}
		Global_14443.f_1 = 1;
		if (func_90(0))
		{
			func_60(0);
		}
	}
	else if (Global_14443.f_1 == 1)
	{
		if (!Global_14443.f_1 == 0)
		{
			Global_14443.f_1 = 3;
		}
	}
}

void func_64()
{
	if (Global_14443.f_1 == 9 || Global_14443.f_1 == 10)
	{
		Global_15798 = 0;
		Global_15794 = 1;
	}
}

Vector3 func_65(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1143.586f, -1859.747f, 208.3878f;
		
		case 1:
			return 877.5864f, -436.3322f, 536.9036f;
		
		case 2:
			return 2041.231f, 1978.98f, 585.9358f;
		
		case 3:
			return 405.2326f, 5705.887f, 697.2318f;
		
		case 4:
			return -103.8901f, -870.8046f, 298.7574f;
		
		case 5:
			return -118.2569f, -975.1133f, 297.3781f;
		
		case 6:
			return -1237.465f, 4526.661f, 181.7929f;
		
		case 7:
			return -357.7932f, 4107.914f, 314.8059f;
		
		case 8:
			return -809.6324f, 331.3331f, 233.2818f;
		
		case 9:
			return -1286.926f, 3660.203f, 1076.051f;
		
		case 10:
			return 1022.178f, 3975.738f, 1362.533f;
		
		case 11:
			return 1608.553f, -434.5186f, 1321.916f;
		
		case 12:
			return -756.3533f, 4341.521f, 143.8134f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_66(struct<3> Param0)
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

Vector3 func_67(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -21.7965f, -0.0328f, 70.0438f;
		
		case 1:
			return -26.5541f, 0.0092f, -86.4416f;
		
		case 2:
			return -11.2825f, 0.0213f, 148.5283f;
		
		case 3:
			return -39.935f, 0f, 12.8174f;
		
		case 4:
			return 0.9749f, 0f, -5.2236f;
		
		case 5:
			return -12.889f, 0f, 1.6227f;
		
		case 6:
			return -48.5605f, 0f, 160.4909f;
		
		case 7:
			return -37.0509f, 0.0324f, 24.0288f;
		
		case 8:
			return -17.4118f, 0f, 117.7175f;
		
		case 9:
			return -15.4633f, 0.0328f, -5.1142f;
		
		case 10:
			return -20.9567f, 0f, 170.5743f;
		
		case 11:
			return 1.9344f, 0f, -55.2084f;
		
		case 12:
			return -46.0342f, 0f, 37.5935f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_68(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!unk_0x23E9113C762466ED(iParam0))
	{
		return;
	}
	iVar0 = func_76(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_36715[iVar0 /*5*/];
		func_71(1, iVar1, 1);
		return;
	}
	iVar2 = func_70(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_69(iVar2);
}

void func_69(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_36689[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_36689[iParam0 /*5*/].f_1 == unk_0x17B5CC8A8615737D())
		{
			Global_36910 = 0;
		}
	}
	Global_36689[iParam0 /*5*/] = 13;
	Global_36689[iParam0 /*5*/].f_1 = 0;
	Global_36689[iParam0 /*5*/].f_2 = 0;
	Global_36689[iParam0 /*5*/].f_3 = 0;
	Global_36689[iParam0 /*5*/].f_4 = 0;
	Global_36688 = (Global_36688 - 1);
	if (Global_36688 < 0)
	{
		Global_36688 = 0;
	}
}

int func_70(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_36689[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_71(int iParam0, int iParam1, int iParam2)
{
	func_72(iParam0, iParam1, iParam2, 0, 0);
}

void func_72(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_74(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_73();
	if (iVar0 == -1)
	{
		return;
	}
	Global_36796[iVar0 /*5*/] = iParam0;
	Global_36796[iVar0 /*5*/].f_1 = iParam1;
	Global_36796[iVar0 /*5*/].f_2 = iParam2;
	Global_36796[iVar0 /*5*/].f_3 = iParam3;
	Global_36796[iVar0 /*5*/].f_4 = iParam4;
}

int func_73()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36796[iVar0 /*5*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_74(int iParam0, int iParam1, int iParam2)
{
	if (func_75(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_75(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_36796[iVar0 /*5*/].f_2)
		{
			if (iParam0 == Global_36796[iVar0 /*5*/])
			{
				if (iParam1 == Global_36796[iVar0 /*5*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_76(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_36715[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_36715[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_77()
{
	if (Global_3118[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3118[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3118[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3118[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3118[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3118[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	unk_0x21E7933CCC7B3724(&Global_2313, 25);
	unk_0xEB79FECD9022AAF0(&Global_2314, 11);
}

int func_78(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_89302.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_80(0))
		{
			return 0;
		}
		Global_35745++;
		*iParam0 = Global_35745;
		unk_0xF7A1A67D26D29975(unk_0x592069F95C314814(), 0);
		Global_17151.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0xBED07ACDB4C03BB0(8);
		}
		Global_35781 = iParam2;
		Global_35743 = *iParam0;
		Global_35744 = iParam4;
		Global_35742 = 0;
		return 1;
	}
	if (*iParam0 != -1)
	{
		if (Global_35742 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35742)
			{
				if (Global_35748[iVar0 /*4*/] == *iParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35743 == *iParam0)
		{
			return 1;
		}
		*iParam0 = -1;
	}
	if (*iParam0 == -1)
	{
		if (!func_127(iParam2))
		{
			return 0;
		}
		if (Global_35742 == 8)
		{
			return 0;
		}
		Global_35745++;
		*iParam0 = Global_35745;
		Global_35748[Global_35742 /*4*/] = Global_35745;
		Global_35748[Global_35742 /*4*/].f_1 = iParam1;
		Global_35748[Global_35742 /*4*/].f_2 = iParam2;
		Global_35748[Global_35742 /*4*/].f_3 = 0;
		Global_35742++;
		if (iParam4 != 0)
		{
			func_79(iParam0, iParam4);
		}
	}
	return 2;
}

void func_79(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_35742 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35742)
	{
		if (Global_35748[iVar0 /*4*/] == *uParam0)
		{
			Global_35748[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

int func_80(int iParam0)
{
	if (Global_35781 == 15)
	{
		return 0;
	}
	if (func_127(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_81()
{
	switch (iLocal_122)
	{
		case 4:
		case 5:
		case 6:
		case 8:
		case 12:
			func_82();
			break;
		
		default:
			break;
	}
}

void func_82()
{
	var uVar0;
	struct<3> Var1;
	
	uVar0 = unk_0x0C00E753D78DEA62();
	if (unk_0x23E9113C762466ED(uVar0))
	{
		Local_123.f_1 = iVar0;
	}
	if (unk_0x23E9113C762466ED(iLocal_297))
	{
		Var1 = { unk_0x57240623C1BC6E88(iLocal_297, 1) };
		if (unk_0xB7A628320EFF8E47(Var1, Local_90) > 25f)
		{
			func_83(0);
		}
	}
}

void func_83(int iParam0)
{
	if (iParam0 == 2)
	{
	}
	else if (iParam0 == 0)
	{
	}
	iLocal_106 = iParam0;
	iLocal_104 = 0;
	iLocal_95 = 7;
}

int func_84(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_85(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0xCF7855B965948E97(unk_0x592069F95C314814()))
	{
		return 0;
	}
	if (func_90(0))
	{
		return 0;
	}
	if (unk_0x1B76B77EDF24A933())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36484[iVar0 /*32*/] == 1 && Global_36484[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_36484[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_36484[iVar0 /*32*/].f_5 = 1;
			Global_36484[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_36484[iVar0 /*32*/] == 0)
			{
			}
			if (Global_36484[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_85(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_36484[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_86(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_85(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36484[iVar0 /*32*/])
		{
			Global_36484[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

void func_87(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0x82F1A060D8F4583B(joaat("context_controller")) < 1)
	{
	}
	if (unk_0xE9E6B5364105A000())
	{
		if (!*iParam0 == -1)
		{
			func_86(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_36484[iVar0 /*32*/])
		{
			Global_36484[iVar0 /*32*/] = 1;
			Global_36484[iVar0 /*32*/].f_1 = Global_36685;
			Global_36685++;
			Global_36484[iVar0 /*32*/].f_4 = 0;
			Global_36484[iVar0 /*32*/].f_29 = 0;
			Global_36484[iVar0 /*32*/].f_5 = 0;
			Global_36484[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_36484[iVar0 /*32*/].f_8), sParam2, 16);
			Global_36484[iVar0 /*32*/].f_6 = iParam3;
			Global_36484[iVar0 /*32*/].f_31 = unk_0xE9A5FDFDC239B2ED();
			Global_36484[iVar0 /*32*/].f_7 = 0;
			Global_36484[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0x9C88EB7B70229335(sParam4))
			{
				Global_36484[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_36484[iVar0 /*32*/].f_13), sParam4, 64);
				Global_36484[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_36484[iVar0 /*32*/].f_12 = 0;
				Global_36484[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_36484[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_88(var uParam0)
{
	return 1;
}

var func_89()
{
	return Global_68131;
}

int func_90(int iParam0)
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

bool func_91(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1353070.f_203[iParam1];
			}
			break;
	}
	return unk_0x48B8265059381CD0(Global_1353070.f_1015, iParam0);
}

bool func_92()
{
	return unk_0x94E3E074F38DF86C() <= Global_17290.f_5745 + 100;
}

int func_93()
{
	if (unk_0x82F1A060D8F4583B(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_94(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17151.f_4 && Global_17151.f_104 == 4);
	}
	return Global_17151.f_4;
}

void func_95(var uParam0, int iParam1)
{
	func_96(uParam0, iParam1);
}

void func_96(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_97()
{
	return 1;
}

bool func_98()
{
	int iVar0;
	bool bVar1;
	
	if (unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
	{
		return 0;
	}
	unk_0x5CD8291F2C5E0AD1(unk_0x17B5CC8A8615737D(), &iVar0, 1);
	if (((iVar0 == 0 || iVar0 == joaat("weapon_unarmed")) || iVar0 == joaat("weapon_electric_fence")) || iVar0 == joaat("gadget_parachute"))
	{
		bVar1 = false;
	}
	else
	{
		bVar1 = true;
	}
	if (bVar1)
	{
	}
	if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
	{
		return ((((bVar1 && unk_0x79888727131C6854(0, 69)) || (bVar1 && unk_0x79888727131C6854(0, 70))) || (bVar1 && unk_0x79888727131C6854(0, 68))) || unk_0x091275C60C62F17B(unk_0xBE369BE1BC57A796()));
	}
	return (((((bVar1 && unk_0x79888727131C6854(0, 24)) || (bVar1 && unk_0x79888727131C6854(0, 25))) || (bVar1 && unk_0x79888727131C6854(0, 47))) || unk_0xF192008F4F403E15(unk_0x17B5CC8A8615737D())) || unk_0x091275C60C62F17B(unk_0xBE369BE1BC57A796()));
}

int func_99(int iParam0)
{
	int iVar0;
	
	if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
	{
		if (unk_0x23E9113C762466ED(unk_0x17B5CC8A8615737D()))
		{
			if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
			{
				iVar0 = func_35();
				if (!func_37(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x3D6EEB2BAADEC759(unk_0xBE369BE1BC57A796()) || unk_0x14E01C4EC4170496(unk_0x17B5CC8A8615737D())) || unk_0x9172DCBCA2E183EC(unk_0x17B5CC8A8615737D())) || unk_0x7F4AE93855973529(unk_0x17B5CC8A8615737D())) || unk_0xA9969D6750AB48B7(unk_0x17B5CC8A8615737D())) || unk_0x5078D2C096A3D8E4(unk_0xBE369BE1BC57A796(), 1)) || unk_0xA4FEB0448027296A(unk_0xBE369BE1BC57A796())) || unk_0x018477A7947BC4B4(unk_0x17B5CC8A8615737D(), 0)) || func_106()) || Global_100747) || Global_25192) || func_105()) || func_91(8, -1)) || func_104()) || func_103()) || func_102()) || func_93()) || Global_101700.f_6647.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x5078D2C096A3D8E4(unk_0xBE369BE1BC57A796(), 1) || func_106()) || Global_25192) || func_105()) || func_91(8, -1)) || func_102()) || func_104()) || func_103()) || func_93()) || Global_101700.f_6647.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x3D6EEB2BAADEC759(unk_0xBE369BE1BC57A796()) || unk_0x14E01C4EC4170496(unk_0x17B5CC8A8615737D())) || unk_0x9172DCBCA2E183EC(unk_0x17B5CC8A8615737D())) || unk_0x7F4AE93855973529(unk_0x17B5CC8A8615737D())) || unk_0xA9969D6750AB48B7(unk_0x17B5CC8A8615737D())) || unk_0x5078D2C096A3D8E4(unk_0xBE369BE1BC57A796(), 1)) || unk_0xA4FEB0448027296A(unk_0xBE369BE1BC57A796())) || unk_0x018477A7947BC4B4(unk_0x17B5CC8A8615737D(), 0)) || func_106()) || Global_100747) || Global_25192) || func_105()) || func_91(8, -1)) || func_102()) || func_104()) || func_103()) || func_93()) || Global_101700.f_6647.f_919[iVar0] == 5) || Global_36328 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x7F4AE93855973529(unk_0x17B5CC8A8615737D()) || unk_0xA9969D6750AB48B7(unk_0x17B5CC8A8615737D())) || unk_0x5078D2C096A3D8E4(unk_0xBE369BE1BC57A796(), 1)) || unk_0x018477A7947BC4B4(unk_0x17B5CC8A8615737D(), 0)) || func_106()) || Global_100747) || Global_25192) || func_105()) || func_91(8, -1)) || func_104()) || func_103()) || func_93()) || Global_101700.f_6647.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_106() || unk_0xA54996763FD89E65(unk_0xBE369BE1BC57A796()) > 0) || func_91(8, -1)) || func_93()) || func_101()) || Global_101700.f_6647.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_91(8, -1) || func_104()) || func_103()) || func_101()) || func_100())
						{
							return 0;
						}
						if ((unk_0xE9E6B5364105A000() && unk_0x3108C06B8E90438D() != 3) && unk_0x4DA93F059B47A9FA() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x23E9113C762466ED(unk_0x17B5CC8A8615737D()))
						{
							if ((((((((((((((unk_0x018477A7947BC4B4(unk_0x17B5CC8A8615737D(), 0) || unk_0xA54996763FD89E65(unk_0xBE369BE1BC57A796()) > 0) || unk_0x14E01C4EC4170496(unk_0x17B5CC8A8615737D())) || unk_0x7F4AE93855973529(unk_0x17B5CC8A8615737D())) || unk_0xA9969D6750AB48B7(unk_0x17B5CC8A8615737D())) || unk_0x5078D2C096A3D8E4(unk_0xBE369BE1BC57A796(), 1)) || unk_0xA4FEB0448027296A(unk_0xBE369BE1BC57A796())) || func_106()) || Global_25192) || func_105()) || func_91(8, -1)) || func_103()) || func_102()) || func_93()) || Global_101700.f_6647.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x018477A7947BC4B4(unk_0x17B5CC8A8615737D(), 0) || !unk_0x94A5DEE82C898FDF(unk_0xBE369BE1BC57A796())) || !unk_0x3D6EEB2BAADEC759(unk_0xBE369BE1BC57A796())) || !unk_0x30F06AB0772AFB80()) || unk_0x14E01C4EC4170496(unk_0x17B5CC8A8615737D())) || unk_0x7F4AE93855973529(unk_0x17B5CC8A8615737D())) || unk_0xA9969D6750AB48B7(unk_0x17B5CC8A8615737D())) || unk_0x5078D2C096A3D8E4(unk_0xBE369BE1BC57A796(), 1)) || func_106()) || func_103()) || Global_100747) || Global_25192) || func_105()) || Global_36912) || func_91(8, -1)) || func_102()) || func_101()) || func_93()) || Global_101700.f_6647.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x018477A7947BC4B4(unk_0x17B5CC8A8615737D(), 0) || !unk_0x94A5DEE82C898FDF(unk_0xBE369BE1BC57A796())) || !unk_0x3D6EEB2BAADEC759(unk_0xBE369BE1BC57A796())) || !unk_0x30F06AB0772AFB80()) || unk_0x0DD3F4C17D207474(unk_0xBE369BE1BC57A796(), 0)) || unk_0x14E01C4EC4170496(unk_0x17B5CC8A8615737D())) || unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1)) || unk_0x7F4AE93855973529(unk_0x17B5CC8A8615737D())) || unk_0xA9969D6750AB48B7(unk_0x17B5CC8A8615737D())) || unk_0x5FD7D852A3EAF133(unk_0x17B5CC8A8615737D())) || unk_0x5078D2C096A3D8E4(unk_0xBE369BE1BC57A796(), 1)) || unk_0xA4FEB0448027296A(unk_0xBE369BE1BC57A796())) || func_106()) || Global_100747) || Global_25192) || func_105()) || func_91(8, -1)) || func_102()) || func_101()) || func_104()) || func_103()) || func_93())
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

var func_100()
{
	return Global_91530.f_1;
}

int func_101()
{
	if (Global_88746 != -1)
	{
		return unk_0x48B8265059381CD0(Global_82612[Global_88746 /*34*/].f_15, 13);
	}
	return 0;
}

int func_102()
{
	if (Global_69962)
	{
		return 1;
	}
	else if (Global_55816 && !Global_55822)
	{
		return 1;
	}
	return 0;
}

bool func_103()
{
	return Global_91543.f_304 > 0;
}

bool func_104()
{
	return Global_91543.f_303 > 0;
}

var func_105()
{
	return Global_1315233;
}

int func_106()
{
	if (!unk_0x63C468D583002D23())
	{
		return Global_89302.f_44 == 1;
	}
	return 0;
}

int func_107()
{
	if (unk_0x82F1A060D8F4583B(joaat("stripperhome")) > 0)
	{
		return 1;
	}
	return 0;
}

var func_108()
{
	return Global_87656;
}

int func_109(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			if (func_111(6) || func_111(7))
			{
				return 1;
			}
			else
			{
				return func_109(3);
			}
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			if (func_127(5))
			{
				if (func_99(4))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_110(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	return unk_0xA3794949321E107C(Global_25501[iVar0 /*23*/].f_19);
}

bool func_111(int iParam0)
{
	return Global_35781 == iParam0;
}

void func_112(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_113()
{
	struct<3> Var0;
	
	if (bLocal_296)
	{
		switch (iLocal_122)
		{
			case 4:
			case 5:
			case 8:
				iLocal_297 = unk_0x89241A4EA7EE46D2(joaat("p_parachute_s"), func_47(iLocal_122), 1, 1, 0);
				unk_0x04A5FAE5B1EB8E28(iLocal_297, func_46(iLocal_122), 2, 1);
				unk_0x98F0FA127445E343(iLocal_297, 1);
				break;
			
			case 6:
			case 12:
				iLocal_297 = unk_0x89241A4EA7EE46D2(joaat("p_parachute_s"), func_47(iLocal_122), 1, 1, 0);
				unk_0x04A5FAE5B1EB8E28(iLocal_297, func_46(iLocal_122), 2, 1);
				unk_0xBA4FE16C36326979(iLocal_297);
				Var0 = { func_115(iLocal_122) };
				if (!func_33(Var0))
				{
					uLocal_298 = unk_0x692A2891A2BA7352(joaat("bati"), Var0, func_114(iLocal_122), 1, 1);
					uLocal_298 = uLocal_298;
				}
				break;
			
			default:
				break;
			}
	}
}

float func_114(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			return 165.0425f;
		
		default:
	}
	return 0f;
}

Vector3 func_115(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			return -1243.606f, 4543.016f, 185.9527f;
		
		default:
	}
	return 0f, 0f, 0f;
}

bool func_116()
{
	switch (iLocal_122)
	{
		case 5:
		case 4:
		case 8:
		case 6:
			return (((unk_0xF4F8AE8DD0F08C1E("pickup_object") && unk_0xF4F8AE8DD0F08C1E("oddjobs@basejump@ig_15")) && func_117(&uLocal_118)) && func_117(&uLocal_120));
			break;
		
		case 12:
			return ((unk_0xF4F8AE8DD0F08C1E("pickup_object") && unk_0xF4F8AE8DD0F08C1E("oddjobs@basejump@ig_15")) && func_117(&uLocal_118));
			break;
		
		default:
			break;
	}
	return (func_117(&uLocal_118) && func_117(&uLocal_120));
}

int func_117(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if (!unk_0x9F746898F7881612((*uParam0)[iVar0]))
			{
				if (!unk_0x9F746898F7881612((*uParam0)[iVar0]))
				{
				}
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_118()
{
	switch (iLocal_122)
	{
		case 5:
		case 8:
			func_120(&uLocal_118, joaat("p_parachute_s"));
			unk_0xA0E7D0E8FE126EE8("pickup_object");
			unk_0xA0E7D0E8FE126EE8("oddjobs@basejump@ig_15");
			break;
		
		case 4:
		case 6:
			func_120(&uLocal_118, joaat("p_parachute_s"));
			func_120(&uLocal_120, joaat("bati"));
			unk_0xA0E7D0E8FE126EE8("pickup_object");
			unk_0xA0E7D0E8FE126EE8("oddjobs@basejump@ig_15");
			break;
		
		case 12:
			func_120(&uLocal_118, joaat("p_parachute_s"));
			unk_0xA0E7D0E8FE126EE8("pickup_object");
			unk_0xA0E7D0E8FE126EE8("oddjobs@basejump@ig_15");
			break;
		
		default:
			break;
	}
	func_119(&uLocal_118);
	func_119(&uLocal_120);
}

void func_119(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			unk_0xE1324F59713746FA((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

int func_120(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if ((*uParam0)[iVar0] == iParam1)
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = func_121(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = iParam1;
	return 1;
}

int func_121(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_122(int iParam0)
{
	iLocal_95 = iParam0;
}

void func_123(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (!bParam2)
	{
		iVar1 = unk_0x48B8265059381CD0(Global_25501[iVar0 /*23*/].f_11, 15);
		if (iVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != unk_0x48B8265059381CD0(Global_25501[iVar0 /*23*/].f_11, 0))
	{
		unk_0xEB79FECD9022AAF0(&(Global_25501[iVar0 /*23*/].f_11), 18);
		if (Global_25498 == 1)
		{
			Global_25499 = 1;
		}
		Global_25498 = 1;
	}
	if (bParam1)
	{
		unk_0xEB79FECD9022AAF0(&(Global_25501[iVar0 /*23*/].f_11), 0);
		unk_0xEB79FECD9022AAF0(&(Global_25501[iVar0 /*23*/].f_11), 15);
		unk_0xEB79FECD9022AAF0(&(Global_25501[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		unk_0x21E7933CCC7B3724(&(Global_25501[iVar0 /*23*/].f_11), 0);
		unk_0x21E7933CCC7B3724(&(Global_25501[iVar0 /*23*/].f_11), 15);
	}
	if (!unk_0x48B8265059381CD0(Global_25501[iVar0 /*23*/].f_11, 0))
	{
		if (unk_0xA3794949321E107C(Global_25501[iVar0 /*23*/].f_19))
		{
			unk_0x2624D3879D5473A0(1);
			unk_0x020DF7300725ECAB(&(Global_25501[iVar0 /*23*/].f_19));
			unk_0x2624D3879D5473A0(0);
		}
	}
}

int func_124()
{
	if (unk_0xEF4E5E47AF0D4480())
	{
		if (unk_0x800431CFB358AFCF() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_125()
{
	if (Global_88746 != -1)
	{
		return unk_0x48B8265059381CD0(Global_82612[Global_88746 /*34*/].f_15, 20);
	}
	return 0;
}

bool func_126(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == 11 || iParam0 == -1)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	bVar0 = unk_0x48B8265059381CD0(Global_101700.f_8044.f_99.f_219[iParam0], iParam1);
	return bVar0;
}

bool func_127(int iParam0)
{
	return func_128(iParam0, Global_35781);
}

int func_128(int iParam0, int iParam1)
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

bool func_129(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_130()
{
	if (unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
	{
		func_95(&uLocal_94, 8388608);
		return;
	}
	StringCopy(&Local_53, "bj", 64);
	iLocal_122 = func_134(Local_90, 0);
	switch (iLocal_122)
	{
		case 4:
			iLocal_105 = 129;
			break;
		
		case 5:
			iLocal_105 = 130;
			break;
		
		case 6:
			iLocal_105 = 131;
			break;
		
		case 8:
			iLocal_105 = 133;
			break;
		
		case 12:
			iLocal_105 = 137;
			break;
		
		default:
			break;
	}
	if (iLocal_105 == 129)
	{
		if (func_133(19))
		{
			func_132(iLocal_105);
		}
	}
	func_95(&uLocal_94, 4194304);
	iLocal_99 = 0;
	fLocal_102 = (unk_0xBBDA792448DB5A89(func_131(iLocal_105)) + 5f);
	fLocal_117 = 1.1f;
	sLocal_101 = "PLAY_BASEJUMP_G";
	if (iLocal_105 != 263)
	{
		if (!func_126(0, iLocal_99))
		{
			bLocal_296 = false;
			func_132(iLocal_105);
		}
		else
		{
			bLocal_296 = true;
		}
	}
	else
	{
		bLocal_296 = false;
	}
	if (unk_0x82F1A060D8F4583B(joaat("bj")) > 0)
	{
		func_95(&uLocal_94, 8);
	}
	else
	{
		func_136(&uLocal_94, 8);
	}
	if (func_111(12))
	{
		func_95(&uLocal_94, 8);
	}
	iLocal_97 = 20500;
}

int func_131(int iParam0)
{
	switch (iParam0)
	{
		case 91:
		case 92:
		case 110:
		case 111:
			return 20;
			break;
		
		case 66:
		case 67:
		case 76:
		case 107:
		case 108:
		case 109:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 129:
		case 130:
		case 131:
		case 133:
		case 137:
			return 100;
			break;
		
		case 125:
		case 126:
		case 127:
		case 128:
		case 132:
		case 134:
		case 135:
		case 136:
		case 68:
		case 69:
		case 95:
		case 70:
		case 71:
		case 73:
		case 74:
		case 75:
		case 72:
			return 209;
			break;
	}
	return -1;
}

void func_132(int iParam0)
{
	if (iLocal_95 < 5)
	{
		if (iParam0 != 263)
		{
			if (iParam0 < 0 || iParam0 >= 263)
			{
			}
			func_123(iParam0, 0, 0);
		}
		iLocal_105 = 263;
		func_86(&iLocal_96);
		iLocal_95 = 9;
	}
}

bool func_133(int iParam0)
{
	return Global_100787[iParam0 /*10*/].f_1;
}

int func_134(struct<3> Param0, int iParam3)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 1E+09f;
	iVar3 = 0;
	while (iVar3 < 13)
	{
		if (iParam3 == func_135(iVar3))
		{
			fVar1 = unk_0xB7A628320EFF8E47(Param0, func_45(iVar3));
			if (fVar0 > fVar1)
			{
				fVar0 = fVar1;
				iVar2 = iVar3;
			}
		}
		iVar3++;
	}
	return iVar2;
}

int func_135(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 7:
		case 9:
		case 10:
		case 11:
			return 1;
			break;
	}
	return 0;
}

void func_136(var uParam0, int iParam1)
{
	func_137(uParam0, iParam1);
}

void func_137(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_138(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_105 != 263)
		{
			func_123(iLocal_105, 0, 0);
		}
	}
	func_86(&iLocal_96);
	if (func_129(uLocal_94, 2))
	{
		func_5();
		func_136(&uLocal_94, 2);
		func_7(&iLocal_98);
	}
	iLocal_98 = -1;
	func_139();
	unk_0x921053BAF754303D();
}

void func_139()
{
	func_136(&uLocal_94, 4);
	func_140();
	if (unk_0x1EFA84312BB8AA22(uLocal_52))
	{
		unk_0x4841E9AF7173E4AF(uLocal_52, 3);
	}
	if (!unk_0xD3115E7F7876D6E6(&Local_69))
	{
		if (unk_0xF9108830F4935563(&Local_69) != 0)
		{
			unk_0x07481837BFD9C1CD(&Local_69);
		}
	}
}

void func_140()
{
}

