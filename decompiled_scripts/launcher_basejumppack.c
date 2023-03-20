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
	if (unk_0x24862A9CDC8F8874(114))
	{
		func_137(1);
	}
	uLocal_85 = unk_0xCF4C00513A86E840(unk_0xA34E7C2A5118D638());
	iLocal_95 = 0;
	func_135(&Global_99629, 0);
	func_129();
	unk_0x038A1DC00F7AFAEF(1);
	if (func_128(uLocal_94, 1))
	{
		iLocal_100 = 10;
	}
	else
	{
		iLocal_100 = 9;
	}
	while (!Global_31477)
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!func_128(uLocal_94, 8))
	{
		if (!func_126(iLocal_100))
		{
			if (func_125(0, iLocal_99))
			{
				func_137(0);
			}
			else
			{
				func_137(1);
			}
		}
	}
	if (iLocal_99 != -1)
	{
		if (!func_125(0, iLocal_99))
		{
			func_137(1);
		}
	}
	if (func_128(uLocal_94, 8388608))
	{
		func_137(1);
	}
	if (func_128(uLocal_94, 524288) && (func_124() && !func_123()))
	{
		func_137(1);
	}
	if (unk_0xCBC8FFE55DC722B5(unk_0xFD88B4E9AD4F4CC0()) > 1 && !func_128(uLocal_94, 4194304))
	{
		if (iLocal_105 != 263)
		{
			func_122(iLocal_105, 1, 0);
			iLocal_105 = 263;
		}
		func_121(10);
	}
	while (true)
	{
		if (Global_3)
		{
			func_137(1);
		}
		uLocal_85 = unk_0xCF4C00513A86E840(unk_0xA34E7C2A5118D638());
		if (func_128(uLocal_94, 1048576))
		{
			if (unk_0xB6900B8CB0ABBD2B(uLocal_85))
			{
				func_137(1);
			}
		}
		if (unk_0x95CCECA3948CFE7B(iLocal_85) && !unk_0xB6900B8CB0ABBD2B(iLocal_85))
		{
			Local_87 = { unk_0x44C17CCB85A88A1F(iLocal_85, 1) };
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
					if (func_126(iLocal_100) || (func_128(uLocal_94, 16) && !func_128(uLocal_94, 524288)))
					{
						iLocal_98 = -1;
						func_117();
						func_121(1);
					}
					else
					{
						if (fLocal_110 > (fLocal_102 * fLocal_102))
						{
							if (iLocal_105 != 263)
							{
								func_122(iLocal_105, 1, 0);
								iLocal_105 = 263;
							}
							func_121(10);
						}
						if ((Local_87.f_2 - ScriptParam_0.f_1[0 /*3*/].f_2) > 500f)
						{
						}
					}
					break;
				
				case 1:
					if (func_115())
					{
						iLocal_103 = iLocal_103;
						func_121(3);
					}
					else
					{
						func_117();
					}
					break;
				
				case 3:
					if (unk_0x16DD8839736956AC())
					{
						func_137(1);
						return;
					}
					if (!func_126(iLocal_100))
					{
						if (!func_128(uLocal_94, 8))
						{
							bVar1 = true;
							if (unk_0xF8D041B05C3D1FD4(&(Global_91106.f_3), &Local_69))
							{
								Local_69 = { Local_53 };
								bVar1 = false;
							}
							if (bVar1)
							{
								func_137(0);
								break;
							}
						}
					}
					if (!func_128(uLocal_94, 4))
					{
						func_112();
						func_111(&uLocal_94, 4);
					}
					if (fLocal_110 > (fLocal_102 * fLocal_102) && !Global_91140)
					{
						if (iLocal_105 != 263)
						{
							if (func_110(6) && !func_109(iLocal_105))
							{
							}
							else
							{
								func_122(iLocal_105, 1, 0);
								iLocal_105 = 263;
							}
						}
						func_121(10);
					}
					else
					{
						Local_69 = { Local_53 };
						bVar2 = !func_128(uLocal_94, 64);
						func_135(&uLocal_94, 128);
						if (!func_108(3) && !Global_91140)
						{
							if (func_128(uLocal_94, 2097152))
							{
								if ((!func_128(uLocal_94, 1) || !unk_0x95CCECA3948CFE7B(func_107())) && !Global_91140)
								{
									func_121(10);
									break;
								}
							}
						}
						if (func_128(uLocal_94, 524288) && (func_124() && !func_123()))
						{
							func_137(1);
						}
						if (func_106())
						{
							func_137(1);
						}
						if ((!func_98(6) || Global_100023) || func_97())
						{
							bVar2 = false;
						}
						if (func_128(uLocal_94, 1))
						{
							if (!func_96())
							{
								func_94(&uLocal_94, 128);
								bVar2 = false;
							}
						}
						if (func_93(1))
						{
							bVar2 = false;
						}
						if (Global_69317)
						{
							bVar2 = false;
						}
						if (func_92())
						{
							bVar2 = false;
						}
						if (unk_0xA8D4B6BDCF6DE72B())
						{
							bVar2 = false;
						}
						if (func_91() || func_90(8, -1))
						{
							bVar2 = false;
						}
						if (!unk_0xBF43288C8D773F6A(unk_0xA34E7C2A5118D638()))
						{
							bVar2 = false;
						}
						if (!unk_0xC785D435A173C148(unk_0xA34E7C2A5118D638()))
						{
							bVar2 = false;
						}
						if (func_89(0) || func_88())
						{
							bVar2 = false;
						}
						if (bVar2)
						{
							if (!unk_0xA0C23498D8E0BB93(iLocal_85, ScriptParam_0.f_1[0 /*3*/], fLocal_117, fLocal_117, 2f, 0, 1, iLocal_103))
							{
								bVar2 = false;
							}
							if (!unk_0x0332C5816E3E66D5(unk_0xA34E7C2A5118D638()))
							{
								bVar2 = false;
							}
							if (bVar2)
							{
								unk_0x80904D7F494D0C30(0, 51);
								if (func_87(uLocal_86))
								{
									if (iLocal_96 == -1)
									{
										func_86(&iLocal_96, 4, sLocal_101, 0, 0, 0);
										func_94(&uLocal_94, 2048);
									}
									else if (!func_128(uLocal_94, 2048) || !unk_0xB45DF29A98EEAD5D())
									{
										func_85(&iLocal_96);
										func_135(&uLocal_94, 2048);
									}
									if (func_83(iLocal_96, 1))
									{
										sLocal_101 = sLocal_101;
										func_85(&iLocal_96);
										func_135(&uLocal_94, 2048);
										unk_0xE3B4E8C914195E94(&Local_69);
										unk_0x6C1CBBF18B93CB8E(unk_0xA34E7C2A5118D638(), 0, 56);
										func_121(5);
									}
								}
								else
								{
									sLocal_101 = sLocal_101;
									func_85(&iLocal_96);
									func_135(&uLocal_94, 2048);
									unk_0xE3B4E8C914195E94(&Local_69);
									unk_0x6C1CBBF18B93CB8E(unk_0xA34E7C2A5118D638(), 0, 56);
									func_121(5);
								}
							}
						}
						if (!bVar2)
						{
							if (iLocal_96 != -1)
							{
								func_85(&iLocal_96);
								func_135(&uLocal_94, 2048);
								unk_0x9F4AA6F234E8A860(0);
							}
						}
					}
					func_80();
					break;
				
				case 5:
					unk_0x80904D7F494D0C30(0, 51);
					if (unk_0xD838CD843F6FE18B(&Local_69))
					{
						if (iLocal_96 != -1)
						{
							func_85(&iLocal_96);
						}
						iVar3 = 2;
						bVar0 = false;
						if (func_128(uLocal_94, 1))
						{
							if (func_110(6) || func_110(7))
							{
								iVar3 = 1;
								bVar0 = true;
							}
						}
						if (iVar3 != 1)
						{
							iVar3 = func_77(&iLocal_98, 6, iLocal_100, 0, 0);
						}
						if (iVar3 == 1)
						{
							if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
							{
								unk_0xE6827001F6663087(unk_0xA34E7C2A5118D638());
							}
							func_76();
							if (Global_36750)
							{
								func_67(unk_0xC8B93D94F8954288());
							}
							unk_0x6C1CBBF18B93CB8E(unk_0xA34E7C2A5118D638(), 1, 56);
							uLocal_52 = func_24();
							func_94(&uLocal_94, 2);
							func_121(6);
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
							func_121(10);
						}
					}
					else
					{
						func_15();
					}
					break;
				
				case 6:
					if (func_128(Global_99629, 262144))
					{
						func_135(&Global_99629, 262144);
						func_14();
					}
					if (func_128(uLocal_94, 2097152))
					{
						if (!func_108(3) && !unk_0xC2DCA35AE2EC9DC4(uLocal_52))
						{
							func_121(10);
						}
					}
					if (!unk_0xC2DCA35AE2EC9DC4(uLocal_52))
					{
						unk_0x40727F747B3C8C8F(unk_0xF2DB717A73826179((func_10(&uLocal_107) * 1000f)), iLocal_99, 0);
						func_9(&uLocal_107);
						func_135(&uLocal_94, 256);
						func_8();
						if (bVar0)
						{
							func_135(&uLocal_94, 2);
						}
						else if (func_128(uLocal_94, 2))
						{
							if (func_128(Global_99629, 0))
							{
								func_7(&iLocal_98);
								iLocal_98 = -1;
								func_135(&uLocal_94, 2);
							}
							else
							{
								func_7(&iLocal_98);
								iLocal_98 = -1;
								func_135(&uLocal_94, 2);
							}
						}
						func_121(0);
						if (iLocal_99 != -1)
						{
							if (func_128(Global_99629, 0))
							{
								unk_0x0EC76B17C2D30E27(func_18(iLocal_99), 0, Global_91143, 0);
								func_6(func_18(iLocal_99), 0, Global_91143, 1, 0);
							}
							else
							{
								unk_0x0EC76B17C2D30E27(func_18(iLocal_99), 0, Global_91143, 0);
								func_6(func_18(iLocal_99), 0, Global_91143, 0, 0);
							}
						}
						func_5();
						func_135(&Global_99629, 0);
						if (func_128(uLocal_94, 16777216))
						{
							func_137(1);
						}
						if (iLocal_99 != -1)
						{
							if (Global_100976.f_7719)
							{
								if (!func_125(0, iLocal_99))
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
					if (fLocal_110 > (fLocal_102 * fLocal_102))
					{
						if (iLocal_105 != 263)
						{
							func_122(iLocal_105, 1, 0);
							iLocal_105 = 263;
						}
						func_121(10);
					}
					break;
				
				case 7:
					func_2();
					if (iLocal_105 != 263)
					{
						func_122(iLocal_105, 0, 0);
					}
					if (iLocal_96 != -1)
					{
						func_85(&iLocal_96);
					}
					if (!unk_0xB8A06E7E729EED0A(sLocal_101))
					{
						if (func_1(sLocal_101))
						{
							unk_0x9F4AA6F234E8A860(1);
						}
					}
					func_121(4);
					break;
				
				case 4:
					if ((iLocal_104 % 150) == 0)
					{
						if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
						{
							if (iLocal_106 == 2)
							{
								if (iLocal_106 == 2)
								{
									if (func_126(iLocal_100) && func_125(0, iLocal_99))
									{
										func_129();
										if (iLocal_105 != 263)
										{
											func_122(iLocal_105, 1, 0);
										}
										func_121(0);
									}
								}
							}
							else if (iLocal_106 == 0)
							{
								if (fLocal_110 > (fLocal_102 * fLocal_102))
								{
									if (iLocal_105 != 263)
									{
										func_122(iLocal_105, 1, 0);
										iLocal_105 = 263;
									}
									func_121(10);
								}
							}
							else if (iLocal_106 == 1)
							{
								if (fLocal_110 > ((80f + 5f) * (80f + 5f)))
								{
									func_129();
									if (iLocal_105 != 263)
									{
										func_122(iLocal_105, 1, 0);
									}
									func_121(0);
								}
							}
						}
						else
						{
							func_122(iLocal_105, 1, 0);
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
	unk_0xD90D7D16FDE685B6(sParam0);
	return unk_0x699790DC9A5E5D9A(0);
}

void func_2()
{
	func_3(&uLocal_118);
	func_3(&uLocal_120);
	unk_0x3ECF1E41E6ED71D8("pickup_object");
	unk_0x3ECF1E41E6ED71D8("oddjobs@basejump@ig_15");
}

void func_3(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			unk_0x4BBD72565A0AF033((*uParam0)[iVar0]);
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
	if (unk_0xB8A06E7E729EED0A(&Global_88509))
	{
		return;
	}
	if (unk_0x9E36887BBD43A4AE(sParam0, &Global_88509, 0, -1) != 0)
	{
		return;
	}
	unk_0x70872DF55836328E(sParam0, iParam1, iParam2, iParam3, iParam4, Global_85616);
	StringCopy(&Global_88509, "", 64);
}

void func_7(int iParam0)
{
	if (*iParam0 == -1)
	{
		return;
	}
	if (!*iParam0 == Global_35662)
	{
		*iParam0 = -1;
		return;
	}
	*iParam0 = -1;
	Global_35661 = 0;
	Global_35663 = 0;
	Global_35700 = 15;
	Global_55656 = 0;
	Global_55657 = 0;
}

void func_8()
{
	char cVar0[24];
	
	if (unk_0xC07DCB0D0C199EDF() || unk_0xF7FE713C9F786F8C())
	{
		unk_0x86E205844247EC8D(StackVal, 0, 0, 0);
	}
	else if (unk_0x5769873E00C06500() || unk_0x62F8BA7ED89768FB())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		unk_0xFA993E4AA4647AA6(0, &cVar0);
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
			return (func_11(unk_0xDCC86F723E82125E(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_11(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		return (unk_0xBBDA792448DB5A89(unk_0x693EBB4F13506457()) / 1000f);
	}
	if (unk_0xBBAE3E0C60A8AD4B())
	{
		iVar0 = unk_0x2AA13A84EE2D3B24();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0x693EBB4F13506457()) / 1000f);
}

bool func_12(var uParam0)
{
	return unk_0xDCC86F723E82125E(*uParam0, 2);
}

bool func_13(var uParam0)
{
	return unk_0xDCC86F723E82125E(*uParam0, 1);
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
	if (!unk_0xB8A06E7E729EED0A(&Global_88509))
	{
		unk_0x70872DF55836328E(&Global_88509, 0, 0, 0, 1, 0);
		StringCopy(&Global_88509, "", 64);
	}
	StringCopy(&Global_88509, sParam0, 64);
	unk_0x8AE482AD020DA4E2(sParam0, iParam1, iParam2, func_17(0));
}

bool func_17(bool bParam0)
{
	if (!bParam0 && unk_0xCBC8FFE55DC722B5(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xDCC86F723E82125E(Global_69565, 0);
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
	
	if (unk_0xC07DCB0D0C199EDF() || unk_0xF7FE713C9F786F8C())
	{
		uVar0 = iParam0;
		unk_0x86E205844247EC8D(8, &uVar0, 1, 1);
	}
	else if (unk_0x5769873E00C06500() || unk_0x62F8BA7ED89768FB())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0xFA993E4AA4647AA6(8, &cVar1);
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
	uParam0->f_1 = (func_11(unk_0xDCC86F723E82125E(*uParam0, 4)) - fParam1);
	unk_0x59A0729D503ED758(uParam0, 1);
	unk_0x77621132305B133B(uParam0, 2);
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
	
	Global_100976.f_17601 = iLocal_122;
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
	if (!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
	{
		unk_0x1F64302AA4F597A7(unk_0xC8B93D94F8954288(), 177, 1);
	}
	iVar0 = unk_0xB8BA7F44DF1575E1(&Local_53, &Local_123, 170, iLocal_97);
	unk_0x996557D48454AE40(&Local_53);
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
	
	Var12 = { func_66(iLocal_122) };
	Var12 = { func_65(unk_0xD0FFB162F40A139C(Var12.f_2), unk_0x0BADBFA3B172435F(Var12.f_2), unk_0x55931CB52905C222(Var12.f_0)) };
	unk_0xCC0E83FD998B9430(func_64(iLocal_122), Var12, 5000f, 0);
	unk_0x6C1CBBF18B93CB8E(unk_0xA34E7C2A5118D638(), 0, 256);
	unk_0xB1DF6C0157E453DE(0);
	unk_0xB7709513BF7C1AC0(0);
	func_62(1);
	if (!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
	{
		unk_0x80423B6A45BF05DA(unk_0xC8B93D94F8954288(), joaat("weapon_unarmed"), 1);
		unk_0x1F64302AA4F597A7(unk_0xC8B93D94F8954288(), 177, 1);
		if (unk_0x9BA9222C7124CA04(unk_0xC8B93D94F8954288()) > 0.3f)
		{
			unk_0x1A95AE7201CE6376(unk_0xC8B93D94F8954288(), -1);
			while (!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()) && unk_0x9BA9222C7124CA04(unk_0xC8B93D94F8954288()) > 0.3f)
			{
				unk_0x4EDE34FBADD967A6(0);
				if (!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
				{
					unk_0x1F64302AA4F597A7(unk_0xC8B93D94F8954288(), 177, 1);
				}
			}
		}
		if (unk_0x95CCECA3948CFE7B(iLocal_297))
		{
			Var6 = { unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1) - unk_0x44C17CCB85A88A1F(iLocal_297, 0) };
			Var6.f_2 = 0f;
			fVar15 = unk_0x652D2EEEF1D3E62C(Var6);
			unk_0x3E2E609450787FFE(&uVar3);
			if (fVar15 > 0.8f)
			{
				Var6 = { Var6 * FtoV((0.78f / fVar15)) };
				Var9 = { unk_0x44C17CCB85A88A1F(iLocal_297, 0) + Var6 };
				if (iLocal_122 == 12)
				{
					unk_0x81333BEA4837207C(0, Var9, 1f, 20000, 1048576000, 0, func_61(Var9, unk_0x44C17CCB85A88A1F(iLocal_297, 0)));
				}
				else
				{
					unk_0x6094B3418D5AE59D(0, Var9, 1f, -1, func_61(Var9, unk_0x44C17CCB85A88A1F(iLocal_297, 0)), 1056964608);
				}
			}
			else if (fVar15 > 0.15f)
			{
				unk_0x6EAFBB3A7F6ADEA9(0, func_61(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), unk_0x44C17CCB85A88A1F(iLocal_297, 0)), 0);
			}
			unk_0x5323F488E6A1B660(0, "pickup_object", "pickup_low", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
			unk_0x939BC11172AA1303(uVar3);
			if (!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
			{
				unk_0x5124C5FA52D2AF3E(unk_0xC8B93D94F8954288());
				unk_0x1F64302AA4F597A7(unk_0xC8B93D94F8954288(), 177, 1);
				unk_0xBFE865E3B513451B(unk_0xC8B93D94F8954288(), uVar3);
			}
			unk_0xA9351C9309E03069(&uVar3);
			func_62(1);
		}
	}
	func_23(&uLocal_293);
	while ((func_10(&uLocal_293) < 6f && !unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288())) && !unk_0xCD61E9D5CABC7E35(unk_0xC8B93D94F8954288(), "pickup_object", "pickup_low", 3))
	{
		unk_0x1F64302AA4F597A7(unk_0xC8B93D94F8954288(), 177, 1);
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()) && unk_0xCD61E9D5CABC7E35(unk_0xC8B93D94F8954288(), "pickup_object", "pickup_low", 3))
	{
		unk_0x678FDF6C11F8E607(unk_0xC8B93D94F8954288(), "pickup_object", "pickup_low", 0.8f);
		bVar16 = true;
	}
	while ((func_10(&uLocal_293) < 6f && !unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288())) && unk_0x853B39ECA83DA242(unk_0xC8B93D94F8954288(), "pickup_object", "pickup_low") < 0.22f)
	{
		unk_0x1F64302AA4F597A7(unk_0xC8B93D94F8954288(), 177, 1);
		if (!bVar16 && unk_0xCD61E9D5CABC7E35(unk_0xC8B93D94F8954288(), "pickup_object", "pickup_low", 3))
		{
			unk_0x678FDF6C11F8E607(unk_0xC8B93D94F8954288(), "pickup_object", "pickup_low", 0.8f);
			bVar16 = true;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
	{
		if (!bVar16 && unk_0xCD61E9D5CABC7E35(unk_0xC8B93D94F8954288(), "pickup_object", "pickup_low", 3))
		{
			unk_0x678FDF6C11F8E607(unk_0xC8B93D94F8954288(), "pickup_object", "pickup_low", 0.7f);
			bVar16 = true;
		}
		unk_0x1F64302AA4F597A7(unk_0xC8B93D94F8954288(), 177, 1);
	}
	func_9(&uLocal_293);
	func_40();
	if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
	{
		if (func_35() == 0)
		{
			unk_0x8C245572EDB27776(unk_0xC8B93D94F8954288(), 9, 5, 0, 0);
		}
		else if (func_35() == 1)
		{
			unk_0x8C245572EDB27776(unk_0xC8B93D94F8954288(), 8, 1, 0, 0);
		}
		else if (func_35() == 2)
		{
			unk_0x8C245572EDB27776(unk_0xC8B93D94F8954288(), 8, 3, 0, 0);
		}
	}
	if (bParam0)
	{
		if (!func_33(func_34(iLocal_122)) && !unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
		{
			unk_0x5124C5FA52D2AF3E(unk_0xC8B93D94F8954288());
			unk_0x81333BEA4837207C(unk_0xC8B93D94F8954288(), func_34(iLocal_122), 1f, -1, 1048576000, 0, 1193033728);
		}
		if (unk_0x95CCECA3948CFE7B(iLocal_297))
		{
			unk_0xA278ECBE30D8AE4F(&iLocal_297);
		}
		uVar4 = unk_0x785B53D5654A2FFD(26379945, func_32(iLocal_122), func_31(iLocal_122), func_30(iLocal_122), 1, 2);
		uVar5 = unk_0x785B53D5654A2FFD(26379945, func_29(iLocal_122), func_28(iLocal_122), func_27(iLocal_122), 0, 2);
		unk_0x2544549FDE4C3A7E(1, 0, 3000, 1, 0, 0);
		unk_0x9BA0D5D7E2B794FB("HAND_SHAKE", 0.2f);
		func_23(&uVar0);
		while (func_10(&uVar0) < 1.5f)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xB306DBE9AFBD23A6(uVar5, uVar4, func_26(iLocal_122), 1, 1);
		func_21(&uVar0);
		while (func_10(&uVar0) < ((unk_0xBBDA792448DB5A89(func_26(iLocal_122)) / 1000f) + 0.3f))
		{
			if (!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
			{
				unk_0x1F64302AA4F597A7(unk_0xC8B93D94F8954288(), 177, 1);
			}
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	else
	{
		Local_123.f_2 = iLocal_297;
	}
	if (!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
	{
		unk_0x1F64302AA4F597A7(unk_0xC8B93D94F8954288(), 177, 1);
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
	return Global_100976.f_1770.f_539.f_3549;
}

void func_36()
{
	int iVar0;
	
	if (unk_0x95CCECA3948CFE7B(unk_0xC8B93D94F8954288()))
	{
		if (func_39(Global_100976.f_1770.f_539.f_3549) != unk_0x6D5BB810CC209E15(unk_0xC8B93D94F8954288()))
		{
			iVar0 = func_38(unk_0xC8B93D94F8954288());
			if (func_37(iVar0) && (!func_110(14) || Global_99928))
			{
				if (Global_100976.f_1770.f_539.f_3549 != iVar0 && func_37(Global_100976.f_1770.f_539.f_3549))
				{
					Global_100976.f_1770.f_539.f_3550 = Global_100976.f_1770.f_539.f_3549;
				}
				Global_100976.f_1770.f_539.f_3551 = iVar0;
				Global_100976.f_1770.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_100976.f_1770.f_539.f_3549 != 145)
			{
				Global_100976.f_1770.f_539.f_3551 = Global_100976.f_1770.f_539.f_3549;
			}
			return;
		}
	}
	Global_100976.f_1770.f_539.f_3549 = 145;
}

bool func_37(int iParam0)
{
	return iParam0 < 3;
}

int func_38(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x95CCECA3948CFE7B(uParam0))
	{
		iVar1 = unk_0x6D5BB810CC209E15(iParam0);
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
		return Global_100976.f_32519[iParam0 /*29*/];
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
	
	if (unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
	{
		return;
	}
	unk_0x6C1CBBF18B93CB8E(unk_0xA34E7C2A5118D638(), 0, 0);
	if (unk_0x95CCECA3948CFE7B(iLocal_297))
	{
		unk_0xA278ECBE30D8AE4F(&iLocal_297);
	}
	func_48(0, 0, 1);
	iLocal_297 = unk_0xB2AD4914C25D1420(joaat("p_parachute_s"), func_47(iLocal_122), 1, 1, 0);
	unk_0x68931E8B45B3CA92(iLocal_297, func_46(iLocal_122), 2, 1);
	func_41(&Var0, &uVar3);
	Var4 = { 0f, 0f, uVar3 };
	uVar7 = unk_0x0B15BB6DFB729046(Var0, Var4, 2);
	unk_0x16A73DD34A0EE6C3(iLocal_297, uVar7, "puton_parachute_bag", "oddjobs@basejump@ig_15", 1000f, -1000f, 1, 1148846080);
	if (!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
	{
		unk_0x5124C5FA52D2AF3E(unk_0xC8B93D94F8954288());
		unk_0xA5666A46C1079EFE(unk_0xC8B93D94F8954288(), uVar7, "oddjobs@basejump@ig_15", "puton_parachute", 1000f, -1000f, 0, 0, 1148846080, 0);
	}
	unk_0xC4EE38A4CFF7544C(-1, "Grab_Parachute", "BASEJUMPS_SOUNDS", 1);
	uVar8 = unk_0xFE4F2696906F18A3("DEFAULT_ANIMATED_CAMERA", 0);
	unk_0xEC805A65A86B9D68(uVar8, uVar7, "puton_parachute_cam", "oddjobs@basejump@ig_15");
	unk_0x7D1795B1E14EDFFD(uVar8, 1);
	unk_0x2544549FDE4C3A7E(1, 0, 3000, 1, 0, 0);
	while (unk_0x2091E42376999826(uVar7) < 0.6f)
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0x6C1CBBF18B93CB8E(unk_0xA34E7C2A5118D638(), 1, 0);
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
			*uParam1 = func_44(func_61(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), *uParam0), -180f, 180f);
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
			*uParam1 = func_44(func_61(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), *uParam0), -180f, 180f);
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
			*uParam1 = func_44(func_61(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), *uParam0), -180f, 180f);
			break;
		
		case 12:
			*uParam1 = func_44(func_61(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), *uParam0), -180f, 180f);
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
	unk_0x6C1CBBF18B93CB8E(unk_0x1A96BAEAC664567A(), 0, iParam0);
	if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
	{
		unk_0x0184403F1C1A3769(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), 15f);
	}
	unk_0x5B712287C9AB5D4B(iParam1);
	func_59(0);
	func_50(1, 1, iParam2, 0);
	unk_0xB7709513BF7C1AC0(0);
	unk_0xB1DF6C0157E453DE(0);
	func_49(23, 1);
}

void func_49(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x59A0729D503ED758(&Global_25359, iParam0);
	}
	else
	{
		unk_0x77621132305B133B(&Global_25359, iParam0);
	}
}

void func_50(bool bParam0, bool bParam1, var uParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0xD693CD4BF91071EA(unk_0xA34E7C2A5118D638());
		unk_0xBFDE8C755DF4A1ED(unk_0xA34E7C2A5118D638(), 1);
		unk_0x8F9941C14FA3BF97(unk_0xA34E7C2A5118D638(), 1);
		func_58(1);
		unk_0xC0E7FF19962AE47A();
		unk_0x31592941AC9991FE();
		if (Global_14413.f_1 > 3)
		{
			if (unk_0x44E93B894936152F())
			{
				unk_0xB518E9C8553B1D2B(0);
			}
			if (!func_57())
			{
				Global_14413.f_1 = 3;
			}
			Global_15712 = 5;
		}
		func_56(1, iParam3, uParam2, 0);
		Global_55665 = 1;
		Global_67971 = 1;
		Global_69315 = 1;
	}
	else
	{
		func_58(0);
		unk_0x11D0AD0D13C88D1A();
		Global_55665 = 0;
		if (bParam1)
		{
			unk_0x48D86334348F315A();
		}
		unk_0xBFDE8C755DF4A1ED(unk_0xA34E7C2A5118D638(), 0);
		unk_0x8F9941C14FA3BF97(unk_0xA34E7C2A5118D638(), 0);
		func_56(0, iParam3, uParam2, 0);
		if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()) && !func_51(unk_0xA34E7C2A5118D638()))
		{
			unk_0xEE6504C7ECC425AB(unk_0xC8B93D94F8954288(), 0);
		}
		Global_69315 = 0;
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
		if (iParam0 == unk_0xA34E7C2A5118D638())
		{
			return 1;
		}
	}
	if (unk_0xDCC86F723E82125E(Global_2417071[iParam0 /*306*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_52()
{
	return unk_0xDCC86F723E82125E(Global_2359301, 3);
}

bool func_53(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xA34E7C2A5118D638())
	{
		bVar0 = func_54(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1587175[iParam0 /*410*/].f_192 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xDF73DA5E2287C499(iParam0))
		{
			bVar0 = unk_0x07CBE0ED3114C7D8(iParam0) == 8;
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
	if (Global_1315889[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312740[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_55()
{
	return Global_1312746;
}

int func_56(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x68B0A67658F2D9C2())
	{
		if (unk_0x751EF148528839D5() != iParam0 && uParam2)
		{
			unk_0xE3A1C9182C52F4F2(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_57()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_58(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x59A0729D503ED758(&Global_2283, 13);
	}
	else
	{
		unk_0x77621132305B133B(&Global_2283, 13);
	}
}

void func_59(int iParam0)
{
	if (Global_14571)
	{
		func_60(0, 0);
	}
	if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
	{
		unk_0x59A0729D503ED758(&Global_2284, 16);
	}
	if (unk_0x44E93B894936152F())
	{
		unk_0xB518E9C8553B1D2B(0);
	}
	Global_15712 = 5;
	if (iParam0 == 1)
	{
		unk_0x59A0729D503ED758(&Global_2283, 30);
	}
	else
	{
		unk_0x77621132305B133B(&Global_2283, 30);
	}
	if (!func_57())
	{
		Global_14413.f_1 = 3;
	}
}

void func_60(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_89(0))
		{
			Global_14571 = 1;
			if (bParam1)
			{
				unk_0xCE4D902766AE0E55(&Global_14350);
			}
			Global_14341 = { Global_14359[Global_14358 /*3*/] };
			unk_0xDA89C6AF8C0D7C39(Global_14341);
		}
	}
	else if (Global_14571 == 1)
	{
		Global_14571 = 0;
		Global_14341 = { Global_14366[Global_14358 /*3*/] };
		if (bParam1)
		{
			unk_0xDA89C6AF8C0D7C39(Global_14350);
		}
		else
		{
			unk_0xDA89C6AF8C0D7C39(Global_14341);
		}
	}
}

float func_61(struct<2> Param0, Vector3 vParam2, struct<2> Param3, Vector3 vParam5)
{
	return unk_0x949D03817D2A6977((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

void func_62(bool bParam0)
{
	if (bParam0)
	{
		func_63();
		if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
		{
			unk_0x59A0729D503ED758(&Global_2284, 16);
		}
		Global_14413.f_1 = 1;
		if (func_89(0))
		{
			func_59(0);
		}
	}
	else if (Global_14413.f_1 == 1)
	{
		if (!Global_14413.f_1 == 0)
		{
			Global_14413.f_1 = 3;
		}
	}
}

void func_63()
{
	if (Global_14413.f_1 == 9 || Global_14413.f_1 == 10)
	{
		Global_15765 = 0;
		Global_15761 = 1;
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
	if (!unk_0x95CCECA3948CFE7B(iParam0))
	{
		return;
	}
	iVar0 = func_75(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_36553[iVar0 /*5*/];
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
	if (!Global_36527[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_36527[iParam0 /*5*/].f_1 == unk_0xC8B93D94F8954288())
		{
			Global_36748 = 0;
		}
	}
	Global_36527[iParam0 /*5*/] = 13;
	Global_36527[iParam0 /*5*/].f_1 = 0;
	Global_36527[iParam0 /*5*/].f_2 = 0;
	Global_36527[iParam0 /*5*/].f_3 = 0;
	Global_36527[iParam0 /*5*/].f_4 = 0;
	Global_36526 = (Global_36526 - 1);
	if (Global_36526 < 0)
	{
		Global_36526 = 0;
	}
}

int func_69(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_36527[iVar0 /*5*/].f_1 == iParam0)
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
	Global_36634[iVar0 /*5*/] = iParam0;
	Global_36634[iVar0 /*5*/].f_1 = iParam1;
	Global_36634[iVar0 /*5*/].f_2 = iParam2;
	Global_36634[iVar0 /*5*/].f_3 = iParam3;
	Global_36634[iVar0 /*5*/].f_4 = iParam4;
}

int func_72()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36634[iVar0 /*5*/].f_2 == 6)
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
		if (iParam2 == Global_36634[iVar0 /*5*/].f_2)
		{
			if (iParam0 == Global_36634[iVar0 /*5*/])
			{
				if (iParam1 == Global_36634[iVar0 /*5*/].f_1)
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
		if (!Global_36553[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_36553[iVar0 /*5*/].f_1)
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
	if (Global_3088[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3088[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3088[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3088[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3088[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3088[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	unk_0x77621132305B133B(&Global_2283, 25);
	unk_0x59A0729D503ED758(&Global_2284, 11);
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
		if (Global_88917.f_44 == 1)
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
		Global_35664++;
		*iParam0 = Global_35664;
		unk_0x9B5503F5CD2CEB12(unk_0x1A96BAEAC664567A(), 0);
		Global_17118.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0xBD11A7205F364E1A(8);
		}
		Global_35700 = iParam2;
		Global_35662 = *iParam0;
		Global_35663 = iParam4;
		Global_35661 = 0;
		return 1;
	}
	if (*iParam0 != -1)
	{
		if (Global_35661 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35661)
			{
				if (Global_35667[iVar0 /*4*/] == *iParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35662 == *iParam0)
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
		if (Global_35661 == 8)
		{
			return 0;
		}
		Global_35664++;
		*iParam0 = Global_35664;
		Global_35667[Global_35661 /*4*/] = Global_35664;
		Global_35667[Global_35661 /*4*/].f_1 = iParam1;
		Global_35667[Global_35661 /*4*/].f_2 = iParam2;
		Global_35667[Global_35661 /*4*/].f_3 = 0;
		Global_35661++;
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
	
	if (Global_35661 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35661)
	{
		if (Global_35667[iVar0 /*4*/] == *uParam0)
		{
			Global_35667[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

int func_79(int iParam0)
{
	if (Global_35700 == 15)
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
	switch (iLocal_122)
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
	var uVar0;
	struct<3> Var1;
	
	uVar0 = unk_0x974516F979AD07BC();
	if (unk_0x95CCECA3948CFE7B(uVar0))
	{
		Local_123.f_1 = iVar0;
	}
	if (unk_0x95CCECA3948CFE7B(iLocal_297))
	{
		Var1 = { unk_0x44C17CCB85A88A1F(iLocal_297, 1) };
		if (unk_0xB7A628320EFF8E47(Var1, Local_90) > 25f)
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
	iLocal_106 = iParam0;
	iLocal_104 = 0;
	iLocal_95 = 7;
}

int func_83(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_84(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x06972B20E75CBE06(unk_0x1A96BAEAC664567A()))
	{
		return 0;
	}
	if (func_89(0))
	{
		return 0;
	}
	if (unk_0x308528B5CF35F306())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36400[iVar0 /*19*/] == 1 && Global_36400[iVar0 /*19*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_36400[iVar0 /*19*/].f_17)
				{
					return 0;
				}
			}
			Global_36400[iVar0 /*19*/].f_5 = 1;
			Global_36400[iVar0 /*19*/].f_17 = 1;
			return 1;
		}
		else
		{
			if (Global_36400[iVar0 /*19*/] == 0)
			{
			}
			if (Global_36400[iVar0 /*19*/].f_7)
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
		if (Global_36400[iVar0 /*19*/].f_1 == iParam0)
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
		if (Global_36400[iVar0 /*19*/])
		{
			Global_36400[iVar0 /*19*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

void func_86(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5)
{
	int iVar0;
	
	if (unk_0xCBC8FFE55DC722B5(joaat("context_controller")) < 1)
	{
	}
	if (unk_0xA8D4B6BDCF6DE72B())
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
		if (!Global_36400[iVar0 /*19*/])
		{
			Global_36400[iVar0 /*19*/] = 1;
			Global_36400[iVar0 /*19*/].f_1 = Global_36523;
			Global_36523++;
			Global_36400[iVar0 /*19*/].f_4 = 0;
			Global_36400[iVar0 /*19*/].f_17 = 0;
			Global_36400[iVar0 /*19*/].f_5 = 0;
			Global_36400[iVar0 /*19*/].f_2 = iParam1;
			StringCopy(&(Global_36400[iVar0 /*19*/].f_8), sParam2, 16);
			Global_36400[iVar0 /*19*/].f_6 = iParam3;
			Global_36400[iVar0 /*19*/].f_18 = unk_0x46CF50E0E5A24635();
			Global_36400[iVar0 /*19*/].f_7 = 0;
			Global_36400[iVar0 /*19*/].f_3 = iParam5;
			if (!unk_0xB8A06E7E729EED0A(sParam4))
			{
				Global_36400[iVar0 /*19*/].f_12 = 1;
				StringCopy(&(Global_36400[iVar0 /*19*/].f_13), sParam4, 16);
			}
			else
			{
				Global_36400[iVar0 /*19*/].f_12 = 0;
			}
			*iParam0 = Global_36400[iVar0 /*19*/].f_1;
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
	return Global_67968;
}

int func_89(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (unk_0xDCC86F723E82125E(Global_2283, 14))
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
	if (unk_0xCBC8FFE55DC722B5(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14413.f_1 > 3)
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
				return Global_1338611.f_203[iParam1];
			}
			break;
	}
	return unk_0xDCC86F723E82125E(Global_1338611.f_949, iParam0);
}

bool func_91()
{
	return unk_0x693EBB4F13506457() <= Global_17257.f_5745 + 100;
}

int func_92()
{
	if (unk_0xCBC8FFE55DC722B5(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_93(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17118.f_4 && Global_17118.f_104 == 4);
	}
	return Global_17118.f_4;
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
	
	if (unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
	{
		return 0;
	}
	unk_0xA51F11E1DC7307BB(unk_0xC8B93D94F8954288(), &iVar0, 1);
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
	if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
	{
		return ((((bVar1 && unk_0x0139E142C27412BC(0, 69)) || (bVar1 && unk_0x0139E142C27412BC(0, 70))) || (bVar1 && unk_0x0139E142C27412BC(0, 68))) || unk_0x58474B48103C2968(unk_0xA34E7C2A5118D638()));
	}
	return (((((bVar1 && unk_0x0139E142C27412BC(0, 24)) || (bVar1 && unk_0x0139E142C27412BC(0, 25))) || (bVar1 && unk_0x0139E142C27412BC(0, 47))) || unk_0x847105880A2F5991(unk_0xC8B93D94F8954288())) || unk_0x58474B48103C2968(unk_0xA34E7C2A5118D638()));
}

int func_98(int iParam0)
{
	int iVar0;
	
	if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
	{
		if (unk_0x95CCECA3948CFE7B(unk_0xC8B93D94F8954288()))
		{
			if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
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
						if (((((((((((((((((!unk_0x56546FAE2D5E944B(unk_0xA34E7C2A5118D638()) || unk_0x25011B7D08ACD328(unk_0xC8B93D94F8954288())) || unk_0xC0AE63CA97F3FF6A(unk_0xC8B93D94F8954288())) || unk_0x770AAB67BDD9C729(unk_0xC8B93D94F8954288())) || unk_0xC1D9AF0588D03376(unk_0xC8B93D94F8954288())) || unk_0x01928D5922397075(unk_0xA34E7C2A5118D638(), 1)) || unk_0x629B1FD22BE568E4(unk_0xA34E7C2A5118D638())) || unk_0xA81F17D63315B662(unk_0xC8B93D94F8954288(), 0)) || func_105()) || Global_100023) || Global_25117) || func_104()) || func_90(8, -1)) || func_103()) || func_102()) || func_101()) || func_92()) || Global_100976.f_6322.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x01928D5922397075(unk_0xA34E7C2A5118D638(), 1) || func_105()) || Global_25117) || func_104()) || func_90(8, -1)) || func_101()) || func_103()) || func_102()) || func_92()) || Global_100976.f_6322.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x56546FAE2D5E944B(unk_0xA34E7C2A5118D638()) || unk_0x25011B7D08ACD328(unk_0xC8B93D94F8954288())) || unk_0xC0AE63CA97F3FF6A(unk_0xC8B93D94F8954288())) || unk_0x770AAB67BDD9C729(unk_0xC8B93D94F8954288())) || unk_0xC1D9AF0588D03376(unk_0xC8B93D94F8954288())) || unk_0x01928D5922397075(unk_0xA34E7C2A5118D638(), 1)) || unk_0x629B1FD22BE568E4(unk_0xA34E7C2A5118D638())) || unk_0xA81F17D63315B662(unk_0xC8B93D94F8954288(), 0)) || func_105()) || Global_100023) || Global_25117) || func_104()) || func_90(8, -1)) || func_101()) || func_103()) || func_102()) || func_92()) || Global_100976.f_6322.f_919[iVar0] == 5) || Global_36247 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x770AAB67BDD9C729(unk_0xC8B93D94F8954288()) || unk_0xC1D9AF0588D03376(unk_0xC8B93D94F8954288())) || unk_0x01928D5922397075(unk_0xA34E7C2A5118D638(), 1)) || unk_0xA81F17D63315B662(unk_0xC8B93D94F8954288(), 0)) || func_105()) || Global_100023) || Global_25117) || func_104()) || func_90(8, -1)) || func_103()) || func_102()) || func_92()) || Global_100976.f_6322.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_105() || unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638()) > 0) || func_90(8, -1)) || func_92()) || func_100()) || Global_100976.f_6322.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_90(8, -1) || func_103()) || func_102()) || func_100()) || func_99())
						{
							return 0;
						}
						if ((unk_0xA8D4B6BDCF6DE72B() && unk_0xF7531C8E64EC584A() != 3) && unk_0xC8DAE7AE33B529B0() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x95CCECA3948CFE7B(unk_0xC8B93D94F8954288()))
						{
							if ((((((((((((((unk_0xA81F17D63315B662(unk_0xC8B93D94F8954288(), 0) || unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638()) > 0) || unk_0x25011B7D08ACD328(unk_0xC8B93D94F8954288())) || unk_0x770AAB67BDD9C729(unk_0xC8B93D94F8954288())) || unk_0xC1D9AF0588D03376(unk_0xC8B93D94F8954288())) || unk_0x01928D5922397075(unk_0xA34E7C2A5118D638(), 1)) || unk_0x629B1FD22BE568E4(unk_0xA34E7C2A5118D638())) || func_105()) || Global_25117) || func_104()) || func_90(8, -1)) || func_102()) || func_101()) || func_92()) || Global_100976.f_6322.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0xA81F17D63315B662(unk_0xC8B93D94F8954288(), 0) || !unk_0x0332C5816E3E66D5(unk_0xA34E7C2A5118D638())) || !unk_0x56546FAE2D5E944B(unk_0xA34E7C2A5118D638())) || !unk_0xB66DD474AA9E764E()) || unk_0x25011B7D08ACD328(unk_0xC8B93D94F8954288())) || unk_0x770AAB67BDD9C729(unk_0xC8B93D94F8954288())) || unk_0xC1D9AF0588D03376(unk_0xC8B93D94F8954288())) || unk_0x01928D5922397075(unk_0xA34E7C2A5118D638(), 1)) || func_105()) || func_102()) || Global_100023) || Global_25117) || func_104()) || Global_36750) || func_90(8, -1)) || func_101()) || func_100()) || func_92()) || Global_100976.f_6322.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0xA81F17D63315B662(unk_0xC8B93D94F8954288(), 0) || !unk_0x0332C5816E3E66D5(unk_0xA34E7C2A5118D638())) || !unk_0x56546FAE2D5E944B(unk_0xA34E7C2A5118D638())) || !unk_0xB66DD474AA9E764E()) || unk_0x719D80C8C2BB7B0A(unk_0xA34E7C2A5118D638(), 0)) || unk_0x25011B7D08ACD328(unk_0xC8B93D94F8954288())) || unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 1)) || unk_0x770AAB67BDD9C729(unk_0xC8B93D94F8954288())) || unk_0xC1D9AF0588D03376(unk_0xC8B93D94F8954288())) || unk_0xF334DA4D1F348F5D(unk_0xC8B93D94F8954288())) || unk_0x01928D5922397075(unk_0xA34E7C2A5118D638(), 1)) || unk_0x629B1FD22BE568E4(unk_0xA34E7C2A5118D638())) || func_105()) || Global_100023) || Global_25117) || func_104()) || func_90(8, -1)) || func_101()) || func_100()) || func_103()) || func_102()) || func_92())
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
	return Global_91145.f_1;
}

