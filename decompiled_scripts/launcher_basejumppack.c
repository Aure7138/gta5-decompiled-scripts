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
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	char* sLocal_19 = NULL;
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
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
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	struct<3> Local_44 = { 0, 0, 0 } ;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	int iLocal_51 = 0;
	struct<16> Local_52 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<16> Local_68 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_84 = 0;
	var uLocal_85 = 0;
	struct<3> Local_86 = { 0, 0, 0 } ;
	struct<3> Local_89 = { 0, 0, 0 } ;
	float fLocal_92 = 0f;
	var uLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	char* sLocal_100 = NULL;
	float fLocal_101 = 0f;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int* iLocal_106 = NULL;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	float fLocal_109 = 0f;
	struct<3> Local_110 = { 0, 0, 0 } ;
	struct<3> Local_113 = { 0, 0, 0 } ;
	float fLocal_116 = 0f;
	var uLocal_117 = 1;
	var uLocal_118 = 0;
	var uLocal_119 = 1;
	var uLocal_120 = 0;
	int iLocal_121 = 0;
	struct<3> Local_122 = { 0, 0, 0 } ;
	var uLocal_125 = 0;
	var uLocal_126 = 16;
	var uLocal_127 = 0;
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
	int* iLocal_292 = NULL;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	bool bLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
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
	sLocal_19 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	iLocal_27 = 3;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	Local_44 = { 500f, 500f, 500f };
	iLocal_95 = -1;
	iLocal_96 = 2050;
	iLocal_97 = -1;
	iLocal_98 = -1;
	sLocal_100 = "CC_SUBSTR";
	fLocal_101 = 125f;
	iLocal_102 = 1;
	iLocal_104 = 262;
	fLocal_116 = 4f;
	Local_89 = { ScriptParam_0.f_1[0 /*3*/] };
	Local_89 = { Local_89 };
	uLocal_85 = uLocal_85;
	Local_68 = { Local_68 };
	bVar0 = false;
	if (unk_0xC968670BFACE42D9(114))
	{
		func_137(1);
	}
	iLocal_84 = unk_0x43A66C31C68491C0(unk_0x4F8644AF03D0E0D6());
	iLocal_94 = 0;
	func_135(&Global_95828, 0);
	func_129();
	unk_0x6F2135B6129620C1(true);
	if (func_128(uLocal_93, 1))
	{
		iLocal_99 = 10;
	}
	else
	{
		iLocal_99 = 9;
	}
	while (!Global_30775)
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!func_128(uLocal_93, 8))
	{
		if (!func_126(iLocal_99))
		{
			if (func_125(0, iLocal_98))
			{
				func_137(0);
			}
			else
			{
				func_137(1);
			}
		}
	}
	if (iLocal_98 != -1)
	{
		if (!func_125(0, iLocal_98))
		{
			func_137(1);
		}
	}
	if (func_128(uLocal_93, 8388608))
	{
		func_137(1);
	}
	if (func_128(uLocal_93, 524288) && (func_124() && !func_123()))
	{
		func_137(1);
	}
	if (unk_0x2C83A9DA6BFFC4F9(unk_0x8A1C8B1738FFE87E()) > 1 && !func_128(uLocal_93, 4194304))
	{
		if (iLocal_104 != 262)
		{
			func_122(iLocal_104, 1, 0);
			iLocal_104 = 262;
		}
		func_121(10);
	}
	while (true)
	{
		if (Global_3)
		{
			func_137(1);
		}
		iLocal_84 = unk_0x43A66C31C68491C0(unk_0x4F8644AF03D0E0D6());
		if (func_128(uLocal_93, 1048576))
		{
			if (unk_0x5F9532F3B5CC2551(iLocal_84))
			{
				func_137(1);
			}
		}
		if (unk_0x7239B21A38F536BA(iLocal_84) && !unk_0x5F9532F3B5CC2551(iLocal_84))
		{
			Local_86 = { unk_0x3FEF770D40960D5A(iLocal_84, true) };
			fLocal_92 = unk_0xB7A628320EFF8E47(Local_86, ScriptParam_0.f_1[0 /*3*/]);
			fLocal_92 = fLocal_92;
			Local_110 = { Local_86 };
			Local_113 = { ScriptParam_0.f_1[0 /*3*/] };
			Local_110.f_2 = 0f;
			Local_113.f_2 = 0f;
			fLocal_109 = unk_0xB7A628320EFF8E47(Local_110, Local_113);
			switch (iLocal_94)
			{
				case 0:
					if (func_126(iLocal_99) || (func_128(uLocal_93, 16) && !func_128(uLocal_93, 524288)))
					{
						iLocal_97 = -1;
						func_117();
						func_121(1);
					}
					else
					{
						if (fLocal_109 > (fLocal_101 * fLocal_101))
						{
							if (iLocal_104 != 262)
							{
								func_122(iLocal_104, 1, 0);
								iLocal_104 = 262;
							}
							func_121(10);
						}
						if ((Local_86.f_2 - ScriptParam_0.f_1[0 /*3*/].f_2) > 500f)
						{
						}
					}
					break;
				
				case 1:
					if (func_115())
					{
						iLocal_102 = iLocal_102;
						func_121(3);
					}
					else
					{
						func_117();
					}
					break;
				
				case 3:
					if (unk_0xCA97246103B63917())
					{
						func_137(1);
						return;
					}
					if (!func_126(iLocal_99))
					{
						if (!func_128(uLocal_93, 8))
						{
							bVar1 = true;
							if (unk_0x0C515FAB3FF9EA92(&(Global_89784.f_3), &Local_68))
							{
								Local_68 = { Local_52 };
								bVar1 = false;
							}
							if (bVar1)
							{
								func_137(0);
								break;
							}
						}
					}
					if (!func_128(uLocal_93, 4))
					{
						func_112();
						func_111(&uLocal_93, 4);
					}
					if (fLocal_109 > (fLocal_101 * fLocal_101) && !Global_89818)
					{
						if (iLocal_104 != 262)
						{
							if (func_110(6) && !func_109(iLocal_104))
							{
							}
							else
							{
								func_122(iLocal_104, 1, 0);
								iLocal_104 = 262;
							}
						}
						func_121(10);
					}
					else
					{
						Local_68 = { Local_52 };
						bVar2 = !func_128(uLocal_93, 64);
						func_135(&uLocal_93, 128);
						if (!func_108(3) && !Global_89818)
						{
							if (func_128(uLocal_93, 2097152))
							{
								if ((!func_128(uLocal_93, 1) || !unk_0x7239B21A38F536BA(func_107())) && !Global_89818)
								{
									func_121(10);
									break;
								}
							}
						}
						if (func_128(uLocal_93, 524288) && (func_124() && !func_123()))
						{
							func_137(1);
						}
						if (func_106())
						{
							func_137(1);
						}
						if ((!func_98(6) || Global_96220) || func_97())
						{
							bVar2 = false;
						}
						if (func_128(uLocal_93, 1))
						{
							if (!func_96())
							{
								func_94(&uLocal_93, 128);
								bVar2 = false;
							}
						}
						if (func_93(1))
						{
							bVar2 = false;
						}
						if (Global_68067)
						{
							bVar2 = false;
						}
						if (func_92())
						{
							bVar2 = false;
						}
						if (unk_0xD9D2CFFF49FAB35F())
						{
							bVar2 = false;
						}
						if (func_91() || func_90(8, -1))
						{
							bVar2 = false;
						}
						if (!unk_0xDE7465A27D403C06(unk_0x4F8644AF03D0E0D6()))
						{
							bVar2 = false;
						}
						if (!unk_0x8A876A65283DD7D7(unk_0x4F8644AF03D0E0D6()))
						{
							bVar2 = false;
						}
						if (func_89(0) || func_88())
						{
							bVar2 = false;
						}
						if (bVar2)
						{
							if (!unk_0x20B60995556D004F(iLocal_84, ScriptParam_0.f_1[0 /*3*/], fLocal_116, fLocal_116, 2f, false, true, iLocal_102))
							{
								bVar2 = false;
							}
							if (!unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6()))
							{
								bVar2 = false;
							}
							if (bVar2)
							{
								unk_0xEDE476E5EE29EDB1(0, 51);
								if (func_87(uLocal_85))
								{
									if (iLocal_95 == -1)
									{
										func_86(&iLocal_95, 4, sLocal_100, 0, 0);
										func_94(&uLocal_93, 2048);
									}
									else if (!func_128(uLocal_93, 2048) || !unk_0x4D79439A6B55AC67())
									{
										func_85(&iLocal_95);
										func_135(&uLocal_93, 2048);
									}
									if (func_83(iLocal_95, 1))
									{
										sLocal_100 = sLocal_100;
										func_85(&iLocal_95);
										func_135(&uLocal_93, 2048);
										unk_0x6EB5F71AA68F2E8E(&Local_68);
										unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), false, 56);
										func_121(5);
									}
								}
								else
								{
									sLocal_100 = sLocal_100;
									func_85(&iLocal_95);
									func_135(&uLocal_93, 2048);
									unk_0x6EB5F71AA68F2E8E(&Local_68);
									unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), false, 56);
									func_121(5);
								}
							}
						}
						if (!bVar2)
						{
							if (iLocal_95 != -1)
							{
								func_85(&iLocal_95);
								func_135(&uLocal_93, 2048);
								unk_0x8DFCED7A656F8802(false);
							}
						}
					}
					func_80();
					break;
				
				case 5:
					unk_0xEDE476E5EE29EDB1(0, 51);
					if (unk_0xE6CC9F3BA0FB9EF1(&Local_68))
					{
						if (iLocal_95 != -1)
						{
							func_85(&iLocal_95);
						}
						iVar3 = 2;
						bVar0 = false;
						if (func_128(uLocal_93, 1))
						{
							if (func_110(6) || func_110(7))
							{
								iVar3 = 1;
								bVar0 = true;
							}
						}
						if (iVar3 != 1)
						{
							iVar3 = func_77(&iLocal_97, 6, iLocal_99, 0, 0);
						}
						if (iVar3 == 1)
						{
							if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
							{
								unk_0xB302540597885499(unk_0x4F8644AF03D0E0D6());
							}
							func_76();
							if (Global_35953)
							{
								func_67(unk_0xD80958FC74E988A6());
							}
							unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 56);
							iLocal_51 = func_24();
							func_94(&uLocal_93, 2);
							func_121(6);
							func_20(&iLocal_106);
							if (iLocal_98 != -1)
							{
								func_19(iLocal_98);
								func_16(func_18(iLocal_98), 0, 0);
							}
						}
						else if (iVar3 == 2)
						{
							func_15();
						}
						else if (iVar3 == 0)
						{
							func_121(10);
						}
					}
					else
					{
						func_15();
					}
					break;
				
				case 6:
					if (func_128(Global_95828, 262144))
					{
						func_135(&Global_95828, 262144);
						func_14();
					}
					if (func_128(uLocal_93, 2097152))
					{
						if (!func_108(3) && !unk_0x46E9AE36D8FA6417(iLocal_51))
						{
							func_121(10);
						}
					}
					if (!unk_0x46E9AE36D8FA6417(iLocal_51))
					{
						unk_0x69DEA3E9DB727B4C(unk_0xF2DB717A73826179((func_10(&iLocal_106) * 1000f)), iLocal_98, 0);
						func_9(&iLocal_106);
						func_135(&uLocal_93, 256);
						func_8();
						if (bVar0)
						{
							func_135(&uLocal_93, 2);
						}
						else if (func_128(uLocal_93, 2))
						{
							if (func_128(Global_95828, 0))
							{
								func_7(&iLocal_97);
								iLocal_97 = -1;
								func_135(&uLocal_93, 2);
							}
							else
							{
								func_7(&iLocal_97);
								iLocal_97 = -1;
								func_135(&uLocal_93, 2);
							}
						}
						func_121(0);
						if (iLocal_98 != -1)
						{
							if (func_128(Global_95828, 0))
							{
								unk_0xC900596A63978C1D(func_18(iLocal_98), 0, Global_89821, 0);
								func_6(func_18(iLocal_98), 0, Global_89821, 1, 0);
							}
							else
							{
								unk_0xC900596A63978C1D(func_18(iLocal_98), 0, Global_89821, 0);
								func_6(func_18(iLocal_98), 0, Global_89821, 0, 0);
							}
						}
						func_5();
						func_135(&Global_95828, 0);
						if (func_128(uLocal_93, 16777216))
						{
							func_137(1);
						}
						if (iLocal_98 != -1)
						{
							if (Global_97173.f_7311)
							{
								if (!func_125(0, iLocal_98))
								{
									func_137(1);
								}
							}
						}
					}
					func_4();
					break;
				
				case 8:
					func_121(0);
					break;
				
				case 10:
					func_137(1);
					break;
				
				case 9:
					if (fLocal_109 > (fLocal_101 * fLocal_101))
					{
						if (iLocal_104 != 262)
						{
							func_122(iLocal_104, 1, 0);
							iLocal_104 = 262;
						}
						func_121(10);
					}
					break;
				
				case 7:
					func_2();
					if (iLocal_104 != 262)
					{
						func_122(iLocal_104, 0, 0);
					}
					if (iLocal_95 != -1)
					{
						func_85(&iLocal_95);
					}
					if (!unk_0xCA042B6957743895(sLocal_100))
					{
						if (func_1(sLocal_100))
						{
							unk_0x8DFCED7A656F8802(true);
						}
					}
					func_121(4);
					break;
				
				case 4:
					if ((iLocal_103 % 150) == 0)
					{
						if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
						{
							if (iLocal_105 == 2)
							{
								if (iLocal_105 == 2)
								{
									if (func_126(iLocal_99) && func_125(0, iLocal_98))
									{
										func_129();
										if (iLocal_104 != 262)
										{
											func_122(iLocal_104, 1, 0);
										}
										func_121(0);
									}
								}
							}
							else if (iLocal_105 == 0)
							{
								if (fLocal_109 > (fLocal_101 * fLocal_101))
								{
									if (iLocal_104 != 262)
									{
										func_122(iLocal_104, 1, 0);
										iLocal_104 = 262;
									}
									func_121(10);
								}
							}
							else if (iLocal_105 == 1)
							{
								if (fLocal_109 > ((80f + 5f) * (80f + 5f)))
								{
									func_129();
									if (iLocal_104 != 262)
									{
										func_122(iLocal_104, 1, 0);
									}
									func_121(0);
								}
							}
						}
						else
						{
							func_122(iLocal_104, 1, 0);
						}
					}
					else
					{
						iLocal_103++;
					}
					break;
				}
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

