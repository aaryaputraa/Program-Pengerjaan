#include <iostream>
#include <queue>

using namespace std;

const int NUM_PLAYLISTS = 7;

// Fungsi untuk menampilkan isi playlist
void displayPlaylist(queue<string> playlist) {
    if (playlist.empty()) {
        cout << "Playlist kosong." << endl;
        return;
    }

    cout << "Playlist Anda:" << endl/**<  */;
    int index = 1;
    while (!playlist.empty()) {
        cout << index << ". " << playlist.front() << endl;
        playlist.pop();
        index++;
    }
}

int main() {
    // Array untuk menyimpan 7 playlist
    queue<string> playlists[NUM_PLAYLISTS];

    int choice, playlistIndex;

    do {
        // Menu
        cout << "\nMenu Playlist Musik:\n";
        cout << "1. Tambah Lagu\n";
        cout << "2. Hapus Lagu\n";
        cout << "3. Tampilkan Playlist\n";
        cout << "0. Keluar\n";
        cout << "Pilih menu (0-3): ";
        cin >> choice;

        switch (choice) {
            case 1:
                {
                    cout << "Pilih nomor playlist (1-7): ";
                    cin >> playlistIndex;

                    if (playlistIndex >= 1 && playlistIndex <= NUM_PLAYLISTS) {
                        string song;
                        cout << "Masukkan judul lagu: ";
                        cin.ignore(); // Untuk membersihkan newline di buffer
                        getline(cin, song);
                        playlists[playlistIndex - 1].push(song);
                        cout << "Lagu ditambahkan ke playlist " << playlistIndex << "." << endl;
                    } else {
                        cout << "Nomor playlist tidak valid. Harap pilih nomor antara 1 dan " << NUM_PLAYLISTS << "." << endl;
                    }
                }
                break;
            case 2:
                cout << "Pilih nomor playlist (1-7): ";
                cin >> playlistIndex;

                if (playlistIndex >= 1 && playlistIndex <= NUM_PLAYLISTS) {
                    if (!playlists[playlistIndex - 1].empty()) {
                        cout << "Lagu " << playlists[playlistIndex - 1].front() << " dihapus dari playlist " << playlistIndex << "." << endl;
                        playlists[playlistIndex - 1].pop();
                    } else {
                        cout << "Playlist " << playlistIndex << " kosong. Tidak ada lagu untuk dihapus." << endl;
                    }
                } else {
                    cout << "Nomor playlist tidak valid. Harap pilih nomor antara 1 dan " << NUM_PLAYLISTS << "." << endl;
                }
                break;
            case 3:
                cout << "Pilih nomor playlist (1-7): ";
                cin >> playlistIndex;

                if (playlistIndex >= 1 && playlistIndex <= NUM_PLAYLISTS) {
                    displayPlaylist(playlists[playlistIndex - 1]);
                } else {
                    cout << "Nomor playlist tidak valid. Harap pilih nomor antara 1 dan " << NUM_PLAYLISTS << "." << endl;
                }
                break;
            case 0:
                cout << "Keluar dari program." << endl;
                break;
            default:
                cout << "Pilihan tidak valid. Silakan pilih menu yang sesuai." << endl;
        }

    } while (choice != 0);

    return 0;
}
