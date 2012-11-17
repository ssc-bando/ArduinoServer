#ifndef __STORAGE_ACCESS_H__
#define __STORAGE_ACCESS_H__

class DataInfo
{
    protected:
        bool dirFlg;
    public:
        char* path;

        /**
         * コンストラクタ
         * pathの設定
         */
        DataInfo(char* path);

        ~DataInfo();

        /**
         * ディレクトリかそうでないかを判定
         * @return true : ディレクトリ
         *         false: ファイル
         */
        bool isDirectory();

        virtual int read() = 0;
};

class FileInfo : public DataInfo
{
    public:
        int size;
        void* data;

        FileInfo(char *path);
        ~FileInfo();

        /**
         * ファイルの読み込み
         * dataにファイルを読み込み、
         * sizeにサイズを格納する
         */
        int read();
};

class DirInfo : public DataInfo
{
    private:
        int addData(DataInfo *newData);

    public:
        int dataCnt;
        DataInfo** list;

        DirInfo(char* path);
        ~DirInfo();

        /**
         * ディレクトリの読み込み
         * DataInfo* にDataInfoのリストを格納する
         * dataCntにリストの数を格納する
         */
        int read();
};

#endif // __STORAGE_ACCESS_H__