bool func_1(char* sParam0)
{
	unk_0x0A24DA3A41B718F5(sParam0);
	return unk_0x10BDDBFC529428DD(0);
}

void func_2()
{
	func_3(&uLocal_117);
	func_3(&uLocal_119);
	unk_0xF66A602F829E2A06("pickup_object");
	unk_0xF66A602F829E2A06("oddjobs@basejump@ig_15");
}

void func_3(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			unk_0xE532F5D78798DAAB((*uParam0)[iVar0]);
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

void func_6(char* sParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (unk_0xCA042B6957743895(&Global_87259))
	{
		return;
	}
	if (unk_0x1E34710ECD4AB0EB(sParam0, &Global_87259, false, -1) != 0)
	{
		return;
	}
	unk_0x7C4BB33A8CED7324(sParam0, iParam1, iParam2, bParam3, bParam4, Global_84366);
	StringCopy(&Global_87259, "", 64);
}

void func_7(int iParam0)
{
	if (*iParam0 == -1)
	{
		return;
	}
	if (!*iParam0 == Global_34871)
	{
		*iParam0 = -1;
		return;
	}
	*iParam0 = -1;
	Global_34870 = 0;
	Global_34872 = 0;
	Global_34909 = 15;
	Global_54569 = 0;
	Global_54570 = 0;
}

void func_8()
{
	char cVar0[24];
	
	if (unk_0xF6201B4DAF662A9D() || unk_0x4D982ADB1978442D())
	{
		unk_0x1DCCACDCFC569362(StackVal, 0, 0, 0);
	}
	else if (unk_0xCCA1072C29D096C2() || unk_0xA72BC0B675B1519E())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		unk_0x3E200C2BCF4164EB(0, &cVar0);
	}
}