int func_100()
{
	if (Global_88361 != -1)
	{
		return unk_0xDCC86F723E82125E(Global_82227[Global_88361 /*34*/].f_15, 13);
	}
	return 0;
}

int func_101()
{
	if (Global_69577)
	{
		return 1;
	}
	else if (Global_55653 && !Global_55659)
	{
		return 1;
	}
	return 0;
}

bool func_102()
{
	return Global_91158.f_297 > 0;
}

bool func_103()
{
	return Global_91158.f_296 > 0;
}

var func_104()
{
	return Global_1315911;
}

int func_105()
{
	if (!unk_0xBBAE3E0C60A8AD4B())
	{
		return Global_88917.f_44 == 1;
	}
	return 0;
}

int func_106()
{
	if (unk_0xCBC8FFE55DC722B5(joaat("stripperhome")) > 0)
	{
		return 1;
	}
	return 0;
}

var func_107()
{
	return Global_87271;
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

bool func_109(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	return unk_0x6B4865E08E90ACC5(Global_25424[iVar0 /*23*/].f_19);
}

bool func_110(int iParam0)
{
	return Global_35700 == iParam0;
}

void func_111(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_112()
{
	struct<3> Var0;
	
	if (bLocal_296)
	{
		switch (iLocal_122)
		{
			case 4:
			case 5:
			case 8:
				iLocal_297 = unk_0xB2AD4914C25D1420(joaat("p_parachute_s"), func_47(iLocal_122), 1, 1, 0);
				unk_0x68931E8B45B3CA92(iLocal_297, func_46(iLocal_122), 2, 1);
				unk_0xB7A2078CD1C9A82F(iLocal_297, 1);
				break;
			
			case 6:
			case 12:
				iLocal_297 = unk_0xB2AD4914C25D1420(joaat("p_parachute_s"), func_47(iLocal_122), 1, 1, 0);
				unk_0x68931E8B45B3CA92(iLocal_297, func_46(iLocal_122), 2, 1);
				unk_0xA173449907A81726(iLocal_297);
				Var0 = { func_114(iLocal_122) };
				if (!func_33(Var0))
				{
					uLocal_298 = unk_0xD53B4DCC7B2C8551(joaat("bati"), Var0, func_113(iLocal_122), 1, 1);
					uLocal_298 = uLocal_298;
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
	switch (iLocal_122)
	{
		case 5:
		case 4:
		case 8:
		case 6:
			return (((unk_0xF9B86DC1728F1339("pickup_object") && unk_0xF9B86DC1728F1339("oddjobs@basejump@ig_15")) && func_116(&uLocal_118)) && func_116(&uLocal_120));
			break;
		
		case 12:
			return ((unk_0xF9B86DC1728F1339("pickup_object") && unk_0xF9B86DC1728F1339("oddjobs@basejump@ig_15")) && func_116(&uLocal_118));
			break;
		
		default:
			break;
	}
	return (func_116(&uLocal_118) && func_116(&uLocal_120));
}

int func_116(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if (!unk_0x0845149A26DABBA5((*uParam0)[iVar0]))
			{
				if (!unk_0x0845149A26DABBA5((*uParam0)[iVar0]))
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
	switch (iLocal_122)
	{
		case 5:
		case 8:
			func_119(&uLocal_118, joaat("p_parachute_s"));
			unk_0xC0E8B67A4385D37D("pickup_object");
			unk_0xC0E8B67A4385D37D("oddjobs@basejump@ig_15");
			break;
		
		case 4:
		case 6:
			func_119(&uLocal_118, joaat("p_parachute_s"));
			func_119(&uLocal_120, joaat("bati"));
			unk_0xC0E8B67A4385D37D("pickup_object");
			unk_0xC0E8B67A4385D37D("oddjobs@basejump@ig_15");
			break;
		
		case 12:
			func_119(&uLocal_118, joaat("p_parachute_s"));
			unk_0xC0E8B67A4385D37D("pickup_object");
			unk_0xC0E8B67A4385D37D("oddjobs@basejump@ig_15");
			break;
		
		default:
			break;
	}
	func_118(&uLocal_118);
	func_118(&uLocal_120);
}

void func_118(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			unk_0x7567CEA8E6B5340B((*uParam0)[iVar0]);
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
	iLocal_95 = iParam0;
}

void func_122(int iParam0, bool bParam1, bool bParam2)
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
		iVar1 = unk_0xDCC86F723E82125E(Global_25424[iVar0 /*23*/].f_11, 15);
		if (iVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != unk_0xDCC86F723E82125E(Global_25424[iVar0 /*23*/].f_11, 0))
	{
		unk_0x59A0729D503ED758(&(Global_25424[iVar0 /*23*/].f_11), 18);
		if (Global_25421 == 1)
		{
			Global_25422 = 1;
		}
		Global_25421 = 1;
	}
	if (bParam1)
	{
		unk_0x59A0729D503ED758(&(Global_25424[iVar0 /*23*/].f_11), 0);
		unk_0x59A0729D503ED758(&(Global_25424[iVar0 /*23*/].f_11), 15);
		unk_0x59A0729D503ED758(&(Global_25424[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		unk_0x77621132305B133B(&(Global_25424[iVar0 /*23*/].f_11), 0);
		unk_0x77621132305B133B(&(Global_25424[iVar0 /*23*/].f_11), 15);
	}
	if (!unk_0xDCC86F723E82125E(Global_25424[iVar0 /*23*/].f_11, 0))
	{
		if (unk_0x6B4865E08E90ACC5(Global_25424[iVar0 /*23*/].f_19))
		{
			unk_0x8F5BCDB4D8191665(1);
			unk_0x5356E82C1E5E0C44(&(Global_25424[iVar0 /*23*/].f_19));
			unk_0x8F5BCDB4D8191665(0);
		}
	}
}

int func_123()
{
	if (unk_0x68B0A67658F2D9C2())
	{
		if (unk_0x9EAC4A2F633474B9() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_124()
{
	if (Global_88361 != -1)
	{
		return unk_0xDCC86F723E82125E(Global_82227[Global_88361 /*34*/].f_15, 20);
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
	bVar0 = unk_0xDCC86F723E82125E(Global_100976.f_7719.f_99.f_219[iParam0], iParam1);
	return bVar0;
}

bool func_126(int iParam0)
{
	return func_127(iParam0, Global_35700);
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
	if (unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
	{
		func_94(&uLocal_94, 8388608);
		return;
	}
	StringCopy(&Local_53, "bj", 64);
	iLocal_122 = func_133(Local_90, 0);
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
		if (func_132(19))
		{
			func_131(iLocal_105);
		}
	}
	func_94(&uLocal_94, 4194304);
	iLocal_99 = 0;
	fLocal_102 = (unk_0xBBDA792448DB5A89(func_130(iLocal_105)) + 5f);
	fLocal_117 = 1.1f;
	sLocal_101 = "PLAY_BASEJUMP_G";
	if (iLocal_105 != 263)
	{
		if (!func_125(0, iLocal_99))
		{
			bLocal_296 = false;
			func_131(iLocal_105);
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
	if (unk_0xCBC8FFE55DC722B5(joaat("bj")) > 0)
	{
		func_94(&uLocal_94, 8);
	}
	else
	{
		func_135(&uLocal_94, 8);
	}
	if (func_110(12))
	{
		func_94(&uLocal_94, 8);
	}
	iLocal_97 = 18000;
}

int func_130(int iParam0)
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

void func_131(int iParam0)
{
	if (iLocal_95 < 5)
	{
		if (iParam0 != 263)
		{
			if (iParam0 < 0 || iParam0 >= 263)
			{
			}
			func_122(iParam0, 0, 0);
		}
		iLocal_105 = 263;
		func_85(&iLocal_96);
		iLocal_95 = 9;
	}
}

bool func_132(int iParam0)
{
	return Global_100063[iParam0 /*10*/].f_1;
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
		if (iLocal_105 != 263)
		{
			func_122(iLocal_105, 0, 0);
		}
	}
	func_85(&iLocal_96);
	if (func_128(uLocal_94, 2))
	{
		func_5();
		func_135(&uLocal_94, 2);
		func_7(&iLocal_98);
	}
	iLocal_98 = -1;
	func_138();
	unk_0xA4E0D8FD51F2A6F7();
}

void func_138()
{
	func_135(&uLocal_94, 4);
	func_139();
	if (unk_0xC2DCA35AE2EC9DC4(uLocal_52))
	{
		unk_0x5CE8C710AA20E6D0(uLocal_52, 3);
	}
	if (!unk_0x544AEDB4A15228FF(&Local_69))
	{
		if (unk_0x71F27A2B1B0287CD(&Local_69) != 0)
		{
			unk_0x996557D48454AE40(&Local_69);
		}
	}
}

void func_139()
{
}