void func_9(int* iParam0)
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

float func_10(int* iParam0)
{
	if (func_13(iParam0))
	{
		if (func_12(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_11() - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_11()
{
	int iVar0;
	
	if (unk_0x10FAB35428CCC9D7())
	{
		iVar0 = unk_0x7A5487FE9FAA6B48();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0x9CD27B0045628463()) / 1000f);
}

bool func_12(var uParam0)
{
	return unk_0xA921AA820C25702F(*uParam0, 2);
}

bool func_13(var uParam0)
{
	return unk_0xA921AA820C25702F(*uParam0, 1);
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
	if (!unk_0xCA042B6957743895(&Global_87259))
	{
		unk_0x7C4BB33A8CED7324(&Global_87259, 0, 0, false, true, false);
		StringCopy(&Global_87259, "", 64);
	}
	StringCopy(&Global_87259, sParam0, 64);
	unk_0xC19A2925C34D2231(sParam0, iParam1, iParam2, func_17(0));
}

bool func_17(bool bParam0)
{
	if (!bParam0 && unk_0x2C83A9DA6BFFC4F9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xA921AA820C25702F(Global_68315, 0);
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
	
	if (unk_0xF6201B4DAF662A9D() || unk_0x4D982ADB1978442D())
	{
		uVar0 = iParam0;
		unk_0x1DCCACDCFC569362(8, &uVar0, 1, 1);
	}
	else if (unk_0xCCA1072C29D096C2() || unk_0xA72BC0B675B1519E())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0x3E200C2BCF4164EB(8, &cVar1);
	}
}

void func_20(int* iParam0)
{
	if (!func_13(iParam0))
	{
		func_23(iParam0);
	}
	else
	{
		func_21(iParam0);
	}
}

void func_21(int* iParam0)
{
	func_22(iParam0, 0f);
}

void func_22(int* iParam0, float fParam1)
{
	iParam0->f_1 = (func_11() - fParam1);
	unk_0x933D6A9EEC1BACD0(iParam0, 1);
	unk_0xE80492A9AC099A93(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_23(int* iParam0)
{
	if (!func_13(iParam0))
	{
		func_21(iParam0);
	}
}

int func_24()
{
	int iVar0;
	
	Global_97173.f_17188 = iLocal_121;
	switch (iLocal_121)
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
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
	{
		unk_0xC1E8A365BF3B29F2(unk_0xD80958FC74E988A6(), 177, true);
	}
	iVar0 = unk_0xB8BA7F44DF1575E1(&Local_52, &Local_122, 170, iLocal_96);
	unk_0xC90D2DCACD56184C(&Local_52);
	return iVar0;
}

void func_25(bool bParam0)
{
	int* iVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	float fVar15;
	bool bVar16;
	
	Var12 = { func_66(iLocal_121) };
	Var12 = { func_65(unk_0xD0FFB162F40A139C(Var12.f_2), unk_0x0BADBFA3B172435F(Var12.f_2), unk_0x632106CC96E82E91(Var12.f_0)) };
	unk_0x212A8D0D2BABFAC2(func_64(iLocal_121), Var12, 5000f, 0);
	unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), false, 256);
	unk_0xA6294919E56FF02A(false);
	unk_0xA0EBB943C300E693(false);
	func_62(1);
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
	{
		unk_0xADF692B254977C0C(unk_0xD80958FC74E988A6(), joaat("weapon_unarmed"), true);
		unk_0xC1E8A365BF3B29F2(unk_0xD80958FC74E988A6(), 177, true);
		if (unk_0xD5037BA82E12416F(unk_0xD80958FC74E988A6()) > 0.3f)
		{
			unk_0x919BE13EED931959(unk_0xD80958FC74E988A6(), -1);
			while (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()) && unk_0xD5037BA82E12416F(unk_0xD80958FC74E988A6()) > 0.3f)
			{
				unk_0x4EDE34FBADD967A6(0);
				if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
				{
					unk_0xC1E8A365BF3B29F2(unk_0xD80958FC74E988A6(), 177, true);
				}
			}
		}
		if (unk_0x7239B21A38F536BA(iLocal_296))
		{
			Var6 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) - unk_0x3FEF770D40960D5A(iLocal_296, false) };
			Var6.f_2 = 0f;
			fVar15 = unk_0x652D2EEEF1D3E62C(Var6);
			unk_0xE8854A4326B9E12B(&iVar3);
			if (fVar15 > 0.8f)
			{
				Var6 = { Var6 * FtoV((0.78f / fVar15)) };
				Var9 = { unk_0x3FEF770D40960D5A(iLocal_296, false) + Var6 };
				if (iLocal_121 == 12)
				{
					unk_0x15D3A79D4E44B913(0, Var9, 1f, 20000, 0.25f, false, func_61(Var9, unk_0x3FEF770D40960D5A(iLocal_296, false)));
				}
				else
				{
					unk_0xD76B57B44F1E6F8B(0, Var9, 1f, -1, func_61(Var9, unk_0x3FEF770D40960D5A(iLocal_296, false)), 0.5f);
				}
			}
			else if (fVar15 > 0.15f)
			{
				unk_0x93B93A37987F1F3D(0, func_61(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A(iLocal_296, false)), 0);
			}
			unk_0xEA47FE3719165B94(0, "pickup_object", "pickup_low", 8f, -8f, -1, 0, 0f, false, false, false);
			unk_0x39E72BC99E6360CB(iVar3);
			if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
			{
				unk_0xE1EF3C1216AFF2CD(unk_0xD80958FC74E988A6());
				unk_0xC1E8A365BF3B29F2(unk_0xD80958FC74E988A6(), 177, true);
				unk_0x5ABA3986D90D8A3B(unk_0xD80958FC74E988A6(), iVar3);
			}
			unk_0x3841422E9C488D8C(&iVar3);
			func_62(1);
		}
	}
	func_23(&iLocal_292);
	while ((func_10(&iLocal_292) < 6f && !unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6())) && !unk_0x1F0B79228E461EC9(unk_0xD80958FC74E988A6(), "pickup_object", "pickup_low", 3))
	{
		unk_0xC1E8A365BF3B29F2(unk_0xD80958FC74E988A6(), 177, true);
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()) && unk_0x1F0B79228E461EC9(unk_0xD80958FC74E988A6(), "pickup_object", "pickup_low", 3))
	{
		unk_0x28D1A16553C51776(unk_0xD80958FC74E988A6(), "pickup_object", "pickup_low", 0.8f);
		bVar16 = true;
	}
	while ((func_10(&iLocal_292) < 6f && !unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6())) && unk_0x346D81500D088F42(unk_0xD80958FC74E988A6(), "pickup_object", "pickup_low") < 0.22f)
	{
		unk_0xC1E8A365BF3B29F2(unk_0xD80958FC74E988A6(), 177, true);
		if (!bVar16 && unk_0x1F0B79228E461EC9(unk_0xD80958FC74E988A6(), "pickup_object", "pickup_low", 3))
		{
			unk_0x28D1A16553C51776(unk_0xD80958FC74E988A6(), "pickup_object", "pickup_low", 0.8f);
			bVar16 = true;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
	{
		if (!bVar16 && unk_0x1F0B79228E461EC9(unk_0xD80958FC74E988A6(), "pickup_object", "pickup_low", 3))
		{
			unk_0x28D1A16553C51776(unk_0xD80958FC74E988A6(), "pickup_object", "pickup_low", 0.7f);
			bVar16 = true;
		}
		unk_0xC1E8A365BF3B29F2(unk_0xD80958FC74E988A6(), 177, true);
	}
	func_9(&iLocal_292);
	func_40();
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (func_35() == 0)
		{
			unk_0x262B14F48D29DE80(unk_0xD80958FC74E988A6(), 9, 5, 0, 0);
		}
		else if (func_35() == 1)
		{
			unk_0x262B14F48D29DE80(unk_0xD80958FC74E988A6(), 8, 1, 0, 0);
		}
		else if (func_35() == 2)
		{
			unk_0x262B14F48D29DE80(unk_0xD80958FC74E988A6(), 8, 3, 0, 0);
		}
	}
	if (bParam0)
	{
		if (!func_33(func_34(iLocal_121)) && !unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
		{
			unk_0xE1EF3C1216AFF2CD(unk_0xD80958FC74E988A6());
			unk_0x15D3A79D4E44B913(unk_0xD80958FC74E988A6(), func_34(iLocal_121), 1f, -1, 0.25f, false, 40000f);
		}
		if (unk_0x7239B21A38F536BA(iLocal_296))
		{
			unk_0x539E0AE3E6634B9F(&iLocal_296);
		}
		iVar4 = unk_0x6ABFA3E16460F22D(26379945, func_32(iLocal_121), func_31(iLocal_121), func_30(iLocal_121), true, 2);
		iVar5 = unk_0x6ABFA3E16460F22D(26379945, func_29(iLocal_121), func_28(iLocal_121), func_27(iLocal_121), false, 2);
		unk_0x07E5B515DB0636FC(true, false, 3000, true, false, 0);
		unk_0xF4C8CF9E353AFECA("HAND_SHAKE", 0.2f);
		func_23(&iVar0);
		while (func_10(&iVar0) < 1.5f)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x9FBDA379383A52A4(iVar5, iVar4, func_26(iLocal_121), 1, 1);
		func_21(&iVar0);
		while (func_10(&iVar0) < ((unk_0xBBDA792448DB5A89(func_26(iLocal_121)) / 1000f) + 0.3f))
		{
			if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
			{
				unk_0xC1E8A365BF3B29F2(unk_0xD80958FC74E988A6(), 177, true);
			}
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	else
	{
		Local_122.f_2 = iLocal_296;
	}
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
	{
		unk_0xC1E8A365BF3B29F2(unk_0xD80958FC74E988A6(), 177, true);
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
	return Global_97173.f_1729.f_539.f_3213;
}

void func_36()
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
	{
		if (func_39(Global_97173.f_1729.f_539.f_3213) != unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()))
		{
			iVar0 = func_38(unk_0xD80958FC74E988A6());
			if (func_37(iVar0) && (!func_110(14) || Global_96126))
			{
				if (Global_97173.f_1729.f_539.f_3213 != iVar0 && func_37(Global_97173.f_1729.f_539.f_3213))
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

bool func_37(int iParam0)
{
	return iParam0 < 3;
}

int func_38(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		iVar1 = unk_0x9F47B058362C84B5(iParam0);
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
		return Global_97173.f_29699[iParam0 /*29*/];
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
	int iVar7;
	int iVar8;
	
	if (unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		return;
	}
	unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), false, 0);
	if (unk_0x7239B21A38F536BA(iLocal_296))
	{
		unk_0x539E0AE3E6634B9F(&iLocal_296);
	}
	func_48(0, 0, 1);
	iLocal_296 = unk_0x9A294B2138ABB884(joaat("p_parachute_s"), func_47(iLocal_121), true, true, false);
	unk_0x8524A8B0171D5E07(iLocal_296, func_46(iLocal_121), 2, true);
	func_41(&Var0, &uVar3);
	Var4 = { 0f, 0f, uVar3 };
	iVar7 = unk_0x8C18E0F9080ADD73(Var0, Var4, 2);
	unk_0xC77720A12FE14A86(iLocal_296, iVar7, "puton_parachute_bag", "oddjobs@basejump@ig_15", 1000f, -1000f, 1, 1000f);
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
	{
		unk_0xE1EF3C1216AFF2CD(unk_0xD80958FC74E988A6());
		unk_0xEEA929141F699854(unk_0xD80958FC74E988A6(), iVar7, "oddjobs@basejump@ig_15", "puton_parachute", 1000f, -1000f, 0, 0, 1000f, 0);
	}
	unk_0x67C540AA08E4A6F5(-1, "Grab_Parachute", "BASEJUMPS_SOUNDS", true);
	iVar8 = unk_0xC3981DCE61D9E13F("DEFAULT_ANIMATED_CAMERA", false);
	unk_0xE32EFE9AB4A9AA0C(iVar8, iVar7, "puton_parachute_cam", "oddjobs@basejump@ig_15");
	unk_0x026FB97D0A425F84(iVar8, true);
	unk_0x07E5B515DB0636FC(true, false, 3000, true, false, 0);
	while (unk_0xE4A310B1D7FA73CC(iVar7) < 0.6f)
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
}

void func_41(var uParam0, var uParam1)
{
	*uParam0 = { func_45(iLocal_121) };
	switch (iLocal_121)
	{
		case 5:
			*uParam1 = -1.8f;
			break;
		
		case 4:
			*uParam1 = func_44(func_61(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), *uParam0), -180f, 180f);
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
			*uParam1 = func_44(func_61(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), *uParam0), -180f, 180f);
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
			*uParam1 = func_44(func_61(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), *uParam0), -180f, 180f);
			break;
		
		case 12:
			*uParam1 = func_44(func_61(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), *uParam0), -180f, 180f);
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

void func_48(int iParam0, bool bParam1, int iParam2)
{
	unk_0x8D32347D6D4C40A2(unk_0xA5EDC40EF369B48D(), false, iParam0);
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		unk_0x056A8A219B8E829F(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), 15f);
	}
	unk_0xC61B86C9F61EB404(bParam1);
	func_59(0);
	func_50(1, 1, iParam2, 0);
	unk_0xA0EBB943C300E693(false);
	unk_0xA6294919E56FF02A(false);
	func_49(23, 1);
}

void func_49(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x933D6A9EEC1BACD0(&Global_24688, iParam0);
	}
	else
	{
		unk_0xE80492A9AC099A93(&Global_24688, iParam0);
	}
}

void func_50(bool bParam0, bool bParam1, var uParam2, bool bParam3)
{
	if (bParam0)
	{
		unk_0x9CB5CE07A3968D5A(unk_0x4F8644AF03D0E0D6());
		unk_0x056E0FE8534C2949(unk_0x4F8644AF03D0E0D6(), true);
		unk_0x32C62AA929C2DA6A(unk_0x4F8644AF03D0E0D6(), true);
		func_58(1);
		unk_0xFDB423997FA30340();
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x7497D2CE2C30D24C())
			{
				unk_0xD79DEEFB53455EBA(false);
			}
			if (!func_57())
			{
				Global_14393.f_1 = 3;
			}
			Global_15692 = 5;
		}
		func_56(1, bParam3, uParam2);
		Global_54578 = 1;
		Global_66883 = 1;
		Global_68065 = 1;
	}
	else
	{
		func_58(0);
		unk_0xE1CD1E48E025E661();
		Global_54578 = 0;
		if (bParam1)
		{
			unk_0x03FC694AE06C5A20();
		}
		unk_0x056E0FE8534C2949(unk_0x4F8644AF03D0E0D6(), false);
		unk_0x32C62AA929C2DA6A(unk_0x4F8644AF03D0E0D6(), false);
		func_56(0, bParam3, uParam2);
		if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()) && !func_51(unk_0x4F8644AF03D0E0D6()))
		{
			unk_0x3882114BDE571AD4(unk_0xD80958FC74E988A6(), false);
		}
		Global_68065 = 0;
	}
}

int func_51(int iParam0)
{
	if (func_53(iParam0, 0))
	{
		return 1;
	}
	if (func_52())
	{
		if (iParam0 == unk_0x4F8644AF03D0E0D6())
		{
			return 1;
		}
	}
	if (unk_0xA921AA820C25702F(Global_2413868[iParam0 /*253*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_52()
{
	return unk_0xA921AA820C25702F(Global_2359301, 3);
}

bool func_53(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x4F8644AF03D0E0D6())
	{
		bVar0 = func_54(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1582048[iParam0 /*324*/].f_180 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xB8DFD30D6973E135(iParam0))
		{
			bVar0 = unk_0x37039302F4E0A008(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_54(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_55();
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

int func_55()
{
	return Global_1312736;
}

int func_56(bool bParam0, bool bParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x48AF36444B965238())
	{
		if (unk_0xA0FE76168A189DDB() != bParam0 && uParam2)
		{
			unk_0x20746F7B1032A3C7(bParam0, bParam1, 1);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_57()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_58(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x933D6A9EEC1BACD0(&Global_2263, 13);
	}
	else
	{
		unk_0xE80492A9AC099A93(&Global_2263, 13);
	}
}

void func_59(int iParam0)
{
	if (Global_14551)
	{
		func_60(0, 0);
	}
	if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
	{
		unk_0x933D6A9EEC1BACD0(&Global_2264, 16);
	}
	if (unk_0x7497D2CE2C30D24C())
	{
		unk_0xD79DEEFB53455EBA(false);
	}
	Global_15692 = 5;
	if (iParam0 == 1)
	{
		unk_0x933D6A9EEC1BACD0(&Global_2263, 30);
	}
	else
	{
		unk_0xE80492A9AC099A93(&Global_2263, 30);
	}
	if (!func_57())
	{
		Global_14393.f_1 = 3;
	}
}

void func_60(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_89(0))
		{
			Global_14551 = 1;
			if (bParam1)
			{
				unk_0x584FDFDA48805B86(&Global_14330);
			}
			Global_14321 = { Global_14339[Global_14338 /*3*/] };
			unk_0x693A5C6D6734085B(Global_14321);
		}
	}
	else if (Global_14551 == 1)
	{
		Global_14551 = 0;
		Global_14321 = { Global_14346[Global_14338 /*3*/] };
		if (bParam1)
		{
			unk_0x693A5C6D6734085B(Global_14330);
		}
		else
		{
			unk_0x693A5C6D6734085B(Global_14321);
		}
	}
}

float func_61(struct<2> Param0, Vector3 vParam2, struct<2> Param3, Vector3 vParam5)
{
	return unk_0x2FFB6B224F4B2926((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

void func_62(bool bParam0)
{
	if (bParam0)
	{
		func_63();
		if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
		{
			unk_0x933D6A9EEC1BACD0(&Global_2264, 16);
		}
		Global_14393.f_1 = 1;
		if (func_89(0))
		{
			func_59(0);
		}
	}
	else if (Global_14393.f_1 == 1)
	{
		if (!Global_14393.f_1 == 0)
		{
			Global_14393.f_1 = 3;
		}
	}
}

void func_63()
{
	if (Global_14393.f_1 == 9 || Global_14393.f_1 == 10)
	{
		Global_15745 = 0;
		Global_15741 = 1;
	}
}

Vector3 func_64(int iParam0)
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

Vector3 func_65(struct<3> Param0)
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

Vector3 func_66(int iParam0)
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

void func_67(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!unk_0x7239B21A38F536BA(iParam0))
	{
		return;
	}
	iVar0 = func_75(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_35756[iVar0 /*5*/];
		func_70(1, iVar1, 1);
		return;
	}
	iVar2 = func_69(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_68(iVar2);
}

void func_68(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_35730[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_35730[iParam0 /*5*/].f_1 == unk_0xD80958FC74E988A6())
		{
			Global_35951 = 0;
		}
	}
	Global_35730[iParam0 /*5*/] = 13;
	Global_35730[iParam0 /*5*/].f_1 = 0;
	Global_35730[iParam0 /*5*/].f_2 = 0;
	Global_35730[iParam0 /*5*/].f_3 = 0;
	Global_35730[iParam0 /*5*/].f_4 = 0;
	Global_35729 = (Global_35729 - 1);
	if (Global_35729 < 0)
	{
		Global_35729 = 0;
	}
}

int func_69(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_35730[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_70(int iParam0, int iParam1, int iParam2)
{
	func_71(iParam0, iParam1, iParam2, 0, 0);
}

void func_71(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
	if (func_73(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_72();
	if (iVar0 == -1)
	{
		return;
	}
	Global_35837[iVar0 /*5*/] = iParam0;
	Global_35837[iVar0 /*5*/].f_1 = iParam1;
	Global_35837[iVar0 /*5*/].f_2 = iParam2;
	Global_35837[iVar0 /*5*/].f_3 = iParam3;
	Global_35837[iVar0 /*5*/].f_4 = iParam4;
}

int func_72()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_35837[iVar0 /*5*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_73(int iParam0, int iParam1, int iParam2)
{
	if (func_74(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_74(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_35837[iVar0 /*5*/].f_2)
		{
			if (iParam0 == Global_35837[iVar0 /*5*/])
			{
				if (iParam1 == Global_35837[iVar0 /*5*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_75(int iParam0)
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
		if (!Global_35756[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_35756[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_76()
{
	if (Global_3068[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3068[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3068[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3068[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3068[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3068[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	unk_0xE80492A9AC099A93(&Global_2263, 25);
	unk_0x933D6A9EEC1BACD0(&Global_2264, 11);
}

int func_77(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_79(0))
		{
			return 0;
		}
		Global_34873++;
		*iParam0 = Global_34873;
		unk_0x239528EACDC3E7DE(unk_0xA5EDC40EF369B48D(), false);
		Global_17098.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0xBC8983F38F78ED51(8);
		}
		Global_34909 = iParam2;
		Global_34871 = *iParam0;
		Global_34872 = iParam4;
		Global_34870 = 0;
		return 1;
	}
	if (*iParam0 != -1)
	{
		if (Global_34870 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_34870)
			{
				if (Global_34876[iVar0 /*4*/] == *iParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_34871 == *iParam0)
		{
			return 1;
		}
		*iParam0 = -1;
	}
	if (*iParam0 == -1)
	{
		if (!func_126(iParam2))
		{
			return 0;
		}
		if (Global_34870 == 8)
		{
			return 0;
		}
		Global_34873++;
		*iParam0 = Global_34873;
		Global_34876[Global_34870 /*4*/] = Global_34873;
		Global_34876[Global_34870 /*4*/].f_1 = iParam1;
		Global_34876[Global_34870 /*4*/].f_2 = iParam2;
		Global_34876[Global_34870 /*4*/].f_3 = 0;
		Global_34870++;
		if (iParam4 != 0)
		{
			func_78(iParam0, iParam4);
		}
	}
	return 2;
}

void func_78(var uParam0, int iParam1)
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

int func_79(int iParam0)
{
	if (Global_34909 == 15)
	{
		return 0;
	}
	if (func_126(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_80()
{
	switch (iLocal_121)
	{
		case 4:
		case 5:
		case 6:
		case 8:
		case 12:
			func_81();
			break;
		
		default:
			break;
	}
}

void func_81()
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = unk_0xB6997A7EB3F5C8C0();
	if (unk_0x7239B21A38F536BA(iVar0))
	{
		Local_122.f_1 = iVar0;
	}
	if (unk_0x7239B21A38F536BA(iLocal_296))
	{
		Var1 = { unk_0x3FEF770D40960D5A(iLocal_296, true) };
		if (unk_0xB7A628320EFF8E47(Var1, Local_89) > 25f)
		{
			func_82(0);
		}
	}
}

void func_82(int iParam0)
{
	if (iParam0 == 2)
	{
	}
	else if (iParam0 == 0)
	{
	}
	iLocal_105 = iParam0;
	iLocal_103 = 0;
	iLocal_94 = 7;
}

int func_83(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_84(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x5E9564D8246B909A(unk_0xA5EDC40EF369B48D()))
	{
		return 0;
	}
	if (func_89(0))
	{
		return 0;
	}
	if (unk_0xD3C2E180A40F031E())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_35609[iVar0 /*18*/] == 1 && Global_35609[iVar0 /*18*/].f_3 == 1)
		{
			if (bParam1)
			{
				if (Global_35609[iVar0 /*18*/].f_16)
				{
					return 0;
				}
			}
			Global_35609[iVar0 /*18*/].f_4 = 1;
			Global_35609[iVar0 /*18*/].f_16 = 1;
			return 1;
		}
		else
		{
			if (Global_35609[iVar0 /*18*/] == 0)
			{
			}
			if (Global_35609[iVar0 /*18*/].f_6)
			{
			}
		}
	}
	return 0;
}

int func_84(int iParam0)
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
		if (Global_35609[iVar0 /*18*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_85(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_84(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_35609[iVar0 /*18*/])
		{
			Global_35609[iVar0 /*18*/].f_6 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

void func_86(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4)
{
	int iVar0;
	
	if (unk_0x2C83A9DA6BFFC4F9(joaat("context_controller")) < 1)
	{
	}
	if (unk_0xD9D2CFFF49FAB35F())
	{
		if (!*iParam0 == -1)
		{
			func_85(iParam0);
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
		if (!Global_35609[iVar0 /*18*/])
		{
			Global_35609[iVar0 /*18*/] = 1;
			Global_35609[iVar0 /*18*/].f_1 = Global_35726;
			Global_35726++;
			Global_35609[iVar0 /*18*/].f_3 = 0;
			Global_35609[iVar0 /*18*/].f_16 = 0;
			Global_35609[iVar0 /*18*/].f_4 = 0;
			Global_35609[iVar0 /*18*/].f_2 = iParam1;
			StringCopy(&(Global_35609[iVar0 /*18*/].f_7), sParam2, 16);
			Global_35609[iVar0 /*18*/].f_5 = iParam3;
			Global_35609[iVar0 /*18*/].f_17 = unk_0xC30338E8088E2E21();
			Global_35609[iVar0 /*18*/].f_6 = 0;
			if (!unk_0xCA042B6957743895(sParam4))
			{
				Global_35609[iVar0 /*18*/].f_11 = 1;
				StringCopy(&(Global_35609[iVar0 /*18*/].f_12), sParam4, 16);
			}
			else
			{
				Global_35609[iVar0 /*18*/].f_11 = 0;
			}
			*iParam0 = Global_35609[iVar0 /*18*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_87(var uParam0)
{
	return 1;
}

var func_88()
{
	return Global_66880;
}

int func_89(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (unk_0xA921AA820C25702F(Global_2263, 14))
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
	if (unk_0x2C83A9DA6BFFC4F9(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14393.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_90(int iParam0, int iParam1)
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
	return unk_0xA921AA820C25702F(Global_1327591.f_949, iParam0);
}

bool func_91()
{
	return unk_0x9CD27B0045628463() <= Global_17236.f_5130 + 100;
}

int func_92()
{
	if (unk_0x2C83A9DA6BFFC4F9(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_93(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17098.f_4 && Global_17098.f_104 == 4);
	}
	return Global_17098.f_4;
}

void func_94(var uParam0, int iParam1)
{
	func_95(uParam0, iParam1);
}

void func_95(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_96()
{
	return 1;
}

bool func_97()
{
	int iVar0;
	bool bVar1;
	
	if (unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		return 0;
	}
	unk_0x3A87E44BB9A01D54(unk_0xD80958FC74E988A6(), &iVar0, true);
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
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		return ((((bVar1 && unk_0xF3A21BCD95725A4A(0, 69)) || (bVar1 && unk_0xF3A21BCD95725A4A(0, 70))) || (bVar1 && unk_0xF3A21BCD95725A4A(0, 68))) || unk_0x78CFE51896B6B8A4(unk_0x4F8644AF03D0E0D6()));
	}
	return (((((bVar1 && unk_0xF3A21BCD95725A4A(0, 24)) || (bVar1 && unk_0xF3A21BCD95725A4A(0, 25))) || (bVar1 && unk_0xF3A21BCD95725A4A(0, 47))) || unk_0xDCCA191DF9980FD7(unk_0xD80958FC74E988A6())) || unk_0x78CFE51896B6B8A4(unk_0x4F8644AF03D0E0D6()));
}

int func_98(int iParam0)
{
	int iVar0;
	
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
		{
			if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
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
						if (((((((((((((((((!unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6()) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0xBB062B2B5722478E(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), 0)) || func_105()) || Global_96220) || Global_24446) || func_104()) || func_90(8, -1)) || func_103()) || func_102()) || func_101()) || func_92()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true) || func_105()) || Global_24446) || func_104()) || func_90(8, -1)) || func_101()) || func_103()) || func_102()) || func_92()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6()) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0xBB062B2B5722478E(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), 0)) || func_105()) || Global_96220) || Global_24446) || func_104()) || func_90(8, -1)) || func_101()) || func_103()) || func_102()) || func_92()) || Global_97173.f_5944.f_889[iVar0] == 5) || Global_35456 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6()) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), 0)) || func_105()) || Global_96220) || Global_24446) || func_104()) || func_90(8, -1)) || func_103()) || func_102()) || func_92()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_105() || unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) > 0) || func_90(8, -1)) || func_92()) || func_100()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_90(8, -1) || func_103()) || func_102()) || func_100()) || func_99())
						{
							return 0;
						}
						if ((unk_0xD9D2CFFF49FAB35F() && unk_0xB3C94A90D9FC9E62() != 3) && unk_0x470555300D10B2A5() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
						{
							if ((((((((((((((unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), 0) || unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) > 0) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || func_105()) || Global_24446) || func_104()) || func_90(8, -1)) || func_102()) || func_101()) || func_92()) || Global_97173.f_5944.f_889[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), 0) || !unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6())) || !unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6())) || !unk_0x5A859503B0C08678()) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || func_105()) || func_102()) || Global_96220) || Global_24446) || func_104()) || Global_35953) || func_90(8, -1)) || func_101()) || func_100()) || func_92()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), 0) || !unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6())) || !unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6())) || !unk_0x5A859503B0C08678()) || unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0)) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true)) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x9DE327631295B4C2(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || func_105()) || Global_96220) || Global_24446) || func_104()) || func_90(8, -1)) || func_101()) || func_100()) || func_103()) || func_102()) || func_92())
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

var func_99()
{
	return Global_89823.f_1;
}

int func_100()
{
	if (Global_87111 != -1)
	{
		return unk_0xA921AA820C25702F(Global_80977[Global_87111 /*34*/].f_15, 13);
	}
	return 0;
}

int func_101()
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

bool func_102()
{
	return Global_89836.f_291 > 0;
}

bool func_103()
{
	return Global_89836.f_290 > 0;
}

var func_104()
{
	return Global_1315898;
}

int func_105()
{
	if (!unk_0x10FAB35428CCC9D7())
	{
		return Global_87667.f_44 == 1;
	}
	return 0;
}

int func_106()
{
	if (unk_0x2C83A9DA6BFFC4F9(joaat("stripperhome")) > 0)
	{
		return 1;
	}
	return 0;
}

var func_107()
{
	return Global_86021;
}

int func_108(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			if (func_110(6) || func_110(7))
			{
				return 1;
			}
			else
			{
				return func_108(3);
			}
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			if (func_126(5))
			{
				if (func_98(4))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_109(int iParam0)
{
	if (iParam0 != 262)
	{
		return unk_0xA6DB27D19ECBB7DA(Global_24745[iParam0 /*23*/].f_19);
	}
	return 0;
}

bool func_110(int iParam0)
{
	return Global_34909 == iParam0;
}

void func_111(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_112()
{
	struct<3> Var0;
	
	if (bLocal_295)
	{
		switch (iLocal_121)
		{
			case 4:
			case 5:
			case 8:
				iLocal_296 = unk_0x9A294B2138ABB884(joaat("p_parachute_s"), func_47(iLocal_121), true, true, false);
				unk_0x8524A8B0171D5E07(iLocal_296, func_46(iLocal_121), 2, true);
				unk_0x428CA6DBD1094446(iLocal_296, true);
				break;
			
			case 6:
			case 12:
				iLocal_296 = unk_0x9A294B2138ABB884(joaat("p_parachute_s"), func_47(iLocal_121), true, true, false);
				unk_0x8524A8B0171D5E07(iLocal_296, func_46(iLocal_121), 2, true);
				unk_0x58A850EAEE20FAA3(iLocal_296);
				Var0 = { func_114(iLocal_121) };
				if (!func_33(Var0))
				{
					iLocal_297 = unk_0xAF35D0D2583051B0(joaat("bati"), Var0, func_113(iLocal_121), 1, 1);
					iLocal_297 = iLocal_297;
				}
				break;
			
			default:
				break;
			}
	}
}

float func_113(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			return 165.0425f;
		
		default:
	}
	return 0f;
}

Vector3 func_114(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			return -1243.606f, 4543.016f, 185.9527f;
		
		default:
	}
	return 0f, 0f, 0f;
}

bool func_115()
{
	switch (iLocal_121)
	{
		case 5:
		case 4:
		case 8:
		case 6:
			return (((unk_0xD031A9162D01088C("pickup_object") && unk_0xD031A9162D01088C("oddjobs@basejump@ig_15")) && func_116(&uLocal_117)) && func_116(&uLocal_119));
			break;
		
		case 12:
			return ((unk_0xD031A9162D01088C("pickup_object") && unk_0xD031A9162D01088C("oddjobs@basejump@ig_15")) && func_116(&uLocal_117));
			break;
		
		default:
			break;
	}
	return (func_116(&uLocal_117) && func_116(&uLocal_119));
}

int func_116(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if (!unk_0x98A4EB5D89A0C952((*uParam0)[iVar0]))
			{
				if (!unk_0x98A4EB5D89A0C952((*uParam0)[iVar0]))
				{
				}
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_117()
{
	switch (iLocal_121)
	{
		case 5:
		case 8:
			func_119(&uLocal_117, joaat("p_parachute_s"));
			unk_0xD3BD40951412FEF6("pickup_object");
			unk_0xD3BD40951412FEF6("oddjobs@basejump@ig_15");
			break;
		
		case 4:
		case 6:
			func_119(&uLocal_117, joaat("p_parachute_s"));
			func_119(&uLocal_119, joaat("bati"));
			unk_0xD3BD40951412FEF6("pickup_object");
			unk_0xD3BD40951412FEF6("oddjobs@basejump@ig_15");
			break;
		
		case 12:
			func_119(&uLocal_117, joaat("p_parachute_s"));
			unk_0xD3BD40951412FEF6("pickup_object");
			unk_0xD3BD40951412FEF6("oddjobs@basejump@ig_15");
			break;
		
		default:
			break;
	}
	func_118(&uLocal_117);
	func_118(&uLocal_119);
}

void func_118(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			unk_0x963D27A58DF860AC((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

int func_119(var uParam0, int iParam1)
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
	iVar1 = func_120(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = iParam1;
	return 1;
}

int func_120(var uParam0)
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

void func_121(int iParam0)
{
	iLocal_94 = iParam0;
}

void func_122(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 262)
	{
		return;
	}
	iVar0 = iParam0;
	if (!bParam2)
	{
		bVar1 = unk_0xA921AA820C25702F(Global_24745[iVar0 /*23*/].f_11, 15);
		if (bVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != unk_0xA921AA820C25702F(Global_24745[iVar0 /*23*/].f_11, 0))
	{
		unk_0x933D6A9EEC1BACD0(&(Global_24745[iVar0 /*23*/].f_11), 18);
		if (Global_24742 == 1)
		{
			Global_24743 = 1;
		}
		Global_24742 = 1;
	}
	if (bParam1)
	{
		unk_0x933D6A9EEC1BACD0(&(Global_24745[iVar0 /*23*/].f_11), 0);
		unk_0x933D6A9EEC1BACD0(&(Global_24745[iVar0 /*23*/].f_11), 15);
		unk_0x933D6A9EEC1BACD0(&(Global_24745[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		unk_0xE80492A9AC099A93(&(Global_24745[iVar0 /*23*/].f_11), 0);
		unk_0xE80492A9AC099A93(&(Global_24745[iVar0 /*23*/].f_11), 15);
	}
	if (!unk_0xA921AA820C25702F(Global_24745[iVar0 /*23*/].f_11, 0))
	{
		if (unk_0xA6DB27D19ECBB7DA(Global_24745[iVar0 /*23*/].f_19))
		{
			unk_0xB98236CAAECEF897(true);
			unk_0x86A652570E5F25DD(&(Global_24745[iVar0 /*23*/].f_19));
			unk_0xB98236CAAECEF897(false);
		}
	}
}

int func_123()
{
	if (unk_0x48AF36444B965238())
	{
		if (unk_0xD10282B6E3751BA0() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_124()
{
	if (Global_87111 != -1)
	{
		return unk_0xA921AA820C25702F(Global_80977[Global_87111 /*34*/].f_15, 20);
	}
	return 0;
}

bool func_125(int iParam0, int iParam1)
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
	bVar0 = unk_0xA921AA820C25702F(Global_97173.f_7311.f_99.f_214[iParam0], iParam1);
	return bVar0;
}

bool func_126(int iParam0)
{
	return func_127(iParam0, Global_34909);
}

int func_127(int iParam0, int iParam1)
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

bool func_128(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_129()
{
	if (unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
	{
		func_94(&uLocal_93, 8388608);
		return;
	}
	StringCopy(&Local_52, "bj", 64);
	iLocal_121 = func_133(Local_89, 0);
	switch (iLocal_121)
	{
		case 4:
			iLocal_104 = 128;
			break;
		
		case 5:
			iLocal_104 = 129;
			break;
		
		case 6:
			iLocal_104 = 130;
			break;
		
		case 8:
			iLocal_104 = 132;
			break;
		
		case 12:
			iLocal_104 = 136;
			break;
		
		default:
			break;
	}
	if (iLocal_104 == 128)
	{
		if (func_132(19))
		{
			func_131(iLocal_104);
		}
	}
	func_94(&uLocal_93, 4194304);
	iLocal_98 = 0;
	fLocal_101 = (unk_0xBBDA792448DB5A89(func_130(iLocal_104)) + 5f);
	fLocal_116 = 1.1f;
	sLocal_100 = "PLAY_BASEJUMP_G";
	if (iLocal_104 != 262)
	{
		if (!func_125(0, iLocal_98))
		{
			bLocal_295 = false;
			func_131(iLocal_104);
		}
		else
		{
			bLocal_295 = true;
		}
	}
	else
	{
		bLocal_295 = false;
	}
	if (unk_0x2C83A9DA6BFFC4F9(joaat("bj")) > 0)
	{
		func_94(&uLocal_93, 8);
	}
	else
	{
		func_135(&uLocal_93, 8);
	}
	if (func_110(12))
	{
		func_94(&uLocal_93, 8);
	}
	iLocal_96 = 17000;
}

int func_130(int iParam0)
{
	switch (iParam0)
	{
		case 90:
		case 91:
		case 109:
		case 110:
			return 20;
			break;
		
		case 65:
		case 66:
		case 75:
		case 106:
		case 107:
		case 108:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
		case 128:
		case 129:
		case 130:
		case 132:
		case 136:
			return 100;
			break;
		
		case 124:
		case 125:
		case 126:
		case 127:
		case 131:
		case 133:
		case 134:
		case 135:
		case 67:
		case 68:
		case 94:
		case 69:
		case 70:
		case 72:
		case 73:
		case 74:
		case 71:
			return 209;
			break;
	}
	return -1;
}

void func_131(int iParam0)
{
	if (iLocal_94 < 5)
	{
		func_122(iParam0, 0, 0);
		iLocal_104 = 262;
		func_85(&iLocal_95);
		iLocal_94 = 9;
	}
}

bool func_132(int iParam0)
{
	return Global_96260[iParam0 /*10*/].f_1;
}

int func_133(struct<3> Param0, int iParam3)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 1E+09f;
	iVar3 = 0;
	while (iVar3 < 13)
	{
		if (iParam3 == func_134(iVar3))
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

int func_134(int iParam0)
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

void func_135(var uParam0, int iParam1)
{
	func_136(uParam0, iParam1);
}

void func_136(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_137(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_104 != 262)
		{
			func_122(iLocal_104, 0, 0);
		}
	}
	func_85(&iLocal_95);
	if (func_128(uLocal_93, 2))
	{
		func_5();
		func_135(&uLocal_93, 2);
		func_7(&iLocal_97);
	}
	iLocal_97 = -1;
	func_138();
	unk_0x1090044AD1DA76FA();
}

void func_138()
{
	func_135(&uLocal_93, 4);
	func_139();
	if (unk_0x46E9AE36D8FA6417(iLocal_51))
	{
		unk_0xF745B37630DF176B(iLocal_51, 3);
	}
	if (!unk_0xF22B6C47C6EAB066(&Local_68))
	{
		if (unk_0xF030907CCBB8A9FD(&Local_68) != 0)
		{
			unk_0xC90D2DCACD56184C(&Local_68);
		}
	}
}

void func_139()
{
}

